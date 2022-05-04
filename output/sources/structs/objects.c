/*
** EPITECH PROJECT, 2022
** output
** File description:
** objects
*/

#include "structures.h"

void create_object(data_t *data, sfIntRect rect, sfVector2f pos, char *filepath)
{
    object_t *new = data->objects;

    printf("oui\n");
    new->position = pos;
    printf("oui\n");
    new->rect = rect;
    printf("oui\n");
    new->texture = sfTexture_createFromFile("./assets/game/stamina.png", &new->rect);
    new->sprite = sfSprite_create();
    printf("oui\n");
    // sfSprite_setTexture(new->sprite, new->texture, sfTrue);
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
