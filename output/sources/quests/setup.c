/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "quests.h"

static int get_max_quest(quest_t **node)
{
    int count = 0;
    quest_t *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void any_quest(quest_t **node, quest_t *new)
{
    quest_t *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max_quest(node) + 1;
    new->next = (*node);
    tmp->next = new;
}

void first_quest(quest_t **node, quest_t *new)
{
    (*node) = malloc(sizeof(event_t));
    (*node)->id = 0;
    (*node) = new;
    (*node)->next = (*node);
}
