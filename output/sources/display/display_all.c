/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_all
*/

#include "map.h"
#include "utils.h"
#include "enemies.h"
#include "player.h"
#include "my_fprintf.h"

void display_all_c(data_t *data)
{
    sfRenderWindow_setView(data->video.window, data->mapping);
    if (data->my_map == 2)
        display_rectangles_map(data);
    if (data->my_map == 1)
        display_rectangles_house(data);
    if (data->my_map == 0)
        display_rectangles_tophouse(data);
    display_effect_player(data);
    display_effect_enemies(data);
    for (unsigned char depth = 0; depth < 10; depth++) {
        display_player_depth(data->player, data->video, depth);
        display_npc_depth(data->npcs, data->video, depth, data->my_map);
        display_enemies_depth(data->enemies,data->video, depth, data->my_map);
    }
    if (data->interact.status) {
        sfRenderWindow_setView(data->video.window, data->main);
        my_text(data, (sfVector2f) {680, 980}, 4, my_fprintf(
        "Press %s to interact", data->keys->key[data->keys->interact]));
    }
}

void display_all_b(data_t *data)
{
    if (data->video.ui == 2 || data->video.ui == 6 ||
        (data->video.ui >= 23 && data->video.ui <= 31)) {
        display_all_c(data);
    }
    sfRenderWindow_setView(data->video.window, data->main);
    display_all_objects(data);
    display_texts(data->texts, data->video);
}

void display_all(data_t *data)
{
    sfRenderWindow_setView(data->video.window, data->main);
    display_all_b(data);
    for (unsigned char depth = 0; depth < 10; depth++)
        display_tile_depth(data->tiles, data->video, depth, data->my_map);
    display_buttons(data->buttons, data->video);
    display_texts(data->texts, data->video);
    if (data->video.ui == 6) {
        sfRenderWindow_setView(data->video.window, data->main);
        display_items(data);
    }
}
