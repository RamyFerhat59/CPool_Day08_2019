/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);    

char *my_strdup(char const *src)
{
    char *dst = malloc(my_strlen(src) + 1);
    if (dst == NULL)
        return NULL;
    my_strcpy(dst, src);
    return (dst);
}
