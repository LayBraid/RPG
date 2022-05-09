/*
** EPITECH PROJECT, 2022
** output
** File description:
** initializers
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my.h"
#include "my_fprintf.h"

void init_dialog_shop_background(data_t *data, sfVector2f pos)
{
    data->texture_bank = create_texture(data->texture_bank,
        "assets/textures/dialog2.png", NULL);
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
    npc_inventory_t *cursor = npc->inventory;
    unsigned int count = 0;

    if (npc->inventory == NULL)
        return (0);
    while (cursor != NULL) {
        data->texts = create_text(data->texts, my_fprintf("%s x%d",
            cursor->item_name, cursor->count), data->font);
        sfText_setPosition(data->texts->text, pos);
        if (cursor->count == 0)
            sfText_setColor(data->texts->text, (sfColor){128, 128, 128, 255});
        pos.y += 200;
        count++;
        cursor = cursor->next;
    }
    data->texts = create_text(data->texts, "Quitter", data->font);
    sfText_setPosition(data->texts->text, pos);
    init_dialog_shop_background(data, (sfVector2f){1000, 0});
    return (count);
}

void init_dialog_choice(data_t *data, sfVector2f pos)
{
    data->texture_bank = create_texture(data->texture_bank,
        "assets/textures/dialog2.png", NULL);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){0.08, 0.09});
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank->next);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){0.08, 0.18});
    data->tiles = set_tile_position(data->tiles, pos);
    data->tiles = set_tile_depth(data->tiles, 9);
    data->texts = create_text(data->texts, "Oui", data->font);
    data->texts = create_text(data->texts, "Non", data->font);
    sfText_setPosition(data->texts->text, (sfVector2f){1850, 760});
    data->texts->position = (sfVector2f){1850, 760};
    sfText_setPosition(data->texts->next->text, (sfVector2f){1850, 810});
    data->texts->position = (sfVector2f){1850, 810};
}

// TODO tester en situation reelle

void set_dialog_characters(data_t *data, char is_talking, int id_npc)
{
    texture_t *player = data->texture_bank;
    texture_t *npc_texture = data->texture_bank;
    npc_t *npc = data->npcs;

    set_dialog_characters2(data, player, id_npc, is_talking);
    while (player != NULL && player->id != data->id_text_player)
        player = player->next;
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
    sfText_setPosition(data->texts->text, (sfVector2f){15, 870});
    sfText_setPosition(data->texts->next->text, (sfVector2f){1750, 870});
}

// ! MAX LEN = 81 char * 3 lignes séparées par 2 \n

void dialog_init(data_t *data)
{
    data->texture_bank = create_texture(data->texture_bank,
        "./assets/game/Link.png", &(sfIntRect){0, 0, 18, 26});
    dialog_init2(data);
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
