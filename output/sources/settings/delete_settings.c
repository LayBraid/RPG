/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** delete_settings
*/

#include "my_rpg.h"

void delete_settings(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    if (data->settings_state[0] == 'G')
        data->loading_state = 18;
    else if (data->settings_state[0] == 'M')
        data->loading_state = 2;
}

void delete_settingsK(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->texture_bank = delete_all_textures(data->texture_bank);
    data->loading_state = 10;
}
