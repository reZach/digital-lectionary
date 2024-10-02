const char *indexVerses[] = {
    "Lk 1:26-38",
    "Mt 23:1-12",
    "Mt 6:1-6, 16-18",
    "Mt 6:7-15",
    "Lk 11:29-32",
    "Gn 3:9-15, 20",
    "Dn 7:9-10, 13-14",
    "2 Pt 1:16-19",
    "Mt 5:43-48",
    "Mt 5:20-26",
    "Mk 12:28b-34",
    "Mt 5:17-19",
    "Mt 11:28-30",
    "Mt 17:1-9",
    "Heb 2:14-18",
    "Jon 3:1-10",
    "Hos 14:2-10",
    "Mk 1:29-39",
    "Mk 4:26-34",
    "Mk 6:30-34",
    "Is 50:4-9a",
    "Lk 24:35-48",
    "Jn 6:1-15",
    "Jn 6:60-69",
    "Jn 15:1-8",
    "Jn 17:11b-19",
    "Jn 17:20-26",
    "Lk 5:1-11",
    "Lk 10:25-37",
    "Lk 10:38-42",
    "Lk 13:1-9",
    "Lk 17:11-19",
    "Lk 18:1-8",
    "Is 11:1-10",
    "Mt 25:31-46",
    "Is 55:10-11",
    "Acts 2:14, 22-33",
    "Lk 24:13-35",
    "Acts 6:1-7",
    "Jn 17:1-11a",
    "Mt 22:1-14",
    "Mt 22:34-40",
    "Mt 25:1-13",
    "Mt 25:14-30",
    "Mt 11:25-30",
    "Is 25:6-10a",
    "Mk 1:21-28",
    "Lk 16:19-31",
    "Lk 15:1-3, 11-32",
    "Gn 11:1-9",
    "Mt 5:13-16",
    "Lk 12:13-21",
    "Mk 1:40-45",
    "Jer 20:10-13",
    "Lk 12:49-53",
    "Mt 5:1-12a",
    "Lk 2:22-40",
    "Mt 18:21-35",
    "Lk 7:11-17",
    "Lk 18:9-14",
    "Mt 9:9-13",
    "Lk 19:1-10",
    "Mt 6:24-34",
    "Lk 6:27-38",
    "Jn 8:1-11",
    "Mk 4:35-41",
    "Mk 6:7-13",
    "Lk 13:22-30",
    "Lk 14:25-33",
    "Mt 1:18-24",
    "Mk 2:1-12",
    "Mk 2:18-22",
    "Mk 5:21-43",
    "Mk 6:1-6",
    "Lk 7:1-10",
    "Is 7:10-14; 8:10",
    "Is 7:10-14",
    "Lk 1:39-45",
    "2 Sm 7:1-5, 8b-12, 14a, 16",
    "Mk 9:30-37",
    "Mt 1:1-17",
    "Mt 15:21-28",
    "Zep 3:14-18a",
    "Mk 12:38-44",
    "Mk 7:31-37",
    "Jn 1:1-18",
    "1 Jn 4:7-10",
    "Jn 1:29-34",
    "Nm 6:22-27",
    "Gal 4:4-7",
    "Lk 2:16-21",
    "1 Jn 5:5-13",
    "Is 60:1-6",
    "Eph 3:2-3a, 5-6",
    "Mt 2:1-12",
    "Mk 2:13-17",
    "Mk 2:23-28",
    "Mk 3:1-6",
    "Mk 3:7-12",
    "Mk 3:13-19",
    "Mk 3:20-21",
    "Mk 3:22-30",
    "Mk 3:31-35",
    "Mk 4:1-22",
    "Mk 4:21-25",
    "Mal 3:1-4, 23-24",
    "Mal 3:1-4",
    "Mk 6:53-56",
    "Mk 7:1-13",
    "Jl 2:12-18",
    "Dt 30:15-20",
    "Lk 9:22-25",
    "Is 58:1-9a",
    "Mt 9:14-15",
    "Is 58:9b-14",
    "Lk 5:27-32",
    "Lv 19:1-2, 11-18",
    "2 Sm 7:4-5a, 12-14a, 16",
    "Rom 4:13, 16-18, 22",
    "Mt 1:16, 18-21, 24a",
    "Is 50:4-7",
    "Phil 2:6-11",
    "Is 49:1-6",
    "Jn 13:21-33, 36-38",
    "Mt 26:14-25",
    "Ex 12:1-8, 11-14",
    "1 Cor 11:23-26",
    "Jn 13:1-15",
    "Is 52:13-53:12",
    "Heb 4:14-16; 5:7-9",
    "Jn 18:1-19:42",
    "Ex 14:15-15:1",
    "Rom 6:3-11",
    "Acts 10:34a, 37-43",
    "Col 3:1-4",
    "Jn 20:1-9",
    "Mt 28:8-15d",
    "Acts 2:36-41",
    "Jn 20:11-18",
    "Acts 3:1-10",
    "Acts 3:11-26",
    "Acts 4:1-12",
    "Jn 21:1-14",
    "Acts 4:13-21",
    "Mk 16:9-15",
    "Jn 20:19-31",
    "Heb 10:4-10",
    "Acts 4:32-37",
    "Jn 3:7b-15",
    "Acts 5:17-26",
    "Jn 3:16-21",
    "Acts 5:27-33",
    "Jn 3:31-36",
    "Acts 5:34-42",
    "Jn 6:16-21",
    "Acts 6:8-15",
    "Jn 6:22-29",
    "Acts 7:51-8:1a",
    "Jn 6:30-35",
    "Acts 8:1b-8",
    "Jn 6:35-40",
    "Acts 8:26-40",
    "Jn 6:44-51",
    "Acts 9:1-20",
    "Jn 6:52-59",
    "Acts 9:31-42",
    "Acts 11:1-18",
    "Jn 10:1-10",
    "Acts 11:19-26",
    "Jn 10:22-30",
    "Acts 12:24-13:5a",
    "Jn 12:44-50",
    "Acts 13:13-25",
    "Jn 13:16-20",
    "Acts 13:26-33",
    "Jn 14:1-6",
    "Acts 13:44-52",
    "Jn 14:7-14",
    "Acts 14:5-18",
    "Jn 14:21-26",
    "Acts 14:19-28",
    "Jn 14:27-31a",
    "Acts 15:1-6",
    "Acts 15:7-21",
    "Jn 15:9-11",
    "Acts 15:22-31",
    "Jn 15:12-17",
    "Acts 16:1-10",
    "Jn 15:18-21",
    "Acts 16:11-15",
    "Jn 15:26-16:4a",
    "Acts 16:22-34",
    "Jn 16:5-11",
    "Acts 17:15, 22-18:1",
    "Jn 16:12-15",
    "Acts 18:1-8",
    "Jn 16:16-20",
    "Acts 18:9-18",
    "Jn 16:20-23",
    "Acts 18:23-28",
    "Jn 16:23b-28",
    "Acts 19:1-8",
    "Jn 16:29-33",
    "Acts 20:17-27",
    "Acts 20:28-38",
    "Acts 22:30; 23:6-11",
    "Acts 25:13b-21",
    "Jn 21:15-19",
    "Rom 8:22-27",
    "Jn 7:37-39",
    "Acts 2:1-11",
    "Jn 19:25-34",
    "Mt 6:19-23",
    "Mt 7:1-5",
    "Mt 7:6, 12-14",
    "Mt 7:15-22",
    "Mt 7:21-29",
    "Mt 8:1-4",
    "Mt 8:5-17",
    "Mt 8:18-22",
    "Mt 8:23-27",
    "Mt 8:28-34",
    "Mt 9:1-8",
    "Mt 9:14-17",
    "Mt 9:18-26",
    "Mt 9:32-38",
    "Mt 10:1-7",
    "Mt 10:7-15",
    "Mt 10:16-23",
    "Mt 10:24-33",
    "Mt 10:34-11:1",
    "Mt 11:20-24",
    "Mt 11:25-27",
    "Mt 12:1-8",
    "Mt 12:14-21",
    "Mt 12:38-42",
    "Mt 12:46-50",
    "Mt 13:1-9",
    "Mt 13:10-17",
    "Mt 13:18-23",
    "Mt 13:24-30",
    "Mt 13:31-35",
    "Mt 13:36-43",
    "Mt 13:44-46",
    "Mt 13:47-53",
    "Mt 13:54-58",
    "Mt 14:1-12",
    "Mt 17:22-27",
    "Mt 19:23-30",
    "Mt 20:1-16a",
    "Mt 20:1-16",
    "Mt 23:13-22",
    "Mt 23:23-26",
    "Mt 23:27-32",
    "Mt 24:42-51",
    "Lk 4:16-30",
    "Lk 4:31-37",
    "Lk 4:38-44",
    "Lk 5:33-39",
    "Lk 6:1-5",
    "Lk 6:6-11",
    "Lk 6:12-19",
    "Lk 6:20-26",
    "Lk 6:39-42",
    "Lk 6:43-49",
    "Lk 7:31-35",
    "Lk 7:36-50",
    "Lk 8:1-3",
    "Lk 8:4-15",
    "Lk 8:16-18",
    "Lk 8:19-21",
    "Lk 9:1-6",
    "Lk 9:7-9",
    "Lk 9:18-22",
    "Lk 9:43b-45",
    "Lk 9:46-50",
    "Lk 9:51-56",
    "Lk 9:57-62",
    "Lk 10:1-12, 17-20",
    "Lk 10:1-12",
    "Lk 10:13-16",
    "Lk 10:17-24",
    "Lk 11:1-4",
    "Lk 11:5-13",
    "Lk 11:15-26",
    "Lk 11:27-28",
    "Lk 11:37-41",
    "Lk 11:42-46",
    "Lk 11:47-54",
    "Lk 12:1-7",
    "Lk 12:8-12",
    "Lk 12:35-38",
    "Lk 12:39-48",
    "Lk 12:54-59",
    "Lk 13:10-17",
    "Lk 13:18-21",
    "Rv 7:2-4, 9-14",
    "1 Jn 3:1-3",
    "Wis 3:1-9",
    "Rom 5:5-11",
    "Lk 15:1-10",
    "Lk 16:1-8",
    "Lk 16:9-15",
    "Lk 17:1-6",
    "Lk 17:7-10",
    "Lk 17:20-25",
    "Lk 17:26-37",
    "Lk 18:35-43",
    "Lk 19:11-28",
    "Lk 19:41-44",
    "Lk 19:45-48",
    "Lk 20:27-40",
    "Lk 21:1-4",
    "Lk 21:5-11",
    "Lk 21:12-19",
    "Lk 21:20-28",
    "Lk 21:29-33",
    "Lk 21:34-36",
    "Is 2:1-5",
    "Mt 8:5-11",
    "Lk 10:21-24",
    "Mt 15:29-37",
    "Is 26:1-6",
    "Mt 7:21, 24-27",
    "Eph 1:3-6, 11-12",
    "Zec 2:14-17",
    "Lk 1:39-47",
    "Est C:12, 14-16, 23-25",
    "Mt 7:7-12",
    "Dt 26:16-19",
    "Ez 18:21-28",
    "Dn 9:4b-10",
    "Lk 6:36-38",
    "Is 1:10, 16-20",
    "Jer 18:18-20",
    "Mt 20:17-28",
    "Jer 17:5-10",
    "Gn 37:3-4, 12-13a, 17b-28a",
    "Mt 21:33-43, 45-46",
    "Mi 7:14-15, 18-20",
    "Jer 7:23-28",
    "Lk 11:14-23",
    "Jer 11:18-20",
    "Jn 7:40-53",
    "Mt 5:27-32",
    "Mt 5:33-37",
    "Mt 5:38-42",
    "Dt 4:1, 5-9",
    "Jn 10:31-42",
    "Ez 47:1-9, 12",
    "Jn 5:1-3a, 5-16",
    "Is 49:8-15",
    "Jn 5:17-30",
    "Ez 37:21-28",
    "Jn 11:45-56",
    "Mk 10:46-52",
    "Dn 3:25, 34-43",
    "Wis 2:1a, 12-22",
    "Jn 7:1-2, 10, 25-30",
    "Gn 17:3-9",
    "Jn 8:51-59",
    "Is 42:1-7",
    "Jn 12:1-11",
    "Nm 21:4-9",
    "Jn 8:21-30",
    "Hos 6:1-6",
    "Dn 3:14-20, 91-92, 95",
    "Jn 8:31-42",
    "Mt 21:28-32",
    "Ex 32:7-14",
    "Jn 5:31-47",
    "Jn 1:35-42",
    "Is 65:17-21",
    "Jn 4:43-54",
    "2 Kgs 5:1-15a",
    "Lk 4:24-30",
    "Dn 13:1-9, 15-17, 19-30, 33-62",
    "Mt 14:13-21",
    "Mt 17:14-22",
    "Mt 18:1-5, 10, 12-14",
    "Mt 18:15-22",
    "Mt 19:16-22",
    "Is 29:17-24",
    "Mt 9:27-31",
    "Is 30:19-21, 23-26",
    "Mt 9:35-10:1, 5a, 6-8",
    "Gn 49:2, 8-10",
    "Jer 23:5-8",
    "Lk 1:57-66",
    "Lk 1:67-79",
    "1 Jn 2:12-17",
    "Lk 2:36-40",
    "1 Jn 2:18-21",
    "1 Jn 5:14-21",
    "Mk 6:14-29",
    "Mt 14:22-36",
    "Mt 18:21-19:1",
    "1 Sm 1:24-28",
    "Lk 1:46-56",
    "1 Jn 2:3-11",
    "Lk 2:22-35",
    "1 Jn 2:22-28",
    "Jn 1:19-28",
    "Mk 5:1-22",
    "Mk 12:13-17",
    "Mt 16:13-23",
    "Mt 16:24-28",
    "Mt 19:3-12",
    "Mt 19:13-15",
    "Is 48:17-19",
    "Mt 11:16-19",
    "Sir 48:1-4, 9-11",
    "Mt 17:9a, 10-13",
    "Jgs 13:2-7, 24-25a",
    "Lk 1:5-25",
    "Acts 6:8-10; 7:54-59",
    "Mt 10:17-22",
    "1 Jn 1:1-4",
    "Jn 20:1a, 2-8",
    "1 Jn 1:5-2:2",
    "Mt 2:13-18",
    "Mk 8:14-21",
    "Eph 4:1-6",
    "1 Cor 15:1-11",
    "Ex 20:1-17",
    "1 Cor 2:1-5",
    "Col 1:15-20",
    "1 Tm 2:1-8",
    "Rom 1:1-7",
    "Mk 10:28-31",
    "1 Thes 4:13-18",
    "1 Cor 12:31-13:13",
    "Mk 12:18-27",
    "Mk 12:35-37",
    "Mt 5:1-12",
    "1 Cor 1:26-31",
    "Jer 31:31-34",
    "Mk 7:14-23",
    "Mk 7:24-30",
    "Mk 8:1-10",
    "Mk 8:11-13",
    "Heb 11:1-2, 8-19",
    "Rom 13:8-10",
    "1 Cor 4:1-5",
    "Lk 13:31-35",
    "1 Jn 3:22-4:6",
    "Mt 4:12-17, 23-25",
    "Mk 6:34-44",
    "1 Jn 4:11-18",
    "Mk 6:45-52",
    "1 Jn 4:19-5:4",
    "Lk 4:14-22a",
    "Lk 5:12-16",
    "Jn 3:22-30",
    "Mk 1:14-22",
    "Acts 4:23-31",
    "Jn 3:1-8",
    "Lk 14:1-6",
    "Is 41:13-20",
    "Mt 11:11-15",
    "Lk 14:15-24",
    "Is 40:1-11",
    "Mt 18:12-14",
    "Is 40:25-31",
    "Lk 14:1, 7-11",
    "Is 35:1-10",
    "Lk 5:17-26",
    "1 Jn 2:29-3:6",
    "Lk 14:12-14",
    "Heb 12:1-4",
    "Rom 9:1-5",
    "Mk 9:2-10",
    "Lk 9:28b-36",
    "Jn 10:11-18",
    "Is 40:1-5, 9-11",
    "2 Cor 1:18-22",
    "Jas 5:1-6",
    "1 Pt 1:3-9",
    "Is 62:1-5",
    "Mk 1:7-11",
    "Mk 9:38-40",
    "Mk 9:41-50",
    "Mk 10:1-12",
    "Mk 10:13-16",
    "Mk 10:17-27",
    "Mk 10:32-45",
    "Mk 11:11-26",
    "Mk 11:27-33",
    "Mk 12:1-12",
    "Heb 1:1-6",
    "Mk 8:22-26",
    "Mk 8:27-33",
    "Mk 8:34-9:1",
    "Mk 9:2-13",
    "Mk 9:14-29",
    "Nm 24:2-7, 15-17a",
    "Mt 21:23-27",
    "Zep 3:1-2, 9-13",
    "1 Jn 3:7-10",
    "1 Sm 1:9-22",
    "1 Sm 3:1-10, 19-22",
    "1 Sm 4:1-11",
    "1 Sm 8:4-7, 10-22a",
    "1 Sm 9:1-4, 17-19; 10:1",
    "1 Sm 15:16-23",
    "1 Sm 16:1-13",
    "1 Sm 17:32-33, 37, 40-51",
    "1 Sm 18:6-9; 19:1-7",
    "1 Sm 24:3-21",
    "2 Sm 1:1-4, 11-12, 19, 23-27",
    "2 Sm 5:1-7, 10",
    "2 Sm 6:12b-15, 17-19",
    "2 Sm 7:4-17",
    "2 Sm 7:18-19, 24-29",
    "2 Sm 11:1-4a, 5-10a, 13-17",
    "1 Kgs 3:4-13",
    "1 Kgs 8:1-7, 9-13",
    "1 Kgs 8:22-23, 27-30",
    "1 Kgs 21:17-29",
    "2 Kgs 2:1, 6-14",
    "Sir 48:1-14",
    "2 Kgs 11:1-4, 9-18, 20",
    "2 Chr 24:17-25",
    "2 Kgs 17:5-8, 13-15a, 18",
    "2 Kgs 19:9b-11, 14-21, 31-35a, 36",
    "2 Kgs 22:8-13; 23:1-3",
    "2 Kgs 24:8-17",
    "2 Kgs 25:1-12",
    "Lam 2:2, 10-14, 18-19",
    "Am 2:6-10, 13-16",
    "Am 3:1-8; 4:11-12",
    "Am 5:14-15, 21-24",
    "Am 7:10-17",
    "Am 8:4-6, 9-12",
    "Am 9:11-15",
    "Hos 2:16, 17c-18, 21-22",
    "Hos 8:4-7, 11-13",
    "Hos 10:1-3, 7-8, 12",
    "Hos 11:1-4, 8e-9",
    "Is 6:1-8",
    "Is 1:10-17",
    "Is 7:1-9",
    "Is 10:5-7, 13b-16",
    "Is 26:7-9, 12, 16-19",
    "Is 38:1-6, 21-22, 7-8",
    "Mi 2:1-5",
    "Mi 6:1-4, 6-8",
    "Mi 7:14-15, 18-22",
    "Jer 1:1, 4-10",
    "Jer 2:1-3, 7-8, 12-13",
    "Jer 3:14-17",
    "Jer 7:1-11",
    "Jer 13:1-11",
    "Jer 14:17-22",
    "Jer 15:10, 16-21",
    "Jer 18:1-6",
    "Jer 26:1-9",
    "Jer 26:11-16, 24",
    "Ez 1:2-5, 24-28c",
    "Ez 28:1-10",
    "Ez 34:1-11",
    "Ez 36:23-28",
    "Ez 37:1-14",
    "Ez 43:1-7ab",
    "2 Thes 1:1-5, 11-12",
    "2 Thes 2:1-3a, 14-17",
    "2 Thes 3:6-10, 16-18",
    "1 Cor 1:1-9",
    "1 Cor 1:17-25",
    "1 Cor 2:10b-16",
    "1 Cor 3:1-9",
    "1 Cor 3:18-23",
    "1 Cor 4:6b-15",
    "1 Cor 5:1-8",
    "1 Cor 6:1-11",
    "1 Cor 7:25-31",
    "1 Cor 8:1b-7, 11-13",
    "1 Cor 9:16-19, 22b-27",
    "1 Cor 10:14-22",
    "1 Cor 11:17-26, 33",
    "1 Cor 12:12-14, 27-31a",
    "1 Cor 15:12-22",
    "1 Cor 15:35-37, 42-49",
    "Prv 3:27-34",
    "Prv 21:1-6, 10-13",
    "Prv 30:5-9",
    "Eccl 1:2-11",
    "Eccl 3:1-11",
    "Eccl 11:9-12:8",
    "Jb 1:6-22",
    "Jb 3:1-3, 11-17, 20-23",
    "Jb 9:1-12, 14-16",
    "Jb 19:21-27",
    "Jb 38:1, 12-21; 40:3-5",
    "Jb 42:1-3, 5-6, 12-17",
    "Gal 1:6-12",
    "Gal 1:13-24",
    "Gal 2:1-2, 7-14",
    "Gal 3:1-5",
    "Gal 3:7-14",
    "Gal 3:22-29",
    "Gal 4:22-24, 26-27, 31-5:1",
    "Gal 5:1-6",
    "Gal 5:18-25",
    "Eph 1:1-10",
    "Eph 1:11-14",
    "Eph 1:15-23",
    "Eph 2:1-10",
    "Eph 2:12-22",
    "Eph 3:2-12",
    "Eph 3:14-21",
    "Eph 4:7-16",
    "Eph 4:32-5:8",
    "Eph 5:21-33",
    "Phil 3:3-8a",
    "Phil 3:17-4:1",
    "Phil 4:10-19",
    "Ti 1:1-9",
    "Ti 2:1-8, 11-14",
    "Ti 3:1-7",
    "Phlm 7-22",
    "2 Jn 4-9",
    "3 Jn 5-8",
    "Rv 1:1-4; 2:1-5",
    "Rv 3:1-6, 14-22",
    "Rv 4:1-11",
    "Rv 5:1-10",
    "Rv 10:8-11",
    "Rv 11:4-12",
    "Rv 14:1-3, 4b-5",
    "Rv 14:14-19",
    "Rv 15:1-4",
    "Rv 18:1-2, 21-23; 19:1-3, 9a",
    "Rv 20:1-4, 11-21:2",
    "Rv 22:1-7",
    "Heb 2:5-12",
    "Heb 3:7-14",
    "Heb 4:1-5, 11",
    "Heb 4:12-16",
    "Heb 5:1-10",
    "Heb 6:10-20",
    "Heb 7:1-3, 15-17",
    "Heb 7:25-8:6",
    "Heb 8:6-13",
    "Heb 9:2-3, 11-14",
    "Heb 9:15, 24-28",
    "Heb 10:1-10",
    "Heb 10:11-18",
    "Heb 10:19-25",
    "Heb 10:32-39",
    "Heb 13:15-17, 20-21",
    "Gn 1:1-19",
    "Gn 1:20-2:4a",
    "2 Cor 8:1-9",
    "2 Cor 9:6-11",
    "2 Cor 11:1-11",
    "2 Cor 11:18, 21-30",
    "2 Cor 12:1-10",
    "Gn 12:1-9",
    "Gn 13:2, 5-18",
    "Gn 15:1-12, 17-18",
    "Gn 16:1-12, 15-16",
    "Gn 17:1, 9-10, 15-22",
    "Gn 18:1-15",
    "Gn 18:16-33",
    "Gn 19:15-29",
    "Gn 21:5, 8-20a",
    "Gn 22:1b-19",
    "Gn 23:1-4, 19; 24:1-8, 62-67",
    "Gn 27:1-5, 15-29",
    "Gn 28:10-22a",
    "Gn 32:23-33",
    "Gn 41:55-57; 42:5-7a, 17-24a",
    "Gn 44:18-21, 23b-29; 45:1-5",
    "Gn 46:1-7, 28-30",
    "Gn 49:29-32; 50:15-26a",
    "Ex 1:8-14, 22",
    "Ex 2:1-15a",
    "Ex 3:1-6, 9-12",
    "Ex 3:13-20",
    "Ex 11:10-12:14",
    "Ex 12:37-42",
    "Ex 14:5-18",
    "Ex 14:21-15:1",
    "Ex 16:1-5, 9-15",
    "Ex 19:1-2, 9-11, 16-20b",
    "Ex 24:3-8",
    "Ex 32:15-24, 30-34",
    "Ex 33:7-11; 34:5b-9, 28",
    "Ex 34:29-35",
    "Ex 40:16-21, 34-38",
    "Lv 23:1, 4-11, 15-16, 27, 34b-37",
    "Lv 25:1, 8-17",
    "Dt 10:12-22",
    "Jgs 6:11-24a",
    "Jgs 9:6-15",
    "Jgs 11:29-39a",
    "Ru 1:1, 3-6, 14b-16, 22",
    "Ru 2:1-3, 8-11; 4:13-17",
    "1 Thes 1:1-5, 8b-10",
    "1 Thes 2:1-8",
    "1 Thes 2:9-13",
    "1 Thes 3:7-13",
    "1 Thes 4:1-8",
    "1 Thes 4:9-11",
    "1 Thes 5:1-6, 9-11",
    "Col 1:1-8",
    "Col 1:9-14",
    "Col 1:21-23",
    "Col 1:24-2:3",
    "Col 2:6-15",
    "Col 3:1-11",
    "Col 3:12-17",
    "1 Tm 1:1-2, 12-14",
    "1 Tm 1:15-17",
    "1 Tm 3:1-13",
    "1 Tm 3:14-16",
    "1 Tm 4:12-16",
    "1 Tm 6:2c-12",
    "1 Tm 6:13-16",
    "Ezr 1:1-6",
    "Ezr 6:7-8, 12b, 14-20",
    "Ezr 9:5-9",
    "Hg 1:1-8",
    "Hg 2:1-9",
    "Zec 2:5-9, 14-15a",
    "Zec 8:1-8",
    "Zec 8:20-23",
    "Neh 2:1-8",
    "Neh 8:1-4a, 5-6, 7b-12",
    "Bar 1:15-22",
    "Bar 4:5-12, 27-29",
    "Jon 1:1-2:2, 11",
    "Jon 4:1-11",
    "Mal 3:13-20b",
    "Jl 1:13-15; 2:1-2",
    "Jl 4:12-21",
    "Rom 1:16-25",
    "Rom 2:1-11",
    "Rom 3:21-30",
    "Rom 4:1-8",
    "Rom 4:13, 16-18",
    "Rom 4:20-25",
    "Rom 5:12, 15b, 17-19, 20b-21",
    "Rom 6:12-18",
    "Rom 6:19-23",
    "Rom 7:18-25a",
    "Rom 8:1-11",
    "Rom 8:12-17",
    "Rom 8:18-25",
    "Rom 14:7-12",
    "Rom 15:14-21",
    "Rom 16:3-9, 16, 22-27",
    "Wis 1:1-7",
    "Wis 2:23-3:9",
    "Wis 6:1-11",
    "Wis 7:22b-8:1",
    "Wis 13:1-9",
    "Wis 18:14-16; 19:6-9",
    "1 Mc 1:10-15, 41-43, 54-57, 62-63",
    "2 Mc 6:18-31",
    "2 Mc 7:1, 20-31",
    "1 Mc 2:15-29",
    "1 Mc 4:36-37, 52-59",
    "1 Mc 6:1-13",
    "Dn 1:1-6, 8-20",
    "Dn 2:31-45",
    "Dn 5:1-6, 13-14, 16-17, 23-28",
    "Dn 6:12-28",
    "Dn 7:2-14",
    "Dn 7:15-27",
    "1 Kgs 17:7-16",
    "1 Kgs 18:20-39",
    "1 Kgs 18:41-46",
    "1 Kgs 19:9a, 11-16",
    "1 Kgs 19:19-21",
    "1 Kgs 21:1-16",
    "Jn 2:1-11",
    "2 Cor 3:4-11",
    "2 Cor 3:15-4:1, 3-6",
    "2 Cor 4:7-15",
    "2 Cor 5:14-21",
    "2 Cor 6:1-10",
    "Hb 1:12-2:4",
    "Ez 24:15-23",
    "Phil 2:12-18",
    "2 Sm 12:1-7a, 10-17",
    "2 Sm 15:13-14, 30; 16:5-13",
    "2 Sm 24:2, 9-17",
    "Jas 4:1-10",
    "2 Pt 3:12-15a, 17-18",
    "Jer 28:1-17",
    "Ez 9:1-7; 10:18-22",
    "Ez 18:1-10, 13b, 30-32",
    "Heb 12:18-19, 21-24",
    "Dt 31:1-8",
    "Rom 8:26-30",
    "Sir 47:2-11",
    "Jer 30:1-2, 12-15, 18-22",
    "Ez 12:1-12",
    "Is 45:6c-8, 18, 21c-25",
    "Lk 7:18b-23",
    "2 Sm 18:9-10, 14b, 24-25a, 30-19:3",
    "1 Kgs 2:1-4, 10-12",
    "Jas 1:12-18",
    "1 Pt 1:10-16",
    "Jer 31:1-7",
    "Na 2:1, 3; 3:1-3, 6-7",
    "Ez 2:8-3:4",
    "Ez 16:1-15, 60, 63",
    "Eph 6:1-9",
    "Heb 13:1-8",
    "Nm 11:4b-15",
    "Nm 12:1-13",
    "Dt 4:32-40",
    "Dt 34:1-12",
    "Jos 3:7-10a, 11, 13-17",
    "Nm 13:1-2, 25-14:1, 26a-29a, 34-35",
    "Jos 24:1-13",
    "1 Jn 3:11-21",
    "Jn 1:43-51",
    "Heb 11:32-40",
    "Heb 12:4-7, 11-15",
    "Gn 6:5-8; 7:1-5, 10",
    "Nm 20:1-13",
    "Dt 6:4-13",
    "Jos 24:14-29",
    "Jgs 2:11-19",
    "Tb 2:9-14",
    "Sir 2:1-11",
    "1 Kgs 10:1-10",
    "1 Kgs 11:4-13",
    "1 Kgs 11:29-32; 12:19",
    "1 Kgs 12:26-32; 13:33-34",
    "Jas 1:1-11",
    "Sir 35:1-12",
    "Tb 3:1-11a, 16-17a",
    "Tb 6:10-11; 7:1bcde, 9-17; 8:4-9a",
    "Tb 11:5-17",
    "Tb 12:1, 5-15, 20",
    "2 Cor 1:1-7",
    "2 Tm 1:1-3, 6-12",
    "2 Tm 2:8-15",
    "2 Tm 3:10-17",
    "2 Tm 4:1-8",
    "1 Kgs 17:1-6",
    "Phil 2:5-11",
    "Gn 2:4b-9, 15-17",
    "Gn 2:18-25",
    "Gn 3:1-8",
    "Gn 3:9-24",
    "Gn 4:1-15, 25",
    "Rom 8:31b-39",
    "Phil 1:1-11",
    "Eph 6:10-22",
    "Phil 2:1-4",
    "1 Sm 1:1-8",
    "Phil 1:18b-26",
    "Rom 11:1-2a, 11-12, 25-29",
    "Rom 11:29-36",
    "Rom 12:5-16ab",
    "Is 55:1-11",
    "1 Jn 5:1-9",
    "1 Sm 3:3b-10, 19",
    "1 Cor 6:13c-15a, 17-20",
    "Jon 3:1-5, 10",
    "1 Cor 7:29-31",
    "Mk 1:14-20",
    "Jb 7:1-4, 6-7",
    "1 Cor 9:16-19, 22-23",
    "Gn 9:8-15",
    "1 Pt 3:18-22",
    "Mk 1:12-15",
    "Gn 22:1-2, 9a, 10-13, 15-18",
    "Rom 8:31b-34",
    "1 Cor 1:22-25",
    "Jn 2:13-25",
    "2 Chr 36:14-16, 19-23",
    "Eph 2:4-10",
    "Jn 3:14-21",
    "Heb 5:7-9",
    "Jn 12:20-33",
    "Mk 14:1 – 15:47",
    "Mk 16:1-7",
    "Acts 4:32-35v",
    "1 Jn 5:1-6",
    "Acts 3:13-15, 17-19",
    "1 Jn 2:1-5a",
    "Acts 4:8-12",
    "1 Jn 3:1-2, 21-24",
    "1 Jn 3:1-2",
    "Acts 9:26-31",
    "1 Jn 3:18-24",
    "Acts 10:25-26, 34-35, 44-48",
    "Jn 15:9-17",
    "Acts 1:15-17, 20a, 20c-26",
    "1 Jn 4:11-16",
    "Gal 5:16-25",
    "Jn 15:26-27; 16:12-15",
    "Ez 17:22-24",
    "2 Cor 5:6-10",
    "Jb 38:1, 8-11",
    "2 Cor 5:14-17",
    "Wis 1:13-15; 2:23-24",
    "2 Cor 8:7, 9, 13-15",
    "Ez 2:2-5",
    "2 Cor 12:7-10",
    "Am 7:12-15",
    "Eph 1:3-14",
    "Jer 23:1-6",
    "Eph 2:13-18",
    "2 Kgs 4:42-44",
    "1 Kgs 19:4-8",
    "Eph 4:30-5:2",
    "Jn 6:41-51",
    "Jos 24:1-2a, 15-17, 18b",
    "Eph 5:21-32",
    "Dt 4:1-2, 6-8",
    "Jas 1:17-18, 21b-22, 27",
    "Mk 7:1-8, 14-15, 21-23",
    "Is 35:4-7a",
    "Jas 2:1-5",
    "Jas 2:14-18",
    "Mk 8:27-35",
    "Wis 2:12, 17-20",
    "Jas 3:16-4:3",
    "Nm 11:25-29",
    "Mk 9:38-43, 45, 47-48",
    "Gn 2:18-24",
    "Heb 2:9-11",
    "Mk 10:2-16",
    "Wis 7:7-11",
    "Heb 4:12-13",
    "Mk 10:17-30",
    "Is 53:10-11",
    "Heb 4:14-16",
    "Mk 10:35-45",
    "Jer 31:7-9",
    "Heb 5:1-6",
    "1 Kgs 17:10-16",
    "Heb 9:24-28",
    "Dn 12:1-3",
    "Heb 10:11-14, 18",
    "Mk 13:24-32",
    "Dn 7:13-14",
    "Rv 1:5-8",
    "Jn 18:33b-37",
    "Jer 33:14-16",
    "1 Thes 3:12-4:2",
    "Lk 21:25-28, 34-36",
    "Bar 5:1-9",
    "Phil 1:4-6, 8-11",
    "Lk 3:1-6",
    "Mi 5:1-4a",
    "Heb 10:5-10",
    "Ti 2:11-14; 3:4-7",
    "Lk 3:15-16, 21-22",
    "1 Cor 12:4-11",
    "Neh 8:2-4a, 5-6, 8-10",
    "1 Cor 12:12-30",
    "Lk 1:1-4; 4:14-21",
    "Is 6:1-2a, 3-8",
    "Dt 26:4-10",
    "Rom 10:8-13",
    "Lk 4:1-13",
    "Gn 15:5-12, 17-18",
    "Phil 3:17–4:1",
    "Ex 3:1-8a, 13-15",
    "1 Cor 10:1-6, 10-12",
    "Jos 5:9a, 10-12",
    "2 Cor 5:17-21",
    "Is 43:16-21",
    "Phil 3:8-14",
    "Lk 22:14 – 23:56",
    "Lk 24:1-12",
    "Acts 5:12-16",
    "Rv 1:9-11a, 12-13, 17-19",
    "Acts 5:27-32, 40b-41",
    "Rv 5:11-14",
    "Jn 21:1-19",
    "Acts 13:14, 43-52",
    "Rv 7:9, 14b-17",
    "Jn 10:27-30",
    "Acts 14:21-27",
    "Rv 21:1-5a",
    "Jn 13:31-33a, 34-35",
    "Acts 15:1-2, 22-29",
    "Rv 21:10-14, 22-23",
    "Jn 14:23-29",
    "Acts 7:55-60",
    "Rv 22:12-14, 16-17, 20",
    "Rom 8:8-17",
    "Jn 14:15-16, 23b-26",
    "Zec 12:10-11; 13:1",
    "Gal 3:26-29",
    "Lk 9:18-24",
    "1 Kgs 19:16b, 19-21",
    "Gal 5:1, 13-18",
    "Lk 9:51-62",
    "Is 66:10-14c",
    "Gal 6:14-18",
    "Dt 30:10-14",
    "Gn 18:1-10a",
    "Col 1:24-28",
    "Gn 18:20-32",
    "Col 2:12-14",
    "Lk 11:1-13",
    "Wis 18:6-9",
    "Lk 12:32-48",
    "Is 66:18-21",
    "Heb 12:5-7, 11-13",
    "Sir 3:17-18, 20, 28-29",
    "Heb 12:18-19, 22-24a",
    "Lk 14:1, 7-14",
    "Wis 9:13-18b",
    "Phlm 9-10, 12-17",
    "Ex 32:7-11, 13-14",
    "1 Tm 1:12-17",
    "Lk 15:1-32",
    "Am 8:4-7",
    "Lk 16:1-13",
    "Am 6:1a, 4-7",
    "1 Tm 6:11-16",
    "Hb 1:2-3; 2:2-4",
    "2 Tm 1:6-8, 13-14",
    "Lk 17:5-10",
    "2 Kgs 5:14-17",
    "2 Tm 2:8-13",
    "Ex 17:8-13",
    "2 Tm 3:14-4:2",
    "Sir 35:12-14, 16-18",
    "2 Tm 4:6-8, 16-18",
    "2 Mc 7:1-2, 9-14",
    "2 Thes 2:16-3:5",
    "Lk 20:27-38",
    "Mal 3:19-20a",
    "2 Thes 3:7-12",
    "Lk 21:5-19",
    "2 Sm 5:1-3",
    "Col 1:12-20",
    "Lk 23:35-43",
    "Rom 13:11-14",
    "Mt 24:37-44",
    "Is 4:2-6",
    "Rom 15:4-9",
    "Mt 3:1-12",
    "Is 42:1-4, 6-7",
    "Acts 10:34-38",
    "Mt 3:13-17",
    "Is 49:3, 5-6",
    "1 Cor 1:1-3",
    "Is 8:23-9:3",
    "1 Cor 1:10-13, 17",
    "Mt 4:12-23",
    "Is 58:7-10",
    "Gn 2:7-9; 3:1-7",
    "Rom 5:12-19",
    "Mt 4:1-11",
    "Gn 12:1-4a",
    "2 Tm 1:8b-10",
    "Ex 17:3-7",
    "Rom 5:1-2, 5-8",
    "Jn 4:5-42",
    "1 Sm 16:1b, 6-7, 10-13a",
    "Eph 5:8-14",
    "Jn 9:1-41",
    "Ez 37:12-14",
    "Rom 8:8-11",
    "Jn 11:1-45",
    "Mt 26:14 – 27:66",
    "Mt 28:1-10",
    "Acts 2:42-47",
    "1 Pt 1:17-21",
    "Acts 2:14a, 36-41",
    "1 Pt 2:20b-25",
    "1 Pt 2:4-9",
    "Jn 14:1-12",
    "Acts 8:5-8, 14-17",
    "1 Pt 3:15-18",
    "Jn 14:15-21",
    "Acts 1:12-14",
    "1 Pt 4:13-16",
    "1 Cor 12:3b-7, 12-13",
    "Jn 20:19-23",
    "Rom 5:12-15",
    "Mt 10:26-33",
    "2 Kgs 4:8-11, 14-16a",
    "Rom 6:3-4, 8-11",
    "Mt 10:37-42",
    "Zec 9:9-10",
    "Rom 8:9, 11-13",
    "Rom 8:18-23",
    "Mt 13:1-23",
    "Wis 12:13, 16-19",
    "Rom 8:26-27",
    "Mt 13:24-43",
    "1 Kgs 3:5, 7-12",
    "Rom 8:28-30",
    "Mt 13:44-52",
    "1 Kgs 19:9a, 11-13a",
    "Mt 14:22-33",
    "Is 22:19-23",
    "Rom 11:33-36",
    "Mt 16:13-20",
    "Jer 20:7-9",
    "Rom 12:1-2",
    "Mt 16:21-27",
    "Ez 33:7-9",
    "Mt 18:15-20",
    "Sir 27:30-28:7",
    "Rom 14:7-9",
    "Is 55:6-9",
    "Phil 1:20c-24, 27a",
    "Ez 18:25-28",
    "Phil 2:1-11",
    "Is 5:1-7",
    "Phil 4:6-9",
    "Mt 21:33-43",
    "Phil 4:12-14, 19-20",
    "Is 45:1, 4-6",
    "1 Thes 1:1-5b",
    "Mt 22:15-21",
    "Ex 22:20-26",
    "1 Thes 1:5c-10",
    "Wis 6:12-16",
    "Prv 31:10-13, 19-20, 30-31",
    "1 Thes 5:1-6",
    "Ez 34:11-12, 15-17",
    "1 Cor 15:20-26, 28",
    "Is 63:16b-17, 19b; 64:2-7",
    "1 Cor 1:3-9",
    "Mk 13:33-37",
    "2 Pt 3:8-14",
    "Mk 1:1-8",
    "Rom 16:25-27",
    "Jas 4:13-17",
    "Jas 5:9-12",
    "Jas 5:13-22",
    "1 Pt 1:18-25",
    "1 Pt 2:2-5, 9-12",
    "1 Pt 4:7-13",
    "Jude 17, 20b-25",
    "2 Pt 1:2-7",
    "2 Sm 12:7-10, 13",
    "Gal 2:16, 19-21",
    "Lk 7:36-8:3",
    "Is 9:1-6",
    "Ti 2:11-14",
    "Lk 2:1-14",
    "Ex 19:2-6a",
    "Rom 5:6-11",
    "Mt 9:36-10:8",
    "Jas 1:19-27",
    "Jas 2:1-9",
    "Jas 2:14-24, 26",
    "Jas 3:1-10",
    "Jas 3:13-18",
    "Dt 18:15-20",
    "1 Cor 7:32-35",
    "1 Sm 1:20-22, 24-28",
    "Lk 2:41-52",
    "Sir 4:11-19",
    "Sir 5:1-8",
    "Sir 6:5-17",
    "Sir 17:1-15",
    "Sir 17:20-24",
    "Sir 3:2-6, 12-14",
    "Col 3:12-21",
    "Mt 2:13-15, 19-23",
    "Ex 16:2-4, 12-15",
    "Eph 4:17, 20-24",
    "Jn 6:24-35",
    "Prv 9:1-6",
    "Eph 5:15-20",
    "Jn 6:51-58",
    "Phil 4:4-7",
    "Lk 3:10-18",
    "Acts 13:16-17, 22-25",
    "Gn 8:6-13, 20-22",
    "Gn 9:1-13",
    "Heb 11:1-7",
    "Sir 1:1-10",
    "Eccl 1:2; 2:21-23",
    "Col 3:1-5, 9-11",
    "Is 55:1-3",
    "Rom 8:35, 37-39",
    "Mt 15:1-2, 10-14",
    "Is 56:1, 6-7",
    "Rom 11:13-15, 29-32",
    "Is 61:1-2a, 10-11",
    "1 Thes 5:16-24",
    "Jn 1:6-8, 19-28",
    "Sir 36:1, 4-5a, 10-17",
    "Sir 42:15-25",
    "Sir 44:1, 9-13",
    "Sir 51:12cd-20",
    "Tb 1:3; 2:1a-8",
    "Is 54:1-10",
    "Lk 7:24-30",
    "Jer 1:4-5, 17-19",
    "Lk 4:21-30",
    "Lv 13:1-2, 44-46",
    "1 Cor 10:31-11:1",
    "Gn 3:9-15",
    "2 Cor 4:13-5:1",
    "Mk 3:20-35",
    "Jer 38:4-6, 8-10",
    "Is 35:1-6a, 10",
    "Jas 5:7-10",
    "Mt 11:2-11",
    "Zep 2:3; 3:12-13",
    "Jer 17:5-8",
    "1 Cor 15:12, 16-20",
    "Lk 6:17, 20-26",
    "Gn 15:1-6; 21:1-3",
    "Heb 11:8, 11-12, 17-19",
    "1 Kgs 17:17-24",
    "Gal 1:11-19",
    "Hos 6:3-6",
    "Rom 4:18-25",
    "Wis 11:22-12:2",
    "2 Thes 1:11-2:2",
    "Dt 6:2-6",
    "Heb 7:23-28",
    "1 Sm 26:2, 7-9, 12-13, 22-23",
    "1 Cor 15:45-49",
    "Is 49:14-15",
    "Is 52:7-10",
    "Sir 15:16-21",
    "1 Cor 2:6-10",
    "Mt 5:17-37",
    "Dt 11:18, 26-28, 32",
    "Rom 3:21-25, 28",
    "Mt 7:21-27",
    "Mal 1:14b-2:2b, 8-10",
    "1 Thes 2:7b-9, 13",
    "Dt 5:12-15",
    "2 Cor 4:6-11",
    "Mk 2:23-3:6",
    "Sir 27:5-8",
    "1 Cor 15:54-58",
    "Lk 6:39-45",
    "Hos 2:16b, 17b, 21-22",
    "2 Cor 3:1b-6",
    "Is 43:18-19, 21-22, 24b-25",
    "1 Kgs 8:41-43",
    "Gal 1:1-2, 6-10",
    "Is 62:11-12",
    "Ti 3:4-7",
    "Lk 2:15-20",
    "Lv 19:1-2, 17-18",
    "1 Cor 3:16-23",
    "Mt 5:38-48",
    "Is 56:1-3a, 6-8",
    "Jn 5:33-36",
};