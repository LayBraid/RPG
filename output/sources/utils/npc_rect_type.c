/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

IntR_t get_rect_type(int type)
{
    if (type == 0)
        return (IntR_t) {228, 574, 16, 24};
    if (type == 1)
        return (IntR_t) {361, 393, 16, 24};
    if (type == 2)
        return (IntR_t) {476, 762, 16, 25};
    if (type == 3)
        return (IntR_t) {195, 191, 16, 24};
    return (IntR_t) {0, 0, 0, 0};
}
