/*
** EPITECH PROJECT, 2022
** output
** File description:
** sword_rect
*/

#include "player.h"

sfVector2f get_size_sword(int type, int value)
{
    if (type == 1 || type == 2 || type == 3) {
        if (value == 0)
            return (sfVector2f) {9, 18};
        if (value == 1)
            return (sfVector2f) {7, 18};
        if (value == 2)
            return (sfVector2f) {10, 18};
        if (value == 3)
            return (sfVector2f) {13, 18};
        if (value == 4)
            return (sfVector2f) {16, 18};
        if (value == 5)
            return (sfVector2f) {15, 18};
        if (value == 6)
            return (sfVector2f) {16, 18};
        if (value == 7)
            return (sfVector2f) {16, 18};
        if (value == 8)
            return (sfVector2f) {16, 18};
        if (value == 9)
            return (sfVector2f) {16, 18};
    }
    return (sfVector2f) {0};
}

IntR get_rect_sword(int type, int value)
{
    if (type == 1) {
        if (value == 0)
            return (IntR) {96, 267, 9, 18};
        if (value == 1)
            return (IntR) {105, 267, 7, 18};
        if (value == 2)
            return (IntR) {113, 267, 10, 18};
        if (value == 3)
            return (IntR) {126, 267, 13, 18};
        if (value == 4)
            return (IntR) {141, 267, 16, 18};
        if (value == 5)
            return (IntR) {158, 267, 15, 18};
        if (value == 6)
            return (IntR) {174, 267, 16, 18};
        if (value == 7)
            return (IntR) {192, 267, 16, 18};
        if (value == 8)
            return (IntR) {209, 267, 16, 18};
        if (value == 9)
            return (IntR) {226, 267, 16, 18};
    }
    if (type == 2) {
        if (value == 0)
            return (IntR) {242, 267, 9, 18};
        if (value == 1)
            return (IntR) {251, 267, 7, 18};
        if (value == 2)
            return (IntR) {259, 267, 10, 18};
        if (value == 3)
            return (IntR) {272, 267, 13, 18};
        if (value == 4)
            return (IntR) {287, 267, 16, 18};
        if (value == 5)
            return (IntR) {304, 267, 15, 18};
        if (value == 6)
            return (IntR) {320, 267, 16, 18};
        if (value == 7)
            return (IntR) {338, 267, 16, 18};
        if (value == 8)
            return (IntR) {355, 267, 16, 18};
        if (value == 9)
            return (IntR) {372, 267, 16, 18};
    }
    if (type == 3) {
        if (value == 0)
            return (IntR) {388, 267, 9, 18};
        if (value == 1)
            return (IntR) {397, 267, 7, 18};
        if (value == 2)
            return (IntR) {405, 267, 10, 18};
        if (value == 3)
            return (IntR) {418, 267, 13, 18};
        if (value == 4)
            return (IntR) {433, 267, 16, 18};
        if (value == 5)
            return (IntR) {450, 267, 15, 18};
        if (value == 6)
            return (IntR) {466, 267, 16, 18};
        if (value == 7)
            return (IntR) {484, 267, 16, 18};
        if (value == 8)
            return (IntR) {501, 267, 16, 18};
        if (value == 9)
            return (IntR) {518, 267, 16, 18};
    }

    return (IntR) {0};
}
