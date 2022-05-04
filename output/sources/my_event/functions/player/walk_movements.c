/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"
#include "enemies.h"

void player_walk_keys(data_t *data)
{
    call_event(data, "check_range");
    calculate_new_coord_effects(data);
}

void player_stop_walk_keys(data_t *data)
{
    if (data->player.state < 4)
        return;
    data->player.state -= 4;
}
