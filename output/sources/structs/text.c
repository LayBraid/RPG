/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** text
*/

#include "my_rpg.h"

text_t *create_text(text_t *start, char *string, sfFont *font)
{
    text_t *new = malloc(sizeof(text_t));

    new->text = sfText_create();
    sfText_setFont(new->text, font);
    sfText_setString(new->text, string);
    new->position = (sfVector2f){0, 0};
    new->id = (start == NULL) ? 1 : start->id + 1;
    new->next = start;
    start = new;
    return start;
}

text_t *delete_text(text_t *node)
{
    sfText_destroy(node->text);
    free(node);
    return (NULL);
}

text_t *delete_all_texts(text_t *start)
{
    text_t *cursor = start;
    text_t *cursor2;

    if (cursor != NULL) {
        cursor2 = cursor->next;
        while (cursor2 != NULL) {
            cursor = delete_text(cursor);
            cursor = cursor2;
            cursor2 = cursor2->next;
        }
        cursor = delete_text(cursor);
    }
    return (NULL);
}
