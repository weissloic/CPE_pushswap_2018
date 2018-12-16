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
t_entities *initialisation(void);
void create_list(char *nbr, t_entities *liste);
void sort_my_list(t_element **l_a, t_element **l_b, int ac);
void my_list_sort_two(t_element **l_a, t_element **l_b);
void my_list_sort(t_element **l_a, t_element **l_b);
void sa_func(t_element **l_a);
t_element *put_in_list(t_element *l_a, int counter);
void pb_func(t_element **l_a, t_element **l_b);
void pa_func(t_element **l_a, t_element **l_b);
int my_getnbr(char *test);


#endif