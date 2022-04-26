/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"

void initialize_events(data_t *data)
{
    first_event(&data->my_event, "add_3_coins", add_3_coins);
    add_event(&data->my_event, "player_walk_keys", player_walk_keys);
    add_event(&data->my_event, "player_walk_down", player_walk_down);
    add_event(&data->my_event, "player_walk_up", player_walk_up);
    add_event(&data->my_event, "player_walk_left", player_walk_left);
    add_event(&data->my_event, "player_walk_right", player_walk_right);
    add_event(&data->my_event, "zoom_map", zoom_map);
    add_event(&data->my_event, "unzoom_map", unzoom_map);
}
