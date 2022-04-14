/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** name
*/

#include "my_rpg.h"
#include "name.h"

static void analyse_key(data_t *data)
{
    // if (data->event.key.code == sfKeyEscape) {
    //     data->video.ui = 32;
    //     data->loading_state = 14;
    // }
    switch (data->event.key.code) {
        case sfKeyEscape: data->video.ui = 32;
            data->loading_state = 14;
            break;
        case sfKeyLeft: go_left(data);
            break;
        case sfKeyRight: go_right(data);
            break;
        case sfKeyUp: go_up(data);
            break;
        case sfKeyDown: go_down(data);
            break;
        // case sfKeySpace: put_letter(data);
        //     break;
        // case sfKeyBackspace: delete_letter(data);
        //     break;
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

void name_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}