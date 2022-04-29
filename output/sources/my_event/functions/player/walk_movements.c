/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"

void player_walk_keys(data_t *data)
{
    data->player.state = WALK_DOWN;
}

void player_stop_walk_keys(data_t *data)
{
    data->player.state = NOTHING;
}
