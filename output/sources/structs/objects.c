/*
** EPITECH PROJECT, 2022
** output
** File description:
** objects
*/

#include "structures.h"

void create_object
    (data_t *data, sfIntRect rect, sfVector2f pos, char *filepath)
{
    object_t *new = malloc(sizeof(object_t));

    new->position = pos;
    new->rect = rect;
    new->texture = sfTexture_createFromFile("./assets/game/stamina.png", &new->rect);
    new->sprite = sfSprite_create();
    sfSprite_setTexture(new->sprite, new->texture, sfTrue);
    new->next = data->objects;
    data->objects = new;
}

void display_object(data_t *data, object_t *node)
{
    sfSprite_setPosition(node->sprite, node->position);
    sfRenderWindow_drawSprite(data->video.window, node->sprite, NULL);
}

void display_all_objects(data_t *data)
{
    object_t *tmp = data->objects;

    while (tmp != NULL) {
        display_object(data, tmp);
        tmp = tmp->next;
    }
}

object_t *delete_object(object_t *node)
{
    sfTexture_destroy(node->texture);
    free(node);
    return (NULL);
}

object_t *delete_all_objects(object_t *start)
{
    object_t *cursor = start;
    object_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_object(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_object(cursor);
    }
    return (NULL);
}
