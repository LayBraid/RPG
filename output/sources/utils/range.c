/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"
#include "math.h"

double my_sqrt(double nb)
{
    double result = 0;
    double i = 0;

    while (i * i <= nb) {
        i += 0.1;
    }
    i -= 0.1;
    while (i * i <= nb) {
        if (i * i == nb) {
            result = i;
            return (result);
        }
        i += 0.1;
    }
    return (result);
}

int my_range(sfVector2i v1, sfVector2i v2, double range)
{
    int x = v2.x - v1.x;
    int y = v2.y - v1.y;
    double h = x * x + y * y;
    double r = my_sqrt(h);

    if (r <= range)
        return (1);
    return 0;
}
