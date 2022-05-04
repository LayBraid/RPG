/*
** EPITECH PROJECT, 2022
** output
** File description:
** delete_hud
*/

#include "hud.h"
#include "my_rpg.h"

void delete_hud(data_t *data)
{
    data->objects = delete_all_objects(data->objects);
    data->texts = delete_all_texts(data->texts);
}
