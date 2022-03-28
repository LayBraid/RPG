/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_intro
*/

#include "../../include/my_rpg.h"

void init_intro(data_t *data)
{
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){300, 410, 180, 100});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){3, 3});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){710, 300});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){16, 400, 256, 145});
    //set_texture_rect(data->texture_bank, (sfIntRect);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.6, 7.6});
    // create_texture(data->texture_bank,
    // "../../assets/intro_menu/metro.png", &(sfIntRect){16, 400, 0, 0});
    //set_texture_rect(data->texture_bank, (sfIntRect){0, 0, 0, 0}, 0);
    // create_tile(data->tiles);
    // set_tile_texture(data->tiles, data->texture_bank);
    data->video.ui = 0;
}
