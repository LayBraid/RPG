/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** data_creation
*/

#include "../../include/my_rpg.h"

data_t *data_create(void)
{
    data_t *data = malloc(sizeof(data_t));

    data->video.ui = 0;
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
    return (data);
}
