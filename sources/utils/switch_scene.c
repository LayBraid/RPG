/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** switch_scene
*/

#include "../../include/my_rpg.h"

void switch_scene(data_t *data)
{
    switch (data->video.ui) {
        case (0):
            intro_scene(data);
            break;
        case (1):
            menu_scene(data);
            break;
        case (2):
            game_scene(data);
            break;
        case (3):
            end_scene(data);
            break;
        default:
            break;
    }
}
