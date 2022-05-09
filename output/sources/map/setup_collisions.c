/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

const int SIZE[4] = {30, 30, 150, 30};

void setup_collisions(data_t *data)
{
    data->collisions_hyrule = malloc(sizeof(int *) * SIZE[2]);
    for (int i = 0; i < SIZE[2]; i++) {
        data->collisions_hyrule[i] = malloc(sizeof(int) * SIZE[2]);
        for (int j = 0; j < SIZE[2]; j++)
            data->collisions_hyrule[i][j] = 0;
    }
}

void setup_collisions_tophouse(data_t *data)
{
    data->collisions_tophouse = malloc(sizeof(int *) * SIZE[0]);
    for (int i = 0; i < SIZE[0]; i++) {
        data->collisions_tophouse[i] =
        malloc(sizeof(int) * SIZE[0]);
        for (int j = 0; j < SIZE[0]; j++)
            data->collisions_tophouse[i][j] = 0;
    }
}

void setup_collisions_house(data_t *data)
{
    data->collisions_house = malloc(sizeof(int *) * SIZE[1]);
    for (int i = 0; i < SIZE[1]; i++) {
        data->collisions_house[i] =
        malloc(sizeof(int) * SIZE[1]);
        for (int j = 0; j < SIZE[1]; j++)
            data->collisions_house[i][j] = 0;
    }
}

void setup_collisions_dj(data_t *data)
{
    data->collisions_dj = malloc(sizeof(int *) * SIZE[3]);
    for (int i = 0; i < SIZE[3]; i++) {
        data->collisions_dj[i] =
        malloc(sizeof(int) * SIZE[3]);
        for (int j = 0; j < SIZE[3]; j++)
            data->collisions_dj[i][j] = 0;
    }
}
