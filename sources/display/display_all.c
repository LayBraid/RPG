/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_all
*/

#include "../../include/my_rpg.h"

void display_all(data_t *data)
{
    for (unsigned char depth = 0; depth < 10; depth++) {
        display_tile_depth(data->tiles, data->video, depth);
<<<<<<< HEAD
        display_npc_depth(data->tiles, data->video, depth);
=======
        display_npc_depth(data->npcs, data->video, depth);
>>>>>>> fc1ecdbd2c8c1c557be168e8bc6b5f3925e876df
        display_player_depth(data->player, data->video, depth);
    }
    display_buttons(data->buttons, data->video);
    display_texts(data->texts, data->video);
}
