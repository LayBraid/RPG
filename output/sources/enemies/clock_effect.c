/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static void changement(enemy_t *enemy)
{
    if (enemy->attack_effect->next->id == 0)
        enemy->attack_effect = NULL;
    else
        enemy->attack_effect = enemy->attack_effect->next;
}

static void clock_effect(enemy_t *enemy, attack_effect_t *node)
{
    if (node->movement == NULL)
        return;
    sfTime time = sfClock_getElapsedTime(node->movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.06) {
        sfRectangleShape_setPosition(node->rectangle, node->movement->delta);
        node->position = sfRectangleShape_getPosition(node->rectangle);
        if (node->movement->next == NULL)
            enemy->attack_effect = enemy->attack_effect->next;
        node->movement = node->movement->next;
        if (enemy->attack_effect->movement == NULL)
            changement(enemy);
        sfClock_restart(node->movement_clock);
    }
}

static void enemies_effect_all(enemy_t *node)
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

void clock_enemies_effect(data_t *data)
{
    enemy_t *tmp = data->enemies;

    if (data->enemies == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        enemies_effect_all(tmp);
        tmp = tmp->next;
    }
    enemies_effect_all(tmp);
}
