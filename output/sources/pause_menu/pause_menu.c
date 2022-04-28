/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** pause_menu
*/

#include "my_rpg.h"
#include "menus.h"
#include "utils.h"
#include "my.h"

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyDown: godown(data);
                break;
        case sfKeyUp: gotop(data);
                break;
        case sfKeySpace: redirection(data);
            break;    
        default:
            break;
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
            default: break;
        }
    }
}

void redirection(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->type != 2)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    if (pos.y == 200) {
        data->video.ui = 32;
        data->loading_state = 7;
    }
    if (pos.y == 300) {
        data->video.ui = 32;
        data->loading_state = 8;
    }
    if (pos.y == 400)
        sfRenderWindow_close(data->video.window);
}

void pause_menu(data_t *data)
{
    tile_t *tile = data->tiles;
    text_t *node = data->texts;
    sfVector2f pos;

    while (tile != NULL && tile->type != 1)
        tile = tile->next;
    // pos = sfSprite_getPosition(tile->sprite);
    // if (pos.y < 250)
    //     tile = set_tile_move(tile, (sfVector2f){0, 2});
    // sfSprite_setPosition(tile->sprite, tile->position);
    // sfRenderWindow_drawSprite(data->video.window, tile->sprite, NULL);
    display_all(data);
    // sfText_setPosition(node->text, node->position);
    // sfRenderWindow_drawText(data->video.window, node->text, NULL);
    analyse_event(data);
}
