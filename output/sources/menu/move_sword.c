/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** move_sword
*/

#include "my_rpg.h"

void godown(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210)
        tile = set_tile_position(tile, (sfVector2f){700, 317});
    if (pos.y == 317)
        tile = set_tile_position(tile, (sfVector2f){700, 420});
    if (pos.y == 420)
        tile = set_tile_position(tile, (sfVector2f){700, 520});
    if (pos.y == 520)
        tile = set_tile_position(tile, (sfVector2f){700, 620});
    if (pos.y == 620)
        tile = set_tile_position(tile, (sfVector2f){700, 210});

}

void gotop(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210)
        tile = set_tile_position(tile, (sfVector2f){700, 620});
    if (pos.y == 317)
        tile = set_tile_position(tile, (sfVector2f){700, 210});
    if (pos.y == 420)
        tile = set_tile_position(tile, (sfVector2f){700, 317});
    if (pos.y == 520)
        tile = set_tile_position(tile, (sfVector2f){700, 420});
    if (pos.y == 620)
        tile = set_tile_position(tile, (sfVector2f){700, 520});
}
