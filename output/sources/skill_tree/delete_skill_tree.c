/*
** EPITECH PROJECT, 2022
** output
** File description:
** delete_skill_tree
*/

#include "my_rpg.h"
#include "skill_tree.h"
#include "menus.h"
#include "utils.h"
#include "my.h"

void delete_skill_tree(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->outline = delete_all_outline(data->outline);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->texts = delete_all_texts(data->texts);
}
