/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "my_rpg.h"

//TODO Comment for compilation

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            /*case (sfEvtMouseButtonPressed): analyse_mouse(data);
                break;*/
            default: break;
        }
    }
}

void game_scene(data_t *data)
{
    analyse_event(data);
}