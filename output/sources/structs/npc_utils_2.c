/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** npc_utils_2
*/

#include "my_rpg.h"

npc_t *set_npc_max_hp(npc_t *node, int value)
{
    node->hp_max = value;
    return (node);
}

npc_t *set_npc_current_hp(npc_t *node, int value)
{
    node->current_hp = value;
    if (node->current_hp > node->hp_max)
        node->current_hp = node->hp_max;
    return (node);
}

npc_t *set_npc_to_max_hp(npc_t *node)
{
    node->current_hp = node->hp_max;
    return (node);
}

npc_t *npc_set_event(npc_t *node, char *event)
{
    node->event_call = event;
    return (node);
}

npc_t *npc_set_map(npc_t *node, int value)
{
    node->map = value;
    return (node);
}
