/*
** EPITECH PROJECT, 2019
** my_sort_int_array.c
** File description:
** sorts
*/

#include <stdio.h>

void my_sort_int_array(int *array, int size)
{
    int temp;

    for (int i = 1; i < size; i++){
        for (int j = 0; j < (size-i); j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
