/*
** EPITECH PROJECT, 2022
** output
** File description:
** clock_sword
*/

#include "player.h"

static void clock_effect(player_t *player, attack_effect_t *node)
{
    if (node->movement == NULL)
        return;
    sfTime time = sfClock_getElapsedTime(node->movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.06) {
        sfRectangleShape_setSize(node->rectangle, get_size_sword(
        player->attack_effect->type, node->animation->value));
        sfRectangleShape_setTextureRect(node->rectangle,
        get_rect_sword(player->attack_effect->type, node->animation->value));
        if (node->animation->next == NULL)
            player->attack_effect = player->attack_effect->next;
        node->animation = node->animation->next;
        sfClock_restart(node->movement_clock);
    }
}

void player_effect_all(player_t *node)
{
    attack_effect_t *tmp = node->attack_effect;

    if (node->attack_effect == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        clock_effect(node, tmp);
        tmp = tmp->next;
    }
    clock_effect(node, tmp);
}