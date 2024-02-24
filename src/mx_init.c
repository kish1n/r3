#include "../inc/header.h"

void mx_init() {
    initscr();
    noecho();
    curs_set(FALSE);
    cbreak();
    timeout(0);

    getmaxyx(stdscr, terminal.h, terminal.w);
    terminal.h++;
    terminal.w++;
}
