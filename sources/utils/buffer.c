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

    buffer = malloc(sizeof(char) * (3000));
    fd = open(path, O_RDONLY);
    if (fd == -1)
        return "error";
    read(fd, buffer, 3000);
    buffer[3000] = '\0';
    close(fd);
    return buffer;
}
