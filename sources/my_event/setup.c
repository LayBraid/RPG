/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "my_event.h"

event_t *cast_event(char *name, void (*function)(data_t *data))
{
    event_t *new = malloc(sizeof(event_t));
    new->name = name;
    new->calling = 0;
    new->function = function;

    return new;
}

static int get_max_event(event_t **node)
{
    int count = 0;
    event_t *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void add_event(event_t **node, event_t *new)
{
    event_t *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_event(node) + 1;
    new->next = (*node);
    tmp->next = new;
}

void first_event(event_t **node, event_t *new)
{
    (*node) = malloc(sizeof(event_t));
    (*node)->id = 0;
    (*node) = new;
    (*node)->next = (*node);
}
