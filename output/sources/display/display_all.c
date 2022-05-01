/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_all
*/

#include "map.h"
#include "utils.h"

void display_all(data_t *data)
{
    sfRenderWindow_setView(data->video.window, data->main);
    for (unsigned char depth = 0; depth < 10; depth++)
        display_tile_depth(data->tiles, data->video, depth);
    display_buttons(data->buttons, data->video);
    display_texts(data->texts, data->video);
    if (data->video.ui == 2 || data->video.ui == 6) {
        sfRenderWindow_setView(data->video.window, data->mapping);
        display_rectangles_map(data);
        display_player_depth(data->player, data->video, data->player.depth);
        for (unsigned char depth = 0; depth < 10; depth++)
            display_npc_depth(data->npcs, data->video, depth);
        if (data->interact.status) {
            sfRenderWindow_setView(data->video.window, data->main);
            my_text(data, (sfVector2f) {680, 980}, 4, "press R to interact");
        }
    }
    if (data->video.ui == 6) {
        sfRenderWindow_setView(data->video.window, data->main);
        display_items(data);
    }
}
