/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#ifndef OUTPUT_PLAYER_H
    #define OUTPUT_PLAYER_H

    #include "structures.h"

enum Player_state {
    IDLE_DOWN,
    IDLE_UP,
    IDLE_RIGHT,
    IDLE_LEFT,
    WALK_DOWN,
    WALK_UP,
    WALK_RIGHT,
    WALK_LEFT,
    COMBAT_DOWN,
    COMBAT_UP,
    COMBAT_RIGHT,
    COMBAT_LEFT,
};

void setup_texture_player(data_t *data);

sfIntRect get_rect_player(int state, int animation);

void clock_move_player(data_t *data);

void update_anim_move_player(data_t *data);

void clock_stop_display_life(data_t *data);

sfVector2f get_size_sword(int type, int value);

IntR_t get_rect_sword(int type, int value);

void add_effect_player(data_t *data, player_t *player, int type,
sfVector2f player_position);

void texture_effect_player(data_t *data, player_t *player, int id);

void setup_effect_player(player_t *player, int id_effect,
sfVector2f player_position);

void display_effect_player(data_t *data);

void player_effect_all(data_t *data, player_t *node);

void update_rectangle(player_t *player, attack_effect_t *node);

#endif
