/*
** EPITECH PROJECT, 2022
** output
** File description:
** change_key_b
*/

#include "my_rpg.h"

void change_goods_b(data_t *data, sfVector2f pos, sfKeyCode key)
{
    if (pos.y == 520)
        data->keys->attack = key;
    if (pos.y == 620)
        data->keys->interact = key;
    if (pos.y == 710)
        data->keys->back = key;
    if (pos.y == 810)
        data->keys->inventory = key;
    if (pos.y == 910)
        data->keys->pause = key;
}

void change_goods(data_t *data, sfKeyCode key)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 100)
        data->keys->up = key;
    if (pos.y == 210)
        data->keys->down = key;
    if (pos.y == 317)
        data->keys->left = key;
    if (pos.y == 420)
        data->keys->right = key;
    change_goods_b(data, pos, key);
}

void change_key_g(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyUp:
            change_goods(data, sfKeyUp);
            break;
        case sfKeyDown:
            change_goods(data, sfKeyDown);
            break;
        case sfKeyLeft:
            change_goods(data, sfKeyLeft);
            break;
        case sfKeyRight:
            change_goods(data, sfKeyRight);
            break;
        default: break;
    }
}

void change_key_f(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyZ:
            change_goods(data, sfKeyZ);
            break;
        case sfKeySpace:
            change_goods(data, sfKeySpace);
            break;
        case sfKeyEnter:
            change_goods(data, sfKeyEnter);
            break;
        case sfKeyBackspace:
            change_goods(data, sfKeyBackspace);
            break;
        case sfKeyTab:
            change_goods(data, sfKeyTab);
            break;
        default: change_key_g(data);
            break;
    }
}
