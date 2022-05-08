/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_credits
*/

#include "my_rpg.h"
#include "utils.h"

void init_credits(data_t *data)
{
    sfFont *font = sfFont_createFromFile("assets/font.ttf");
    data->buttons = create_button(data->buttons,
    get_in_buffer("data/credits"), font);
    data->buttons = set_button_position(data->buttons,
    (sfVector2f){150, 1200});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){16, 400, 256, 145});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.6, 7.6});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->video.ui = 11;
}
