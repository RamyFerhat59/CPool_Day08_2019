/*
** EPITECH PROJECT, 2019
** my_str_to_word_array.c
** File description:
** task04
*/

#include "include/my.h"
#include <stdlib.h>

int check_alpha(char const *str, int i)
{
    int test;

    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )
        test = 1;
    else if (str[i] >= '0' && str[i] <= '9')
        test = 1;
    else
        test = 0;
    return (test);
}

int check_word(char const *str, int i)
{
    while(str[i] && check_alpha(str, i) == 0) {
        i++;
    }
    return (i);
}

int length(char const *str, int i)
{
    while(str[i] && check_alpha(str, i) == 1) {
        i++;
    }
    return (--i);
}

char **my_str_to_word_array(char const *str)
{
    char **tab = malloc(sizeof(char *) * my_strlen(str) + 1);
    int i = 0;
    int j = 0;
    int k = 0;

    if (*str == NULL)
        return NULL;

    tab[0] = malloc(sizeof(char) * length(str, i) + 1);
    while (str[i] != '\0') {
        if (check_alpha(str, i) == 0) {
            i = check_word(str, i);
            tab[j + 1] = malloc(sizeof(char) * length(str, i) + 1);
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    tab[j + 1] = NULL;
    return (tab);
}
