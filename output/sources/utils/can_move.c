/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

static int can_move3(int block)
{
    switch (block) {
        case 35:
        case 36:
        case 37:
        case 38:
        case 332:
        case 333:
        case 334:
        case 336:
        case 342:
        case 343:
        case 379:
        case 381:
        case 386:
        case 387:
        case 390:
        case 391:
        case 415:
        case 570: return (1);
        default: return (0);
    }
}

int can_move2(int block)
{
    switch (block) {
        case 571:
        case 573:
        case 574:
        case 575:
        case 577:
        case 2012:
        case 2026:
        case 2027:
        case 2028:
        case 2032:
        case 2040:
        case 2041:
        case 2043:
        case 2044:
        case 2045:
        case 2046:
        case 2047:
        case 2049: return (1);
        default: return (can_move3(block));
    }
}

int can_move(int block)
{
    switch (block) {
        case 1:
        case 2:
        case 3:
        case 8:
        case 9:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 2048:
        case 416:
        case 585: return (1);
        default: return (can_move2(block));
    }
}
