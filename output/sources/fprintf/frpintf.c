/*
** EPITECH PROJECT, 2022
** output
** File description:
** frpintf
*/

#include "my.h"
#include <stdarg.h>
#include <stdio.h>

char *add_str(char *str, int *i, char *str2)
{
    char *new = malloc(sizeof(char) * (my_strlen(str) + my_strlen(str2) + 1));
    int k = 0;
    int j = 0;
    int l = 0;
    int save = 0;

    for (; str[j] != '\0'; j++) {
        if (j == *i) {
            for (; str2[k] != '\0'; k++)
                new[l++] = str2[k];
            j++;
            save = l;
        } else
            new[l++] = str[j];
    }
    *i = save;
    new[l] = '\0';
    return (new);
}

static int nblen(int nbr)
{
    int len;

    len = (nbr <= 0 ? 1 : 0);
    while (nbr != 0) {
        nbr = nbr / 10;
        len++;
    }
    return (len);
}

char *my_itoa(int n)
{
    unsigned int nbr = (n < 0 ? -n : n);
    int sign = (n < 0 ? 1 : 0);
    int len = nblen(n);
    char *res = NULL;

    res = (char *)malloc((len + 1) * sizeof(char));
    res[len--] = '\0';
    while (len >= 0) {
        res[len] = nbr % 10 + '0';
        nbr /= 10;
        len--;
    }
    if (sign == 1)
        res[0] = '-';
    return (res);
}

char *check_format(char *str, int *i, va_list ap)
{
    if (str[*i + 1] == 's')
        return (add_str(str, i, va_arg(ap, char *)));
    else if (str[*i + 1] == 'd')
        return (add_str(str, i, my_itoa(va_arg(ap, int))));
    return (str);
}

char *my_fprintf(char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            str = check_format(str, &i, ap);
            i--;
        }
    }
    va_end(ap);
    return (str);
}
