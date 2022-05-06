/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"
#include "map.h"

void player_walk_down(data_t *data)
{
    if (data->my_map == 0)
        hyrule_move_down(data);
}

void player_walk_up(data_t *data)
{
    if (data->my_map == 0)
        hyrule_move_up(data);
}

void player_walk_right(data_t *data)
{
    if (data->my_map == 0)
        hyrule_move_right(data);
}

void player_walk_left(data_t *data)
{
    if (data->my_map == 0)
        hyrule_move_left(data);
}
