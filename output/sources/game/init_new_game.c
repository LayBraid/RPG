/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_newgame
*/

#include "my_rpg.h"

void init_new_game(data_t *data)
{
    music_t *tmp = data->musics;

    sfMusic_stop(tmp->music);
    tmp = tmp->next;
    sfMusic_play(tmp->music);
    data->video.ui = 2;
}
