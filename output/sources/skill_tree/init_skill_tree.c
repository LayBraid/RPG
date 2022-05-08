/*
** EPITECH PROJECT, 2022
** output
** File description:
** init_skill_tree
*/

#include "my_rpg.h"
#include "my.h"

void init_outline_b(data_t *data, int idx)
{
    switch (idx) {
        case 4: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){845, 578});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        case 5: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){1047, 267});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        case 6: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){1040, 578});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        default: break;
    }
}

void init_outline(data_t *data, int idx)
{
    switch (idx) {
        case 0: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){504, 420});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        case 1: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){660, 267});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        case 2: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){660, 578});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        case 3: create_outline(data,
            (sfIntRect){0, 0, 32, 32}, (sfVector2f){852, 267});
            sfSprite_setScale(data->outline->sprite, (sfVector2f){2.95, 2.95});
            break;
        default: init_outline_b(data, idx);
    }
}

void init_tree_text2(data_t *data, sfFont *font)
{
    data->texts = create_text(data->texts, "LIFE POTION", font);
    data->texts = set_text_position(data->texts, (sfVector2f){1047,680});
    sfText_setCharacterSize(data->texts->text, 20);
    char *hp = malloc(sizeof(char) * 9);
    hp = my_strcat("HP MAX : ", my_itoa(data->player.hp_max));
    data->texts = create_text(data->texts, hp, font);
    data->texts = set_text_position(data->texts, (sfVector2f){1450,200});
    sfText_setCharacterSize(data->texts->text, 30);
    char *dmg = malloc(sizeof(char) * 8);
    dmg = my_strcat("DMG : ", my_itoa(data->player.dmg));
    data->texts = create_text(data->texts, dmg, font);
    data->texts = set_text_position(data->texts, (sfVector2f){1450,250});
    sfText_setCharacterSize(data->texts->text, 30);
    char *sp = my_strdup("SKILL POINTS :  ");
    sp[14] = data->player.skill_pts + '0';
    data->texts = create_text(data->texts, sp, font);
    data->texts = set_text_position(data->texts, (sfVector2f){1450,300});
    sfText_setCharacterSize(data->texts->text, 30);
}

void init_tree_text(data_t *data)
{
    sfFont *font = sfFont_createFromFile("assets/font.ttf");
    data->texts = create_text(data->texts, "MASTER SWORD", font);
    data->texts = set_text_position(data->texts, (sfVector2f){495,395});
    sfText_setCharacterSize(data->texts->text, 15);
    data->texts = create_text(data->texts, "DMG +1", font);
    data->texts = set_text_position(data->texts, (sfVector2f){660,237});
    sfText_setCharacterSize(data->texts->text, 20);
    data->texts = create_text(data->texts, "DMG +1", font);
    data->texts = set_text_position(data->texts, (sfVector2f){852,237});
    sfText_setCharacterSize(data->texts->text, 20);
    data->texts = create_text(data->texts, "STAMINA POTION", font);
    data->texts = set_text_position(data->texts, (sfVector2f){1047,237});
    sfText_setCharacterSize(data->texts->text, 20);
    data->texts = create_text(data->texts, "HP +1", font);
    data->texts = set_text_position(data->texts, (sfVector2f){660,680});
    sfText_setCharacterSize(data->texts->text, 20);
    data->texts = create_text(data->texts, "HP +1", font);
    data->texts = set_text_position(data->texts, (sfVector2f){852,680});
    sfText_setCharacterSize(data->texts->text, 20);
    init_tree_text2(data, font);
}

void init_skill_tree(data_t *data)
{
    for (int i = 0 ; i < 7 ; i++)
        if (data->player.comp[i] == '1')
            init_outline(data, i);
    init_tree_text(data);
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/tree.png", &(sfIntRect){0, 0, 1920, 1080});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){1, 1});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0,0});
    data->texture_bank = create_texture(data->texture_bank,
    "assets/game/input name hud.png", &(sfIntRect){179, 286, 254, 171});
    data->tiles = create_tile(data->tiles);
    data->tiles = set_tile_texture(data->tiles, data->texture_bank);
    data->tiles = set_tile_scale(data->tiles, (sfVector2f){7.55f, 6.32f});
    data->tiles = set_tile_position(data->tiles, (sfVector2f){0, 0});
    data->video.ui = 10;
}
