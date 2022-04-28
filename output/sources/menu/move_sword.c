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

    while (tile->type != 2)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y >= 200 && pos.y <= 400)
        tile = set_tile_position(tile,
        (sfVector2f){tile->position.x, tile->position.y + 100});

}

void gotop(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->type != 2)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y >= 300 && pos.y <= 500)
        tile = set_tile_position(tile,
        (sfVector2f){tile->position.x, tile->position.y - 100});
}
