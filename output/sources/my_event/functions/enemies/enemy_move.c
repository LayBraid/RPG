/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "utils.h"

static void add_movement_enemy(enemy_t *enemy, sfVector2f vector)
{
    node_movement *tmp = enemy->movement;

    if (tmp == NULL) {
        enemy->movement = malloc(sizeof(node_movement));
        enemy->movement->delta = vector;
        enemy->movement->next = NULL;
        return;
    } else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = malloc(sizeof(node_movement));
        tmp->next->delta = vector;
        tmp->next->next = NULL;
        return;
    }
}

void enemy_move(data_t *data)
{
    enemy_t *enemy = get_enemy_by_id(data, data->interact.enemy_id);
    sfVector2f calculate;
    sfVector2f vector = enemy->position;
    double blocks = data->interact.enemy_distance;

    calculate.x = data->player.position.x - enemy->position.x;
    calculate.y = data->player.position.y - enemy->position.y;
    for (int i = 0; i < 15; i++) {
        vector.x += calculate.x / blocks;
        vector.y += calculate.y / blocks;
        add_movement_enemy(enemy, vector);
    }
}
