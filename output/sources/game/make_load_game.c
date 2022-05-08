/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_load_game
*/

#include "my_rpg.h"

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            default: break;
        }
    }
}

void load_game_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}
