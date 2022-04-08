/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** launch_rpg
*/

#include "utils.h"

void launch_rpg(data_t *data)
{
    while (sfRenderWindow_isOpen(data->video.window)) {
        sfRenderWindow_clear(data->video.window, sfBlack);
        switch_scene(data);
        sfRenderWindow_display(data->video.window);
    }
}
