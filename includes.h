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

typedef struct my_lst{
    int nbr;
    struct my_lst *next;
} type_lst;

int comparator (const void * first, const void * second) {
   int firstInt = * (const int *) first;
    int secondInt = * (const int *) second;
    return firstInt - secondInt;
    }

#endif