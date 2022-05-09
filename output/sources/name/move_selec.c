/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** move_selec
*/

#include "my_rpg.h"

void go_left(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (data->letter->state == 0) {
        if (pos.x == 317) {
            tile = set_tile_position(tile, (sfVector2f){195, pos.y});
            data->letter->pos.x = 195;
        }
        if (pos.x == 437) {
            tile = set_tile_position(tile, (sfVector2f){317, pos.y});
            data->letter->pos.x = 317;
        }
        go_left2(data, tile, pos);
        go_left3(data, tile, pos);
    }
}

void go_right(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (data->letter->state == 0) {
        go_right2(data, tile, pos);
        go_right3(data, tile, pos);
        if (pos.x == 797 && (pos.y != 470 && pos.y != 750)) {
            tile = set_tile_position(tile, (sfVector2f){917, pos.y});
            data->letter->pos.x = 917;
        }

    }
}

void go_up(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (data->letter->state == 0) {
        if (pos.y == 390) {
            tile = set_tile_position(tile, (sfVector2f){pos.x, 310});
            data->letter->pos.y = 310;
        }
        if (pos.y == 470) {
            tile = set_tile_position(tile, (sfVector2f){pos.x, 390});
            pos = sfSprite_getPosition(tile->sprite);
            data->letter->pos.y = 390;
        }
        go_up2(data, tile, pos);
    }
}

void go_down(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (data->letter->state == 0) {
        if (pos.y == 310) {
            tile = set_tile_position(tile, (sfVector2f){pos.x, 390});
            data->letter->pos.y = 390;
        }
        go_down2(data, tile, pos);
    }
}
