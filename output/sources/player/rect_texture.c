/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "player.h"

IntR get_rect_player(int state, int animation)
{
    if (state == NOTHING)
        return (IntR) {1, 0, 16, 30};
    if (state == WALK_DOWN)
        return (IntR) {19 + (animation * 17), 0, 16, 30};
    return (IntR) {0};
}
