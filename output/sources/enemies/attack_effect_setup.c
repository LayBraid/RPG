/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "enemies.h"

static int get_max_effect(attack_effect_t **node)
{
    int count = 0;
    attack_effect_t *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

static int any_effect(attack_effect_t **node, int type,
sfRectangleShape *enemy_rect, sfVector2f enemy_position)
{
    attack_effect_t *tmp = (*node);
    attack_effect_t *dup = malloc(sizeof(attack_effect_t));

    while (tmp->next->id != 0)
        tmp = tmp->next;
    dup->id = get_max_effect(node) + 1;
    dup->type = type;
    dup->rectangle = sfRectangleShape_create();
    sfRectangleShape_setPosition((*node)->rectangle,enemy_position);
    dup->position = sfRectangleShape_getPosition(enemy_rect);
    dup->movement = NULL;
    dup->movement_clock = sfClock_create();
    dup->next = (*node);
    tmp->next = dup;
    return dup->id;
}

static int first_effect(attack_effect_t **node, int type,
sfRectangleShape *enemy_rect, sfVector2f enemy_position)
{
    (*node) = malloc(sizeof(attack_effect_t));
    (*node)->id = 0;
    (*node)->type = type;
    (*node)->rectangle = sfRectangleShape_create();
    (*node)->position = sfRectangleShape_getPosition(enemy_rect);
    sfRectangleShape_setPosition((*node)->rectangle,enemy_position);
    (*node)->movement = NULL;
    (*node)->movement_clock = sfClock_create();
    (*node)->next = (*node);
    return 0;
}

void add_effect_enemy(data_t *data, enemy_t *enemy, int type,
sfVector2f player_position)
{
    int id;

    if (enemy->attack_effect == NULL)
        id = first_effect(&enemy->attack_effect, type,
        enemy->rectangle, enemy->position);
    else
        id = any_effect(&enemy->attack_effect, type,
        enemy->rectangle, enemy->position);
    texture_effect(data, enemy, id);
    setup_effect(enemy, id, player_position);
}
