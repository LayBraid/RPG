/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** delete_menu
*/

#include "my_rpg.h"

void delete_howtoplay(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->buttons = delete_all_buttons(data->buttons);
    data->loading_state = 18;
}
