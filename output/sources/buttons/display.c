/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "buttons.h"
#include "utils.h"

void display_buttons_depth(data_t *data, int depth)
{
    node_button *tmp = data->button;

    while (tmp->id < tmp->next->id) {
        if (tmp->button->button->depth == depth &&
            display(tmp->button->button->step_display, data->loading_state))
            sfRenderWindow_drawSprite(data->video.window,
            tmp->button->button->sprite, NULL);
        tmp = tmp->next;
    }
    if (tmp->button->button->depth == depth &&
        display(tmp->button->button->step_display, data->loading_state))
        sfRenderWindow_drawSprite(data->video.window,
        tmp->button->button->sprite, NULL);
}
