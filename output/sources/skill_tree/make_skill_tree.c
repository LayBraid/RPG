/*
** EPITECH PROJECT, 2022
** output
** File description:
** make_skill_tree
*/

#include "skill_tree.h"
#include "menus.h"
#include "utils.h"

void get_key_skill_tree(data_t *data)
{
    if (data->event.key.code == sfKeyEscape) {
        delete_skill_tree(data);
        data->video.ui = 2;
    }
}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtMouseButtonPressed): analyse_mouse_skill_tree(data);
                break;
            case (sfEvtKeyPressed) : get_key_skill_tree(data);
                break;
            default: break;
        }
    }
}

void analyse_mouse_skill_tree(data_t *data)
{
    if (is_in_rect((sfIntRect){504,420,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.skill_pts > 0) {
        data->player.items[0] = '1';
        data->player.comp[0] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 0);
    }
    if (is_in_rect((sfIntRect){660,267,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[0] == '1' &&
    data->player.skill_pts > 0) {
        data->player.dmg += 1;
        data->player.comp[1] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 1);
    }
    if (is_in_rect((sfIntRect){660,578,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[0] == '1' &&
    data->player.skill_pts > 0) {
        data->player.hp_max += 1;
        data->player.comp[2] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 2);
    }
    if (is_in_rect((sfIntRect){852,267,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[1] == '1' &&
    data->player.skill_pts > 0) {
        data->player.dmg += 1;
        data->player.comp[3] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 3);
    }
    if (is_in_rect((sfIntRect){852,578,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[2] == '1' &&
    data->player.skill_pts > 0) {
        data->player.hp_max += 1;
        data->player.comp[4] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 4);
    }
    if (is_in_rect((sfIntRect){1047,267,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[3] == '1' &&
    data->player.skill_pts > 0) {
        data->player.items[2] = '1';
        data->player.comp[5] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 5);
    }
    if (is_in_rect((sfIntRect){1047,578,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[4] == '1' &&
    data->player.skill_pts > 0) {
        data->player.items[1] = '1';
        data->player.comp[6] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 6);
    }
}

void update_text(data_t *data)
{
    data->texts = delete_all_texts(data->texts);
    init_tree_text(data);
}

void skill_tree(data_t *data)
{
    outline_clock(data);
    display_all(data);
    display_outline(data);
    update_text(data);
    analyse_event(data);
}
