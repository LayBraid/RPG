/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** npc
*/

#include "my_rpg.h"
#include "my.h"

npc_t *create_npc(npc_t *start, char *name)
{
    npc_t *new = malloc(sizeof(npc_t));

    new->name = my_strdup(name);
    new->type = 0;
    new->depth = 0;
    new->map = 2;
    new->event_call = "no_event_npc";
    new->hp_max = 10;
    new->current_hp = new->hp_max;
    new->inventory = NULL;
    new->rectangle = sfRectangleShape_create();
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->max_rect = 0;
    new->position = (sfVector2f){0, 0};
    new->clock = sfClock_create();
    new->id = (start == NULL) ? 1 : start->id + 1;
    new->next = start;
    start = new;
    return (new);
}

npc_t *set_npc_depth(npc_t *npc, unsigned char depth)
{
    npc->depth = depth;
    return (npc);
}

npc_t *delete_npc(npc_t *node)
{
    free(node->name);
    sfRectangleShape_destroy(node->rectangle);
    sfClock_destroy(node->clock);
    free(node);
    return (NULL);
}

npc_t *delete_all_npcs(npc_t *start)
{
    npc_t *cursor = start;
    npc_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_npc(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_npc(cursor);
    }
    return (NULL);
}
