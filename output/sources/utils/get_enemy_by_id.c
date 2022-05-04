/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

enemy_t *get_enemy_by_id(data_t *data, int id)
{
    enemy_t *tmp = data->enemies;

    while (tmp->id != id)
        tmp = tmp->next;
    return tmp;
}
