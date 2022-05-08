/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** delete_new_game
*/

#include "my_rpg.h"

void delete_new_game(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 2;
}
