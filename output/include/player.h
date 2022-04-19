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
    NOTHING,
    WALK_DOWN,
};

void setup_texture_player(data_t *data);

sfIntRect get_rect_player(int state, int animation);

void clock_move_player(data_t *data);

#endif
