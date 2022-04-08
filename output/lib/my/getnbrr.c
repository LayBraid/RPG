/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "my.h"

void my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = 0;

    while (i < len / 2) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
        i++;
    }
}

char value(int nbr)
{
    if (nbr >= 0 && nbr <= 9)
        return (char)(nbr) + '0';
    else if (nbr > 9)
        return (char)(nbr - 10);
    return 'b';
}

char *getnbrr(int nbr)
{
    int rank = 0;
    char *result = malloc(sizeof(char) * 255);
    if (nbr == 0) {
        return "0";
    }
    while (nbr != 0) {
        result[rank] = value(nbr % 10);
        nbr = nbr / 10;
        rank++;
    }
    result[rank++] = 0;
    my_revstr(result);
    return result;
}
