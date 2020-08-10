/*
** EPITECH PROJECT, 2019
** concat_params.c
** File description:
** concat_params
*/

#include <stdlib.h>

char *my_strcat(char *dest, char const *src);
int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
    
    
char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int count = 0;

    for (; i < argc; i++) {
        for(j = 0; argv[i][j] != '\0'; j++)
            count++;
    }

    char *str = malloc(sizeof(char)*count + argc);

    for (i = 0; i < argc; i++) {
        my_strcat(str, argv[i]);
        my_strcat(str,"\n");
    }
    return (str);
}
