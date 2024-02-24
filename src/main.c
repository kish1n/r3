#include "../inc/header.h"

struct mx_trm terminal;
struct mx_set set;

int main (int argc, char *argv[]){
    if(argc < 2){
        mx_turn_on(false);
    } else if (argc == 2){
        if(mx_strcmp(argv[1], "-s") == 0){
            mx_turn_on(true);
        }
        else mx_printerr("usage:2 ./matrix_rain [-s]\n");
    }
    else mx_printerr("usage:1 ./matrix_rain [-s]\n");

    return 0;
}

