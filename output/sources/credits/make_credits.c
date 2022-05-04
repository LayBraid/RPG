/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** make_credits
*/

#include "my_rpg.h"

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyEscape: data->video.ui = 32;
            data->loading_state = 26;
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

void credits_scene(data_t *data)
{
    button_t *tmp = data->buttons;
    sfVector2f pos = sfText_getPosition(tmp->text);
    pos.y = pos.y - 5;
    if (pos.y > -4000)
        tmp = set_button_position(tmp, pos);
    display_all(data);
    analyse_event(data);
}
