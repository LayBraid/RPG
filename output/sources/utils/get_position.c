/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "map.h"

sfVector2i get_position(data_t *data, int entity, int index)
{
    sfVector2i pos = {0};
    int count = 0;

    for (int i = 0; i < SIZE_MAP; i++) {
        for (int j = 0; j < SIZE_MAP; j++) {
            if (data->positions[i][j] == entity && count == index) {
                pos.x = j;
                pos.y = i;
                return (pos);
            }
            if (data->positions[i][j] == entity)
                count++;
        }
    }
    return (pos);
}
