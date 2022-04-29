/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

IntR get_rect_type(int type)
{
    if (type == 0)
        return (IntR) {58, 230, 18, 28};
    return (IntR) {0, 0, 0, 0};
}
