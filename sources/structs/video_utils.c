/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** video_utils
*/

#include "my_rpg.h"

void set_fps(sfRenderWindow *window, int fps, data_t *data)
{
    sfRenderWindow_setFramerateLimit(window, fps);
    data->delta = 1 / (fps / 60);
}

sfRenderWindow *set_window(sfVideoMode mode, char *title, sfUint32 style,
const sfContextSettings *settings)
{
    sfRenderWindow *window = sfRenderWindow_create(mode, title, style,
    settings);
    return (window);
}

video_t set_video(video_t video, int width, int height, int bpp)
{
    video.mode = (sfVideoMode){width, height, bpp};
    video.window = set_window(video.mode, "---ZELDA---", sfDefaultStyle, NULL);
    return (video);
}
