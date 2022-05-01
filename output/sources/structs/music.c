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
    new->loop = loop;
    if (new->loop == 1)
        sfMusic_setLoop(new->music, sfTrue);
    new->volume = 5;
    sfMusic_setVolume(new->music, 5);
    new->is_playing = 0;
    new->next = data->musics;
    data->musics = new;
}
