/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"

void move_enemy_aggro(data_t *data)
{
    if (data->interact.enemy_distance <= 25)
        call_event(data, "enemy_attack");
    else
        call_event(data, "enemy_move");
}
