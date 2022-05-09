/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_intro
*/

#include "my_rpg.h"

static void analyse_key(data_t *data)
{
    if(data->event.key.code == sfKeyEscape)
        sfRenderWindow_close(data->video.window);
    else {
        data->video.ui = 32;
        data->loading_state = 1;
    }
}

static void analyse_mouse(data_t *data)
{

}

static void analyse_event(data_t *data)
{
    while (sfRenderWindow_pollEvent(data->video.window, &data->event)) {
        switch (data->event.type) {
            case (sfEvtClosed): sfRenderWindow_close(data->video.window);
                break;
            case (sfEvtKeyPressed): analyse_key(data);
                break;
            case (sfEvtMouseButtonPressed): analyse_mouse(data);
                break;
            default: break;
        }
    }
}

void intro_scene(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y < 250)
        tile = set_tile_move(tile, (sfVector2f){0, 2});
    display_all(data);
    analyse_event(data);
}
