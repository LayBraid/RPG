/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_intro
*/

#include "../../include/my_rpg.h"

void intro_scene(data_t *data)
{
    while (sfRenderWindow_isOpen(data->video.window)) {
        sfRenderWindow_clear(data->video.window, sfBlack);
        sfRenderWindow_display(data->video.window);
        analyse_event(data);
    }
}
