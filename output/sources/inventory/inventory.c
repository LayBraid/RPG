/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** inventory
*/

#include "inventory.h"
#include "utils.h"

void get_inventory_mouse_click(data_t *data)
{
    inventory_t *tmp = data->items;
    sfIntRect pos;

    while (tmp != NULL) {
        pos = (sfIntRect){tmp->position_rect.x, tmp->position_rect.y, 125, 125};
        if (is_in_rect(tmp->rect_rect, data->event.mouseButton.x, data->event.mouseButton.y) == 0) {
            data->player.equiped = tmp->item;
            data->video.ui = 2;
        }
        tmp = tmp->next;
    }
}

void analyse_event_inventory(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtMouseButtonPressed): get_inventory_mouse_click(data);
                break;
        }
    }
}
