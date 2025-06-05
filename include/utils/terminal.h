#ifndef _TERMINAL_H
#define _TERMINAL_H     1

#define CLEAR_SCREEN() printf("\033[2J\033[H")

#define BLACK   "\e[30m"
#define RED     "\e[31m"
#define GREEN   "\e[32m"
#define YELLOW  "\e[33m"
#define BLUE    "\e[34m"
#define MAGENTA "\e[35m"
#define CYAN    "\e[36m"
#define WHITE   "\e[37m"

/*
    Currently in MinOS bold text isn't supported, so we just make it display
    the non bold version for now.
*/
#define BBLACK   "\e[30m"
#define BRED     "\e[31m"
#define BGREEN   "\e[32m"
#define BYELLOW  "\e[33m"
#define BBLUE    "\e[34m"
#define BMAGENTA "\e[35m"
#define BCYAN    "\e[36m"
#define BWHITE   "\e[37m"
#define RESET    "\e[0m"

#endif