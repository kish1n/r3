#pragma once
// макроопределениями, которые используются в программировании на языке C для включения функций, переменных и структур
#define _XOPEN_SOURCE   600
#define _POSIX_C_SOURCE 200112L
// другие заголовочные файлы
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <stddef.h>
#include <wchar.h>

#define DEFAULT_COLOR 1

extern struct mx_set {
    int spd;
    int paint;
} set;

typedef struct mx_sym {
    char symbol;
    int paint;
} sym;

extern struct mx_trm {
    int w;
    int h;
    sym ***sym;
} terminal;

bool mx_isdigit(int c);
int mx_atoi(const char *str);
int mx_rand(int min, int max);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(char *s);
void mx_draw_terminal();
void mx_exit(int status);
void mx_init();
void mx_init_colors();
void mx_print_chars(void (*action)(void));
void mx_print_syms(void);
void mx_printerr(char *str);
void mx_ran_for_arr(void);
void mx_settings();
void mx_stairs();
void mx_start();
void mx_top_str(void);
void mx_turn_on(bool flag);
void mx_wake_up();


