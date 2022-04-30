/*
** EPITECH PROJECT, 2022
** \
** File description:
** dialogs
*/

#ifndef DIALOGS_H_
    #define DIALOGS_H_

// dialog_utils.c
void delete_first_tile(data_t *data);

// dialog_example.c
void dialog_example(data_t *data);

// dialog_destroy.c
void destroy_dialogs(data_t *data);
void destroy_dialog_frame(data_t *data);

// initializers.c
void init_dialog_choice(data_t *data, sfVector2f pos);
void set_dialog_characters
    (data_t *data, int id_npc_texture, char is_talking, int id_npc);
void dialog_init(data_t *data);

// choice.c
int dialog_choice(data_t *data);

// dialogs.c
void dialog(data_t *data, char *dialog, int id_npc_texture,
    char is_talking, int id_npc);
void inter_dialog(data_t *data);

#endif /* !DIALOGS_H_ */
