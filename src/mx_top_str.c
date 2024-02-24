#include "../inc/header.h"

void mx_top_str(void){
    for (int i = 0; i < terminal.w; i++) {
        sym *sy = terminal.sym[0][i];
        if(sy->symbol == ' '){
            if(!(rand() % 30)){
                sy->paint = 2;
                sy->symbol = mx_rand(33, 126);
            }
        } else {
            if(!(rand() % 5)){
                sy->paint = 0;
                sy->symbol = ' ';
            }
        }
    }
}
