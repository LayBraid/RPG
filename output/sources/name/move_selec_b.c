/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** move_selec_b
*/

#include "my_rpg.h"

void go_left2(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.x == 557) {
        tile = set_tile_position(tile, (sfVector2f){437, pos.y});
        data->letter->pos.x = 437;
    }
    if (pos.x == 677) {
        tile = set_tile_position(tile, (sfVector2f){557, pos.y});
        data->letter->pos.x = 557;
    }
    if (pos.x == 797) {
        tile = set_tile_position(tile, (sfVector2f){677, pos.y});
        data->letter->pos.x = 677;
    }
    if (pos.x == 917) {
        tile = set_tile_position(tile, (sfVector2f){797, pos.y});
        data->letter->pos.x = 797;
    }
    if (pos.x == 1037) {
        tile = set_tile_position(tile, (sfVector2f){917, pos.y});
        data->letter->pos.x = 917;
    }
}

void go_right2(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.x == 195) {
        tile = set_tile_position(tile, (sfVector2f){317, pos.y});
        data->letter->pos.x = 317;
    }
    if (pos.x == 317) {
        tile = set_tile_position(tile, (sfVector2f){437, pos.y});
        data->letter->pos.x = 437;
    }
    if (pos.x == 437) {
        tile = set_tile_position(tile, (sfVector2f){557, pos.y});
        data->letter->pos.x = 557;
    }
    if (pos.x == 557) {
        tile = set_tile_position(tile, (sfVector2f){677, pos.y});
        data->letter->pos.x = 677;
    }
    if (pos.x == 677) {
        tile = set_tile_position(tile, (sfVector2f){797, pos.y});
        data->letter->pos.x = 797;
    }
}

void go_up2(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.y == 590 && pos.x < 798) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 470});
        data->letter->pos.y = 470;
    } else if (pos.y == 590 && pos.x > 798) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 390});
        data->letter->pos.y = 390;
    }
    if (pos.y == 670) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 590});
        data->letter->pos.y = 590;
    }
    if (pos.y == 750) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 670});
        data->letter->pos.y = 670;
    }
}

void go_down2(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.y == 390 && pos.x < 798) {
        tile = set_tile_position(tile, (sfVector2f) {pos.x, 470});
        data->letter->pos.y = 470;
    } else if (pos.y == 390 && pos.x > 798) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 590});
        data->letter->pos.y = 590;
    }
    if (pos.y == 470) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 590});
        data->letter->pos.y = 590;
    }
    if (pos.y == 590) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 670});
        data->letter->pos.y = 670;
    }
    if (pos.y == 670 && pos.x < 798) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 750});
        data->letter->pos.y = 750;
    }
}
