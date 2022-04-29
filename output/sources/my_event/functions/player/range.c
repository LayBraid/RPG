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

    while (tmp != NULL) {
        if (my_range(data->player.position, tmp->position, 40)) {
            data->interact.status = 1;
            data->interact.npc_id = (int) tmp->id;
            call_event(data, "interact_npc");
            return;
        }
        tmp = tmp->next;
    }
    data->interact.status = 0;
    data->interact.npc_id = -1;
    call_event(data, "stop_interact_npc");
}
