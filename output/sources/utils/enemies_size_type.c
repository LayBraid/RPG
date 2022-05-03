/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

sfVector2f get_size_enemies(int type)
{
    if (type == 0)
        return (sfVector2f) {18, 32};
    return (sfVector2f) {0, 0};
}
