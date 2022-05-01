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

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyEscape: data->video.ui = 32;
            data->loading_state = 24;
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

void howtoplay_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}
