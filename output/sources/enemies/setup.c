/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static int get_max_enemy(enemy_t **node)
{
    int count = 0;
    enemy_t *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

void any_enemy(enemy_t **node, enemy_t *new)
{
    enemy_t *tmp = (*node);
    enemy_t *dup = malloc(sizeof(enemy_t));

    while (tmp->next->id != 0)
        tmp = tmp->next;
    dup->id = get_max_enemy(node) + 1;
    dup->name = new->name;
    dup->type = new->type;
    dup->depth = new->depth;
    dup->hp = new->hp;
    dup->max_hp = new->max_hp;
    dup->position = new->position;
    dup->movement_clock = sfClock_create();
    dup->movement = NULL;
    dup->next = (*node);
    tmp->next = dup;
}

void first_enemy(enemy_t **node, enemy_t *new)
{
    (*node) = malloc(sizeof(enemy_t));
    (*node)->id = 0;
    (*node)->name = new->name;
    (*node)->type = new->type;
    (*node)->depth = new->depth;
    (*node)->hp = new->hp;
    (*node)->position = new->position;
    (*node)->max_hp = new->max_hp;
    (*node)->movement_clock = sfClock_create();
    (*node)->movement = NULL;
    (*node)->next = (*node);
}
