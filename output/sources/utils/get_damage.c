/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

int random_number(int max)
{
    int random;

    random = rand() % max;
    return (random);
}

double get_damage(int type)
{
    if (type == 1)
        return (random_number(15));
    return 0;
}
