/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** video_utils
*/

#include "../../include/my_rpg.h"

void set_fps(sfRenderWindow window, int fps)
{
    sfRenderWindow_setFramerateLimit(window, fps);
}

sfRenderWindow set_window(sfVideoMode mode, char *title, sfUint32 style)
{
    sfRenderWindow window = sfRenderWindow_create(mode, title, style, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

video_t set_video(video_t video, int width, int height, int bpp)
{
    video.mode = (sfVideoMode){width, height, bpp};
    video.window = set_window(video.mode, "---ZELDA---", sfDefaultStyle, NULL);
    return (video);
}
