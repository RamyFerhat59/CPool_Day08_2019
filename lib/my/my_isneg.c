/*
** EPITECH PROJECT, 2019
** task04
** File description:
** check positive negatif
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_isneg( int n){
    if ( n < 0){
        my_putchar('N');
    }
    else if ( n >= 0){
        my_putchar('P');
    }
}

