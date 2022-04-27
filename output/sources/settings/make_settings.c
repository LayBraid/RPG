/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** make_settings
*/

#include "my_rpg.h"
#include "menus.h"
#include "settings.h"
#include "utils.h"
#include "my.h"

static void drawtext(data_t *data)
{
    char *fps = my_fprintf("FPS :         %d", data->settings->fps);
    char *volume = my_fprintf("Volume :      %d", data->settings->volume);

    my_text(data, (sfVector2f) {100, 200}, 5, fps);
    my_text(data, (sfVector2f) {100, 300}, 5, volume);
    // my_text(data, (sfVector2f) {100, 400}, 5, my_fprintf("Key :         %d", data->video.ui));
}

static void analyse_key(data_t *data)
{
    switch (data->event.key.code) {
        case sfKeyDown: godown(data);
            break;
        case sfKeyUp: gotop(data);
            break;
        case sfKeyRight: goright(data);
            break;
        case sfKeyLeft: goleft(data);
            break;
        // case sfKeyEnter: changekey(data);
        //     break;
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
            /*case (sfEvtMouseButtonPressed): analyse_mouse(data);
                break;*/
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
