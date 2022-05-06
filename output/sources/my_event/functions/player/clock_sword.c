/*
** EPITECH PROJECT, 2022
** output
** File description:
** clock_sword
*/

#include "player.h"

void update_rectangle(player_t *player, attack_effect_t *node)
{
    sfVector2f vector = sfRectangleShape_getPosition(player->rectangle);
    if (player->state == IDLE_UP || player->state == WALK_UP) {
        vector.y -= 12;
        vector.x -= 7;
        sfRectangleShape_setScale(node->rectangle, (sfVector2f) {1, 1});
    } else if (player->state == IDLE_DOWN || player->state == WALK_DOWN) {
        vector.y += 12;
        vector.x -= 7;
        sfRectangleShape_setScale(node->rectangle, (sfVector2f) {-1, 1});
    }
    if (player->state == IDLE_LEFT || player->state == WALK_LEFT) {
        vector.x -= 12;
        sfRectangleShape_setScale(node->rectangle, (sfVector2f) {-1, 1});
    } else {
        vector.x += 12;
        sfRectangleShape_setScale(node->rectangle, (sfVector2f) {1, 1});
    }
    sfRectangleShape_setPosition(node->rectangle, vector);
}

static void clock_effect(player_t *player, attack_effect_t *node)
{
    if (node->animation == NULL)
        return;
    sfTime time = sfClock_getElapsedTime(node->movement_clock);
    double diff = time.microseconds / 1000000.0;

    if (diff > 0.05) {
        sfRectangleShape_setSize(node->rectangle,
        get_size_sword(player->attack_effect->type, node->animation->value));
        sfRectangleShape_setTextureRect(node->rectangle,
        get_rect_sword(player->attack_effect->type, node->animation->value));
        update_rectangle(player, node);
        if (player->attack_effect->animation->next == NULL) {
            if (player->state > 8)
                player->state -= 8;
            else
                player->state -= 4;
            if (player->attack_effect->id == player->attack_effect->next->id)
                player->attack_effect = NULL;
            else
                player->attack_effect = player->attack_effect->next;
        }
        node->animation = node->animation->next;
        sfClock_restart(node->movement_clock);
    }
}

void player_effect_all(player_t *node)
{
    attack_effect_t *tmp = node->attack_effect;

    if (node->attack_effect == NULL)
        return;
    while (tmp->id < tmp->next->id) {
        clock_effect(node, tmp);
        tmp = tmp->next;
    }
    clock_effect(node, tmp);
}