/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_intro
*/

#include "../../include/my_rpg.h"

static void analyse_key(data_t *data)
{
    switch (data->event.key.type) {
        case (sfKeyUp):
            break;
        case (sfKeyDown):
            break;
        case (sfKeyLeft):
            break;
        case (sfKeyRight):
            break;
    }
}

static void analyse_mouse(data_t *data)
{

}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            case (sfEvtMouseButtonPressed): analyse_mouse(data);
                break;
            default: break;
        }
    }
}

void intro_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}
