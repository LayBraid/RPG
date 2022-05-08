/*
** EPITECH PROJECT, 2022
** output
** File description:
** attack_effect_anim
*/

#include "player.h"

static void add_anim_effect(attack_effect_t *node, int value)
{
    node_animation *tmp = node->animation;

    if (tmp == NULL) {
        node->animation = malloc(sizeof(node_animation));
        node->animation->value = value;
        node->animation->next = NULL;
        return;
    } else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = malloc(sizeof(node_animation));
        tmp->next->value = value;
        tmp->next->next = NULL;
    }
}

void setup_effect_player(player_t *player, int id_effect,
sfVector2f player_position)
{
    attack_effect_t *tmp = player->attack_effect;

    while (tmp->id != id_effect)
        tmp = tmp->next;
    for (int i = 0; i < 9; i++)
        add_anim_effect(tmp, i);
    for (int i = 9; i > 0; i--)
        add_anim_effect(tmp, i);
}
