/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "my_event.h"

static void exe_one_movement_enemy(enemy_t *enemy)
{
    if (enemy->movement == NULL)
        return;
    sfRectangleShape_setPosition(enemy->rectangle, enemy->movement->delta);
    enemy->position = sfRectangleShape_getPosition(enemy->rectangle);
    enemy->movement = enemy->movement->next;
}

static void exe_movement_enemies(enemy_t *enemy)
{
    sfTime time = sfClock_getElapsedTime(enemy->movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff >= 0.1) {
        exe_one_movement_enemy(enemy);
        sfClock_restart(enemy->movement_clock);
    }
}

void clock_enemies_move(data_t *data)
{
    enemy_t *tmp = data->enemies;

    while (tmp->id < tmp->next->id) {
        exe_movement_enemies(tmp);
        tmp = tmp->next;
    }
    exe_movement_enemies(tmp);
}
