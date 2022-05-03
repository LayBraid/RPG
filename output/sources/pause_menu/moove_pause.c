/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** moove_pause
*/

#include "my_rpg.h"

void go_down_pause(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200)
        tile = set_tile_position(tile, (sfVector2f){700, 300});
    if (pos.y == 300)
        tile = set_tile_position(tile, (sfVector2f){700, 400});
    if (pos.y == 400)
        tile = set_tile_position(tile, (sfVector2f){700, 500});
    if (pos.y == 500)
        tile = set_tile_position(tile, (sfVector2f){700, 600});
    if (pos.y == 600)
        tile = set_tile_position(tile, (sfVector2f){700, 700});
    if (pos.y == 700)
        tile = set_tile_position(tile, (sfVector2f){700, 200});
}

void go_top_pause(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200)
        tile = set_tile_position(tile, (sfVector2f){700, 700});
    if (pos.y == 300)
        tile = set_tile_position(tile, (sfVector2f){700, 200});
    if (pos.y == 400)
        tile = set_tile_position(tile, (sfVector2f){700, 300});
    if (pos.y == 500)
        tile = set_tile_position(tile, (sfVector2f){700, 400});
    if (pos.y == 600)
        tile = set_tile_position(tile, (sfVector2f){700, 500});
    if (pos.y == 700)
        tile = set_tile_position(tile, (sfVector2f){700, 600});
}
