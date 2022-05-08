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
        return (sfVector2f) {18, 17};
    if (type == 1)
        return (sfVector2f) {16, 24};
    if (type == 2)
        return (sfVector2f) {41, 16};
    if (type == 3)
        return (sfVector2f) {22, 25};
    if (type == 4)
        return (sfVector2f) {22, 25};
    if (type == 5)
        return (sfVector2f) {24, 25};
    if (type == 6)
        return (sfVector2f) {22, 26};
    return (sfVector2f) {0, 0};
}
