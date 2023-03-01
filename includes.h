#ifndef INCLUDES_H
# define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// void gd_putnbr(int nb);
// void gd_putchar(char c);
void gd_putstr(char *str);
// int gd_strlen(char *str):
int gd_atoi(char *str);

#define VRAI 1
#define FAUX 0
typedef int BOOLEAN;

typedef struct my_struct{
    int minutes;
    int hours;
} type_struc;

#endif