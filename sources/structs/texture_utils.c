/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** texture_utils
*/

#include "my_rpg.h"

texture_t *set_texture_rect(texture_t *node, sfIntRect rect, int max_r)
{
    node->rect = rect;
    node->max_rect = max_r;
    return (node);
}
