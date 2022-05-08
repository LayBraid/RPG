/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

void display_effect_player(data_t *data)
{
    attack_effect_t *tmp = data->player.attack_effect;

    if (data->player.attack_effect == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        sfRenderWindow_drawRectangleShape(data->video.window,
        tmp->rectangle, NULL);
        tmp = tmp->next;
    }
    sfRenderWindow_drawRectangleShape(data->video.window,tmp->rectangle, NULL);
}
