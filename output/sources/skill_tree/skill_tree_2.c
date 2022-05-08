/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** skill_tree_2
*/

#include "skill_tree.h"
#include "menus.h"
#include "utils.h"

void analyse_mouse_skill_tree4(data_t *data)
{
    if (is_in_rect((sfIntRect){1047,578,95,95}, data->event.mouseButton.x,
    data->event.mouseButton.y) == 1 && data->player.comp[4] == '1' &&
    data->player.skill_pts > 0) {
        data->player.items[1] = '1';
        data->player.comp[6] = '1';
        data->player.skill_pts -= 1;
        init_outline(data, 6);
    }
}

void analyse_mouse_skill_tree3(data_t *data)
{
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
}

void analyse_mouse_skill_tree2(data_t *data)
{
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
}
