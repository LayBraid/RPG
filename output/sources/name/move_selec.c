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
    if (pos.x == 317) {
        tile = set_tile_position(tile, (sfVector2f){195, pos.y});
        data->letter->pos.x = 195;
    }
    if (pos.x == 437) {
        tile = set_tile_position(tile, (sfVector2f){317, pos.y});
        data->letter->pos.x = 317;
    }
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
    if (pos.x == 1157) {
        tile = set_tile_position(tile, (sfVector2f){1037, pos.y});
        data->letter->pos.x = 1037;
    }
    if (pos.x == 1277) {
        tile = set_tile_position(tile, (sfVector2f){1157, pos.y});
        data->letter->pos.x = 1157;
    }
}

void go_right(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
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
    if (pos.x == 797 && (pos.y != 470 && pos.y != 750)) {
        tile = set_tile_position(tile, (sfVector2f){917, pos.y});
        data->letter->pos.x = 917;
    }
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

void go_up(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 390) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 310});
        data->letter->pos.y = 310;
    }
    if (pos.y == 470) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 390});
        pos = sfSprite_getPosition(tile->sprite);
        data->letter->pos.y = 390;
    }
    if (pos.y == 590 && pos.x < 798) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 470});
        data->letter->pos.y = 470;
    }
    else if (pos.y == 590 && pos.x > 798) {
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

void go_down(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 310) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 390});
        data->letter->pos.y = 390;
    }
    if (pos.y == 390 && pos.x < 798) {
        tile = set_tile_position(tile, (sfVector2f){pos.x, 470});
        data->letter->pos.y = 470;
    }
    else if (pos.y == 390 && pos.x > 798) {
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
