/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_settings
*/

#include "../../../include/my_rpg.h"

void init_settings(data_t *data)
{
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){16, 400, 256, 145});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.6, 7.6});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->video.ui = 4;
}