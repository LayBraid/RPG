/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

int my_range(sfVector2i v1, sfVector2i v2, int range)
{
    if (((v2.x - v1.x) <= range || (v2.x - v1.x) >= -range) &&
        ((v2.y - v1.y) <= range || (v2.y - v1.y) >= -range))
        return 1;
    /*for (int i = 0; i < range; i++) {
        if ()
    }*/
    return 0;
}
