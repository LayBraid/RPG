/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** analyse_window
*/

#include "../../include/my_rpg.h"

void analyse_window(data_t *data)
{
    while (sfRenderWindow_isOpen(data->video.window)) {
        sfRenderWindow_clear(data->video.window, sfBlack);
        sfRenderWindow_display(data->video.window);
        analyze_event(data);
    }
}
