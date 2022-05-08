/*
** EPITECH PROJECT, 2022
** output
** File description:
** outline_utils
*/

#include "structures.h"

void create_outline(data_t *data, sfIntRect rect, sfVector2f pos)
{
    outline_t *new = malloc(sizeof(outline_t));

    new->rect = rect;
    new->sprite = sfSprite_create();
    new->texture = sfTexture_createFromFile("assets/game/outline.png",
    &new->rect);
    sfSprite_setTexture(new->sprite, new->texture, sfTrue);
    new->position = pos;
    new->next = data->outline;
    data->outline = new;
}

void display_outline(data_t *data)
{
    outline_t *tmp = data->outline;

    while (tmp != NULL) {
        sfSprite_setPosition(tmp->sprite, tmp->position);
        sfRenderWindow_drawSprite(data->video.window, tmp->sprite, NULL);
        tmp = tmp->next;
    }
}

outline_t *delete_outline(outline_t *node)
{
    if (node->sprite != NULL)
        sfSprite_destroy(node->sprite);
    free(node);
    return (NULL);
}

outline_t *delete_all_outline(outline_t *start)
{
    outline_t *cursor = start;
    outline_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_outline(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_outline(cursor);
    }
    return (NULL);
}
