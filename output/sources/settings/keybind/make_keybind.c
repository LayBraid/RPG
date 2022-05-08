/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_settings
*/

#include "my_rpg.h"
#include "settings.h"
#include "utils.h"
#include "my.h"
#include "keybind.h"
#include "my_fprintf.h"

static void drawtext(data_t *data)
{
    char *up = my_fprintf("                    Up           %s",
    data->keys->key[data->keys->up]);
    char *down = my_fprintf("                    Down        %s",
    data->keys->key[data->keys->down]);
    char *left = my_fprintf("                    Left        %s",
    data->keys->key[data->keys->left]);
    char *right = my_fprintf("                    Right       %s",
    data->keys->key[data->keys->right]);
    char *attack = my_fprintf("                    Attack      %s",
    data->keys->key[data->keys->attack]);
    char *interact = my_fprintf("                    Interact    %s",
    data->keys->key[data->keys->interact]);
    char *back = my_fprintf("                    Back         %s",
    data->keys->key[data->keys->back]);
    char *inventory = my_fprintf("                    Inventory   %s",
    data->keys->key[data->keys->inventory]);
    char *pause = my_fprintf("                    Pause       %s",
    data->keys->key[data->keys->pause]);

    my_text(data, (sfVector2f) {100, 100}, 5, up);
    my_text(data, (sfVector2f) {100, 200}, 5, down);
    my_text(data, (sfVector2f) {100, 300}, 5, left);
    my_text(data, (sfVector2f) {100, 400}, 5, right);
    my_text(data, (sfVector2f) {100, 500}, 5, attack);
    my_text(data, (sfVector2f) {100, 600}, 5, interact);
    my_text(data, (sfVector2f) {100, 700}, 5, back);
    my_text(data, (sfVector2f) {100, 800}, 5, inventory);
    my_text(data, (sfVector2f) {100, 900}, 5, pause);
}

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyDown: go_down_key(data);
            break;
        case sfKeyUp: go_top_key(data);
            break;
        case sfKeyEscape: data->video.ui = 32;
            data->loading_state = 11;
            break;
        default: change_key(data);
            break;
    }
}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            default: break;
        }
    }
}

void keybind_scene(data_t *data)
{
    display_all(data);
    drawtext(data);
    analyse_event(data);
}
