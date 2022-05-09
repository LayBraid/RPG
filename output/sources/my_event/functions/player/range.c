/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "utils.h"

void check_range(data_t *data)
{
    npc_t *tmp = data->npcs;
    double range;
    double save = 10000.0;

    while (tmp != NULL) {
        range = my_range(data->player.position, tmp->position);
        if (range <= 40.0 && range < save) {
            save = range;
            data->interact.status = 1;
            data->interact.npc_id = (int) tmp->id;
        }
        tmp = tmp->next;
    }
    if (save <= 40.0)
        return;
    data->interact.status = 0;
    data->interact.npc_id = -1;
}

void enemies_aggro(data_t *data)
{
    enemy_t *tmp = data->enemies;
    double range;

    while (tmp->id < tmp->next->id) {
        range = my_range(data->player.position, tmp->position);
        if (range <= tmp->range && tmp->map == data->my_map) {
            data->interact.enemy_id = tmp->id;
            data->interact.enemy_distance = range;
            tmp->movement = NULL;
            call_event(data, "move_enemy_aggro");
        }
        tmp = tmp->next;
    }
    range = my_range(data->player.position, tmp->position);
    if (range <= tmp->range && tmp->map == data->my_map) {
        data->interact.enemy_id = tmp->id;
        data->interact.enemy_distance = range;
        tmp->movement = NULL;
        call_event(data, "move_enemy_aggro");
    }
}
