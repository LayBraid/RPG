/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"


void setup_collisions(data_t *data)
{
    data->collisions_hyrule = malloc(sizeof(int *) * SIZE_MAP);
    data->positions_hyrule = malloc(sizeof(int *) * SIZE_MAP);
    for (int i = 0; i < SIZE_MAP; i++) {
        data->collisions_hyrule[i] = malloc(sizeof(int) * SIZE_MAP);
        data->positions_hyrule[i] = malloc(sizeof(int) * SIZE_MAP);
        for (int j = 0; j < SIZE_MAP; j++) {
            data->collisions_hyrule[i][j] = 0;
            data->positions_hyrule[i][j] = 0;
        }
    }
}
