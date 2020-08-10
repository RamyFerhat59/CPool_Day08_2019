/*
** EPITECH PROJECT, 2019
** my_is_prime.c
** File description:
** nombre premier
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int i = 0;
    int p = 0;

    if (nb < 0)
        return (0);

    for (i = 1; i <=nb; i++){
        if (nb%i == 0){
            p++;
        }
    }
    if(p == 2){
        return (1);
    }
    else{
        return (0);
    }
}
