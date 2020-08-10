/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** find prime number greater 
*/

#include <stdio.h>

int my_find_prime_sup(int nb)
{
    int i;
    
    if (nb < 0 )
        return (0);
    if (nb == 2)
        return (nb);
    for (i = 3; i*i <= nb; i++){
        if (nb%i == 0)
            return my_find_prime_sup(nb + 1);
    }
    return (nb);
}
