/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "images.h"
#include "utils.h"

void display_images_depth(data_t *data, int depth)
{
    node_img *tmp = data->images;

    while (tmp->id < tmp->next->id) {
        if (tmp->img->depth == depth &&
            display(tmp->img->step_display, data->loading_state))
            sfRenderWindow_drawSprite(data->video.window,
            tmp->img->sprite, NULL);
        tmp = tmp->next;
    }
    if (tmp->img->depth == depth &&
        display(tmp->img->step_display, data->loading_state))
        sfRenderWindow_drawSprite(data->video.window,
        tmp->img->sprite, NULL);
}
