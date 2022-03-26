/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** data_creation
*/

#include "../../include/my_rpg.h"

data_t *data_delete(data_t *data)
{
    data->player.inventory = delete_inventory(data->player.inventory);
    sfClock_destroy(data->player.clock);
    data->texture_bank = delete_all_textures(data->texture_bank);
    sfFont_destroy(data->font);
    data->texts = delete_all_texts(data->texts);
    data->buttons = delete_all_buttons(data->buttons);
    data->npcs = delete_all_npcs(data->npcs);
    data->tiles = delete_all_tiles(data->tiles);
    free(data);
    return (NULL);
}

data_t *data_create(void)
{
    data_t *data = malloc(sizeof(data_t));

    data->video.ui = 32;
    data->player.depth = 0;
    data->player.hp_max = 10;
    data->player.current_hp = 10;
    data->player.inventory = NULL;
    data->player.sprite = sfSprite_create();
    data->player.rect = (sfIntRect){0, 0, 0, 0};
    data->player.max_rect = 0;
    data->player.position = (sfVector2f){0, 0};
    data->player.clock = sfClock_create();
    data->texture_bank = NULL;
    data->font = NULL; // TODO ajouter font
    data->texts = NULL;
    data->buttons = NULL;
    data->npcs = NULL;
    data->tiles = NULL;
    data->delta = 1.0;
    data->loading_state = 0;
    return (data);
}
