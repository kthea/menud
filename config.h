/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* Colour scheme */
/* let's say that this is good enough for now  instructions I found on github were completely
   wrong. This url has completely garbage info: https://github.com/Ellipogus/dracula-dmenu
   Install.md is trash, contains completely irrelevant text, config.def.h is just the
   default file from suckless and the rest could be thrown in the Void without any loss.
*/
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ff79c6", "#282a36" },
	[SchemeSel] = { "#ff5555", "#bd93f9" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
