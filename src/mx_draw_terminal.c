#include "../inc/header.h"

void mx_draw_terminal() {
    for (int i = 0; i < terminal.h; i++) {
        for (int j = 0; j < terminal.w; j++) {
            attron(COLOR_PAIR(terminal.sym[i][j]->paint));
            mvprintw(i, j, "%lc", terminal.sym[i][j]->symbol);
            attroff(COLOR_PAIR(terminal.sym[i][j]->paint));
        }
    }
}
