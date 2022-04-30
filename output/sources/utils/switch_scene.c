/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** switch_scene
*/

#include "utils.h"
#include "menus.h"
#include "intro.h"
#include "new_game.h"
#include "load_game.h"
#include "settings.h"
#include "name.h"
#include "dialogs.h"

void switch_scene(data_t *data)
{
    switch (data->video.ui) {
        case (0): intro_scene(data);
            break;
        case (1): dialog_example(data, 1);
            break;
        case (2): new_game_scene(data);
            break;
        case (3): load_game_scene(data);
            break;
        case (4): settings_scene(data);
            break;
        case (5): name_scene(data);
            break;
        case (32): loading(data);
            break;
        default:
            break;
    }
}
