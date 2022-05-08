/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_newgame
*/

#include "player.h"
#include "parsing_data.h"
#include "map.h"

void init_new_game(data_t *data)
{
    music_t *tmp = data->musics;

    data->player.position = sfRectangleShape_getPosition(data->player.rectangle);
    data->player.state = IDLE_DOWN;
    data->quest = NULL;
    data->enemies = NULL;
    data->npcs = NULL;
    parsing_data(data);
    sfMusic_stop(tmp->music);
    tmp = tmp->next;
    sfMusic_play(tmp->music);
    set_map(data, 0);
    data->video.ui = 2;
}
