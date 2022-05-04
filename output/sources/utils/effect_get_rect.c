/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

IntR get_rect_effect(int type)
{
    if (type == 0)
        return (IntR) {643, 250, 18, 9};
    if (type == 1)
        return (IntR) {96, 267, 9, 18};
    if (type == 2)
        return (IntR) {242, 267, 9, 18};
    if (type == 3)
        return (IntR) {388, 267, 9, 18};
    return (IntR) {0};
}
