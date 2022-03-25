/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** npc_utils
*/

#include "../../include/my_rpg.h"

npc_t *set_npc_type(npc_t *node, unsigned char type)
{
    node->type = type;
    return (node);
}

npc_t *set_npc_texture(npc_t *node, texture_t *texture)
{
    node->rect = texture->rect;
    node->max_rect = texture->max_rect;
    sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    return (node);
}

npc_t *set_npc_position(npc_t *node, sfVector2f position)
{
    node->position = position;
    return (node);
}

npc_t *decrease_npc_hp(npc_t *node, int value)
{
    node->current_hp -= value;
    return (node);
}

npc_t *increase_npc_hp(npc_t *node, int value)
{
    node->current_hp += value;
    if (node->current_hp > node->hp_max)
        node->current_hp = node->hp_max;
    return (node);
}
