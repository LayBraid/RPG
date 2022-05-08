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

static void up_this(data_t *data, int id, double range)
{
    data->interact.enemy_id = id;
    data->interact.enemy_distance = range;
}

void enemies_aggro(data_t *data)
{
    enemy_t *tmp = data->enemies;
    double range;

    if (tmp == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        range = my_range(data->player.position, tmp->position);
        if (range <= tmp->range) {
            up_this(data, tmp->id, range);
            tmp->movement = NULL;
            call_event(data, "move_enemy_aggro");
        }
        tmp = tmp->next;
    }
    range = my_range(data->player.position, tmp->position);
    if (range <= tmp->range) {
        up_this(data, tmp->id, range);
        tmp->movement = NULL;
        call_event(data, "move_enemy_aggro");
    }
}
