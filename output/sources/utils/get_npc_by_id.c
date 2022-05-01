/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

npc_t *get_npc_by_id(data_t *data, int id)
{
    npc_t *npc = data->npcs;

    while (npc) {
        if (npc->id == id)
            return (npc);
        npc = npc->next;
    }
    return (NULL);
}
