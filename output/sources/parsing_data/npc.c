/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"
#include "utils.h"
#include "my.h"

void parsing_npc(data_t *data, char *buffer)
{
    sfVector2f vector = {0};
    data->npcs = create_npc(data->npcs, extract_between_limits(buffer,
    get_it_char(buffer, 39, 0) + 1,get_it_char(buffer, 39, 1) - 1));
    data->npcs = npc_set_event(data->npcs, extract_between_limits(buffer,
    get_it_char(buffer, 39, 2) + 1,get_it_char(buffer, 39, 3) - 1));
    data->npcs = npc_set_map(data->npcs, my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 1) + 1, get_it_char(buffer, ',', 2) - 1)));
    data->npcs = set_npc_type(data->npcs,
    my_atoi(extract_between_limits(buffer, get_it_char(buffer, ',', 2) + 1,
    get_it_char(buffer, ',', 3) - 1)));
    vector.x = (float) my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, '[', 1) + 1, get_it_char(buffer, ',', 4) - 1));
    vector.y = (float) my_atoi(extract_between_limits(buffer,
    get_it_char(buffer, ',', 4) + 1, get_it_char(buffer, ']', 1) - 1));
    data->npcs = set_npc_position(data->npcs, vector);
    npc_set_size_rectangle(data->npcs, get_size_type(data->npcs->type));
    npc_set_rectangle_texture(data->npcs, data->npc);
    npc_set_rectangle_texture_rect(data->npcs,
    get_rect_type(data->npcs->type));
}
