/*
** EPITECH PROJECT, 2022
** output
** File description:
** dialoog_destroy
*/

#include "my_rpg.h"
#include "dialogs.h"

void destroy_dialogs(data_t *data)
{
    for (int i = 0; i < 2; i++)
        delete_first_tile(data);
}

void destroy_dialog_frame(data_t *data)
{
    data->texts = data->texts->next;
}
