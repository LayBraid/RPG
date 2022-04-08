/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** texture
*/

#include "my_rpg.h"

// Creates node for texture_t linked list, set area to NULL for whole image
texture_t *create_texture(texture_t *start, char *filepath, sfIntRect *area)
{
    texture_t *new = malloc(sizeof(texture_t));

    new->texture = sfTexture_createFromFile(filepath, area);
    if (new->texture == NULL) {
        free(new);
        return (NULL);
    }
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->max_rect = 0;
    if (start == NULL)
        new->id = 1;
    else
        new->id = start->id + 1;
    new->next = start;
    start = new;
    return (new);
}

texture_t *delete_texture(texture_t *node)
{
    sfTexture_destroy(node->texture);
    free(node);
    return (NULL);
}

texture_t *delete_all_textures(texture_t *start)
{
    texture_t *cursor = start;
    texture_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_texture(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_texture(cursor);
    }
    return (NULL);
}
