#include "../inc/header.h"

int mx_strlen(char *s) {
    return (*s) ? mx_strlen(++s) + 1 : 0;
}


