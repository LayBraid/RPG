/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "my_rpg.h"

//TODO Comment for compilation

static void analyse_key(data_t *data)
{
    if (data->event.key.code == sfKeyZ)
        sfView_move(data->mapping, (sfVector2f) {0, -10});
    if (data->event.key.code == sfKeyS)
        sfView_move(data->mapping, (sfVector2f) {0, 10});
    if (data->event.key.code == sfKeyD)
        sfView_move(data->mapping, (sfVector2f) {10, 0});
    if (data->event.key.code == sfKeyQ)
        sfView_move(data->mapping, (sfVector2f) {-10, 0});
    if (data->event.key.code == sfKeyA)
        sfView_zoom(data->mapping, 0.9f);
    if (data->event.key.code == sfKeyE)
        sfView_zoom(data->mapping, 1.1f);
}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            /*case (sfEvtMouseButtonPressed): analyse_mouse(data);
                break;*/
            default: break;
        }
    }
}

void game_scene(data_t *data)
{
    analyse_event(data);
}