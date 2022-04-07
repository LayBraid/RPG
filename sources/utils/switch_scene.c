/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** switch_scene
*/

#include "my_rpg.h"

void switch_scene(data_t *data)
{
    printf("SCENE : %d\n", data->video.ui);
    switch (data->video.ui) {
        case (0): intro_scene(data);
            break;
        case (1): menu_scene(data);
            break;
        case (2): new_game_scene(data);
            break;
        case (3): load_game_scene(data);
            break;
        case (4): settings_scene(data);
            break;
        case (32): loading(data);
            break;
        default:
            break;
    }
}
