/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"

void initialize_events2(data_t *data)
{
    add_event(&data->my_event, "interact_npc", interact_npc);
    add_event(&data->my_event, "stop_interact_npc", stop_interact_npc);
    add_event(&data->my_event, "open_inventory", inventory_loop);
    add_event(&data->my_event, "open skill tree", init_skill_tree);
    add_event(&data->my_event, "move_enemy_aggro", move_enemy_aggro);
    add_event(&data->my_event, "enemy_move", enemy_move);
    add_event(&data->my_event, "enemy_attack", enemy_attack);
    add_event(&data->my_event, "loose", loose_game);
    add_event(&data->my_event, "event_dialog1", event_dialog1);
    add_event(&data->my_event, "attack_player", attack_player);
    add_event(&data->my_event, "attack_on_enemy", attack_on_enemy);
    add_event(&data->my_event, "check_exit_top", check_exit_top);
}

void initialize_events(data_t *data)
{
    first_event(&data->my_event, "add_3_coins", add_3_coins);
    add_event(&data->my_event, "player_walk_keys", player_walk_keys);
    add_event(&data->my_event, "player_stop_walk_keys",
    player_stop_walk_keys);
    add_event(&data->my_event, "player_walk_down", player_walk_down);
    add_event(&data->my_event, "player_walk_up", player_walk_up);
    add_event(&data->my_event, "player_walk_left", player_walk_left);
    add_event(&data->my_event, "player_walk_right", player_walk_right);
    add_event(&data->my_event, "zoom_map", zoom_map);
    add_event(&data->my_event, "unzoom_map", unzoom_map);
    add_event(&data->my_event, "pause_event", pause_event);
    add_event(&data->my_event, "check_range", check_range);
    add_event(&data->my_event, "enemies_aggro", enemies_aggro);
    initialize_events2(data);
}
