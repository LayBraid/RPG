/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

IntR_t get_rect_type_enemies(int type)
{
    if (type == 0)
        return (IntR_t) {90, 770, 18, 17};
    if (type == 1)
        return (IntR_t) {410, 883, 16, 24};
    if (type == 2)
        return (IntR_t) {442, 155, 41, 16};
    if (type == 3)
        return (IntR_t) {481, 204, 22, 25};
    if (type == 4)
        return (IntR_t) {480, 240, 22, 25};
    if (type == 5)
        return (IntR_t) {424, 422, 24, 25};
    if (type == 6)
        return (IntR_t) {395, 977, 22, 26};
    return (IntR_t) {0, 0, 0, 0};
}
