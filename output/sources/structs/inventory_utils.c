/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory_utils
*/

#include "my_rpg.h"

inventory_t *set_items_value(inventory_t *new, sfIntRect rect, sfVector2f pos)
{
    new->rect_item = rect;
    new->texture_item = sfTexture_createFromFile("./assets/game/Link.png", &new->rect_item);
    new->position_item = pos;
    return new;
}

void create_items(data_t *data, int idx, int mod, sfVector2f pos)
{
    inventory_t *new = malloc(sizeof(inventory_t));

    new->main = mod;
    switch (idx) {
        case (0) : new = set_items_value(new, (sfIntRect){0,270,10,20}, pos);
            break;
        case (1) : new = set_items_value(new, (sfIntRect){427,320,14,16}, pos);
            break;
    }
    new->position_rect = (sfVector2f){new->position_item.x - 30, new->position_item.y - 20};
    new->rect_rect = (sfIntRect){36,19,24,24};
    new->texture_rect = sfTexture_createFromFile("./assets/game/HUD.png", &new->rect_rect);
    new->sprite_item = sfSprite_create();
    new->sprite_rect = sfSprite_create();
    sfSprite_setTexture(new->sprite_item, new->texture_item, sfTrue);
    sfSprite_setTexture(new->sprite_rect, new->texture_rect, sfTrue);
    sfSprite_setScale(new->sprite_item, (sfVector2f){5,5});
    sfSprite_setScale(new->sprite_rect, (sfVector2f){5,5});
    new->item = idx;
    new->next = data->items;
    data->items = new;
}

void get_items(data_t *data)
{
    sfVector2f pos = (sfVector2f){1825,200};

    for (int i = 0 ; data->player.items[i] ; i++) {
        if (data->player.items[i] == '1' && i != data->player.equiped)
            create_items(data, i, 0, pos);
        pos.y += 110;
    }
    create_items(data, data->player.equiped, 1, (sfVector2f){800,980});
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

inventory_t *delete_item(inventory_t *item)
{
    sfSprite_destroy(item->sprite_item);
    sfSprite_destroy(item->sprite_rect);
    free(item);
    return NULL;
}

inventory_t *delete_inventory_de_oscar(data_t *data)
{
    inventory_t *cursor = data->items;
    inventory_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_item(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_item(cursor);
    }
    return (NULL);
}
