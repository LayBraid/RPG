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

    data->video = set_video(data->video, 1920, 1080, 32);
    set_fps(data->video.window, 60, data);
    if (ac != 1 && av[1][0] == '-' && av[1][1] == 'h') {
        myh();
        return (0);
    }
    else
        launch_rpg(data);
    return 0;
}
