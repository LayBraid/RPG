/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** button_utils
*/

#include "my_rpg.h"

button_t *set_button_texture(button_t *node, texture_t *texture)
{
    node->rect = texture->rect;
    sfSprite_setTexture(node->sprite, texture->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    return (node);
}

button_t *set_button_position(button_t *node, sfVector2f position)
{
    node->position = position;
    sfText_setPosition(node->text, node->position);
    return (node);
}

button_t *set_button_string(button_t *node, char *string)
{
    sfText_setString(node->text, string);
    return (node);
}
