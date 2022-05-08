/*
** EPITECH PROJECT, 2022
** output
** File description:
** destroy_ennemy_id.c
*/

#include "enemies.h"

void destroy_interacted_ennemy(data_t *data)
{
    enemy_t *cursor = data->enemies;
    enemy_t *tmp = NULL;

    while (cursor->next && cursor->next->id != data->interact.enemy_id)
        cursor = cursor->next;
    if (!cursor->next)
        return;
    tmp = cursor;
    cursor = cursor->next;
    tmp->next = cursor->next;
    sfRectangleShape_destroy(cursor->rectangle);
    sfClock_destroy(cursor->display_life_clock);
    sfClock_destroy(cursor->movement_clock);
    free(cursor->name);
    free(cursor);
}
