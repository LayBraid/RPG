/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** display_utils
*/

#include "utils.h"

void display_tile_depth(tile_t *start, video_t video,
unsigned char depth, int map)
{
    tile_t *node = start;

    while (node != NULL) {
        if (node->depth == depth) {
            sfRenderWindow_drawSprite(video.window, node->sprite, NULL);
            node->position = sfSprite_getPosition(node->sprite);
        }
        node = node->next;
    }
}

void display_npc_depth(npc_t *start, video_t video,
unsigned char depth, int map)
{
    npc_t *node = start;

    while (node != NULL) {
        if (node->depth == depth && map == node->map) {
            sfRenderWindow_drawRectangleShape(video.window,
            node->rectangle, NULL);
            node->position = sfRectangleShape_getPosition(node->rectangle);
        }
        node = node->next;
    }
}

void display_buttons(button_t *start, video_t video)
{
    button_t *node = start;

    while (node != NULL) {
        sfRenderWindow_drawSprite(video.window, node->sprite, NULL);
        sfRenderWindow_drawText(video.window, node->text, NULL);
        node->position = sfSprite_getPosition(node->sprite);
        node = node->next;
    }
}

void display_texts(text_t *start, video_t video)
{
    text_t *node = start;

    while (node != NULL) {
        sfText_setPosition(node->text, node->position);
        sfRenderWindow_drawText(video.window, node->text, NULL);
        node = node->next;
    }
}

void display_player_depth(player_t player, video_t video, unsigned char depth)
{
    if (player.depth == depth) {
        if (player.damage_display)
            display_life_player(&player, video);
        sfRenderWindow_drawRectangleShape(video.window,
        player.rectangle, NULL);
        player.position = sfRectangleShape_getPosition(player.rectangle);
    }
}
