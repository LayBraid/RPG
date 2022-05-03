/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** music
*/

#include "my_rpg.h"

void add_music(data_t *data, char *path, int loop)
{
    music_t *new = malloc(sizeof(music_t));
    music_t *tmp = data->musics;

    new->music = sfMusic_createFromFile(path);
    new->next = NULL;
    if (loop == 1)
        sfMusic_setLoop(new->music, sfTrue);
    sfMusic_setVolume(new->music, 50);
    if (data->musics == NULL)
        data->musics = new;
    else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
}
