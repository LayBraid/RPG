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

#endif
