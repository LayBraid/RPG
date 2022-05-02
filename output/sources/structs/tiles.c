/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** tiles
*/

#include "my_rpg.h"

tile_t *create_tile(tile_t *start)
{
    tile_t *new = malloc(sizeof(tile_t));

    new->depth = 0;
    new->sprite = sfSprite_create();
    new->type = 0;
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->position = (sfVector2f){0, 0};
    new->scale = (sfVector2f){1, 1};
    new->move = (sfVector2f){0, 0};
    new->id = (start == NULL) ? 1 : start->id + 1;
    new->next = start;
    start = new;
    return (new);
}

tile_t *delete_first_tile(data_t *data)
{
    tile_t *cursor = data->tiles;

    if (cursor != NULL) {
        data->tiles = cursor->next;
        cursor->next = NULL;
        sfSprite_destroy(cursor->sprite);
        free(cursor);
    }
    return (data->tiles);
}

tile_t *delete_tile(tile_t *node)
{
    if (node->sprite != NULL)
        sfSprite_destroy(node->sprite);
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

tile_t *tile_set_type(tile_t *tile, int type)
{
    tile->type = type;
    return tile;
}
