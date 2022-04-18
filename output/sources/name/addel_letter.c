/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** addel_letter
*/

#include "my_rpg.h"
#include "utils.h"

// void fill_name(data_t *data, int adel)
// {
//     switch (adel) {
//     case 1:
//         /* code */
//         break;
//     case 2:
//         /* code */
//         break;
//     default:
//         break;
//     }
// }

// void delete_letter(data_t *data)
// {
//     // aller del le dernier crée
//     data->letter->view.x -= 93;
//     fill_name(data, 2);
// }

void put_letter(data_t *data)
{
    IntR *rect = get_rect_letter(data, data->letter->pos);
    float comp = 7.00f;
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", rect);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55f, 4.86f});
    if (rect->height < 13)
        comp += 7.55f * 2;
    data->tiles = set_tile_position(data->tiles,(sfVector2f) {data->letter->view.x, (float) (data->letter->view.y + comp)});
    data->tiles->depth = 2;
    data->letter->view.x += (float) rect->width * 7.55f + 6;
    // fill_name(data, 1);
}
