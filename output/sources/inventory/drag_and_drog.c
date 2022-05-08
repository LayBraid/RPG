/*
** EPITECH PROJECT, 2022
** output
** File description:
** drag_and_drog
*/

#include "my_rpg.h"

void move_sprite_drag_and_drop(data_t *data)
{
    inventory_t *tmp = data->items;

    if (data->video.drag == -1)
        return;
    sfVector2i pos = sfMouse_getPositionRenderWindow(data->video.window);
    while (tmp != NULL && tmp->item != data->video.drag)
        tmp = tmp->next;
    tmp->position_rect.x = (float){pos.x};
    tmp->position_rect.y = (float){pos.y};
    tmp->position_item.x = (float){pos.x + 30};
    tmp->position_item.y = (float){pos.y + 20};
    sfSprite_setPosition(tmp->sprite_rect, tmp->position_rect);
    sfSprite_setPosition(tmp->sprite_item, tmp->position_item);
}
