/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** swap parameter values
*/

#include <stdio.h>

void my_putchar(char c);

void my_swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
