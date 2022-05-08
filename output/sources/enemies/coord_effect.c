/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static void add_movement_effect(attack_effect_t *node, sfVector2f position)
{
    node_movement *tmp = node->movement;

    if (tmp == NULL) {
        node->movement = malloc(sizeof(node_movement));
        node->movement->delta = position;
        node->movement->next = NULL;
        return;
    } else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = malloc(sizeof(node_movement));
        tmp->next->delta = position;
        tmp->next->next = NULL;
    }
}

void setup_effect(enemy_t *enemy, int id_effect, sfVector2f player_position)
{
    attack_effect_t *tmp = enemy->attack_effect;
    sfVector2f vector;
    sfVector2f calculate;

    vector.x = player_position.x - enemy->position.x;
    vector.y = player_position.y - enemy->position.y;
    calculate.x = vector.x / 30;
    calculate.y = vector.y / 30;
    while (tmp->id != id_effect)
        tmp = tmp->next;
    for (int i = 0; i < 30; i++) {
        add_movement_effect(tmp, (sfVector2f) {tmp->position.x +
        (i * calculate.x), tmp->position.y + (i * calculate.y)});
    }
}
