/*
** EPITECH PROJECT, 2022
** output
** File description:
** initializers
*/

#include "my_rpg.h"
#include "dialogs.h"

void init_dialog_choice(data_t *data, sfVector2f pos)
{
    data->texture_bank = create_texture(data->texture_bank, "assets/textures/dialog2.png", NULL);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){0.08, 0.09});
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank->next);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){0.08, 0.18});
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->texts = create_text(data->texts, "Oui", data->font);
    data->texts = create_text(data->texts, "Non", data->font);
    sfText_setPosition(data->texts->text, (sfVector2f){1850, 760});
    sfText_setPosition(data->texts->next->text, (sfVector2f){1850, 810});
}
