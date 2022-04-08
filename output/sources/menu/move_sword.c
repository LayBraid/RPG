/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** move_sword
*/

#include "../../include/my_rpg.h"

void godown(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200)
        tile = set_tile_position(tile, (sfVector2f){400, 300});
    if (pos.y == 300)
        tile = set_tile_position(tile, (sfVector2f){400, 400});
    if (pos.y == 400)
        tile = set_tile_position(tile, (sfVector2f){400, 500});

}

void gotop(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 300)
        tile = set_tile_position(tile, (sfVector2f){400, 200});
    if (pos.y == 400)
        tile = set_tile_position(tile, (sfVector2f){400, 300});
    if (pos.y == 500)
        tile = set_tile_position(tile, (sfVector2f){400, 400});
}