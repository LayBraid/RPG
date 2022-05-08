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
        return (IntR) {228, 574, 16, 24};
    if (type == 1)
        return (IntR) {361, 393, 16, 24};
    if (type == 2)
        return (IntR) {476, 762, 16, 25};
    if (type == 3)
        return (IntR) {195, 191, 16, 24};
    return (IntR) {0, 0, 0, 0};
}
