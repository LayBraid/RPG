/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_newgame
*/

#include "my_rpg.h"
#include "hud.h"

void init_new_game(data_t *data)
{
    music_t *tmp = data->musics;

    init_hud(data);
    sfMusic_stop(tmp->music);
    tmp = tmp->next;
    sfMusic_play(tmp->music);
    data->loading_state = 25;
}
