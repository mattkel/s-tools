/* user and group to drop privileges to */
static const char *user  = "shamo";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#111111",   /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#770000",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.8;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Locked";

/* text color */
static const char * text_color = "#8ae234";

/* text size (must be a valid size) */
//static const char * text_size = "fixed";
static const char * text_size = "lucidasans-24";
