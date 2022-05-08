/*
** EPITECH PROJECT, 2022
** output
** File description:
** choice
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

void choice_up(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->tiles->next->sprite);
    if (pos.y == 810)
        pos.y -= 50;
    sfSprite_setPosition(data->tiles->next->sprite, pos);
}

void choice_down(data_t *data)
{
    sfVector2f pos = sfSprite_getPosition(data->tiles->next->sprite);
    if (pos.y == 760)
        pos.y += 50;
    sfSprite_setPosition(data->tiles->next->sprite, pos);
}

int dialog_choice(data_t *data)
{
    sfVector2f pos = {1840, 760};
    int return_value = 0;
    init_dialog_choice(data, pos);
    while (data->dialog_skip != 1 &&
    sfRenderWindow_isOpen(data->video.window)) {
        dialog_choice_loop(data);
    }
    pos = sfSprite_getPosition(data->tiles->next->sprite);
    if (pos.y == 810)
        return_value = 1;
    data->dialog_skip = 0;
    texture_t *cursor = data->texture_bank;
    data->texture_bank = data->texture_bank->next;
    delete_texture(cursor);
    delete_first_tile(data);
    delete_first_tile(data);
    return (return_value);
}
