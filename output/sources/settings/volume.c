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
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
        case 25:
            data->settings->volume = 50;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
        case 50:
            data->settings->volume = 75;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
        case 75:
            data->settings->volume = 100;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
    }
}

void change_volumel(data_t *data)
{
    switch (data->settings->volume) {
        case 100:
            data->settings->volume = 75;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
        case 75:
            data->settings->volume = 50;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
        case 50:
            data->settings->volume = 25;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
        case 25:
            data->settings->volume = 0;
            // sfMusic_setVolume(data->music, data->settings->volume);
            break;
    }
}
