/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** text_utils
*/

#include "my_rpg.h"

text_t *set_text_position(text_t *node, sfVector2f position)
{
    node->position = position;
    sfText_setPosition(node->text, node->position);
    return (node);
}
