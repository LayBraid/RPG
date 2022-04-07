/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_all
*/

#include "my_rpg.h"

void display_all(data_t *data)
{
    for (unsigned char depth = 0; depth < 10; depth++) {
        display_tile_depth(data->tiles, data->video, depth);
        display_npc_depth(data->npcs, data->video, depth);
        display_player_depth(data->player, data->video, depth);
    }
    display_buttons(data->buttons, data->video);
    display_texts(data->texts, data->video);
}
