/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** init_intro
*/

#include "my_rpg.h"

void init_name3(data_t *data)
{
    data->tiles = set_tile_position(data->tiles, (sfVector2f){240, 475});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){10, 85, 158, 33});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){240, 310});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){10, 40, 164, 20});
}

void init_name2(data_t *data)
{
    data->tiles = set_tile_position(data->tiles, (sfVector2f){1500, 890});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){10, 218, 93, 17});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){215, 750});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){10, 185, 158, 33});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){215, 590});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){10, 118, 93, 17});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});

}

void init_name1(data_t *data)
{
    data->letter = malloc(sizeof(letter_t));
    data->letter->pos.x = 195;
    data->letter->name = "";
    data->letter->pos.y = 310;
    data->letter->view.x = 240;
    data->letter->view.y = 105;
    data->letter->count = 0;
    data->letter->state = 0;
    data->letter->clock = sfClock_create();
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){45, 168, 27, 18});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){195, 310});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){138, 150, 30, 20});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
}

void init_name(data_t *data)
{
    init_name1(data);
    init_name2(data);
    init_name3(data);

    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){4.55, 4.86});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){340, 90});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){180, 236, 255, 222});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
    data->video.ui = 5;
}
