/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "my.h"

int my_getnbr(char *str)
{
    int co = 0;
    int rst = 0;
    int isneg = 1;

    while (str[co]) {
        if (str[co] == '-')
            isneg = - isneg;
        else if (str[co] >= 48 && str[co] <= 57) {
            rst = ((rst * 10) + (str[co] - 48));
        }
        co++;
    }
    return (rst * isneg);
}