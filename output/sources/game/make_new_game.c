/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "player.h"
#include "my_event.h"
#include "enemies.h"

static void analyse_key(data_t *data)
{
    if (data->event.key.code == sfKeyZ)
        call_event(data, "player_walk_up");
    if (data->event.key.code == sfKeyS)
        call_event(data, "player_walk_down");
    if (data->event.key.code == sfKeyD)
        call_event(data, "player_walk_right");
    if (data->event.key.code == sfKeyQ)
        call_event(data, "player_walk_left");
    if (data->event.key.code == sfKeyZ || data->event.key.code == sfKeyS ||
        data->event.key.code == sfKeyD || data->event.key.code == sfKeyQ)
        call_event(data, "player_walk_keys");
    else
        call_event(data, "player_stop_walk_keys");
    if (data->event.key.code == sfKeyTab) {
        get_items(data);
        call_event(data, "open_inventory");
    }
    if (data->event.key.code == sfKeyR)
        call_event(data, "interact_npc");
    if (data->event.key.code == sfKeyK)
        call_event(data, "open skill tree");
    if (data->event.key.code == sfKeyEscape) {
        data->video.ui = 32;
        data->loading_state = 18;
    }
}

static void analyse_released_key(data_t *data)
{
    if (data->event.key.code == sfKeyZ || data->event.key.code == sfKeyS ||
        data->event.key.code == sfKeyD || data->event.key.code == sfKeyQ)
        call_event(data, "player_stop_walk_keys");
}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            case (sfEvtKeyReleased): analyse_released_key(data);
                break;
            default: break;
        }
    }
}

void new_game_scene(data_t *data)
{
    display_all(data);
    analyse_event(data);
    clock_move_player(data);
    clock_enemies_aggro(data);
    clock_enemies_move(data);
    clock_stop_display_life(data);
    clock_enemies_life_display(data);
    clock_enemies_effect(data);
}
