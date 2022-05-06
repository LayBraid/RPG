/*
** EPITECH PROJECT, 2022
** \
** File description:
** dialogs
*/

#ifndef DIALOGS_H_
    #define DIALOGS_H_

// shop_utils.c
sfVector2f shop_up
    (data_t *data, unsigned int *current, unsigned int count, sfVector2f pos);
sfVector2f shop_down
    (data_t *data, unsigned int *current, unsigned int count, sfVector2f pos);
char select_current
    (data_t *data, unsigned int current, unsigned int count, npc_t *npc);

// shop.c
void open_shop(data_t *data, int npc_id);

// dialog_utils.c
//void delete_first_tile(data_t *data);

// dialog_example.c
void dialog_example(data_t *data, int npc_id);

// dialog_destroy.c
void destroy_dialogs(data_t *data);
void destroy_dialog_frame(data_t *data);

// initializers.c
void init_dialog_shop_background(data_t *data, sfVector2f pos);
unsigned int init_dialog_shop(data_t *data, npc_t *npc);
void init_dialog_choice(data_t *data, sfVector2f pos);
void set_dialog_characters
    (data_t *data, char is_talking, int id_npc);
void dialog_init(data_t *data);

// choice.c
int dialog_choice(data_t *data);

// dialogs.c
void dialog(data_t *data, char *dialog, int id_npc_texture,
    char is_talking, int id_npc);
void inter_dialog(data_t *data);

void dialog1(data_t *data, int npc_id);
void dialog2(data_t *data, int npc_id);
void dialog3(data_t *data, int npc_id);
void dialog4(data_t *data, int npc_id);
void dialog5(data_t *data, int npc_id);
void dialog6(data_t *data, int npc_id);
void dialog7(data_t *data, int npc_id);
void dialog8(data_t *data, int npc_id);
void dialog9(data_t *data, int npc_id);

#endif /* !DIALOGS_H_ */
