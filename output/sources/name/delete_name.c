/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** delete_name
*/

#include "my_rpg.h"
#include "my.h"

void delete_nameC(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 6;
    data->player.name = my_strdup(data->letter->name);
}

void delete_nameM(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 2;
}
