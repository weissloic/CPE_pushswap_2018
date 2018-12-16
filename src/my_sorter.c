/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include <stdio.h>
#include "../include/my.h"

void my_list_sort_two(t_element **l_a, t_element **l_b)
{
    while (*l_b != NULL) {
        pa_func(l_a, l_b);
        my_putstr("pa ");
    }
}

void my_list_sort(t_element **l_a, t_element **l_b)
{
    t_element *tmp;
    int i = 1;

    while (i == 1) {
        i = 0;
        tmp = *l_a;
        while ((*l_a)->next != NULL) {
            if ((*l_a)->number > (*l_a)->next->number) {
                sa_func(l_a);
                my_putstr("sa ");
                i = 1;
            }
            pb_func(l_a, l_b);
            my_putstr("pb ");
            tmp = tmp->next;
        }
    my_list_sort_two(l_a, l_b);
    }
}