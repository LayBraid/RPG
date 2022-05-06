/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

sfIntRect get_rect_player(int state, int animation)
{
    if (state == IDLE_DOWN)
        return (sfIntRect) {1, 0, 16, 30};
    if (state == IDLE_RIGHT || state == IDLE_LEFT)
        return (sfIntRect) {1, 56, 16, 28};
    if (state == IDLE_UP)
        return (sfIntRect) {1, 109, 16, 28};
    if (state == WALK_DOWN)
        return (sfIntRect) {19 + (animation * 17), 0, 16, 30};
    if (state == WALK_RIGHT || state == WALK_LEFT)
        return (sfIntRect) {19 + (animation * 18), 56, 17, 28};
    if (state == WALK_UP)
        return (sfIntRect) {19 + (animation * 17), 109, 16, 28};
    if (state == COMBAT_DOWN)
        return (sfIntRect) {1 + (animation * 16), 33, 16, 24};
    if (state == COMBAT_RIGHT || state == COMBAT_LEFT)
        return (sfIntRect) {1 + (animation * 18), 86, 18, 23};
    if (state == COMBAT_UP)
        return (sfIntRect) {1 + (animation * 17), 111, 17, 22};
    return (sfIntRect) {0};
}
