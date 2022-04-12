/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#ifndef OUTPUT_BUTTONS_H
    #define OUTPUT_BUTTONS_H

    #include "structures.h"

void add_button(node_button **node, hovered_button *button);

void setup_first_button(node_button **node, hovered_button *button);

hovered_button *setup_button(data_t *data, const float info[14],
void (* function)(data_t *data));

node_button *setup_buttons(data_t *data);

void display_buttons_depth(data_t *data, int depth);

void nothing(data_t *data);

#endif
