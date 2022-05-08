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

void move_outline(outline_t *tile)
{
    if (tile->rect.left < 96)
        tile->rect.left += 32;
    else if (tile->rect.left >= 96)
        tile->rect.left = 0;
    tile->texture = sfTexture_createFromFile("assets/game/outline.png",
    &tile->rect);
    sfSprite_setTexture(tile->sprite, tile->texture, sfTrue);
}

void move_all_outline(data_t *data)
{
    outline_t *tmp = data->outline;

    while (tmp != NULL) {
        move_outline(tmp);
        tmp = tmp->next;
    }
}

void outline_clock(data_t *data)
{
    sfTime time = sfClock_getElapsedTime(data->player.movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.15) {
        move_all_outline(data);
        sfClock_restart(data->player.movement_clock);
    }
}
