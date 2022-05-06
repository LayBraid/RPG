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

void create_items(data_t *data, int idx, int mod)
{
    inventory_t *new = malloc(sizeof(inventory_t));
    sfVector2f pos;

    new->main = 0;
    if (mod == 0)
        pos = data->items == NULL ? (sfVector2f){1825,300} : (sfVector2f){1825,data->items->position_item.y + 120};
    else {
        pos = (sfVector2f){800,980};
        new->main = 1;
    }

    switch (idx) {
        case (0) : new = set_items_value(new, (sfIntRect){0,270,10,20}, pos);
            break;
        case (1) : new = set_items_value(new, (sfIntRect){0,270,10,20}, rect_item);
            break;
        // case (2) : new = set_items_value(new, (sfIntRect){0,270,10,20}, rect_item);
        //     break;
        // case (3) : new = set_items_value(new, (sfIntRect){0,270,10,20}, rect_item);
        //     break;
        // case (4) : new = set_items_value(new, (sfIntRect){0,270,10,20}, rect_item);
        //     break;
        // case (5) : new = set_items_value(new, (sfIntRect){0,270,10,20}, rect_item);
        //     break;
        // case (6) : new = set_items_value(new, (sfIntRect){0,270,10,20}, rect_item);
        //     break;
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

void create_slot(data_t *data, sfVector2f pos)
{
    inventory_t *new = malloc(sizeof(inventory_t));

    new = set_items_value(new, (sfIntRect){0,0,1,1}, pos);
    new->position_rect = (sfVector2f){new->position_item.x - 30, new->position_item.y - 20};
    new->rect_rect = (sfIntRect){36,19,24,24};
    new->texture_rect = sfTexture_createFromFile("./assets/game/HUD.png", &new->rect_rect);
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
    sfVector2f pos = (sfVector2f){1825,300};

    for (int i = 0 ; data->player.items[i] ; i++) {
        if (data->player.items[i] == '1')
            create_items(data, i, 0);
        else {
            create_slot(data, pos);
            pos.y += 120;
        }
    }
    create_items(data, data->player.equiped, 1);
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
