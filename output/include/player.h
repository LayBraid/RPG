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
};

void setup_texture_player(data_t *data);

sfIntRect get_rect_player(int state, int animation);

void clock_move_player(data_t *data);

void update_anim_move_player(data_t *data);

void inventory_loop(data_t *data);

#endif
