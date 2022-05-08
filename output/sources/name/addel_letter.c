/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** addel_letter
*/

#include "my_rpg.h"
#include "utils.h"
#include "my.h"

void delete_letter(data_t *data)
{
    node_letter *letter;

    if (data->letter->count > 0) {
        data->tiles = delete_first_tile(data);
        letter = get_letter_c(data,
        data->letter->name[data->letter->count - 1]);
        data->letter->view.x -= (float) letter->rect.width * 7.55f + 6;
        data->letter->name = my_strdel_c(data->letter->name);
        data->letter->count--;
    }
}

void put_letter(data_t *data)
{
    if (data->letter->count < 10) {
        node_letter *letter = get_letter(data, data->letter->pos);
        float comp = 7.00f;
        data->texture_bank = create_texture(data->texture_bank,
        "assets/game/input name hud.png", &letter->rect);
        data->tiles = create_tile(data->tiles);
        data->tiles = set_tile_texture(data->tiles, data->texture_bank);
        data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55f, 4.86f});
        if (letter->rect.height < 13)
            comp += 7.55f * 2;
        data->tiles = set_tile_position(data->tiles,(sfVector2f)
        {data->letter->view.x, (float) (data->letter->view.y + comp)});
        data->tiles->depth = 2;
        data->letter->view.x += (float) letter->rect.width * 7.55f + 6;
        data->letter->name = my_strcat_c(data->letter->name, letter->letter);
        data->letter->count++;
    }
}
