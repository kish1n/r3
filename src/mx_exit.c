#include "../inc/header.h"

void mx_exit(int status) {
    noecho();
    curs_set(FALSE);
    endwin();
    exit(status);
}
