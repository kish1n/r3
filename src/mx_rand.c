#include "../inc/header.h"

int mx_rand(int min, int max){
    return min + rand() % (max - min + 1);
}
