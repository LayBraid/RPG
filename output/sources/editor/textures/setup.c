/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

static int get_max(node_texture **node)
{
    int count = 0;
    node_texture *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_next_texture(node_texture **node,
void (*function)(sfTexture *texture, node_rectangle *rectangle), char *name,
int id_r)
{
    node_texture *new = malloc(sizeof(node_texture));
    node_texture *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max(node) + 1;
    new->id_r = id_r;
    new->type = new->id + 1;
    new->function = function;
    new->name = name;
    new->next = (*node);
    new->prev = tmp;
    tmp->next = new;
    (*node)->prev = new;
}

void setup_first_texture(node_texture **node,
void (*function)(sfTexture *texture, node_rectangle *rectangle), char *name,
int id_r)
{
    (*node) = malloc(sizeof(node_texture));
    (*node)->id = 0;
    (*node)->id_r = id_r;
    (*node)->type = 1;
    (*node)->name = name;
    (*node)->function = function;
    (*node)->next = (*node);
    (*node)->prev = (*node);
}
