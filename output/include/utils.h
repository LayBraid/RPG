/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** utils
*/

#ifndef UTILS_H_
    #define UTILS_H_

    #include "structures.h"

void launch_rpg(data_t *data);

void loading(data_t *data);

void switch_scene(data_t *data);

char *get_in_buffer(char *path);

char *extract_between_limits(char const *exp, int s1, int s2);

int get_it_char(const char *str, char c, int index);

int get_it_char_two(const char *str, char c, int index);

int display(int step, int actual);

node_letter *get_letter(data_t *data, sfVector2f position);

node_letter *del_letter(data_t *data, sfVector2f position);

node_letter *get_letter_c(data_t *data, char c);

void my_text(data_t *data, sfVector2f position, float scale, const char *text);

sfVector2i get_position(data_t *data, int entity, int index);

int can_move(int block);

int my_range(sfVector2i v1, sfVector2i v2, double range);

sfVector2f get_size_type(int type);

IntR get_rect_type(int type);

#endif /* !UTILS_H_ */
