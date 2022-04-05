/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#ifndef RPG_MY_EVENT_H
    #define RPG_MY_EVENT_H

    #include "structures.h"

void initialize_events(data_t *data);

void add_event(event_t **node, event_t *new);

void first_event(event_t **node, event_t *new);

event_t *cast_event(char *name, void (*function)(data_t *data));

void add_3_coins(data_t *data);

#endif
