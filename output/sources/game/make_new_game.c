/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "player.h"
#include "my_event.h"
#include "enemies.h"
#include "inventory.h"
#include "hud.h"

static void analyse_key2(data_t *data)
{
    if (data->event.key.code == data->keys->interact)
        call_event(data, "interact_npc");
    if (data->event.key.code == sfKeyK)
        call_event(data, "open skill tree");
    if (data->event.key.code == data->keys->attack)
        call_event(data, "attack_player");
    if (data->event.key.code == data->keys->pause) {
        data->video.ui = 32;
        data->loading_state = 18;
    }
    if (data->event.key.code == sfKeyNum1)
        data->player.equipped = 1;
    if (data->event.key.code == sfKeyNum2)
        data->player.equipped = 2;
    if (data->event.key.code == sfKeyNum3)
        data->player.equipped = 3;
}

static void analyse_key(data_t *data)
{
    if (data->event.key.code == data->keys->up)
        call_event(data, "player_walk_up");
    if (data->event.key.code == data->keys->down)
        call_event(data, "player_walk_down");
    if (data->event.key.code == data->keys->right)
        call_event(data, "player_walk_right");
    if (data->event.key.code == data->keys->left)
        call_event(data, "player_walk_left");
    if (data->event.key.code == data->keys->up || data->event.key.code == data->keys->down ||
        data->event.key.code == data->keys->left || data->event.key.code == data->keys->right)
        call_event(data, "player_walk_keys");
    else
        call_event(data, "player_stop_walk_keys");
    if (data->event.key.code == data->keys->inventory) {
        get_items(data);
        call_event(data, "open_inventory");
    }
    analyse_key2(data);
}

static void analyse_released_key(data_t *data)
{
    if (data->event.key.code == data->keys->up || data->event.key.code == data->keys->down ||
        data->event.key.code == data->keys->left || data->event.key.code == data->keys->right)
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
    stamina_clock(data);
    clock_move_player(data);
    clock_enemies_aggro(data);
    clock_enemies_move(data);
    clock_stop_display_life(data);
    clock_enemies_life_display(data);
    clock_enemies_effect(data);
    player_effect_all(data, &data->player);
    manage_stamina(data);
}
