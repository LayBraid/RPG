/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialogs
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

void inter_dialog_loop(data_t *data, int *anim, sfVector2f *pos)
{
    analyse_events(data);
    if (*anim == 1) {
        pos->y += 1;
        data->tiles = set_tile_position(data->tiles, *pos);
        if (pos->y >= 1010)
            *anim = 0;
    } else {
        pos->y -= 1;
        data->tiles = set_tile_position(data->tiles, *pos);
        if (pos->y <= 980)
            *anim = 1;
    }
    sfRenderWindow_clear(data->video.window, sfBlack);
    display_all(data);
    sfRenderWindow_display(data->video.window);
    while (sfClock_getElapsedTime(data->clock).microseconds < 20000);
    sfClock_restart(data->clock);
}

void inter_dialog(data_t *data)
{
    int anim = 0;
    sfVector2f pos = {1850, 980};
    data->tiles = create_tile(data->tiles);
    data->texture_bank = create_texture(data->texture_bank,
    "./assets/textures/iu-2.png", NULL);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){0.3, 0.3});
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_position(data->tiles, pos);
    while (data->dialog_skip != 1 &&
        sfRenderWindow_isOpen(data->video.window)) {
        inter_dialog_loop(data, &anim, &pos);
    }
    data->dialog_skip = 0;
    texture_t *cursor = data->texture_bank;
    data->texture_bank = data->texture_bank->next;
    delete_texture(cursor);
    delete_first_tile(data);
}
