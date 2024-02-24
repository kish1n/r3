#include "../inc/header.h"

void mx_init_colors() {
    curs_set(0);
    start_color();

    int colors[] = {COLOR_BLACK, COLOR_GREEN, COLOR_WHITE, COLOR_CYAN, COLOR_BLUE, COLOR_YELLOW, COLOR_RED, COLOR_MAGENTA};
    int num_colors = 8;  // Указываем количество цветов вручную

    for (int i = 0; i < num_colors; i++) {
        init_pair(i, colors[i], COLOR_BLACK);
    }
}

