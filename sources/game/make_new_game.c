/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "../../include/my_rpg.h"

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            // case (sfEvtKeyPressed): analyse_key(data);
            //     break;
            // case (sfEvtMouseButtonPressed): analyse_mouse(data);
            //     break;
            default: break;
        }
    }
}

void new_game_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}