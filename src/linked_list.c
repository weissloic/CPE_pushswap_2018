/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include <stdio.h>
#include "../include/my.h"

t_entities *initialisation(void)
{
    t_entities *l_a = malloc(sizeof(*l_a));
    t_element *entities = malloc(sizeof(*entities));

    if (l_a == NULL || entities == NULL) {
        return (84);
    }
    entities->next = NULL;
    return (l_a);
}

void create_list(char *nbr, t_entities *liste)
{
    t_element *list = malloc(sizeof(list));

    list->number = my_getnbr(nbr);
    list->next = liste->first;
    liste->first = list;
}

void sort_my_list(t_element **l_a, t_element **l_b, int ac)
{
    t_element *tmp = l_a;
    int counter = ac - 2;
    int i = 0;

    tmp = *l_a;
    while (tmp->next != NULL && tmp->number < tmp->next->number) {
        i++;
        tmp = tmp->next;
    }
    if (i != counter) {
        my_list_sort(l_a, l_b);
        my_putchar('\b');
        my_putchar('\n');
    }
    else
        my_putchar('\n');
}

int main(int ac, char **av)
{
    t_element **l_1 = initialisation();
    t_element **l_2 = initialisation();

    if (ac < 2)
        return (84);
    for (int i = ac - 1; i != 0; i--)
        create_list(av[i], l_1);
    sort_my_list(l_1, l_2, ac);
    return (0);
}