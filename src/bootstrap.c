/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include <stdio.h>


void swap_elem(int *array, int index1, int index2)
{
    int tmp = 0;
    int tmp2 = 0;


    for(int i = 0; i < 6; i++) {
        if (array[i] == index1)
            tmp = i;
        if (array[i] == index2)
            tmp2 = i;
    }

    array[tmp2] = index1;
    array[tmp] = index2;

    for (int i = 0; i < 6; i++)
        printf("%d", array[i]);
} 

void swap_elem_two(int *array, int size)
{
    int tmp = 0;
    
    array[1] = tmp;
    array[1] = array[2];
    array[2] = tmp;
}

void bubble_sort_array(int *array, int size)
{
    int i = 0;
    int j = 0;
    int tmp = 0;

    for (i = 0; i < size; i++) {
        for (j = i; j < size; j++) {
            if (array[j] < array[i]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
        printf("%d\n",  array[i]);
}

/*int main(void)
{

    //int array[6] = {45, 56, 3, 2, 9, 0};

    //bubble_sort_array(array, 6);

    return (0);
}*/