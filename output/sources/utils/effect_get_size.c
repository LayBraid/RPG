/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

sfVector2f get_size_effect(int type)
{
    if (type == 0)
        return (sfVector2f) {18, 9};
    if (type == 1)
        return (sfVector2f) {9, 18};
    if (type == 2)
        return (sfVector2f) {9, 18};
    if (type == 3)
        return (sfVector2f) {9, 18};
    return (sfVector2f) {0};
}
