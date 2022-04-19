/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

sfIntRect get_rect_player(int state, int animation)
{
    if (state == NOTHING)
        return (sfIntRect) {1, 0, 16, 30};
    if (state == WALK_DOWN)
        return (sfIntRect) {19 + (animation * 17), 0, 16, 30};
    return (sfIntRect) {0};
}
