/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

int can_move(int block)
{
    if (block == 0 || block == 2 || block == 3 || block == 10 || block == 11)
        return 0;
    return 1;
}
