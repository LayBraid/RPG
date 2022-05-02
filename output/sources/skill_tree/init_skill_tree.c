/*
** EPITECH PROJECT, 2022
** output
** File description:
** init_skill_tree
*/


#include "my_rpg.h"

void get_outline_position(data_t *data, int idx) {
    switch (idx) {
        case 0: data->tiles = set_tile_position(data->tiles, (sfVector2f){504, 420});
            break;
        case 1: data->tiles = set_tile_position(data->tiles, (sfVector2f){660, 267});
            break;
        case 2: data->tiles = set_tile_position(data->tiles, (sfVector2f){660, 578});
            break;
        case 3: data->tiles = set_tile_position(data->tiles, (sfVector2f){852, 267});
            break;
        case 4: data->tiles = set_tile_position(data->tiles, (sfVector2f){852, 578});
            break;
        case 5: data->tiles = set_tile_position(data->tiles, (sfVector2f){1047, 267});
            break;
        case 6: data->tiles = set_tile_position(data->tiles, (sfVector2f){1047, 578});
            break;
    }
}

void init_outline(data_t *data, int idx)
{
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/outline.png", &(sfIntRect){0, 0, 32, 32});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){2.95, 2.95});
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = tile_set_type(data->tiles, 3);
    get_outline_position(data, idx);

}

void init_skill_tree(data_t *data)
{
    for (int i = 0 ; i < 7 ; i++)
        if (data->player.items[i] == '1')
            init_outline(data, i);
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
