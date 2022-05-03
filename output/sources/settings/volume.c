/*
** EPITECH PROJECT, 2022
** output
** File description:
** volume
*/

#include "my_rpg.h"

void set_volume(data_t *data)
{
    music_t *tmp = data->musics;

    while (tmp != NULL) {
        sfMusic_setVolume(tmp->music, data->settings->volume);
        tmp = tmp->next;
    }
}

void change_volumer(data_t *data)
{
    switch (data->settings->volume) {
        case 0:
            data->settings->volume = 25;
            set_volume(data);
            break;
        case 25:
            data->settings->volume = 50;
            set_volume(data);
            break;
        case 50:
            data->settings->volume = 75;
            set_volume(data);
            break;
        case 75:
            data->settings->volume = 100;
            set_volume(data);
            break;
    }
}

void change_volumel(data_t *data)
{
    switch (data->settings->volume) {
        case 100:
            data->settings->volume = 75;
            set_volume(data);
            break;
        case 75:
            data->settings->volume = 50;
            set_volume(data);
            break;
        case 50:
            data->settings->volume = 25;
            set_volume(data);
            break;
        case 25:
            data->settings->volume = 0;
            set_volume(data);
            break;
    }
}
