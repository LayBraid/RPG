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
#include "skill_tree.h"
#include "load_game.h"
#include "settings.h"
#include "my_event.h"
#include "name.h"
#include "keybind.h"
#include "pause.h"
#include "howtoplay.h"
#include "dialogs.h"

void switch_scene(data_t *data)
{
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
        case (5): name_scene(data);
            break;
        case (6): inventory_loop(data);
            break;
        case (7): keybind_scene(data);
            break;
        case (8): pause_scene(data);
            break;
        case (9): howtoplay_scene(data);
            break;
        case (10): skill_tree(data);
            break;
        case (32): loading(data);
            break;
        default:
            break;
    }
}
