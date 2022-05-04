/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** make_game
*/

#include "player.h"
#include "my_event.h"
#include "enemies.h"

static int get_max_effect_player(attack_effect_t **node)
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

static int any_effect_player(attack_effect_t **node, int type,
sfRectangleShape *rectangle, sfVector2f position)
{
    attack_effect_t *tmp = (*node);
    attack_effect_t *dup = malloc(sizeof(attack_effect_t));

    while (tmp->next->id != 0)
        tmp = tmp->next;
    dup->id = get_max_effect_player(node) + 1;
    dup->type = type;
    dup->rectangle = sfRectangleShape_create();
    sfRectangleShape_setPosition((*node)->rectangle, position);
    dup->position = sfRectangleShape_getPosition(rectangle);
    dup->movement_or_anim = 1;
    dup->movement = NULL;
    dup->movement_clock = sfClock_create();
    dup->next = (*node);
    tmp->next = dup;
    return dup->id;
}

static int first_effect_player(attack_effect_t **node, int type,
sfRectangleShape *rectangle, sfVector2f position)
{
    (*node) = malloc(sizeof(attack_effect_t));
    (*node)->id = 0;
    (*node)->type = type;
    (*node)->movement_or_anim = 1;
    (*node)->rectangle = sfRectangleShape_create();
    (*node)->position = sfRectangleShape_getPosition(rectangle);
    sfRectangleShape_setPosition((*node)->rectangle,position);
    (*node)->movement = NULL;
    (*node)->movement_clock = sfClock_create();
    (*node)->next = (*node);
    return 0;
}

void add_effect_player(data_t *data, player_t *player, int type,
sfVector2f player_position)
{
    int id;

    if (player->attack_effect == NULL)
        id = first_effect_player(&player->attack_effect, type,
        player->rectangle, player->position);
    else
        id = any_effect_player(&player->attack_effect, type,
        player->rectangle, player->position);
    printf("add %d\n", id);
    texture_effect_player(data, player, id);
    printf("next add\n");
    setup_effect_player(player, id, player_position);
    printf("finish add\n");
}
