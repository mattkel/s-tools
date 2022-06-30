static int topbar = 1; // 0 bottom, 1 top

static const char *fonts[] = {
  "monospace:size=10:antialias=true:autohint=true", // text 10,12
  "Noto Color Emoji:style=Regular:pixelsize=12" // Emoji 13,16
};

static const char *prompt = NULL; // -p  option; prompt to the left of input field
static const char *colors[SchemeLast][2] = {
  //                fg         bg
  //[SchemeNorm] = { "#000000", "#ffffff" },
  //[SchemeSel]  = { "#000000", "#bbbbbb" },
  [SchemeNorm] = { "#bbbbbb", "#222222" },
  [SchemeSel]  = { "#eeeeee", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },

	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
  [SchemeOut]  = { "#000000", "#00ffff" },
};

static unsigned int lines = 0; // -l option; use vertical list with given number of lines
static unsigned int lineheight = 22; // -h option; height of a menu line // 26, 28
static unsigned int min_lineheight = 8;
static const char worddelimiters[] = " "; // for example: " /?\"&[]" 
