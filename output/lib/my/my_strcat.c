/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_strcat
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *my_strcat(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));

    if (str == NULL)
        return (NULL);
    while (s1[i] != '\0') {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}

void my_strcat_3(char **dest, char const *src)
{
    for (int i = 0; i < my_strlen(src); i++)
        *dest = my_strcat_c(*dest, src[i]);
}
