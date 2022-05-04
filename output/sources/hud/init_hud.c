/*
** EPITECH PROJECT, 2022
** output
** File description:
** init_hud
*/

#include "my_rpg.h"

void init_hud(data_t *data)
{
    sfFont *font = sfFont_createFromFile("./assets/font.ttf");
    data->texts = create_text(data->texts, data->player.name, font);
    data->texts = set_text_position(data->texts, (sfVector2f){0,0});
    sfText_setCharacterSize(data->texts->text, 30);
    create_object(data, (sfIntRect){0,0,32,32}, (sfVector2f){0,30}, "./assets/game/stamina.png");
    // sfSprite_setTexture(data->objects->sprite, data->objects->texture, sfTrue);
    // create_object(data, (sfIntRect){0,0,32,32}, (sfVector2f){,30}, "./assets/game/stamina.png");
    // create_object(data, (sfIntRect){0,0,32,32}, (sfVector2f){0,30}, "./assets/game/stamina.png");
    // create_object(data, (sfIntRect){0,0,32,32}, (sfVector2f){0,30}, "./assets/game/stamina.png");
    // create_object(data, (sfIntRect){0,0,32,32}, (sfVector2f){0,30}, "./assets/game/stamina.png");
    data->video.ui = 2;
}
