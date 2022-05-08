/*
** EPITECH PROJECT, 2022
** output
** File description:
** fps
*/

#include "my_rpg.h"

void change_fpsl(data_t *data)
{
    switch (data->settings->fps) {
        case 120: data->settings->fps = 60;
            set_fps(data->video.window, 60, data);
            break;
        case 144: data->settings->fps = 120;
            set_fps(data->video.window, 120, data);
            break;
    }
}

void change_fpsr(data_t *data)
{
    switch (data->settings->fps) {
        case 60: data->settings->fps = 120;
            set_fps(data->video.window, 120, data);
            break;
        case 120: data->settings->fps = 144;
            set_fps(data->video.window, 144, data);
            break;
    }
}
