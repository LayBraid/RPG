/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_all
*/

#include "my_rpg.h"
#include "map.h"

void display_all(data_t *data)
{
    sfRenderWindow_setView(data->video.window, data->main);
    for (unsigned char depth = 0; depth < 10; depth++) {
        display_tile_depth(data->tiles, data->video, depth);
        display_npc_depth(data->npcs, data->video, depth);
    }
    display_buttons(data->buttons, data->video);
    display_texts(data->texts, data->video);
    if (data->video.ui == 2) {
        printf("ici\n");
        sfRenderWindow_setView(data->video.window, data->mapping);
        printf("eh\n");
        display_rectangles_map(data);
        printf("là\n");
        sfRenderWindow_setView(data->video.window, data->players);
        display_player_depth(data->player, data->video, data->player.depth);
    }
}
