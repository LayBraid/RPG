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
    analyse_mouse_skill_tree2(data);
    analyse_mouse_skill_tree3(data);
    analyse_mouse_skill_tree4(data);
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
