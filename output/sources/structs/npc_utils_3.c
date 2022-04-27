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
