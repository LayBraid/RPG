/*
** EPITECH PROJECT, 2022
** output
** File description:
** npc_inventory_utils
*/

#include "structures.h"

npc_inventory_t *set_inventory_count(npc_inventory_t *node, unsigned int count)
{
    node->count = count;
    return (node);
}

npc_inventory_t *set_npc_inventory_texture(npc_inventory_t *node,
texture_t *texture)
{
    node->rect = texture->rect;
    sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    return (node);
}
