/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** analyse_event
*/

#include "../../include/my_rpg.h"

void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case sfEvtClosed: sfRenderWindow_close(data->video.window);
                break;
            case sfEvtKeyPressed: analyse_key(data);
                break;
            case sfEvtMouseButtonPressed: analyse_mouse(data);
                break;
            default: break;
        }
    }
}
