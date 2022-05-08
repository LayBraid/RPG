/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

IntR_t get_rect_effect(int type)
{
    if (type == 0)
        return (IntR_t) {643, 250, 18, 9};
    if (type == 1)
        return (IntR_t) {96, 267, 9, 18};
    if (type == 2)
        return (IntR_t) {242, 267, 9, 18};
    if (type == 3)
        return (IntR_t) {388, 267, 9, 18};
    return (IntR_t) {0};
}
