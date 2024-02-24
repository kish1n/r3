#include "../inc/header.h"

void mx_turn_on(bool flag){
    if(flag){
        mx_start();
        mx_print_chars(mx_print_syms);
    }
    else {
        mx_start();
        mx_wake_up();
        mx_print_chars(mx_print_syms);
    }
}
