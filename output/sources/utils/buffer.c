/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

char *get_in_buffer(char *path)
{
    int fd;
    char *buffer;
    struct stat st;

    stat(path, &st);
    buffer = malloc(sizeof(char) * ((st.st_size + 1)));
    fd = open(path, O_RDONLY);
    if (fd == -1)
        return "error";
    read(fd, buffer, st.st_size);
    buffer[st.st_size] = '\0';
    close(fd);
    return buffer;
}

char *extract_between_limits(char const *exp, int s1, int s2)
{
    int length = s2 - s1;
    char *result = malloc(sizeof(char) * (length + 2));

    for (int index = 0; index <= length; ++index)
        result[index] = exp[index + s1];
    result[length + 1] = '\0';
    return result;
}

int get_it_char(const char *str, char c, int index)
{
    int it = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c && it == index)
            return i;
        if (str[i] == c && it != index)
            it++;
    }
    return -1;
}

int get_it_char_two(const char *str, char c, int index)
{
    int it = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c && str[i + 1] == c && it == index)
            return i;
        if (str[i] == c && str[i + 1] == c) {
            it++;
            i++;
        }
    }
    return -1;
}
