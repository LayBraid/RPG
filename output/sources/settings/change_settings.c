/*
** EPITECH PROJECT, 2022
** output
** File description:
** change_settings
*/

#include "my_rpg.h"
#include "settings.h"

void goright(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210)
        change_fpsr(data);
    if (pos.y == 320)
        change_volumer(data);
}

void goleft(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210)
        change_fpsl(data);
    if (pos.y == 320)
        change_volumel(data);
}

void go_downn(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210)
        tile = set_tile_position(tile, (sfVector2f){1500, 320});
    if (pos.y == 320)
        tile = set_tile_position(tile, (sfVector2f){1500, 430});
}

void go_topp(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 320)
        tile = set_tile_position(tile, (sfVector2f){1500, 210});
    if (pos.y == 430)
        tile = set_tile_position(tile, (sfVector2f){1500, 320});
}
