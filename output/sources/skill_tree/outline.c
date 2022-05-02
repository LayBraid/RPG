/*
** EPITECH PROJECT, 2022
** output
** File description:
** outline
*/

#include "my_rpg.h"
#include "skill_tree.h"
#include "menus.h"
#include "utils.h"
#include "my.h"

void move_outline(tile_t *tile)
{
    if (tile->rect.left < 96)
        tile->rect.left += 32;
    else if (tile->rect.left >= 96)
        tile->rect.left = 0;
    // sfSprite_setTexture(tile->sprite, tile->texture, sfTrue);
    // sfSprite_setTextureRect(tile->sprite, tile->rect);
    // printf("%d\n", tile->rect.left);
}

void move_all_outline(data_t *data) {
    tile_t *tmp = data->tiles;

    while (tmp != NULL) {
        if (tmp->type == 3)
            move_outline(tmp);
        tmp = tmp->next;
    }
}

void outline_clock(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->player.movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 1) {
        move_all_outline(data);
        sfClock_restart(data->player.movement_clock);
    }
}
