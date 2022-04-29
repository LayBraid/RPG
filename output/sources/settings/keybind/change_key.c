/*
** EPITECH PROJECT, 2022
** output
** File description:
** change_key
*/

#include "my_rpg.h"
#include "keybind.h"

void change_key_e(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyU:
            change_goods(data, sfKeyU);
            break;
        case sfKeyV:
            change_goods(data, sfKeyV);
            break;
        case sfKeyW:
            change_goods(data, sfKeyW);
            break;
        case sfKeyX:
            change_goods(data, sfKeyX);
            break;
        case sfKeyY:
            change_goods(data, sfKeyY);
            break;
        default: change_key_f(data);
            break;
    }
}

void change_key_d(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyP:
            change_goods(data, sfKeyP);
            break;
        case sfKeyQ:
            change_goods(data, sfKeyQ);
            break;
        case sfKeyR:
            change_goods(data, sfKeyR);
            break;
        case sfKeyS:
            change_goods(data, sfKeyS);
            break;
        case sfKeyT:
            change_goods(data, sfKeyT);
            break;
        default: change_key_e(data);
            break;
    }
}

void change_key_c(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyK:
            change_goods(data, sfKeyK);
            break;
        case sfKeyL:
            change_goods(data, sfKeyL);
            break;
        case sfKeyM:
            change_goods(data, sfKeyM);
            break;
        case sfKeyN:
            change_goods(data, sfKeyN);
            break;
        case sfKeyO:
            change_goods(data, sfKeyO);
            break;
        default: change_key_d(data);
            break;
    }
}

void change_key_b(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyF:
            change_goods(data, sfKeyF);
            break;
        case sfKeyG:
            change_goods(data, sfKeyG);
            break;
        case sfKeyH:
            change_goods(data, sfKeyH);
            break;
        case sfKeyI:
            change_goods(data, sfKeyI);
            break;
        case sfKeyJ:
            change_goods(data, sfKeyJ);
            break;
        default: change_key_c(data);
            break;
    }
}

void change_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyA:
            change_goods(data, sfKeyA);
            break;
        case sfKeyB:
            change_goods(data, sfKeyB);
            break;
        case sfKeyC:
            change_goods(data, sfKeyC);
            break;
        case sfKeyD:
            change_goods(data, sfKeyD);
            break;
        case sfKeyE:
            change_goods(data, sfKeyE);
            break;
        default: change_key_b(data);
            break;
    }
}
