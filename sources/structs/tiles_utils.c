/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** tiles_utils
*/

#include "../../include/my_rpg.h"

tile_t *set_tile_texture(tile_t *node, texture_t *texture)
{
    node->rect = texture->rect;
    sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    return (node);
}

tile_t *set_tile_position(tile_t *node, sfVector2f position)
{
    node->position = position;
    return (node);
}
