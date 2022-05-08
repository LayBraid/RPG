/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *new = malloc((my_strlen(str) + 1) * sizeof(char));
    int i = 0;

    while (str[i]) {
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}
