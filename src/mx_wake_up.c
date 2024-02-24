#include "../inc/header.h"

void mx_wake_up(){

	char *intro[] = {
		"Wake up , Neo..",
		"The Matrix has you..",
		"Follow the white rabbit",
		"Knock, knock, Neo"
	};

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < mx_strlen(intro[i]); j++){
			mvaddch(4, 2 + j, intro[i][j] | COLOR_PAIR(1));
			refresh();

			if(getch() == 'q') mx_exit(1);

			usleep(80000);
		}
		clear();
	}
}

