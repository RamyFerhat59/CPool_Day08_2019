/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** racine carre
*/

#include <stdio.h>

int my_compute_square_root(int nb)
{
    int temp;
    int sqrt;
    sqrt = nb / 2;
    temp = 0;

    if((int)nb == nb){
        while (sqrt != temp){
            temp = sqrt;
            sqrt = (nb/temp + temp) / 2;
        }
        if ((int)sqrt == sqrt)
            return (sqrt);
        else
            return (0);
    }
    else
        return (0);
}
