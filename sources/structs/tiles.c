/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** tiles
*/

#include "../../include/my_rpg.h"

tile_t *create_tile(tile_t *start)
{
    tile_t *new = malloc(sizeof(tile_t));

    new->sprite = sfSprite_create();
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->position = (sfVector2f){0, 0};
    new->id = (start == NULL) ? 1 : start->id + 1;
    new->next = start;
    start = new;
    return (new);
}

tile_t *delete_tile(tile_t *node)
{
    sfSprite_destroy(node);
    free(node);
    return (NULL);
}

tile_t *delete_all_tiles(tile_t *start)
{
    tile_t *cursor = start;
    tile_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_tile(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_tile(cursor);
    }
    return (NULL);
}
