/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** move_selec_c
*/

#include "my_rpg.h"

void go_left3(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.x == 1157) {
        tile = set_tile_position(tile, (sfVector2f){1037, pos.y});
        data->letter->pos.x = 1037;
    }
    if (pos.x == 1277) {
        tile = set_tile_position(tile, (sfVector2f){1157, pos.y});
        data->letter->pos.x = 1157;
    }
}

void go_right3(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.x == 917) {
        tile = set_tile_position(tile, (sfVector2f){1037, pos.y});
        data->letter->pos.x = 1037;
    }
    if (pos.x == 1037) {
        tile = set_tile_position(tile, (sfVector2f){1157, pos.y});
        data->letter->pos.x = 1157;
    }
    if (pos.x == 1157) {
        tile = set_tile_position(tile, (sfVector2f){1277, pos.y});
        data->letter->pos.x = 1277;
    }
}
