/*
** EPITECH PROJECT, 2022
** output
** File description:
** init_hud
*/

#include "my_rpg.h"
#include "my.h"

void init_stamina(data_t *data)
{
    float x = -20;
    int i = 0;

    for (; i < data->player.stamina ; i++) {
        create_object(data, (sfIntRect){0,0,32,32}, (sfVector2f){x,0},
        "./assets/game/stamina.png");
        sfSprite_setScale(data->objects->sprite, (sfVector2f){3,3});
        x += 50;
    }
    for (; i < 5 ; i++) {
        create_object(data, (sfIntRect){64,0,32,32}, (sfVector2f){x,0},
        "./assets/game/stamina.png");
        sfSprite_setScale(data->objects->sprite, (sfVector2f){3,3});
        x += 50;
    }
}

void init_fight_stamina(data_t *data)
{
    float x = -20;
    int i = 0;

    for (; i < data->player.stamina ; i++) {
        create_object(data, (sfIntRect){32,0,32,32}, (sfVector2f){x,0},
        "./assets/game/stamina.png");
        sfSprite_setScale(data->objects->sprite, (sfVector2f){3,3});
        x += 50;
    }
    for (; i < 5 ; i++) {
        create_object(data, (sfIntRect){64,0,32,32}, (sfVector2f){x,0},
        "./assets/game/stamina.png");
        sfSprite_setScale(data->objects->sprite, (sfVector2f){3,3});
        x += 50;
    }
}

void init_hud(data_t *data)
{
    sfFont *font = sfFont_createFromFile("./assets/font.ttf");
    data->texts = create_text(data->texts, data->player.name, font);
    data->texts = set_text_position(data->texts, (sfVector2f){50,0});
    sfText_setCharacterSize(data->texts->text, 30);
    data->texts = create_text(data->texts, my_itoa(data->player.lvl), font);
    data->texts = set_text_position(data->texts, (sfVector2f){10,0});
    sfText_setCharacterSize(data->texts->text, 30);
    if (data->player.damage_display == 1)
        init_fight_stamina(data);
    else
        init_stamina(data);
}
