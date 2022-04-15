/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

static int get_max(node_rectangle **node)
{
    int count = 0;
    node_rectangle *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

static void add_map_rectangle(node_rectangle **node, const float info[4])
{
    node_rectangle *new = malloc(sizeof(node_rectangle));
    node_rectangle *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max(node) + 1;
    new->x = info[0];
    new->y = info[1];
    new->type = (int) info[2];
    new->depth = (int) info[3];
    new->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(new->rectangle, (sfVector2f)
    {(float) 15, (float) 15});
    sfRectangleShape_setPosition(new->rectangle,
    (sfVector2f) {(info[0] * 15), (15 * info[1])});
    new->next = (*node);
    tmp->next = new;
}

static void setup_map_rectangle(node_rectangle **node, const float info[4])
{
    (*node) = malloc(sizeof(node_rectangle));
    (*node)->x = info[0];
    (*node)->y = info[1];
    (*node)->type = (int) info[2];
    (*node)->depth = (int) info[3];
    (*node)->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize((*node)->rectangle, (sfVector2f) {15, 15});
    sfRectangleShape_setPosition((*node)->rectangle,
    (sfVector2f) {(info[0] * 15), (15 * info[1])});
    (*node)->id = 0;
    (*node)->next = (*node);
}

void add_map(node_rectangle **node, const float info[4])
{
    if ((*node) == NULL)
        setup_map_rectangle(node, info);
    else
        add_map_rectangle(node, info);
}
