static const Block blocks[] = {
	/*Icon*/	   /*Command*/		             /*Update Interval*/	/*Update Signal*/
  //{"",         "sb_music-apple",           1,                   7},
  {"",         "sb_temp",                  3600,                5},
  {"",         "sb_mailbox",               5,                   4},
  {"",         "sb_volume",                1,                   3},
  {"",         "sb_date",                  5,                   1},
  {"",         "sb_help-icon",             0,                   8},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
//static unsigned int delimLen = 5;
