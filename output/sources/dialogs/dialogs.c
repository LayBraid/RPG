/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialogs
*/

#include "my_rpg.h"
#include "dialogs.h"

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

// TODO tester en situation reelle

void set_dialog_characters(data_t *data, int id_npc_texture, char is_talking, int id_npc)
{
    texture_t *player = data->texture_bank;
    texture_t *npc_texture = data->texture_bank;
    npc_t *npc = data->npcs;

    while (player != NULL && player->id != data->id_text_player)
        player = player->next;
    while (npc_texture != NULL && npc_texture->id != id_npc_texture)
        npc_texture = npc_texture->next;
    while (npc != NULL && npc->id != id_npc)
        npc = npc->next;
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, player);
    set_tile_scale(data->tiles, (sfVector2f){28, 28});
    set_tile_position(data->tiles, (sfVector2f){60, 350});
    if (is_talking)
        data->tiles = set_tile_depth(data->tiles, 7);
    else
        data->tiles = set_tile_depth(data->tiles, 6);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, npc_texture);
    set_tile_scale(data->tiles, (sfVector2f){28, 28});
    set_tile_position(data->tiles, (sfVector2f){1370, 350});
    if (is_talking)
        data->tiles = set_tile_depth(data->tiles, 6);
    else
        data->tiles = set_tile_depth(data->tiles, 7);
    data->texts = create_text(data->texts, data->player.name, data->font);
    data->texts = create_text(data->texts, npc->name, data->font);
    if (is_talking)
        sfText_setStyle(data->texts->text, sfTextBold);
    else
        sfText_setStyle(data->texts->next->text, sfTextBold);
    sfText_setPosition(data->texts->text, (sfVector2f){15, 875});
    sfText_setPosition(data->texts->next->text, (sfVector2f){1750, 875});
}

void dialog(data_t *data, char *dialog, int id_npc_texture, char is_talking, int id_npc)
{
    char *new = malloc((strlen(dialog) + 1) * sizeof(char));

    new[0] = '\0';
    set_dialog_characters(data, id_npc_texture, is_talking, id_npc); //TODO tester situation reelle
    data->texts = create_text(data->texts, new, data->font);
    sfText_setColor(data->texts->text, sfWhite);
    sfText_setPosition(data->texts->text, (sfVector2f){100, 900});
    for (int i = 0; dialog[i] && sfRenderWindow_isOpen(data->video.window); i++) {
        new[i] = dialog[i];
        new[i + 1] = '\0';
        if (data->dialog_skip == 1) {
            strcpy(new + i + 1, dialog + i + 1);
            i = strlen(dialog) - 1;
        }
        sfText_setString(data->texts->text, new);
        printf("%d\n", i);
        if (dialog[i] != ' ' && data->dialog_skip == 0) {
            if (dialog[i] == '.' && dialog[i - 1] == '.')
                while (sfClock_getElapsedTime(data->clock).microseconds < 600000);
            else
                while (sfClock_getElapsedTime(data->clock).microseconds < 50000);
        }
        analyse_events(data);
        sfRenderWindow_clear(data->video.window, sfWhite);
        display_all(data);
        sfRenderWindow_display(data->video.window);
        sfClock_restart(data->clock);
    }
    data->dialog_skip = 0;
}

void delete_first_tile(data_t *data)
{
    tile_t *cursor = data->tiles;

    if (data->tiles != NULL) {
        data->tiles = data->tiles->next;
        cursor = delete_tile(cursor);
    }
}

void inter_dialog(data_t *data)
{
    int anim = 0;
    sfVector2f pos = {1850, 980};
    data->tiles = create_tile(data->tiles);
    data->texture_bank = create_texture(data->texture_bank, "./assets/textures/iu-2.png", NULL);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){0.3, 0.3});
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_position(data->tiles, pos);
    printf("init done\n");
    while (data->dialog_skip != 1 && sfRenderWindow_isOpen(data->video.window)) {
        analyse_events(data);
        if (anim == 1) {
            pos.y += 1;
            data->tiles = set_tile_position(data->tiles, pos);
            if (pos.y >= 1010)
                anim = 0;
        } else {
            pos.y -= 1;
            data->tiles = set_tile_position(data->tiles, pos);
            if (pos.y <= 980)
                anim = 1;
        }
        printf("%f\n", pos.y);
        sfRenderWindow_clear(data->video.window, sfWhite);
        display_all(data);
        sfRenderWindow_display(data->video.window);
        while (sfClock_getElapsedTime(data->clock).microseconds < 20000);
        sfClock_restart(data->clock);
    }
    data->dialog_skip = 0;
    texture_t *cursor = data->texture_bank;
    data->texture_bank = data->texture_bank->next;
    delete_texture(cursor);
    delete_first_tile(data);
    printf("exiting\n");
}

// ! MAX LEN = 81 char * 3 lignes séparées par 2 \n

void dialog_init(data_t *data)
{
    data->texture_bank = create_texture(data->texture_bank, "./assets/game/Link.png", &(sfIntRect){0, 0, 18, 26});
    data->player.name = strdup("Link");
    data->id_text_player = data->texture_bank->id;
    data->npcs = create_npc(data->npcs, "Kamel"); // ! supprimmer au dessus et cette ligne
    data->tiles = create_tile(data->tiles);
    data->texture_bank = create_texture(data->texture_bank, "./assets/textures/dialog.png", NULL);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_depth(data->tiles, 6);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f) {4, 4});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_depth(data->tiles, 8);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f) {4, 4});
    data->tiles = set_tile_position(data->tiles, (sfVector2f) {0, 870});
    data->dialog_skip = 0;
}
