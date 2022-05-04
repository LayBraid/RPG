/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialog_utils
*/

#include "my_rpg.h"
#include "dialogs.h"

void delete_first_tile(data_t *data)
{
    tile_t *cursor = data->tiles;

    if (data->tiles != NULL) {
        data->tiles = data->tiles->next;
        cursor = delete_tile(cursor);
    }
}
