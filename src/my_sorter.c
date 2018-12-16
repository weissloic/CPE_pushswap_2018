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

void my_swap_sort(t_element **l_a, int j)
{
    sa_func(l_a);
    my_putstr("sa ");
    j = 1;
}

void my_put_in_b(t_element **l_a, t_element **l_b, t_element *tmp)
{
    pb_func(l_a, l_b);
    my_putstr("pb ");
    tmp = tmp->next;
}

void my_list_sort(t_element **l_a, t_element **l_b)
{
    t_element *tmp;
    int j = 1;

    while (j == 1) {
        j = 0;
        tmp = *l_a;
        while ((*l_a)->next != NULL) {
            if ((*l_a)->number > (*l_a)->next->number)
                my_swap_sort(l_a, j);
            my_put_in_b(l_a, l_b, tmp);
        }
    my_list_sort_two(l_a, l_b);
    }
}