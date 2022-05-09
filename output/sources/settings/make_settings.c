/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_settings
*/

#include "my_rpg.h"
#include "settings.h"
#include "utils.h"
#include "my.h"
#include "my_fprintf.h"

static void drawtext(data_t *data)
{
    char *fps = my_fprintf("                    FPS           %d",
    data->settings->fps);
    char *volume = my_fprintf("                    Volume        %d",
    data->settings->volume);

    my_text(data, (sfVector2f) {100, 200}, 5, fps);
    my_text(data, (sfVector2f) {100, 300}, 5, volume);
    my_text(data, (sfVector2f) {100, 400}, 5, "                    Controls");
}

static void analyse_key2(data_t *data, sfVector2f pos)
{
    switch (data->event.key.code) {
        case sfKeySpace:
            if (pos.y == 430) {
                data->video.ui = 32;
                data->loading_state = 17;
            }
            break;
        case sfKeyEscape: data->video.ui = 32;
            data->loading_state = 9;
            break;
        default: break;
    }
}

static void analyse_key(data_t *data)
{
    tile_t *tile = data->tiles;
    sfVector2f pos;

    while (tile->id != 1)
        tile = tile->next;
    pos = sfSprite_getPosition(tile->sprite);
    switch (data->event.key.code) {
        case sfKeyDown: go_downn(data);
            break;
        case sfKeyUp: go_topp(data);
            break;
        case sfKeyRight: goright(data);
            break;
        case sfKeyLeft: goleft(data);
            break;
        default: analyse_key2(data, pos);
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

void settings_scene(data_t *data)
{
    display_all(data);
    drawtext(data);
    analyse_event(data);
}
