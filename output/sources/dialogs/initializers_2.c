/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** initializers_2
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my.h"
#include "my_fprintf.h"

void set_dialog_characters2(data_t *data, texture_t *player, int id_npc,
char is_talking)
{
    npc_t *npc = data->npcs;
    texture_t *npc_texture = data->texture_bank;

    while (npc != NULL && npc->id != id_npc)
        npc = npc->next;
    while (npc_texture != NULL && npc_texture->id != npc->texture_id)
        npc_texture = npc_texture->next;
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
}

void dialog_init2(data_t *data)
{
    data->id_text_player = data->texture_bank->id;
    data->npcs = create_npc(data->npcs, "Arthur");
    data->npcs->inventory = create_inventory(data->npcs->inventory, "bite");
    data->npcs->inventory = set_inventory_count(data->npcs->inventory, 6);
    data->npcs->inventory = create_inventory(data->npcs->inventory, "chatte");
    data->npcs->inventory = set_inventory_count(data->npcs->inventory, 2);
    data->npcs->inventory = create_inventory(data->npcs->inventory, "couille");
    data->npcs->inventory = set_inventory_count(data->npcs->inventory, 1);
    data->tiles = create_tile(data->tiles);
    data->texture_bank = create_texture(data->texture_bank,
        "./assets/textures/dialog.png", NULL);
}
