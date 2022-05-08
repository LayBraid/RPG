/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_newgame
*/

#include "my_rpg.h"
#include "player.h"
#include "parsing_data.h"

void init_new_game(data_t *data)
{
    music_t *tmp = data->musics;
    enemy_t *tmp_enemy = data->enemies;

    sfRectangleShape_setPosition(data->player.rectangle, (sfVector2f)
    {120, 1500 - 26 - 135 + 750});
    data->player.position = sfRectangleShape_getPosition(data->player.rectangle);
    data->player.state = IDLE_DOWN;
    data->quest = NULL;
    data->enemies = NULL;
    data->npcs = NULL;
    parsing_data(data);
    // sfView_setCenter(data->main, data->player.position);
    sfMusic_stop(tmp->music);
    tmp = tmp->next;
    sfMusic_play(tmp->music);
    data->video.ui = 2;
}
