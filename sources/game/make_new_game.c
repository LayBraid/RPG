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
<<<<<<< HEAD:sources/game/make_new_game.c
            // case (sfEvtKeyPressed): analyse_key(data);
            //     break;
            // case (sfEvtMouseButtonPressed): analyse_mouse(data);
            //     break;
=======
            /*case (sfEvtKeyPressed): analyse_key(data);
                break;
            case (sfEvtMouseButtonPressed): analyse_mouse(data);
                break;*/
>>>>>>> 0983b78d3a312aae8c400668fb28581f4870eefb:sources/game/make_game.c
            default: break;
        }
    }
}

void new_game_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}