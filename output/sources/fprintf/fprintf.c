/*
** EPITECH PROJECT, 2022
** output
** File description:
** fprintf
*/

#include "my.h"
#include <stdarg.h>
#include <stdio.h>

static char *add_str(char *str, int *i, char *str2)
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

static char *check_format(char *str, int *i, va_list ap)
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
