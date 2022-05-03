/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_settings
*/

#include "my_rpg.h"
#include "keybind.h"

void get_check_key(data_t *data)
{
    data->keys->key = malloc(sizeof(char *) * 100);
    for (int i = 0; i < 100; i++)
        data->keys->key[i] = malloc(sizeof(char) * 20);
    check_key(data);
    check_key_b(data);
    check_key_c(data);
    check_key_d(data);
    check_key_e(data);
}

void assign_keys(data_t *data)
{
    data->keys = malloc(sizeof(keys_t));
    data->keys->up = sfKeyUp;
    data->keys->down = sfKeyDown;
    data->keys->left = sfKeyLeft;
    data->keys->right = sfKeyRight;
    data->keys->attack = sfKeySpace;
    data->keys->interact = sfKeyE;
    data->keys->back = sfKeyB;
    data->keys->inventory = sfKeyI;
    data->keys->pause = sfKeyEscape;
    get_check_key(data);
}

void init_keybind(data_t *data)
{
    data->settings = malloc(sizeof(settings_t));
    data->settings->fps = 60;
    data->settings->volume = 50;
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){500, 390, 30, 140});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 1});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){1500, 100});
    data->tiles = set_tile_rotation(data->tiles, 90);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){16, 400, 256, 145});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.6, 7.6});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->video.ui = 7;
}
