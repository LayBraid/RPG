/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_menu
*/

#include "my_rpg.h"
#include "my.h"

void init_howtoplay(data_t *data)
{
    sfFont *font = sfFont_createFromFile("assets/font.ttf");
    char *move = my_fprintf("To move Link, use the %s\n %s %s %s keys", data->keys->key[data->keys->up], data->keys->key[data->keys->down], data->keys->key[data->keys->left], data->keys->key[data->keys->right]);
    char *attack = my_fprintf("To attack, use the %s key", data->keys->key[data->keys->attack]);
    char *interact = my_fprintf("To interact, use the %s key", data->keys->key[data->keys->interact]);
    char *back = my_fprintf("To quit, use the %s key", data->keys->key[data->keys->back]);
    char *inventory = my_fprintf("To open the inventory, use the %s key", data->keys->key[data->keys->inventory]);
    char *pause = my_fprintf("To pause the game, use the %s key", data->keys->key[data->keys->pause]);
    data->buttons = create_button(data->buttons, move, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){50, 185});
    sfText_setCharacterSize(data->buttons->text, 64);
    data->buttons = create_button(data->buttons, attack, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){0, 200});
    sfText_setCharacterSize(data->buttons->text, 64);
    data->buttons = create_button(data->buttons, interact, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){0, 215});
    sfText_setCharacterSize(data->buttons->text, 64);
    data->buttons = create_button(data->buttons, back, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){0, 230});
    sfText_setCharacterSize(data->buttons->text, 64);
    data->buttons = create_button(data->buttons, inventory, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){0, 245});
    sfText_setCharacterSize(data->buttons->text, 64);
    data->buttons = create_button(data->buttons, pause, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){0, 260});
    sfText_setCharacterSize(data->buttons->text, 64);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/board.png", &(sfIntRect){0, 0, 1920, 1080});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/link_sleep.jpg", &(sfIntRect){0, 0, 1920, 1080});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->video.ui = 9;
}
