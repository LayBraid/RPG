/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

IntR get_rect_type_enemies(int type)
{
    if (type == 0)
        return (IntR) {1, 5, 18, 32};
    return (IntR) {0, 0, 0, 0};
}