/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** delete_menu
*/

#include "my_rpg.h"

void delete_menuN(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 14;
}

void delete_menuL(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 7;
}

void delete_menuS(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 8;
}
