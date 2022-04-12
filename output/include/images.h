/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#ifndef OUTPUT_IMAGES_H
    #define OUTPUT_IMAGES_H

    #include "structures.h"

anim_img *setup_a_anim_img(data_t *data, const float info[14]);

void add_to_list_img(node_img **node, anim_img *img);

void setup_first_img(node_img **node, anim_img *img);

node_img *setup_img(data_t *data);

void display_images_depth(data_t *data, int depth);

#endif
