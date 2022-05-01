/*
** EPITECH PROJECT, 2022
** output
** File description:
** init_skill_tree
*/


#include "my_rpg.h"

void init_skill_tree(data_t *data)
{
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/tree.png", &(sfIntRect){0, 0, 1920, 1080});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 1});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0,0});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){179, 286, 254, 171});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 6.32});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->video.ui = 8;
}
