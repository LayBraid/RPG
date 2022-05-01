/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** init_pause_menu
*/

#include "my_rpg.h"

void init_pause(data_t *data)
{
    sfFont *font = sfFont_createFromFile("assets/font.ttf");
    data->texture_bank = create_texture(data->texture_bank,
    "assets/intro_menu/metro.png", &(sfIntRect){500, 390, 30, 140});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 1});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){700, 200});
    data->tiles = set_tile_rotation(data->tiles, 90);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/link_sleep.jpg", &(sfIntRect){0, 0, 1920, 1080});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->buttons = create_button(data->buttons, "CONTINUE", font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 185});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->buttons = create_button(data->buttons, "HOW TO PLAY", font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 285});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->buttons = create_button(data->buttons, "SETTINGS", font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 385});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->buttons = create_button(data->buttons, "SAVE", font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 485});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->buttons = create_button(data->buttons, "MAIN MENU", font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 585});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->buttons = create_button(data->buttons, "QUIT", font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 685});
    sfText_setCharacterSize(data->buttons->text, 50);
    data->video.ui = 8;
}
