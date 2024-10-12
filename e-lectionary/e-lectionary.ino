#include <WiFi.h>
#include <esp_sleep.h>
#include <stdlib.h>
#include "RTClib.h"
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "data_indexed.h"
#include "reading_index.h"


RTC_DATA_ATTR int boot_count = 0;
RTC_DATA_ATTR int screen_generated = 0;

const PROGMEM int EPD_WIDTH = EPD_4IN2_WIDTH;
const PROGMEM int EPD_HEIGHT = EPD_4IN2_HEIGHT;
const PROGMEM char *WIFI_SSID = "";
const PROGMEM char *WIFI_PW = "";
const PROGMEM char *NTP_SERVER = "pool.ntp.org";
const PROGMEM long GMT_OFFSET_SEC = -6 * 3600;  // timezone * 3600 (seconds in an hour); CST = -6
const PROGMEM int DAYLIGHT_OFFSET_SEC = 3600;
const PROGMEM String NOT_FOUND = "Not found";
const PROGMEM String DATE_PREFIX = "Date: ";

String formatted_date;  // to store date in "December 5th, 2024" format (to show on display)
String current_date;    // to store date in "2024-01-01" format (to compare with data.h)
String row1 = "";       // showing rows on display
String row2 = "";
String row3 = "";
String monthNames[] = { F("January"), F("February"), F("March"), F("April"), F("May"), F("June"),
                        F("July"), F("August"), F("September"), F("October"), F("November"), F("December") };
String dayNames[] = { F("1st"), F("2nd"), F("3rd"), F("4th"), F("5th"), F("6th"), F("7th"), F("8th"), F("9th"), F("10th"),
                      F("11th"), F("12th"), F("13th"), F("14th"), F("15th"), F("16th"), F("17th"), F("18th"), F("19th"), F("20th"),
                      F("21st"), F("22nd"), F("23rd"), F("24th"), F("25th"), F("26th"), F("27th"), F("28th"), F("29th"), F("30th"),
                      F("31st") };

RTC_DS3231 rtc;
UBYTE *BlackImage;

// Is ran after waking up from a deep sleep
void RTC_IRAM_ATTR esp_wake_deep_sleep() {
  esp_default_wake_deep_sleep();
  boot_count++;
}

void setup() {
  Serial.begin(115200);

  // Initialize the RTC
  if (!rtc.begin()) {
    while (1)
      delay(10);
  }

  setCurrentTime();

  DateTime time = rtc.now();
  int hour_diff = 23 - time.hour();
  int min_diff = 59 - time.minute();
  int sec_diff = 59 - time.second();
  Serial.println(hour_diff);
  Serial.println(min_diff);
  Serial.println(sec_diff);
  uint64_t time_to_sleep = ((uint64_t)((hour_diff * 3600) + (min_diff * 60) + sec_diff)) * ((uint64_t)1000000);  // This number is in seconds until 12am the next day

  // If the date hasn't generated, or we are in the wee-early
  // hours of the morning (12am), generate the verses
  if (hour_diff == 23 && min_diff == 59 || screen_generated == 0) {

    DEV_Module_Init();
    EPD_4IN2_V2_Init();
    EPD_4IN2_V2_Clear();
    DEV_Delay_ms(500);

    /* -- Current Date in format "December 5th, 2024" -- */
    char format_1[50];
    snprintf(format_1, sizeof(format_1), "%s %s, %d", monthNames[time.month() - 1].c_str(), dayNames[time.day() - 1].c_str(), time.year());
    formatted_date = format_1;
    Serial.print(DATE_PREFIX);
    Serial.println(formatted_date);
    /* ------------------------------------------------- */

    /* -- Current Date in format "20240101" -- */
    char format_2[50];
    String cur_day;
    String cur_mon;
    if (time.day() < 10) {
      cur_day = "0" + String(time.day());
    } else {
      cur_day = String(time.day());
    }

    if (time.month() < 10) {
      cur_mon = "0" + String(time.month());
    } else {
      cur_mon = String(time.month());
    }

    snprintf(format_2, sizeof(format_2), "%d%s%s", time.year(), cur_mon, cur_day);
    current_date = format_2;
    Serial.print(DATE_PREFIX);
    Serial.println(current_date);
    processYearData(dataIndexed, sizeof(dataIndexed) / sizeof(dataIndexed[0]), readingsIndex, current_date);
    /* ------------------------------------------------- */

    displayDate();

    screen_generated = 1;

    Serial.println("boot_count");
    Serial.println(boot_count);

    esp_deep_sleep(time_to_sleep);  // enter deep sleep until 12am the next day
  } else {

    // In the case something errors out, let's log it
    Serial.println("error");

    esp_deep_sleep(time_to_sleep);  // enter deep sleep until 12am the next day
  }
}

void loop() {
}

// Attempt to connect to wifi and set the current time
void setCurrentTime() {
  int tries = 5;

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PW);

  while (WiFi.status() != WL_CONNECTED && tries > 0) {
    delay(1000);
    tries = tries - 1;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println(F("Connected to wifi"));

    configTime(GMT_OFFSET_SEC, DAYLIGHT_OFFSET_SEC, NTP_SERVER);

    struct tm timeinfo;
    if (!getLocalTime(&timeinfo)) {

      // Failed to get the time;
      // use the date the code was compiled as the time in the RTC
      Serial.println(F("Using the compiled time as the date"));

      rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

      // Disconnect the wifi
      WiFi.disconnect(true);
      WiFi.mode(WIFI_OFF);

      return;
    }

    Serial.println(F("Getting the date from the NTP"));

    // rtc.adjust(DateTime(2070, 12, 16, 3, 0, 0));
    rtc.adjust(DateTime(1900 + timeinfo.tm_year, 1 + timeinfo.tm_mon, timeinfo.tm_mday, timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_sec));

    // Disconnect the wifi
    WiFi.disconnect(true);
    WiFi.mode(WIFI_OFF);
  } else {
    Serial.println(F("Using the compiled time as the date"));

    // Use the date the code was compiled as the time in the RTC
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

/* -- Function to display Formatted date and rows on Display -- */
void displayDate() {
  // Allocate memory for image buffer
  UWORD imageSize = ((EPD_WIDTH % 8 == 0) ? (EPD_WIDTH / 8) : (EPD_WIDTH / 8 + 1)) * EPD_HEIGHT;
  BlackImage = (UBYTE *)malloc(imageSize);
  if (BlackImage == NULL) {
    Serial.println("Failed to allocate memory for BlackImage");
    return;
  }

  Paint_NewImage(BlackImage, EPD_WIDTH, EPD_HEIGHT, 0, WHITE);
  Paint_SelectImage(BlackImage);
  Paint_Clear(WHITE);

  int xStartDate = getXForCenteredText(formatted_date.c_str(), EPD_WIDTH, 17);

  // If any of the readings are > 28 characters, we need to shrink the
  // font so the reading all stays on one line
  int versePx = 14;
  if (strlen(row1.c_str()) > 28 || strlen(row2.c_str()) > 28 || strlen(row3.c_str()) > 28) {
    versePx = 11;
  }

  int xStartRow1 = getXForCenteredText(row1.c_str(), EPD_WIDTH, versePx);
  int xStartRow2 = getXForCenteredText(row2.c_str(), EPD_WIDTH, versePx);
  int xStartRow3 = getXForCenteredText(row3.c_str(), EPD_WIDTH, versePx);

  Paint_DrawString_EN(xStartDate, 25, formatted_date.c_str(), &Font24, WHITE, BLACK);

  if (versePx == 14) {
    Paint_DrawString_EN(xStartRow1, 105, row1.c_str(), &Font20, WHITE, BLACK);
    Paint_DrawString_EN(xStartRow2, 135, row2.c_str(), &Font20, WHITE, BLACK);
    Paint_DrawString_EN(xStartRow3, 165, row3.c_str(), &Font20, WHITE, BLACK);
  } else if (versePx == 11) {
    Paint_DrawString_EN(xStartRow1, 105, row1.c_str(), &Font16, WHITE, BLACK);
    Paint_DrawString_EN(xStartRow2, 135, row2.c_str(), &Font16, WHITE, BLACK);
    Paint_DrawString_EN(xStartRow3, 165, row3.c_str(), &Font16, WHITE, BLACK);
  }

  EPD_4IN2_V2_Display(BlackImage);
  free(BlackImage);
  BlackImage = NULL;
}

// Get the x-value that the given string should render at if desiring centered-text.
int getXForCenteredText(const char *s, int screenWidth, int fontSizeInPX) {
  return (screenWidth - (fontSizeInPX * strlen(s))) / 2;
}

/* -- if current date is found in data.h extract its data in rows -- */
String extractField(const String &line, int index) {
  int startIndex = 0;
  int endIndex = line.indexOf('&');

  for (int i = 0; i < index; i++) {
    if (endIndex == -1)
      return "";
    startIndex = endIndex + 1;
    endIndex = line.indexOf('&', startIndex);
  }

  if (endIndex == -1)
    endIndex = line.length();

  return line.substring(startIndex, endIndex);
}

/* -- check if current date exists in data.h file -- */
void processYearData(const char *dataIndexed[], int dataSize, const char *readingsIndex[], String date) {
  for (int i = 0; i < dataSize; i++) {
    String line(dataIndexed[i]);
    // Serial.println(line);

    String idx = extractField(line, 0);

    if (idx == date) {
      Serial.print("Extracted date: ");
      Serial.println(idx);

      String eRow1 = extractField(line, 1);
      String eRow2 = extractField(line, 2);
      String eRow3 = extractField(line, 3);

      if (eRow1 != "")
        row1 = readingsIndex[extractField(line, 1).toInt()];
      if (eRow2 != "")
        row2 = readingsIndex[extractField(line, 2).toInt()];
      if (eRow3 != "")
        row3 = readingsIndex[extractField(line, 3).toInt()];

      Serial.print("Row1: ");
      Serial.println(row1);
      Serial.print("Row2: ");
      Serial.println(row2);
      Serial.print("Row3: ");
      Serial.println(row3);

      if (row1 == "-")
        row1 = "";
      if (row2 == "-")
        row2 = "";
      if (row3 == "-")
        row3 = "";
      break;
    }
  }
}