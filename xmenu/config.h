static struct Config config = {
	/* font, separate different fonts with comma */
	.font = "GoMono Nerd Font:size=11:antialias=true:autohint=true,JoyPixels:style=Regular:pixelsize=24:antialias=true:autohint=true",

	/* colors */
  .background_color = "#222222",
  .foreground_color = "#bbbbbb",
  .selbackground_color = "#005577",
  .selforeground_color = "#eeeeee",
  .separator_color = "#222222",
  .border_color = "#444444",
  //.background_color = "#444444",
  //.foreground_color = "#cccccc",
  //.selbackground_color = "#777777",
  //.selforeground_color = "#ffffff",
  //.separator_color = "#444444",
  //.border_color = "#444444",

	/* sizes in pixels */
	.width_pixels = 130,        /* minimum width of a menu */
	.height_pixels = 26,        /* height of a single menu item */
	.border_pixels = 2,         /* menu border */
	.separator_pixels = 16,      /* space around separator */
	.gap_pixels = 6,            /* gap between menus */

	/* text alignment, set to LeftAlignment, CenterAlignment or RightAlignment */
	.alignment = LeftAlignment,

	/* geometry of the right-pointing isoceles triangle for submenus */
	.triangle_width = 3,
	.triangle_height = 7,

	/* the icon size is equal to .height_pixels - .iconpadding * 2 */
	.iconpadding = 4,

	/* area around the icon, the triangle and the separator */
	.horzpadding = 8,
};

/*
 * KEYBINDINGS
 * Look at your /usr/include/X11/keysymdef.h  (or the equivalent file
 * in your system) for a list of key symbol constants, and change the
 * macros below accordingly.  All key symbol constants begin with the
 * prefix XK_.
 */
#define KSYMFIRST   XK_g       /* select first item */
#define KSYMLAST    XK_G       /* select last item */
#define KSYMUP      XK_k       /* select previous item */
#define KSYMDOWN    XK_j       /* select next item */
#define KSYMLEFT    XK_h       /* close current menu */
#define KSYMRIGHT   XK_l       /* enter selected item */
