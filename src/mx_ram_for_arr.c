#include "../inc/header.h"

void mx_ran_for_arr(void) {
    terminal.sym = malloc(sizeof(sym *) * terminal.h);
    for(int i = 0; i < terminal.h; i++) {

        terminal.sym[i] = malloc(sizeof(sym) * terminal.w);

        for (int j = 0; j < terminal.w; j++) {

            terminal.sym[i][j] = malloc(sizeof(sym));
            terminal.sym[i][j]->symbol = ' ';
            terminal.sym[i][j]->paint = 0;

        }
    }
}
