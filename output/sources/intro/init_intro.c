/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_intro
*/

#include "my_rpg.h"

void init_intro(data_t *data)
{
    music_t *tmp = data->musics;
    sfMusic_play(tmp->music);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){300, 410, 180, 100});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){3, 3});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){710, -300});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/presskey.png", NULL);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 1});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){820, 920});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){16, 400, 256, 145});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.6, 7.6});
    data->video.ui = 0;
}
