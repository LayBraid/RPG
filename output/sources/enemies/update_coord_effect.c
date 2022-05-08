/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static void add_new_movement_effect(attack_effect_t *node, sfVector2f position)
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

static void update_coord_this(attack_effect_t *node,
sfVector2f effect_position, sfVector2f player_position)
{
    sfVector2f vector;
    sfVector2f calculate;
    node->movement = NULL;

    vector.x = player_position.x - effect_position.x;
    vector.y = player_position.y - effect_position.y;
    calculate.x = vector.x / 30;
    calculate.y = vector.y / 30;
    for (int i = 0; i < 31; i++) {
        add_new_movement_effect(node, (sfVector2f) {node->position.x +
        (i * calculate.x), node->position.y + (i * calculate.y)});
    }
}

static void calculate_effect_one_enemy(data_t *data, enemy_t *node)
{
    attack_effect_t *tmp = node->attack_effect;

    if (tmp == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        update_coord_this(tmp, tmp->position, data->player.position);
        tmp = tmp->next;
    }
    update_coord_this(tmp, tmp->position, data->player.position);
}

void calculate_new_coord_effects(data_t *data)
{
    enemy_t *tmp = data->enemies;

    while (tmp->id < tmp->next->id) {
        calculate_effect_one_enemy(data, tmp);
        tmp = tmp->next;
    }
    calculate_effect_one_enemy(data, tmp);
}
