/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** name
*/

#include "my_rpg.h"
#include "name.h"

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyEscape: data->video.ui = 32;
            data->loading_state = 14;
            break;
        case sfKeyLeft:
            if (data->letter->state == 0)
                go_left(data);
            break;
        case sfKeyRight:
            if (data->letter->state == 0)
                go_right(data);
            break;
        case sfKeyUp:
            if (data->letter->state == 0)
                go_up(data);
            break;
        case sfKeyDown:
            if (data->letter->state == 0)
                go_down(data);
            break;
        case sfKeySpace:
            if (data->letter->state == 0)
                put_letter(data);
            break;
        case sfKeyEnter:
            if (data->letter->state == 0 && data->letter->count > 0)
                data->letter->state = 1;
            else if (data->letter->state == 1)
                enter_name(data);
            break;
        case sfKeyBackspace:
            if (data->letter->state == 0)
                delete_letter(data);
            if (data->letter->state == 1)
                stop_anim_end(data);
            break;
        default: break;
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

void registerr(data_t *data)
{
    tile_t *tmp = data->tiles;

    while (tmp->id != NAME_REGISTER)
        tmp = tmp->next;
    if (data->letter->count != 0)
        tmp = set_tile_position(tmp, (sfVector2f){340, -900});
    else
        tmp = set_tile_position(tmp, (sfVector2f){340, 90});
}

void name_scene(data_t *data)
{
    if (data->letter->state == 1)
        anim_end(data);
    registerr(data);
    display_all(data);
    analyse_event(data);
}
