/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_menu
*/

#include "my_rpg.h"
#include "menus.h"
#include "utils.h"
#include "my.h"

static void gotoo2(data_t *data, sfVector2f pos)
{
    if (pos.y == 420) {
        data->video.ui = 32;
        data->loading_state = 5;
    }
    if (pos.y == 520) {
        data->tiles = delete_all_tiles(data->tiles);
        data->video.ui = 32;
        data->loading_state = 25;
    }
    if (pos.y == 620)
        sfRenderWindow_close(data->video.window);
}

static void gotoo(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 210) {
        data->video.ui = 32;
        data->loading_state = 3;
    }
    if (pos.y == 317) {
        data->video.ui = 32;
        data->loading_state = 4;
    }
    gotoo2(data, pos);
}

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyDown: godown(data);
            break;
        case sfKeyUp: gotop(data);
            break;
        case sfKeySpace: gotoo(data);
            break;
        default:
            break;
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

void menu_scene(data_t *data)
{
    display_all(data);
    drawtextmenu(data);
    analyse_event(data);
}
