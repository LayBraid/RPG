/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory_utils
*/

#include "my_rpg.h"

void create_items(data_t *data, int idx)
{
    inventory_t *new = malloc(sizeof(inventory_t));

    new->rect = (sfIntRect *){0,0,100,200};
    new->texture = sfTexture_createFromFile("./assets/game/Link.png", new->rect);
    new->position = (sfVector2f){800,500};
    new->sprite = sfSprite_create();
    sfSprite_setTexture(new->sprite, new->texture, sfTrue);
    new->next = data->items;
    data->items = new;
}

void get_items(data_t *data)
{
    for (int i = 0 ; data->player.items[i] ; i++)
        if (data->player.items[i] == '1')
            create_items(data, i);
}

void display_items(data_t *data)
{
    inventory_t *tmp = data->items;

    while (tmp != NULL) {
        sfSprite_setPosition(tmp->sprite, tmp->position);
        sfRenderWindow_drawSprite(data->video.window, tmp->sprite, NULL);
        tmp = tmp->next;
    }
}
