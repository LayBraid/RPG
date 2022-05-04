/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

    #include <stdlib.h>
    #include <unistd.h>

void my_putchar(char c);

int my_putnbr(int nb);

int my_getnbr(char *str);

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_strdup(char *str);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

char *my_strcat_c(char *dest, char const src);

char *my_strdel_c(char *src);

int my_atoi(const char *str);

char *my_strcat(char *s1, char *s2);

char *my_itoa(int nb);

void my_strcat_3(char **dest, char const *src);

#endif /* !LIB_H_ */
