/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"
#include "player.h"
#include "utils.h"

void interact_npc(data_t *data)
{
    npc_t *tmp = get_npc_by_id(data, data->interact.npc_id);
    if (data->interact.status == 1)
        call_event(data, tmp->event_call);
}

void stop_interact_npc(data_t *data)
{
    (void) data;
}
