/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialog_bis.c
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my.h"

static void analyse_key_press(data_t *data, sfEvent event)
{
    switch (event.key.code) {
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

void wait_microsecc(data_t *data, char *dialog, int i)
{
    if (dialog[i] == '.' && dialog[i - 1] == '.')
        while (sfClock_getElapsedTime(data->clock).microseconds
        < 600000);
    else
        while (sfClock_getElapsedTime(data->clock).microseconds
        < 50000);
    sfClock_restart(data->clock);
}

void dialog_loop(data_t *data, char *new, int *i, char *dialog)
{
    new[*i] = dialog[*i];
    new[*i + 1] = '\0';
    if (data->dialog_skip == 1) {
        my_strcpy(new + *i + 1, dialog + *i + 1);
        *i = my_strlen(dialog) - 1;
    }
    sfText_setString(data->texts->text, new);
    if (dialog[*i] != ' ' && data->dialog_skip == 0)
        wait_microsecc(data, dialog, *i);
}

void dialog(data_t *data, char *dialog,
            int id_npc_texture, char is_talking, int id_npc)
{
    char *new = malloc((my_strlen(dialog) + 1) * sizeof(char));

    new[0] = '\0';
    data->texts = create_text(data->texts, new, data->font);
    sfText_setColor(data->texts->text, sfWhite);
    sfText_setPosition(data->texts->text, (sfVector2f){100, 900});
    data->texts->position = (sfVector2f){100, 900};
    for (int i = 0; dialog[i] &&
    sfRenderWindow_isOpen(data->video.window); i++) {
        analyse_events(data);
        dialog_loop(data, new, &i, dialog);
        sfRenderWindow_clear(data->video.window, sfBlack);
        display_all(data);
        sfRenderWindow_display(data->video.window);
    }
    data->dialog_skip = 0;
}
