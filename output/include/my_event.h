/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#ifndef RPG_MY_EVENT_H
    #define RPG_MY_EVENT_H

    #include "structures.h"

void call_event(data_t *data, char *event);

void initialize_events(data_t *data);

void add_event(event_t **node, char *name, void (*function)(data_t *data));

void first_event(event_t **node, char *name, void (*function)(data_t *data));

void add_3_coins(data_t *data);

void player_walk_keys(data_t *data);

void zoom_map(data_t *data);

void unzoom_map(data_t *data);

void player_walk_down(data_t *data);

void player_walk_up(data_t *data);

void player_walk_right(data_t *data);

void player_walk_left(data_t *data);

void inventory_loop(data_t *data);

void pause_event(data_t *data);

void player_stop_walk_keys(data_t *data);

void check_range(data_t *data);

void interact_npc(data_t *data);

void stop_interact_npc(data_t *data);

void init_skill_tree(data_t *data);

void enemies_aggro(data_t *data);

void move_enemy_aggro(data_t *data);

void enemy_move(data_t *data);

void enemy_attack(data_t *data);

void loose_game(data_t *data);

void event_dialog1(data_t *data);

void attack_player(data_t *data);

void attack_on_enemy(data_t *data);

void check_exit_top(data_t *data);

#endif
