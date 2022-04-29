/*
** EPITECH PROJECT, 2022
** output
** File description:
** keybind
*/

#ifndef KEYBIND_H_
    #define KEYBIND_H_

    #include "structures.h"

    // init_keybind.c
    void init_keybind(data_t *data);
    void assign_keys(data_t *data);

    // make_keybind.c
    void keybind_scene(data_t *data);

    // delete_keybind.c
    void delete_keybind(data_t *data);

    // move_key.c
    void go_down_key(data_t *data);
    void go_top_key(data_t *data);

    // change_key.c
    void change_key(data_t *data);

    // change_key_b.c
    void change_goods(data_t *data, sfKeyCode key);
    void change_key_g(data_t *data);
    void change_key_f(data_t *data);

    // check_key.c
    void check_key(data_t *data);
    void check_key_b(data_t *data);
    void check_key_c(data_t *data);
    void check_key_d(data_t *data);
    void check_key_e(data_t *data);

#endif /* !KEYBIND_H_ */
