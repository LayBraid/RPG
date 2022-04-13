/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** music
*/

#include "my_rpg.h"

void create_music(data_t *data, const char *path, int loop)
{
    music_t *new = malloc(sizeof(music_t));

    new->music = sfMusic_createFromFile(path);
}