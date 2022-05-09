/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialog_choice_loop.c
*/

#include "my_rpg.h"
#include "dialogs.h"

static void analyse_key_press(data_t *data, sfEvent event)
{
    switch (event.key.code) {
        case (sfKeyUp): choice_up(data);
            break;
        case (sfKeyDown): choice_down(data);
            break;
        case (sfKeySpace): data->dialog_skip = 1;
            break;
        default:
            break;
    }
}

static void analyse_events(data_t *data)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(data->video.window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(data->video.window);
        if (event.type == sfEvtKeyPressed)
            analyse_key_press(data, event);
    }
}

void dialog_choice_loop(data_t *data)
{
    analyse_events(data);
    sfRenderWindow_clear(data->video.window, sfBlack);
    display_all(data);
    sfRenderWindow_drawText(data->video.window, data->texts->text, NULL);
    sfRenderWindow_drawText(data->video.window,
    data->texts->next->text, NULL);
    sfRenderWindow_display(data->video.window);
}
