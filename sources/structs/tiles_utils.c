/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** tiles_utils
*/

#include "../../include/my_rpg.h"

tile_t *set_tile_depth(tile_t *tile, unsigned char depth)
{
    tile->depth = depth;
    return (tile);
}

tile_t *set_tile_texture(tile_t *node, texture_t *texture)
{
    //node->rect = texture->rect;
    sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
    //sfSprite_setTextureRect(node->sprite, node->rect);
    return (node);
}

tile_t *set_tile_position(tile_t *node, sfVector2f position)
{
    node->position = position;
    sfSprite_setPosition(node->sprite, node->position);
    return (node);
}

tile_t *set_tile_scale(tile_t *node, sfVector2f scale)
{
    node->scale = scale;
    sfSprite_setScale(node->sprite, node->scale);
    return (node);
}

tile_t *set_tile_move(tile_t *node, sfVector2f move)
{
    node->move = move;
    sfSprite_move(node->sprite, node->move);
    return (node);
}
