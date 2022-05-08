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

sfVector2f get_size_particle(int type, int value)
{
    if (type == 1 || type == 2 || type == 3) {
        if (value == 0)
            return (sfVector2f) {8, 9};
        if (value == 1)
            return (sfVector2f) {9, 9};
    }
    return (sfVector2f) {0};
}

IntR_t get_rect_sword(int type, int value)
{
    if (type == 1) {
        if (value == 0)
            return (IntR_t) {96, 267, 9, 18};
        if (value == 1)
            return (IntR_t) {105, 267, 7, 18};
        if (value == 2)
            return (IntR_t) {113, 267, 10, 18};
        if (value == 3)
            return (IntR_t) {126, 267, 13, 18};
        if (value == 4)
            return (IntR_t) {141, 267, 16, 18};
        if (value == 5)
            return (IntR_t) {158, 267, 15, 18};
        if (value == 6)
            return (IntR_t) {174, 267, 16, 18};
        if (value == 7)
            return (IntR_t) {192, 267, 16, 18};
        if (value == 8)
            return (IntR_t) {209, 267, 16, 18};
        if (value == 9)
            return (IntR_t) {226, 267, 16, 18};
    }
    if (type == 2) {
        if (value == 0)
            return (IntR_t) {242, 267, 9, 18};
        if (value == 1)
            return (IntR_t) {251, 267, 7, 18};
        if (value == 2)
            return (IntR_t) {259, 267, 10, 18};
        if (value == 3)
            return (IntR_t) {272, 267, 13, 18};
        if (value == 4)
            return (IntR_t) {287, 267, 16, 18};
        if (value == 5)
            return (IntR_t) {304, 267, 15, 18};
        if (value == 6)
            return (IntR_t) {320, 267, 16, 18};
        if (value == 7)
            return (IntR_t) {338, 267, 16, 18};
        if (value == 8)
            return (IntR_t) {355, 267, 16, 18};
        if (value == 9)
            return (IntR_t) {372, 267, 16, 18};
    }
    if (type == 3) {
        if (value == 0)
            return (IntR_t) {388, 267, 9, 18};
        if (value == 1)
            return (IntR_t) {397, 267, 7, 18};
        if (value == 2)
            return (IntR_t) {405, 267, 10, 18};
        if (value == 3)
            return (IntR_t) {418, 267, 13, 18};
        if (value == 4)
            return (IntR_t) {433, 267, 16, 18};
        if (value == 5)
            return (IntR_t) {450, 267, 15, 18};
        if (value == 6)
            return (IntR_t) {466, 267, 16, 18};
        if (value == 7)
            return (IntR_t) {484, 267, 16, 18};
        if (value == 8)
            return (IntR_t) {501, 267, 16, 18};
        if (value == 9)
            return (IntR_t) {518, 267, 16, 18};
    }
    return (IntR_t) {0};
}

IntR_t get_rect_particle(int type, int value)
{
    if (type == 1) {
        if (value == 0)
            return (IntR_t) {527, 311, 8, 9};
        if (value == 1)
            return (IntR_t) {535, 311, 9, 9};
    }
    if (type == 2) {
        if (value == 0)
            return (IntR_t) {541, 311, 8, 9};
        if (value == 1)
            return (IntR_t) {553, 311, 9, 9};
    }
    if (type == 3) {
        if (value == 0)
            return (IntR_t) {562, 311, 8, 9};
        if (value == 1)
            return (IntR_t) {571, 311, 9, 9};
    }
    return (IntR_t) {0};
}
