/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include <stdio.h>
#include "../include/my.h"

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->number = 0;
    element->next = NULL;
    liste->first = element;

    return liste;
}

/*Liste ajouterEnFin(Element *liste, int valeur)
{
    Element *nouvelElement = malloc(sizeof(Element));
    nouvelElement->number = valeur;
    nouvelElement->next = NULL;
 
    if(liste == NULL)
    {
        return (nouvelElement);
    }
    else
    {
        Element* temp = liste;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nouvelElement;
        return (liste);
    }
}*/

void ajouterEnTete(Element liste, int valeur)
{
    /* On crée un nouvel élément */
    Element* nouvelElement = malloc(sizeof(Element));
    nouvelElement->number = valeur;
    nouvelElement->next = liste;
}

int main(int ac, char **av)
{
    Liste *l_1 = initialisation();
    Liste *l_2 = initialisation();

    
    //suppression(l_1);

    for (int i = ac - 1; i != 0; i--) {
        //suppression(l_1);
        create_list(av[i], l_1);
    }
    insertion(l_1, 10);
    suppression(l_1);
    afficherListe(l_1);
}