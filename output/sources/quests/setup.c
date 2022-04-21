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
    quest_t *dup = malloc(sizeof(quest_t));

    while (tmp->next->id != 0)
        tmp = tmp->next;
    dup->id = get_max_quest(node) + 1;
    dup->name = new->name;
    dup->rewards = new->rewards;
    dup->requirements = new->requirements;
    dup->description = new->description;
    dup->display_name = new->display_name;
    dup->status = new->status;
    dup->next = (*node);
    tmp->next = dup;
}

void first_quest(quest_t **node, quest_t *new)
{
    (*node) = malloc(sizeof(quest_t));
    (*node)->id = 0;
    (*node)->name = new->name;
    (*node)->rewards = new->rewards;
    (*node)->requirements = new->requirements;
    (*node)->description = new->description;
    (*node)->display_name = new->display_name;
    (*node)->status = new->status;
    (*node)->next = (*node);
}
