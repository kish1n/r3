#include "../inc/header.h"

void mx_print_chars(void (*action)(void)) { //run
    set.paint = DEFAULT_COLOR;
	while(true){
        mx_draw_terminal();
        action();
		timeout(set.spd);
        mx_settings();
		refresh();
		usleep(80000);
	}
}

