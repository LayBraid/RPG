/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** npc_utils
*/

#include "my_rpg.h"

npc_t *set_npc_type(npc_t *node, unsigned char type)
{
    node->type = type;
    return (node);
}

npc_t *set_npc_texture(npc_t *node, texture_t *texture)
{
    node->rect = texture->rect;
    node->max_rect = texture->max_rect;
    node->texture_id = texture->id;
    sfRectangleShape_setTexture(node->rectangle, texture->texture, sfTrue);
    sfRectangleShape_setTextureRect(node->rectangle, node->rect);
    return (node);
}

npc_t *set_npc_position(npc_t *node, sfVector2f position)
{
    node->position = position;
    sfRectangleShape_setPosition(node->rectangle, node->position);
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
