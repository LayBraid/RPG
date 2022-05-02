/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static void effect_display(enemy_t *node, video_t video)
{
    attack_effect_t *tmp = node->attack_effect;

    if (node->attack_effect == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        sfRenderWindow_drawRectangleShape(video.window, tmp->rectangle, NULL);
        tmp = tmp->next;
    }
    sfRenderWindow_drawRectangleShape(video.window, tmp->rectangle, NULL);
}

void display_effect_enemies(data_t *data)
{
    enemy_t *tmp = data->enemies;

    if (data->enemies == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        effect_display(tmp, data->video);
        tmp = tmp->next;
    }
    effect_display(tmp, data->video);
}
