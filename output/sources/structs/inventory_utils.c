/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory_utils
*/

// inventory_t *set_inventory_count(inventory_t *node, unsigned int count)
// {
//     node->count = count;
//     return (node);
// }

// inventory_t *set_inventory_texture(inventory_t *node, texture_t *texture)
// {
//     node->rect = texture->rect;
//     sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
//     sfSprite_setTextureRect(node->sprite, node->rect);
//     return (node);
// }

#include "my_rpg.h"

void create_items(data_t *data, int idx)
{
    inventory_t *new = malloc(sizeof(inventory_t));

    switch (idx) {
        case (0) : new->rect_item = (sfIntRect){0,270,10,20};
            new->texture_item =
            sfTexture_createFromFile("./assets/game/Link.png",
            &new->rect_item);
            new->position_item = (sfVector2f){800,980};
            new->item = 1;
            break;
    }
    new->position_rect = (sfVector2f){new->position_item.x - 30,
    new->position_item.y - 20};
    new->rect_rect = (sfIntRect){36,19,24,24};
    new->texture_rect = sfTexture_createFromFile("./assets/game/HUD.png",
    &new->rect_rect);
    new->sprite_item = sfSprite_create();
    new->sprite_rect = sfSprite_create();
    sfSprite_setTexture(new->sprite_item, new->texture_item, sfTrue);
    sfSprite_setTexture(new->sprite_rect, new->texture_rect, sfTrue);
    sfSprite_setScale(new->sprite_item, (sfVector2f){5,5});
    sfSprite_setScale(new->sprite_rect, (sfVector2f){5,5});
    new->next = data->items;
    data->items = new;
}

void get_items(data_t *data)
{
    for (int i = 0 ; data->player.items[i] ; i++) {
        if (data->player.items[i] == '1')
            create_items(data, i);
    }
}

void display_items(data_t *data)
{
    inventory_t *tmp = data->items;

    while (tmp != NULL) {
        sfSprite_setPosition(tmp->sprite_item, tmp->position_item);
        sfSprite_setPosition(tmp->sprite_rect, tmp->position_rect);
        sfRenderWindow_drawSprite(data->video.window, tmp->sprite_item, NULL);
        sfRenderWindow_drawSprite(data->video.window, tmp->sprite_rect, NULL);
        tmp = tmp->next;
    }
}
