/* ----- Display Pins ----- */
// busy = 25 , rst = 26 , dc = 27 , cs = 15 , clk = 13 , din = 14 , VCC = 3V3, GND

/* ----- RTC Pins ----- */
//SCL = 22 , SDA = 21 , VCC = VIN, GND = GN

#include <Wire.h>
#include "RTClib.h"
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include <stdlib.h>
#include "data.h"

/* ----- Constants ----- */
const int MAX_TEXT_LENGTH = 20;
const int TEXT_X_POS_DEFAULT = 110;
const int TEXT_X_POS_ADJUSTED = 75;
const int TEXT_X_POS_MIN = 50;
const int EPD_WIDTH = EPD_4IN2_WIDTH;
const int EPD_HEIGHT = EPD_4IN2_HEIGHT;

/* ----- Variables ----- */
String formatted_date;  //to store date in "December 5th, 2024" format (to show on display)
String current_date;    //to store date in "2024-01-01" format (to compare with data.h)
String row1 = "";       //showing rows on display
String row2 = "";
String row3 = "";

bool dateFound = false;  //to check if date is found in data.h
int prevDay = 0;         //checking day condition
int x = TEXT_X_POS_DEFAULT;

String monthNames[] = { "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };

String dayNames[] = {
  "1st", "2nd", "3rd", "4th", "5th", "6th", "7th", "8th", "9th", "10th",
  "11th", "12th", "13th", "14th", "15th", "16th", "17th", "18th", "19th", "20th",
  "21st", "22nd", "23rd", "24th", "25th", "26th", "27th", "28th", "29th", "30th",
  "31st"
};

/* -- Create a new image cache -- */
UBYTE* BlackImage;

/* ----- init RTC ----- */
RTC_DS3231 rtc;

void setup() {
  Serial.begin(115200);
  Serial.println("setup()");

  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1) delay(10);
  }
  
  // rtc.adjust(DateTime(2070, 12, 16, 3, 0, 0));
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));    

  DEV_Module_Init();  
  EPD_4IN2_V2_Init(); //EPD_4IN2_Init_Fast();  
  EPD_4IN2_V2_Clear(); //EPD_4IN2_Clear();  
  DEV_Delay_ms(500);  
}

void loop() {
  DateTime time = rtc.now();  

  /* -- check if day changes -- */
  if (prevDay != time.day()) {
    prevDay = time.day();
    dateFound = false;

    /* -- Current Date in format "December 5th, 2024" -- */
    char format_1[50];
    snprintf(format_1, sizeof(format_1), "%s %s, %d", monthNames[time.month() - 1].c_str(), dayNames[time.day() - 1].c_str(), time.year());
    formatted_date = format_1;
    Serial.print("Date : ");
    Serial.println(formatted_date);
    /* ------------------------------------------------- */

    /* -- Current Date in format "2024-01-01" -- */
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

    snprintf(format_2, sizeof(format_2), "%d-%s-%s", time.year(), cur_mon, cur_day);
    current_date = format_2;
    Serial.print("Date : ");
    Serial.println(current_date);
    processYearData(data, sizeof(data) / sizeof(data[0]), current_date);
    /* ------------------------------------------------- */

    if (!dateFound) {
      row1 = "Ez 24:15-23";
      row2 = "";
      row3 = "Mt 19:16-22";
    }

    displayDate();
  }
}

/* -- Function to display Formatted date and rows on Display -- */
void displayDate() {
  Serial.print("displayDate");
  // Allocate memory for image buffer
  UWORD imageSize = ((EPD_WIDTH % 8 == 0) ? (EPD_WIDTH / 8) : (EPD_WIDTH / 8 + 1)) * EPD_HEIGHT;
  BlackImage = (UBYTE*)malloc(imageSize);
  if (BlackImage == NULL) {
    Serial.println("Failed to allocate memory for BlackImage");
    return;
  }

  Paint_NewImage(BlackImage, EPD_WIDTH, EPD_HEIGHT, 0, WHITE);
  Paint_SelectImage(BlackImage);
  Paint_Clear(WHITE);
  Paint_DrawString_EN(55, 25, formatted_date.c_str(), &Font24, WHITE, BLACK);
  adjustTxt(row1.c_str());
  Paint_DrawString_EN(x, 105, row1.c_str(), &Font20, WHITE, BLACK);  
  adjustTxt(row2.c_str());  
  Paint_DrawString_EN(x, 145, row2.c_str(), &Font20, WHITE, BLACK);  
  adjustTxt(row3.c_str());  
  Paint_DrawString_EN(x, 185, row3.c_str(), &Font20, WHITE, BLACK);  
  EPD_4IN2_V2_Display(BlackImage);  
  free(BlackImage);  
  BlackImage = NULL;
}

/* -- check text alignments -- */
void adjustTxt(const char* cmd) {
  int len = strlen(cmd);
  if (len >= MAX_TEXT_LENGTH) {
    x = TEXT_X_POS_MIN;
  } else if (len > 15) {
    x = TEXT_X_POS_ADJUSTED;
  } else {
    x = TEXT_X_POS_DEFAULT;
  }
}

/* -- if current date is found in data.h extract its data in rows -- */
String extractField(const String& line, int index) {
  int startIndex = 0;
  int endIndex = line.indexOf('&');

  for (int i = 0; i < index; i++) {
    if (endIndex == -1) return "";
    startIndex = endIndex + 1;
    endIndex = line.indexOf('&', startIndex);
  }

  if (endIndex == -1) endIndex = line.length();
  return line.substring(startIndex, endIndex);
}

/* -- check if current date exists in data.h file -- */
void processYearData(const char* data[], int dataSize, String date) {
  for (int i = 0; i < dataSize; i++) {
    String line(data[i]);
    Serial.println(line);

    String idx = extractField(line, 0);

    if (idx == date) {
      Serial.print("Extracted date: ");
      Serial.println(idx);
      row1 = extractField(line, 1);
      row2 = extractField(line, 2);
      row3 = extractField(line, 3);
      dateFound = true;

      Serial.print("Row1: ");
      Serial.println(row1);
      Serial.print("Row2: ");
      Serial.println(row2);
      Serial.print("Row3: ");
      Serial.println(row3);

      if (row1 == "-") row1 = "";
      if (row2 == "-") row2 = "";
      if (row3 == "-") row3 = "";
      break;
    }
  }
}
