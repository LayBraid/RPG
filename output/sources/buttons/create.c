/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "buttons.h"
#include "images.h"

hovered_button *setup_button(data_t *data, const float info[14],
void (* function)(data_t *data))
{
    hovered_button *button = malloc(sizeof(hovered_button));

    button->button = setup_a_anim_img(data, info);
    button->x_click = info[7];
    button->y_click = info[8];
    button->x_max = info[9];
    button->y_max = info[10];
    button->function = function;
    return button;
}
