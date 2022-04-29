/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

int my_range(sfVector2f v1, sfVector2f v2, double range)
{
    double x = v2.x - v1.x;
    double y = v2.y - v1.y;
    double h = x * x + y * y;
    double r = sqrt(h);

    if (r <= range)
        return (1);
    return 0;
}
