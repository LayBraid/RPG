/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"
#include "utils.h"

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

static void update_rectangle(enemy_t *node, sfTexture *texture)
{
    node->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(node->rectangle, get_size_enemies(node->type));
    sfRectangleShape_setTexture(node->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(node->rectangle,
    get_rect_type_enemies(node->type));
    sfRectangleShape_setPosition(node->rectangle, node->position);
}

void any_enemy(enemy_t **node, enemy_t *new, sfTexture *texture)
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
    update_rectangle(dup, texture);
    dup->movement_clock = sfClock_create();
    dup->movement = NULL;
    dup->next = (*node);
    tmp->next = dup;
}

void first_enemy(enemy_t **node, enemy_t *new, sfTexture *texture)
{
    (*node) = malloc(sizeof(enemy_t));
    (*node)->id = 0;
    (*node)->name = new->name;
    (*node)->type = new->type;
    (*node)->depth = new->depth;
    (*node)->hp = new->hp;
    (*node)->position = new->position;
    update_rectangle((*node), texture);
    (*node)->max_hp = new->max_hp;
    (*node)->movement_clock = sfClock_create();
    (*node)->movement = NULL;
    (*node)->next = (*node);
}
