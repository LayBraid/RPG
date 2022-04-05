/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** delete_intro
*/

#include "../../include/my_rpg.h"

void delete_intro(data_t *data)
{
    delete_all_tiles(data->tiles);
    delete_all_textures(data->texture_bank);
    data->loading_state = 2;
}