/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** name
*/

#ifndef NAME_H_
    #define NAME_H_

    #include "structures.h"

// init_name.c
void init_name(data_t *data);

// make_name.c
void name_scene(data_t *data);

// delete_name.c
void delete_nameC(data_t *data);
void delete_nameM(data_t *data);

// move_selec.c
void go_left(data_t *data);
void go_right(data_t *data);
void go_up(data_t *data);
void go_down(data_t *data);

// addel_letter.c
void put_letter(data_t *data);

void enter_name(data_t *data);

#endif /* !NAME_H_ */
