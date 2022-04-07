/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_settings
*/

#include "../../include/my_rpg.h"

// static void analyse_key(data_t *data)
// {
//     switch (data->event.key.code) {
//         case sfKeyDown: godown(data);
//             break;
//         case sfKeyUp: gotop(data);
//             break;
//         case sfKeySpace: gotoo(data);
//             break;
//         default:
//             break;
//     }
// }

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

void settings_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
}