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
    // delete_first_tile(data);
    // delete_first_tile(data);
    // sfText_destroy(data->texts->next->next->text);
    // free(data->texts->next->next);
    // data->texts->next->next = NULL;
    // sfText_destroy(data->texts->next->text);
    // free(data->texts->next);
    // data->texts->next = NULL;
    // sfText_destroy(data->texts->text);
    // free(data->texts);
    data->texts = NULL;
}
