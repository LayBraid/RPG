/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

void display_enemies_depth(enemy_t *start, video_t video, unsigned char depth)
{
    enemy_t *node = start;

    while (node->id < node->next->id) {
        if (node->depth == depth) {
            sfRenderWindow_drawRectangleShape(video.window,
            node->rectangle, NULL);
            node->position = sfRectangleShape_getPosition(node->rectangle);
        }
        node = node->next;
    }
    if (node->depth == depth) {
        sfRenderWindow_drawRectangleShape(video.window,
        node->rectangle, NULL);
        node->position = sfRectangleShape_getPosition(node->rectangle);
    }
}
