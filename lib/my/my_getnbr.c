/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "my.h"

int my_getnbr(char *test)
{
    int co = 0;
    int rst = 0;
    int neg = 1;

    while (test[co]) {
        if (test[co] == '-')
            neg = - neg;
        else if (test[co] >= 48 && test[co] <= 57) {
            rst = ((rst * 10) + (test[co] - 48));
        }
        co++;
    }
    return (rst * neg);
}