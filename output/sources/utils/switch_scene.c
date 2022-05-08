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
#include "inventory.h"
#include "name.h"
#include "keybind.h"
#include "pause.h"
#include "howtoplay.h"
#include "credits.h"
#include "dialogs.h"

void switch_scenec(data_t *data)
{
    switch (data->video.ui) {
        case (27): dialog5(data, 1);
            break;
        case (28): dialog4(data, 1);
            break;
        case (29): dialog3(data, 1);
            break;
        case (30): dialog2(data, 1);
            break;
        case (31): dialog1(data, 1);
            break;
        case (32): loading(data);
            break;
        default: break;
    }
}

void switch_sceneb(data_t *data)
{
    switch (data->video.ui) {
        case (8): pause_scene(data);
            break;
        case (9): howtoplay_scene(data);
            break;
        case (10): skill_tree(data);
            break;
        case (11): credits_scene(data);
            break;
        case (23): dialog9(data, 1);
            break;
        case (24): dialog8(data, 1);
            break;
        case (25): dialog7(data, 1);
            break;
        case (26): dialog6(data, 1);
            break;
        default: switch_scenec(data);
    }
}

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
        default: switch_sceneb(data);
    }
}
