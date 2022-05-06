/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** inventory
*/

#include "my_rpg.h"
#include "utils.h"

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case(sfEvtMouseButtonPressed): get_inventory_mouse_click(data);
        }
    }
}

int check_main_inventory(inventory_t *tmp, data_t *data)
{
    sfIntRect pos;

    if (tmp->main == 1 && data->video.drag != -1) {
        pos = (sfIntRect){tmp->position_rect.x, tmp->position_rect.y, 125, 125};
        if (is_in_rect(tmp->rect_rect, data->event.mouseButton.x, data->event.mouseButton.y) == 0) {
            data->player.equiped = data->video.drag;
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
        pos = (sfIntRect){tmp->position_rect.x, tmp->position_rect.y, 125, 125};
        if (is_in_rect(tmp->rect_rect, data->event.mouseButton.x, data->event.mouseButton.y) == 0) {
            data->video.drag = tmp->item;
            data->video.ui = 2;
            return;
        }
        tmp = tmp->next;
    }
}

void inventory_loop(data_t *data)
{
    data->video.ui = 6;
    display_all(data);
    analyse_event(data);
}
