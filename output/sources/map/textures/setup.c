/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

static int get_max(node_texture_map **node)
{
    int count = 0;
    node_texture_map *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_next_texture_map(node_texture_map **node,
void (*function)(data_t *data, node_rectangle *rectangle))
{
    node_texture_map *new = malloc(sizeof(node_texture_map));
    node_texture_map *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max(node) + 1;
    new->type = new->id + 1;
    new->function = function;
    new->next = (*node);
    new->prev = tmp;
    tmp->next = new;
}

void setup_first_texture_map(node_texture_map **node,
void (*function)(data_t *data, node_rectangle *rectangle))
{
    (*node) = malloc(sizeof(node_texture_map));
    (*node)->id = 0;
    (*node)->type = 1;
    (*node)->function = function;
    (*node)->next = (*node);
    (*node)->prev = (*node);
}
