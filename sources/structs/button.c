/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** button
*/

#include "my_rpg.h"

button_t *create_button(button_t *start, char *string, sfFont *font)
{
    button_t *new = malloc(sizeof(button_t));

    new->sprite = sfSprite_create();
    new->rect = (sfIntRect){0, 0, 0, 0};
    new->position = (sfVector2f){0, 0};
    new->text = sfText_create();
    sfText_setFont(new->text, font);
    sfText_setString(new->text, string);
    new->id = (start == NULL) ? 1 : start->id + 1;
    new->next = start;
    start = new;
    return (new);
}

button_t *delete_button(button_t *node)
{
    sfSprite_destroy(node->sprite);
    sfText_destroy(node->text);
    free(node);
    return (NULL);
}

button_t *delete_all_buttons(button_t *start)
{
    button_t *cursor = start;
    button_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_button(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_button(cursor);
    }
    return (NULL);
}
