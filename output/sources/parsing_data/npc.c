/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"
#include "utils.h"

void parsing_npc(data_t *data, char *buffer)
{
    data->npcs = create_npc(data->npcs, extract_between_limits(buffer,
    get_it_char(buffer, 39, 0) + 1,get_it_char(buffer, 39, 1) - 1));
    data->npcs = npc_set_event(data->npcs, extract_between_limits(buffer,
    get_it_char(buffer, 39, 1) + 1,get_it_char(buffer, 39, 2) - 1));
}
