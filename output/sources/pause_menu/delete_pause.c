/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** delete_pause
*/

#include "my_rpg.h"

void delete_pauseM(data_t *data)
{
    data->buttons = delete_all_buttons(data->buttons);
    data->tiles = delete_all_tiles(data->tiles);
    data->loading_state = 2;
}

void delete_pauseN(data_t *data)
{
    data->buttons = delete_all_buttons(data->buttons);
    data->tiles = delete_all_tiles(data->tiles);
    data->video.ui = 2;
}

void delete_pauseH(data_t *data)
{
    data->buttons = delete_all_buttons(data->buttons);
    data->tiles = delete_all_tiles(data->tiles);
    data->loading_state = 23;
}

void delete_pauseS(data_t *data)
{
    data->buttons = delete_all_buttons(data->buttons);
    data->tiles = delete_all_tiles(data->tiles);
    data->loading_state = 8;
}
