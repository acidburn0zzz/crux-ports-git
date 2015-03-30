#define CWD "cwd: "
#define CURSR " > "
#define EMPTY "   "

int mtimeorder = 0; /* Set to 1 to sort by time in the default case */

struct assoc assocs[] = {
	{ "\\.(avi|mp4|mkv|mp3|ogg|flac)$", "mpv" },
	{ "\\.(png|jpg|gif)$", "feh" },
	{ "\\.(html|svg|.pdf)$", "firefox" },
	{ ".", "vim" },
};

struct key bindings[] = {
	/* Quit */
	{ 'q',            SEL_QUIT },
	/* Back */
	{ KEY_BACKSPACE,  SEL_BACK },
	{ KEY_LEFT,       SEL_BACK },
	/* Inside */
	{ KEY_ENTER,      SEL_GOIN },
	{ '\r',           SEL_GOIN },
	{ KEY_RIGHT,      SEL_GOIN },
	/* Filter as you type */
	{ '/',            SEL_TYPE },
	{ 'f',            SEL_TYPE },
	{ CONTROL('f'),   SEL_TYPE },
	/* Next */
	{ KEY_DOWN,       SEL_NEXT },
	/* Previous */
	{ KEY_UP,         SEL_PREV },
	/* Page down */
	{ KEY_NPAGE,      SEL_PGDN },
	/* Page up */
	{ KEY_PPAGE,      SEL_PGUP },
	/* Change dir */
	{ 'c',            SEL_CD },
	/* Toggle sort by time */
	{ 't',            SEL_MTIME },
	{ CONTROL('L'),   SEL_REDRAW },
	/* Run command */
	{ '!',            SEL_RUN,    "sh" },
	{ 'v',            SEL_RUN,    "vim" },
	/* Run command with argument */
	{ 'e',            SEL_RUNARG, "vi" },
};
