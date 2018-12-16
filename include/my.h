/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my_h
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MY_LIST_H_
#define MY_LIST_H_


//typedef struct Element Element;
typedef struct Element
{
    int number;
    struct Element *next;
}t_element;

typedef struct Liste
{
    t_element *first;
}t_entities;

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
void swap_elem(int *array, int index1, int index2);
void bubble_sort_array(int *array, int size);


#endif