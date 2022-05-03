/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

sfVector2f get_size_type(int type)
{
    if (type == 0)
        return (sfVector2f) {16, 28};
    return (sfVector2f) {0, 0};
}
