/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static void clock_stop_display_life_enemy(enemy_t *node)
{
    sfTime time = sfClock_getElapsedTime(node->display_life_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 2) {
        node->display_life = 0;
        sfClock_restart(node->display_life_clock);
    }
}

void clock_enemies_life_display(data_t *data)
{
    enemy_t *tmp = data->enemies;

    if (data->enemies == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        clock_stop_display_life_enemy(tmp);
        tmp = tmp->next;
    }
    clock_stop_display_life_enemy(tmp);
}
