/*
** EPITECH PROJECT, 2022
** output
** File description:
** make_skill_tree
*/

#include "skill_tree.h"
#include "menus.h"
#include "utils.h"

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtMouseButtonPressed): analyse_mouse_skill_tree(data);
                break;
            default: break;
        }
    }
}

void analyse_mouse_skill_tree(data_t *data)
{
    if (is_in_rect((sfIntRect){504,420,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.skill_pts > 0) {
        data->player.items[0] = '1';
        data->player.skill_pts -= 1;
    }
    if (is_in_rect((sfIntRect){660,267,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.items[0] == '1' && data->player.skill_pts > 0) {
        data->player.items[1] = '1';
        data->player.skill_pts -= 1;
    }
    if (is_in_rect((sfIntRect){660,578,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.items[0] == '1' && data->player.skill_pts > 0) {
        data->player.items[2] = '1';
        data->player.skill_pts -= 1;
    }
    if (is_in_rect((sfIntRect){852,267,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.items[1] == '1' && data->player.skill_pts > 0) {
        data->player.items[3] = '1';
        data->player.skill_pts -= 1;
    }
    if (is_in_rect((sfIntRect){852,578,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.items[2] == '1' && data->player.skill_pts > 0) {
        data->player.items[4] = '1';
        data->player.skill_pts -= 1;
    }
    if (is_in_rect((sfIntRect){1047,267,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.items[3] == '1' && data->player.skill_pts > 0) {
        data->player.items[5] = '1';
        data->player.skill_pts -= 1;
    }
    if (is_in_rect((sfIntRect){1047,578,95,95}, data->event.mouseButton.x, data->event.mouseButton.y) == 1
    && data->player.items[4] == '1' && data->player.skill_pts > 0) {
        data->player.items[6] = '1';
        data->player.skill_pts -= 1;
    }
}

void skill_tree(data_t *data)
{
    display_all(data);
    analyse_event(data);
}