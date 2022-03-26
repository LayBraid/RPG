/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_intro
*/

#include "../../include/my_rpg.h"

void init_intro(data_t *data)
{
    create_texture(data->texture_bank,
    "../../assets/intro_menu/metro.png", &(sfIntRect){16, 400, 256, 145});
    //set_texture_rect(data->texture_bank, (sfIntRect);
    create_tile(data->tiles);
    set_tile_texture(data->tiles, data->texture_bank);
    // create_texture(data->texture_bank,
    // "../../assets/intro_menu/metro.png", &(sfIntRect){16, 400, 0, 0});
    //set_texture_rect(data->texture_bank, (sfIntRect){0, 0, 0, 0}, 0);
    // create_tile(data->tiles);
    // set_tile_texture(data->tiles, data->texture_bank);
    data->video.ui = 0;
}
