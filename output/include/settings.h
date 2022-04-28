/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** settings
*/

#ifndef SETTINGS_H_
    #define SETTINGS_H_

    #include "structures.h"

    // init_settings.c
    void init_settings(data_t *data);

    // make_settings.c
    void settings_scene(data_t *data);

    // delete_settings.c
    void delete_settings(data_t *data);
    void delete_settingsK(data_t *data);

    // change_settings.c
    void goleft(data_t *data);
    void goright(data_t *data);
    void go_downn(data_t *data);
    void go_topp(data_t *data);

    // fps.c
    void change_fpsl(data_t *data);
    void change_fpsr(data_t *data);

    // volume.c
    void change_volumer(data_t *data);
    void change_volumel(data_t *data);

#endif /* !SETTINGS_H_ */
