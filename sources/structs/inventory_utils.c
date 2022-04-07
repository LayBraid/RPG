/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory_utils
*/

#include "my_rpg.h"

inventory_t *set_inventory_count(inventory_t *node, unsigned int count)
{
    node->count = count;
    return (node);
}

inventory_t *set_inventory_texture(inventory_t *node, texture_t *texture)
{
    node->rect = texture->rect;
    sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    return (node);
}
