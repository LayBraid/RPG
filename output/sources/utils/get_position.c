/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "map.h"

const int SIZE_2[2] = {150, 30};

sfVector2i get_position(data_t *data, int entity, int index)
{
    sfVector2i pos = {0};
    int count = 0;

    for (int i = 0; i < SIZE_2[data->my_map]; i++) {
        for (int j = 0; j < SIZE_2[data->my_map]; j++) {
            if (data->positions_hyrule[i][j] == entity && count == index) {
                pos.x = j;
                pos.y = i;
                return (pos);
            }
            if (data->positions_hyrule[i][j] == entity)
                count++;
        }
    }
    return (pos);
}
