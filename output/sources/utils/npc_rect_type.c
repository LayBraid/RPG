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
        return (IntR_t) {58, 230, 18, 28};
    return (IntR_t) {0, 0, 0, 0};
}
