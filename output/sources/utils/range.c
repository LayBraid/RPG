/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

double my_sqrt(double nb)
{
    double result = 0;
    double precision = 0.000001;

    if (nb < 0)
        return (0);
    for (int i = 0; i < 100; i++) {
        result = (result + nb / result) / 2;
        if (fabs(result * result - nb) < precision)
            return (result);
    }
    return (0);
}

double my_range(sfVector2f v1, sfVector2f v2)
{
    double x = v2.x - v1.x;
    double y = v2.y - v1.y;
    double h = x * x + y * y;
    double r = sqrt(h);

    return (r);
}
