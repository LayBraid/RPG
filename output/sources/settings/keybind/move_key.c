/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** move_sword
*/

#include "my_rpg.h"

void go_down_key_b(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.y == 520)
        tile = set_tile_position(tile, (sfVector2f){1500, 620});
    if (pos.y == 620)
        tile = set_tile_position(tile, (sfVector2f){1500, 710});
    if (pos.y == 710)
        tile = set_tile_position(tile, (sfVector2f){1500, 810});
    if (pos.y == 810)
        tile = set_tile_position(tile, (sfVector2f){1500, 910});
}

void go_down_key(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 100)
        tile = set_tile_position(tile, (sfVector2f){1500, 210});
    if (pos.y == 210)
        tile = set_tile_position(tile, (sfVector2f){1500, 317});
    if (pos.y == 317)
        tile = set_tile_position(tile, (sfVector2f){1500, 420});
    if (pos.y == 420)
        tile = set_tile_position(tile, (sfVector2f){1500, 520});
    go_down_key_b(data, tile, pos);
}

void go_top_key_b(data_t *data, tile_t *tile, sfVector2f pos)
{
    if (pos.y == 520)
        tile = set_tile_position(tile, (sfVector2f){1500, 420});
    if (pos.y == 620)
        tile = set_tile_position(tile, (sfVector2f){1500, 520});
    if (pos.y == 710)
        tile = set_tile_position(tile, (sfVector2f){1500, 620});
    if (pos.y == 810)
        tile = set_tile_position(tile, (sfVector2f){1500, 710});
    if (pos.y == 910)
        tile = set_tile_position(tile, (sfVector2f){1500, 810});
}

void go_top_key(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210)
        tile = set_tile_position(tile, (sfVector2f){1500, 100});
    if (pos.y == 317)
        tile = set_tile_position(tile, (sfVector2f){1500, 210});
    if (pos.y == 420)
        tile = set_tile_position(tile, (sfVector2f){1500, 317});
    go_top_key_b(data, tile, pos);
}
