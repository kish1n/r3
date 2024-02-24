#include "../inc/header.h"

void mx_stairs(){
    for(int i = 0; i < terminal.w; i++) {
        for(int j = 1; j < terminal.h; j++) {
            sym *this = terminal.sym[j][i];
            sym *upper = terminal.sym[j - 1][i];
            if (upper->symbol == ' ') {
                if (this->symbol != ' ') {
                    this->symbol = ' ';
                    this->paint = 0;
                    if (j + 1 < terminal.h) j++;
                    while (j + 1 < terminal.h &&
                           terminal.sym[j][i]->symbol != ' ') j++;
                    j--;
                }
            } else if (upper->symbol != ' ') {
                if (this->symbol == ' ') {
                    upper->paint = set.paint;
                    this->paint = 2;
                    this->symbol = mx_rand(33, 126);
                    if (j + 1 < terminal.h &&
                        terminal.sym[j][i]->symbol != ' ') j++;
                }
            }
        }
    }
}
