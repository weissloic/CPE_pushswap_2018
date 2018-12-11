/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "../include/my.h"

void insertion(Liste *liste, int nvNombre)
{
    Element *new = malloc(sizeof(*new));
    if (liste == NULL || new == NULL)
    {
        exit(EXIT_FAILURE);
    }
    new->number = nvNombre;

    new->next = liste->first;
    liste->first = new;
}

void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->first != NULL)
    {
        Element *aSupprimer = liste->first;
        liste->first = liste->first->next;
        free(aSupprimer);
    }
}

void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->first;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->number);
        actuel = actuel->next;
    }
    printf("NULL\n");
}

void create_list(char *nbr, Liste *liste)
{
    Element *nw_number = malloc(sizeof(nw_number));


    nw_number->number = my_getnbr(nbr);
    nw_number->next = liste->first;
    liste->first = nw_number;
}