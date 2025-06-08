#ifndef _TERMINAL_H
#define _TERMINAL_H     1

#include <utils/arguments.h>

#define CLEAR_SCREEN() printf("\033[2J\033[H")
#define COLOUR(c) (get_arguments().no_ansi ? "" : (c))

#define BLACK     COLOUR("\e[30m")
#define RED       COLOUR("\e[31m")
#define GREEN     COLOUR("\e[32m")
#define YELLOW    COLOUR("\e[33m")
#define BLUE      COLOUR("\e[94m")
#define MAGENTA   COLOUR("\e[35m")
#define CYAN      COLOUR("\e[36m")
#define WHITE     COLOUR("\e[37m")

#define BBLACK    COLOUR("\e[30m")
#define BRED      COLOUR("\e[31m")
#define BGREEN    COLOUR("\e[32m")
#define BYELLOW   COLOUR("\e[33m")
#define BBLUE     COLOUR("\e[94m")
#define BMAGENTA  COLOUR("\e[35m")
#define BCYAN     COLOUR("\e[36m")
#define BWHITE    COLOUR("\e[37m")
#define RESET     COLOUR("\e[0m")
#endif

