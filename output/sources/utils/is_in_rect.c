/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** is_in_rect
*/

#include "utils.h"

int is_in_rect(sfIntRect rect, int x, int y)
{
    if (((x >= rect.left) && (x <= (rect.left + rect.width))) &&
    (y >= rect.top) && (y <= (rect.top + rect.height)))
        return 1;
    return 0;
}
