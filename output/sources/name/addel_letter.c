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
    printf("%f\n", data->letter->pos.x);
    printf("%f\n", data->letter->pos.y);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", get_rect_letter(data, data->letter->view));
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55, 4.86});
    data->tiles = set_tile_position(data->tiles,
    (sfVector2f){data->letter->view.x, data->letter->view.y});
    data->tiles->depth = 2;
    data->letter->view.x += 55;
    // fill_name(data, 1);
}
