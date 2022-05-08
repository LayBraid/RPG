/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** inventory
*/

#include "inventory.h"
#include "utils.h"

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case(sfEvtMouseButtonPressed): get_inventory_mouse_click(data);
                break;
            case (sfEvtKeyPressed):
                if (data->event.key.code == sfKeyTab) {
                    data->items = delete_inventory_de_oscar(data);
                    data->video.ui = 2;
                }
                break;
            default: break;
        }
    }
}

int check_main_inventory(inventory_t *tmp, data_t *data)
{
    sfIntRect pos;

    if (tmp->main == 1 && data->video.drag != -1) {
        pos = (sfIntRect){770, 900, 120, 120};
        if (is_in_rect(pos, data->event.mouseButton.x,
            data->event.mouseButton.y) == 1) {
            data->player.equiped = data->video.drag;
            data->video.drag = -1;
            data->items = delete_inventory_de_oscar(data);
            data->video.ui = 2;
        }
        return 1;
    }
    return 0;
}

void get_inventory_mouse_click(data_t *data)
{
    inventory_t *tmp = data->items;
    sfIntRect pos;

    while (tmp != NULL) {
        if (check_main_inventory(tmp, data) == 1)
            return;
        pos = (sfIntRect){tmp->position_rect.x,
        tmp->position_rect.y, 125, 125};
        if (is_in_rect(pos, data->event.mouseButton.x,
            data->event.mouseButton.y) == 1 && tmp->item != -1) {
            data->video.drag = tmp->item;
            return;
        }
        tmp = tmp->next;
    }
}

void inventory_loop(data_t *data)
{
    data->video.ui = 6;
    move_sprite_drag_and_drop(data);
    display_all(data);
    analyse_event(data);
}
