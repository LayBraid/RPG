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
    add_event(&data->my_event, "player_stop_walk_keys", player_stop_walk_keys);
    add_event(&data->my_event, "player_walk_down", player_walk_down);
    add_event(&data->my_event, "player_walk_up", player_walk_up);
    add_event(&data->my_event, "player_walk_left", player_walk_left);
    add_event(&data->my_event, "player_walk_right", player_walk_right);
    add_event(&data->my_event, "zoom_map", zoom_map);
    add_event(&data->my_event, "unzoom_map", unzoom_map);
    add_event(&data->my_event, "pause_event", pause_event);
    add_event(&data->my_event, "check_range", check_range);
    add_event(&data->my_event, "enemies_aggro", enemies_aggro);
    add_event(&data->my_event, "interact_npc", interact_npc);
    add_event(&data->my_event, "stop_interact_npc", stop_interact_npc);
    add_event(&data->my_event, "open_inventory", inventory_loop);
    add_event(&data->my_event, "open skill tree", init_skill_tree);
}
