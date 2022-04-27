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
    if (pos.y == 200)
        change_fpsr(data);
    if (pos.y == 300)
        change_volumer(data);
    // if (pos.y == 400)
    //     keybind(data);
}

void goleft(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200)
        change_fpsl(data);
    if (pos.y == 300)
        change_volumel(data);
    // if (pos.y == 400)
    //     keybind(data);
}
