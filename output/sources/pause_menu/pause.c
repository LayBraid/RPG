/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause_menu
*/

#include "my_rpg.h"
#include "menus.h"
#include "utils.h"
#include "my.h"
#include "pause.h"

void redirection(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200) {
        data->tiles = delete_all_tiles(data->tiles);
        data->buttons = delete_all_buttons(data->buttons);
        data->video.ui = 2;
    }
    if (pos.y == 300) {
        data->video.ui = 32;
        data->loading_state = 21;
    }
    if (pos.y == 400) {
        data->video.ui = 32;
        data->loading_state = 22;
    }
    if (pos.y == 600) {
        data->settings_state = "MENU";
        data->video.ui = 32;
        data->loading_state = 20;
    }

    if (pos.y == 700)
        sfRenderWindow_close(data->video.window);
}

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyDown: go_down_pause(data);
                break;
        case sfKeyUp: go_top_pause(data);
                break;
        case sfKeySpace: redirection(data);
            break;
        case sfKeyEscape: data->tiles = delete_all_tiles(data->tiles);
            data->buttons = delete_all_buttons(data->buttons);
            data->video.ui = 2;
            break;
        default: break;
    }
}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            default: break;
        }
    }
}

void pause_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}
