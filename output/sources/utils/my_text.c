/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "utils.h"

static int max_height(data_t *data, const char *str)
{
    int max = 0;
    node_letter *tmp = NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        tmp = get_letter_c(data, str[i]);
        if (tmp->rect.height > max)
            max = tmp->rect.height;
    }
    return (max);
}

void my_text(data_t *data, sfVector2f position, float scale, const char *text)
{
    sfVector2f vector = {position.x, position.y};
    sfTexture *texture = sfTexture_createFromFile(
    "assets/game/input name hud.png", NULL);
    sfRectangleShape *rectangle = sfRectangleShape_create();
    node_letter *letter = NULL;
    int max = max_height(data, text) * scale;

    for (int i = 0; text[i] != '\0'; i++) {
        letter = get_letter_c(data, text[i]);
        sfRectangleShape_setSize(rectangle, (sfVector2f)
        {(float) letter->rect.width * scale,
        (float) letter->rect.height * scale});
        sfRectangleShape_setTexture(rectangle, texture, sfTrue);
        sfRectangleShape_setTextureRect(rectangle, letter->rect);
        sfRectangleShape_setPosition(rectangle, (sfVector2f) {vector.x,
        (vector.y + (max - (letter->rect.height * scale)))});
        vector.x += (float) letter->rect.width + letter->rect.width * 4;
        sfRenderWindow_drawRectangleShape(data->video.window, rectangle, NULL);
    }
}
