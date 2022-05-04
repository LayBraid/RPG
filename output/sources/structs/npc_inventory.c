/*
** EPITECH PROJECT, 2022
** output
** File description:
** npc_inventory
*/

#include "structures.h"
#include "my.h"

// Creates a node for the npc_inventory_t linked list, base count is 1
npc_inventory_t *create_inventory(npc_inventory_t *start, char *name)
{
    npc_inventory_t *new = malloc(sizeof(npc_inventory_t));

    new->item_name = my_strdup(name);
    new->sprite = sfSprite_create();
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->count = 1;
    new->next = start;
    start = new;
    return (new);
}

// Deletes node given as parameter
npc_inventory_t *delete_inventory(npc_inventory_t *node)
{
    free(node->item_name);
    sfSprite_destroy(node->sprite);
    free(node);
    return (NULL);
}

// Deletes every node starting at the node given as parameter
npc_inventory_t *delete_whole_inventory(npc_inventory_t *start)
{
    npc_inventory_t *cursor = start;
    npc_inventory_t *cursor2;

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
