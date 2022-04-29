/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** loading
*/

#include "my_rpg.h"
#include "intro.h"
#include "menus.h"
#include "load_game.h"
#include "new_game.h"
#include "settings.h"
#include "keybind.h"
#include "name.h"

void loading(data_t *data)
{
    printf("LOAD : %d\n", data->loading_state);
    switch (data->loading_state) {
        case (0): init_intro(data);
            break;
        case (1): delete_intro(data);
            break;
        case (2): init_menu(data);
            break;
        case (3): delete_menuN(data);
            break;
        case (4): delete_menuL(data);
            break;
        case (5): delete_menuS(data);
            break;
        case (6): init_new_game(data);
            break;
        case (7): init_load_game(data);
            break;
        case (8): init_settings(data);
            break;
        case (9): delete_settings(data);
            break;
        case (10): init_keybind(data);
            break;
        case (11): delete_keybind(data);
            break;
        case (12): delete_new_game(data);
            break;
        case (13): delete_load_game(data);
            break;
        case (14): init_name(data);
            break;
        case (15): delete_nameC(data);
            break;
        case (16): delete_nameM(data);
            break;
        case (17): delete_settingsK(data);
            break;
    }
}