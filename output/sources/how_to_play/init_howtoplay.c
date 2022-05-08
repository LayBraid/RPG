/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** init_menu
*/

#include "my_rpg.h"
#include "my.h"
#include "my_fprintf.h"

char *print_how_to_play(data_t *data)
{
    char *commands = my_fprintf("To move Link, use the\n%s %s %s %s "
    "keys\n\nTo "
    "attack, use the %s key\n\nTo interact, use the %s key\n\nTo quit, use the"
    " %s key\n\nTo open the inventory, use the %s key\n\nTo pause the game, "
    "use the %s key", data->keys->key[data->keys->up],
    data->keys->key[data->keys->down], data->keys->key[data->keys->left],
    data->keys->key[data->keys->right], data->keys->key[data->keys->attack],
    data->keys->key[data->keys->interact], data->keys->key[data->keys->back],
    data->keys->key[data->keys->inventory],
    data->keys->key[data->keys->pause]);
    return (commands);
}

void init_howtoplay(data_t *data)
{
    sfFont *font = sfFont_createFromFile("assets/font.ttf");
    char *commands = print_how_to_play(data);
    data->buttons = create_button(data->buttons, commands, font);
    data->buttons = set_button_position(data->buttons, (sfVector2f){510, 260});
    sfText_setCharacterSize(data->buttons->text, 45);
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
