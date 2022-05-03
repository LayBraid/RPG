/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "my_rpg.h"

void npc_set_size_rectangle(npc_t *node, sfVector2f size)
{
    sfRectangleShape_setSize(node->rectangle, size);
}

void npc_set_rectangle_texture(npc_t *node, sfTexture *texture)
{
    sfRectangleShape_setTexture(node->rectangle, texture, sfTrue);
}

void npc_set_rectangle_texture_rect(npc_t *node, sfIntRect rect)
{
    sfRectangleShape_setTextureRect(node->rectangle, rect);
}
