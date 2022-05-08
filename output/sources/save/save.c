/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** save
*/

#include "my_rpg.h"

void open_save(void)
{
    int fd = open("data_save", O_RDONLY);

    if (fd == -1)
        fd = open("data_save", O_CREAT, S_IRWXU);
    close(fd);
}

int write_to_save(data_t *data)
{
    int fd = 0;
    int size = 0;

    open_save();
    fd = open("data_save", O_WRONLY);
    if (fd == -1)
        return (84);
    close(fd);
    return (0);
}
