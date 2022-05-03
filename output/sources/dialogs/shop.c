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

sfVector2f shop_up(data_t *data, unsigned int *current, unsigned int count, sfVector2f pos)
{
    if (*current == 1)
        return (pos);
    for (int i = 0; i < 4; i++) {
        pos.y -= 50;
        sfSprite_setPosition(data->tiles->next->sprite, pos);
    }
    *current -= 1;
    return (pos);
}

sfVector2f shop_down(data_t *data, unsigned int *current, unsigned int count, sfVector2f pos)
{
    if (*current == count + 1)
        return (pos);
    for (int i = 0; i < 4; i++) {
        pos.y += 50;
        sfSprite_setPosition(data->tiles->next->sprite, pos);
    }
    *current += 1;
    return (pos);
}

void init_dialog_shop_background(data_t *data, sfVector2f pos)
{
    data->texture_bank = create_texture(data->texture_bank, "assets/textures/dialog2.png", NULL);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 0.35});
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank->next);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 3});
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, 9);
}

unsigned int init_dialog_shop(data_t *data, npc_t *npc)
{
    sfVector2f pos = {1080, 70};
    inventory_t *cursor = npc->inventory;
    unsigned int count = 0;

    if (npc->inventory == NULL)
        return (0);
    while (cursor != NULL) {
        data->texts = create_text(data->texts, my_fprintf("%s x%d", cursor->item_name, cursor->count), data->font);
        sfText_setPosition(data->texts->text, pos);
        if (cursor->count == 0)
            sfText_setColor(data->texts->text, (sfColor){255, 155, 155, 155});
        pos.y += 200;
        count++;
        cursor = cursor->next;
    }
    data->texts = create_text(data->texts, "Quitter", data->font);
    sfText_setPosition(data->texts->text, pos);
    init_dialog_shop_background(data, (sfVector2f){1000, 0});
    return (count);
}

char select_current(data_t *data, unsigned int current, unsigned int count, npc_t *npc)
{
    inventory_t *cursor = npc->inventory;
    text_t *text = data->texts;
    unsigned int i = 1;
    if (current == count + 1)
        return (4);
    while (cursor && text && i < current) {
        cursor = cursor->next;
        i++;
    }
    for (int j = 0; j < (count - current) + 1; j++)
        text = text->next;
    if (cursor == NULL || text == NULL || cursor->count == 0)
        return (0);
    cursor->count--;
    if (cursor->count == 0)
        sfText_setColor(text->text, (sfColor){255, 155, 155, 155});
    sfText_setString(text->text, my_fprintf("%s x%d", cursor->item_name, cursor->count));
    // ! ajouter dans l'inventaire du joueur
    return (0);
}

void shop_loop(data_t *data, unsigned int count, npc_t *npc)
{
    sfVector2f pos = {1000, 0};
    unsigned int current = 1;

    while (sfRenderWindow_isOpen(data->video.window) && data->dialog_skip != 4) {
        switch (data->dialog_skip) {
            case (3): pos = shop_up(data, &current, count, pos);
            data->dialog_skip = 0;
            break;
            case (2): pos = shop_down(data, &current, count, pos);
            data->dialog_skip = 0;
            break;
            case (1): data->dialog_skip = select_current(data, current, count, npc);
            break;
            default:
            break;
        }
        analyse_events(data);
        sfRenderWindow_clear(data->video.window, sfWhite);
        display_all(data);
        sfRenderWindow_display(data->video.window);
    }
}

text_t *delete_first_text(text_t *text)
{
    text_t *tmp = text;
    text = text->next;
    sfText_destroy(tmp->text);
    free(tmp);
    if (text == NULL)
        return (NULL);
    return (text);
}

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
    printf("%d\n", nb_items);
    shop_loop(data, nb_items, cursor);
    destroy_shop(data);
}
