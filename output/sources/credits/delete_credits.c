/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** delete_credits
*/

#include "my_rpg.h"

void delete_credits(data_t *data)
{
    data->tiles = delete_all_tiles(data->tiles);
    data->buttons = delete_all_buttons(data->buttons);
    data->loading_state = 2;
}
