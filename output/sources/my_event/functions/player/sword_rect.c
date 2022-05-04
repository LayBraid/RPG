/*
** EPITECH PROJECT, 2022
** output
** File description:
** sword_rect
*/

#include "player.h"

sfVector2f get_size_sword(int type, int value)
{
    if (type == 1) {
        if (value == 0)
            return (sfVector2f) {9, 18};
        if (value == 1)
            return (sfVector2f) {9, 18};
    }
    return (sfVector2f) {0};
}

IntR get_rect_sword(int type, int value)
{
    if (type == 1) {
        if (value == 0)
            return (IntR) {96, 267, 9, 18};
        
    }
    return (IntR) {0};
}