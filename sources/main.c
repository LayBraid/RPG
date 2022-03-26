/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** main
*/

#include "../include/my_rpg.h"

int main(int ac, char **av)
{
    data_t *data = data_create();
    video_t video = set_video(video, 1920, 1080, 32);
    if (ac != 1 && av[1][0] == '-' && av[1][1] == 'h') {
        myh();
        return (0);
    }
    else launch_rpg();
    return 0;
}
