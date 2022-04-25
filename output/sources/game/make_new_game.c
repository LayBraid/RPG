/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "player.h"
#include "my_rpg.h"
#include "my_event.h"

//TODO Comment for compilation

static void analyse_key(data_t *data)
{
    if (data->event.key.code == sfKeyZ || data->event.key.code == sfKeyS ||
        data->event.key.code == sfKeyD || data->event.key.code == sfKeyQ)
        call_event(data, "player_walk_keys");
    if (data->event.key.code == sfKeyZ)
        call_event(data, "player_walk_up");
    if (data->event.key.code == sfKeyS)
        call_event(data, "player_walk_down");
    if (data->event.key.code == sfKeyD)
        call_event(data, "player_walk_right");
    if (data->event.key.code == sfKeyQ)
        call_event(data, "player_walk_left");
    if (data->event.key.code == sfKeyA) {
        sfView_zoom(data->mapping, 0.9f);
    }
    if (data->event.key.code == sfKeyE) {
        sfView_zoom(data->mapping, 1.1f);
    }
}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            case (sfEvtKeyReleased): data->player.state = NOTHING;
                break;
            // case (sfEvtMouseButtonPressed): analyse_mouse(data);
            //     break;
            default: break;
        }
    }
}

void new_game_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
    clock_move_player(data);
}