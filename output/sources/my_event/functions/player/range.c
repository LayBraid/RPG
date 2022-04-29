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
            call_event(data, "interact_npc");
        }
        tmp = tmp->next;
    }
    if (save <= 40.0)
        return;
    data->interact.status = 0;
    data->interact.npc_id = -1;
    call_event(data, "stop_interact_npc");
}
