#include "../inc/header.h"

void mx_settings() {
    int ch = getch();
    if (ch == 'q') {
        echo();
        curs_set(TRUE);
        endwin();
        exit(0);
    } else if (ch >= '0' && ch <= '9') {
        set.paint = ch - '0';
    }
}
