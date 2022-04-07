/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** inventory
*/

#include "my_rpg.h"
#include "my.h"

// Creates a node for the inventory_t linked list, base count is 1
inventory_t *create_inventory(inventory_t *start, char *name)
{
    inventory_t *new = malloc(sizeof(inventory_t));

    new->item_name = my_strdup(name);
    new->sprite = sfSprite_create();
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->count = 1;
    new->next = start;
    start = new;
    return (new);
}

// Deletes node given as parameter
inventory_t *delete_inventory(inventory_t *node)
{
    free(node->item_name);
    sfSprite_destroy(node->sprite);
    free(node);
    return (NULL);
}

// Deletes every node starting at the node given as parameter
inventory_t *delete_whole_inventory(inventory_t *start)
{
    inventory_t *cursor = start;
    inventory_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_inventory(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_inventory(cursor);
    }
    return (NULL);
}
