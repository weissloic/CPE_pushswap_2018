/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include <stdio.h>
#include "../include/my.h"

void sa_func(t_element **l_a)
{
    t_element *temp;

    temp = *l_a;
    temp = temp->next;
    (*l_a)->next = temp->next;
    temp->next = *l_a;
    *l_a = temp;
}

t_element *put_in_list(t_element *l_a, int counter)
{
    t_element *temp;

    temp = malloc(sizeof(t_element));
    temp->number = counter;
    temp->next = l_a;
    l_a = temp;
    return (l_a);
}

void pb_func(t_element **l_a, t_element **l_b)
{
    int counter;

    counter = (*l_a)->number;
    *l_b = put_in_list(*l_b, counter);
    *l_a = (*l_a)->next;
}

void pa_func(t_element **l_a, t_element **l_b)
{
    int counter;

    counter = (*l_b)->number;
    *l_a = put_in_list(*l_a, counter);
    *l_b = (*l_b)->next;
}