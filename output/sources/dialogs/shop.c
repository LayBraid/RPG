/*
** EPITECH PROJECT, 2022
** output
** File description:
** shop
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my.h"

static void analyse_key_press(data_t *data, sfEvent event)
{
    switch (event.key.code) {
        case (sfKeyUp): data->dialog_skip = 3;
        break;
        case (sfKeyDown): data->dialog_skip = 2;
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

void shop_loop(data_t *data, unsigned int count, npc_t *npc)
{
    sfVector2f pos = {1000, 0};
    unsigned int current = 1;

    while (sfRenderWindow_isOpen(data->video.window) &&
        data->dialog_skip != 4) {
        switch (data->dialog_skip) {
            case (3): pos = shop_up(data, &current, count, pos);
            data->dialog_skip = 0;
            break;
            case (2): pos = shop_down(data, &current, count, pos);
            data->dialog_skip = 0;
            break;
            case (1): data->dialog_skip = select_current(data, current,
                count, npc);
            break;
            default:
            break;
        }
    }
}

// ! a mettre dans la boucle d'au dessus
// analyse_events(data);
// sfRenderWindow_clear(data->video.window, sfWhite);
// display_all(data);
// sfRenderWindow_display(data->video.window);

void destroy_shop(data_t *data)
{
    delete_first_tile(data);
    delete_first_tile(data);
    data->dialog_skip = 0;
}

void open_shop(data_t *data, int npc_id)
{
    unsigned int nb_items = 0;
    npc_t *cursor = data->npcs;
    while (cursor && cursor->id != npc_id)
        cursor = cursor->next;
    if (cursor == NULL)
        return;
    nb_items = init_dialog_shop(data, cursor);
    if (nb_items == 0)
        return;
    shop_loop(data, nb_items, cursor);
    destroy_shop(data);
}
