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
#include "pause.h"
#include "howtoplay.h"
#include "credits.h"
#include "hud.h"

void loading_d(data_t *data)
{
    switch (data->loading_state) {
        case (20): delete_pauseM(data);
            break;
        case (21): delete_pauseH(data);
            break;
        case (22): delete_pauseS(data);
            break;
        case (23): init_howtoplay(data);
            break;
        case (24): delete_howtoplay(data);
            break;
        case (25): init_credits(data);
            break;
        case (26): delete_credits(data);
            break;
        default: break;
    }
}

void loading_c(data_t *data)
{
    switch (data->loading_state) {
        case (14): init_name(data);
            break;
        case (15): delete_nameC(data);
            break;
        case (16): delete_nameM(data);
            break;
        case (17): delete_settingsK(data);
            break;
        case (18): init_pause(data);
            break;
        case (19): delete_pauseN(data);
            break;
        default: loading_d(data);
    }
}

void loading_b(data_t *data)
{
    switch (data->loading_state) {
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
        default: loading_c(data);
    }
}

void loading(data_t *data)
{
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
        case (27): init_hud(data);
            break;
        default: loading_b(data);
    }
}
