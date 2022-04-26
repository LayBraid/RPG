/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** inventory
*/

#include "my_rpg.h"

// static void analyse_event(data_t *data)
// {
//     while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
//         switch (data->event.type) {
//             case (sfEvtClosed): sfRenderWindow_close(data->video.window);
//                 break;
//             case (sfEvtKeyPressed): analyse_key(data);
//                 break;
//                 // case (sfEvtMouseButtonPressed): analyse_mouse(data);
//                 //     break;
//             default: break;
//         }
//     }
// }

void inventory_loop(data_t *data)
{
    data->video.ui = 6;
    display_all(data);
}
