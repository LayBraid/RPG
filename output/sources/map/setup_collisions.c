/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

const int SIZE[2] = {150, 30};

void setup_collisions(data_t *data)
{
    data->collisions_hyrule = malloc(sizeof(int *) * SIZE[data->my_map]);
    for (int i = 0; i < SIZE[data->my_map]; i++) {
        data->collisions_hyrule[i] = malloc(sizeof(int) * SIZE[data->my_map]);
        for (int j = 0; j < SIZE[data->my_map]; j++)
            data->collisions_hyrule[i][j] = 0;
    }
}

void setup_collisions_tophouse(data_t *data)
{
    data->collisions_tophouse = malloc(sizeof(int *) * SIZE[data->my_map]);
    for (int i = 0; i < SIZE[data->my_map]; i++) {
        data->collisions_tophouse[i] =
        malloc(sizeof(int) * SIZE[data->my_map]);
        for (int j = 0; j < SIZE[data->my_map]; j++)
            data->collisions_tophouse[i][j] = 0;
    }
}

void setup_collisions_house(data_t *data)
{
    data->collisions_house = malloc(sizeof(int *) * SIZE[data->my_map]);
    for (int i = 0; i < SIZE[data->my_map]; i++) {
        data->collisions_house[i] =
        malloc(sizeof(int) * SIZE[data->my_map]);
        for (int j = 0; j < SIZE[data->my_map]; j++)
            data->collisions_house[i][j] = 0;
    }
}
