/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** No file there , just an epitech header example
*/

#include "parsing_data.h"

/*void convert_data(dfd *df, char *data, int step)
{
    switch (step) {
        case 0:
            get_info_data(df, data);
            break;
        case 1:
            decrypt_shop(df, data);
            break;
        default:
            decrypt_buildings(df, data);
            break;
    }
}

void open_data(dfd *df)
{
    char *data = get_in_buffer("data/data");
    int step = 0;
    char *tmp = "";

    for (int i = 0; data[i] != '\0'; i++) {
        if (data[i] == '[')
            continue;
        tmp = my_strcat_c(tmp, data[i]);
        if (data[i] == ']') {
            convert_data(df, tmp, step);
            tmp = "";
            step++;
            continue;
        }
    }
}
*/

void parsing_data(data_t *data)
{
    (void)data;
}
