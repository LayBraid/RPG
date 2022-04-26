/*
** EPITECH PROJECT, 2022
** output
** File description:
** change_settings
*/

#include "my_rpg.h"

void change_fpsr(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (data->settings->fps == 60)
        data->settings->fps = 30;
        
    if (pos.y == 300)
        tile = set_tile_position(tile, (sfVector2f){400, 400});
    if (pos.y == 400)
        tile = set_tile_position(tile, (sfVector2f){400, 500});
}

void goright(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200)
        change_fpsr(data);
    if (pos.y == 300)
        change_volume(data);
    if (pos.y == 400)
        keybind(data);
}
