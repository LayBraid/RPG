/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "player.h"

void display_life_player(player_t *player, video_t video)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfVector2f vector = sfRectangleShape_getPosition(player->rectangle);
    float size;
    if (player->state == WALK_LEFT || player->state == IDLE_LEFT)
        vector.x -= 17;
    sfRectangleShape_setPosition(rect, (sfVector2f)
    {vector.x - 4, vector.y - 7});
    sfRectangleShape_setOutlineColor(rect, sfBlack);
    sfRectangleShape_setOutlineThickness(rect, 1);
    sfRectangleShape_setSize(rect, (sfVector2f) {25, 5});
    sfRectangleShape_setFillColor(rect, sfWhite);
    sfRenderWindow_drawRectangleShape(video.window, rect, NULL);
    size = 25 / player->hp_max * player->current_hp;
    sfRectangleShape_setOutlineThickness(rect, 0);
    sfRectangleShape_setSize(rect, (sfVector2f) {size, 5});
    sfRectangleShape_setFillColor(rect, sfGreen);
    sfRenderWindow_drawRectangleShape(video.window, rect, NULL);
}

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

static void display_enemies_depth_loop(enemy_t *node, video_t video)
{
    if (node->display_life)
        display_life(node, video);
}

void display_enemies_depth(enemy_t *start, video_t video,
unsigned char depth, int map)
{
    enemy_t *node = start;

    while (node->id < node->next->id) {
        if (node->depth == depth && node->map == map) {
            sfRenderWindow_drawRectangleShape(video.window,
            node->rectangle, NULL);
            display_enemies_depth_loop(node, video);
            node->position = sfRectangleShape_getPosition(node->rectangle);
        }
        node = node->next;
    }
    if (node->depth == depth && node->map == map) {
        sfRenderWindow_drawRectangleShape(video.window,
        node->rectangle, NULL);
        if (node->display_life)
            display_life(node, video);
        node->position = sfRectangleShape_getPosition(node->rectangle);
    }
}
