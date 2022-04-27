/*
** EPITECH PROJECT, 2022
** output
** File description:
** volume
*/

#include "my_rpg.h"

void change_volumer(data_t *data)
{
    switch (data->settings->volume) {
        case 0:
            data->settings->volume = 25;
            break;
        case 25:
            data->settings->volume = 50;
            break;
        case 50:
            data->settings->volume = 75;
            break;
        case 75:
            data->settings->volume = 100;
            break;
    }
}

void change_volumel(data_t *data)
{
    switch (data->settings->volume) {
        case 100:
            data->settings->volume = 75;
            break;
        case 75:
            data->settings->volume = 50;
            break;
        case 50:
            data->settings->volume = 25;
            break;
        case 25:
            data->settings->volume = 0;
            break;
    }
}
