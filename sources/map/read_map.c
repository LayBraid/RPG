/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** read_map
*/

#include "../../include/my_rpg.h"

char *make_map(char *filepath)
{
    char *map = NULL;
    struct stat st;
    int fd = -1;

    stat(filepath, &st);
    map = malloc(sizeof(char) * (st.st_size + 1));
    if (map == NULL)
        return (NULL);
    map[st.st_size] = '\0';
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (NULL);
    read(fd, map, st.st_size);
    close(fd);
    return (map);
}
