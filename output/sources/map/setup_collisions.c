/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

void setup_collisions(data_t *data)
{
    data->collisions = malloc(sizeof(int *) * SIZE_MAP);
    data->positions = malloc(sizeof(int *) * SIZE_MAP);
    for (int i = 0; i < SIZE_MAP; i++) {
        data->collisions[i] = malloc(sizeof(int) * SIZE_MAP);
        data->positions[i] = malloc(sizeof(int) * SIZE_MAP);
        for (int j = 0; j < SIZE_MAP; j++) {
            data->collisions[i][j] = 0;
            data->positions[i][j] = 0;
        }
    }
}
