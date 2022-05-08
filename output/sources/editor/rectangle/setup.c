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

void add_next_rectangle(node_rectangle **node, int i, int j)
{
    node_rectangle *new = malloc(sizeof(node_rectangle));
    node_rectangle *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max(node) + 1;
    new->x = (float) j;
    new->type = 0;
    new->depth = 0;
    new->y = (float) i;
    new->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(new->rectangle,
    (sfVector2f) {(float) 15, (float) 15});
    sfRectangleShape_setPosition(new->rectangle,
    (sfVector2f) { (float) (j * 15), (float) (15 * i)});
    new->next = (*node);
    tmp->next = new;
}

void setup_first_rectangle(node_rectangle **node, int i, int j)
{
    (*node) = malloc(sizeof(node_rectangle));
    (*node)->x = (float) j;
    (*node)->y = (float) i;
    (*node)->type = 0;
    (*node)->depth = 0;
    (*node)->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize((*node)->rectangle, (sfVector2f) {15, 15});
    sfRectangleShape_setPosition((*node)->rectangle,
    (sfVector2f) { (float) (j * 15), (float) (15 * i)});
    (*node)->id = 0;
    (*node)->next = (*node);
}

void add_rectangle(node_rectangle **node, int i, int j)
{
    if ((*node) == NULL)
        setup_first_rectangle(node, i, j);
    else
        add_next_rectangle(node, i, j);
}
