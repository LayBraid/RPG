/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#ifndef OUTPUT_ENEMIES_H
    #define OUTPUT_ENEMIES_H

    #include "structures.h"

void any_enemy(enemy_t **node, enemy_t *new, sfTexture *texture);

void first_enemy(enemy_t **node, enemy_t *new, sfTexture *texture);

void clock_enemies_aggro(data_t *data);

void clock_enemies_move(data_t *data);

void clock_enemies_life_display(data_t *data);

void setup_effect(enemy_t *enemy, int id_effect, sfVector2f player_position);

void add_effect_enemy(data_t *data, enemy_t *enemy, int type,
sfVector2f player_position);

void texture_effect(data_t *data, enemy_t *enemy, int id);

void clock_enemies_effect(data_t *data);

void display_effect_enemies(data_t *data);

void calculate_new_coord_effects(data_t *data);

void destroy_interacted_ennemy(data_t *data);

#endif
