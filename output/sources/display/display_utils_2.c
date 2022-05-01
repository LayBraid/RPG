/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

static void display_life(enemy_t *node, video_t video)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfVector2f vector = sfRectangleShape_getPosition(node->rectangle);
    float size;
    sfRectangleShape_setPosition(rect, (sfVector2f)
    {vector.x - 4, vector.y - 7});
    sfRectangleShape_setOutlineColor(rect, sfBlack);
    sfRectangleShape_setOutlineThickness(rect, 1);
    sfRectangleShape_setSize(rect, (sfVector2f) {25, 5});
    sfRectangleShape_setFillColor(rect, sfWhite);
    sfRenderWindow_drawRectangleShape(video.window, rect, NULL);
    size = 25 / node->max_hp * node->hp;
    sfRectangleShape_setOutlineThickness(rect, 0);
    sfRectangleShape_setSize(rect, (sfVector2f) {size, 5});
    sfRectangleShape_setFillColor(rect, sfGreen);
    sfRenderWindow_drawRectangleShape(video.window, rect, NULL);
}

void display_enemies_depth(enemy_t *start, video_t video, unsigned char depth)
{
    enemy_t *node = start;

    while (node->id < node->next->id) {
        if (node->depth == depth) {
            sfRenderWindow_drawRectangleShape(video.window,
            node->rectangle, NULL);
            display_life(node, video);
            node->position = sfRectangleShape_getPosition(node->rectangle);
        }
        node = node->next;
    }
    if (node->depth == depth) {
        sfRenderWindow_drawRectangleShape(video.window,
        node->rectangle, NULL);
        display_life(node, video);
        node->position = sfRectangleShape_getPosition(node->rectangle);
    }
}
