/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int c = 0;

    while (dest[i] != '\0')
        i++;

    while (src[c] != '\0') {
        dest[i] = src[c];
        i++;
        c++;
    }
    dest[i] = '\0';
    return (dest);
}
