/*
** EPITECH PROJECT, 2022
** output
** File description:
** fps
*/

#include "my_rpg.h"

void change_fpsl(data_t *data)
{
    if (data->settings->fps == 60) {
        data->settings->fps = 30;
        set_fps(data->video.window, 30, data);
    }
    if (data->settings->fps == 144) {
        data->settings->fps = 60;
        set_fps(data->video.window, 60, data);
    }
}

void change_fpsr(data_t *data)
{
    if (data->settings->fps == 30) {
        data->settings->fps = 60;
        set_fps(data->video.window, 60, data);
    }
    if (data->settings->fps == 60) {
        data->settings->fps = 144;
        set_fps(data->video.window, 30, data);
    }
}
