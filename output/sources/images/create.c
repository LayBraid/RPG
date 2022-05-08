/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "images.h"

/*
* Création d'une image
*
* Utilisée aussi pour les 'button'
*
* Arguments:
*
* Informations de l'image:
* 0: Position de l'image en X une fois display
* 1: Position de l'image en Y une fois display
* 2: Position du rect de l'image en position X
* 3: Position du rect de l'image en position Y
* 4: Height du rect
* 5: Width du rect
* 6: Position max de l'animations (Mettre à -1 pour annuler l'animations)
* 7: Position X de la zone cliquable du bouton
* 8: Position Y de la zone cliquable du bouton
* 9: Taille max en X pour la zone cliquable
* 10: Taille max en Y pour la zone cliquable
* 11: Step où il va être display
* 12: Depth où il va être display
* 13: fichier de texture
*/

void update(data_t *data, sfSprite *spr, sfIntRect rect, const float info[10])
{
    sfVector2f vector;
    vector.x = info[0];
    vector.y = info[1];

    sfSprite_setTextureRect(spr, rect);
    sfSprite_setPosition(spr, vector);
}

anim_img *setup_a_anim_img(data_t *data, const float info[10])
{
    sfIntRect rect;
    anim_img *img = malloc(sizeof(anim_img));

    img->sprite = sfSprite_create();
    rect.left = (int) info[2];
    rect.top = (int) info[3];
    rect.height = (int) info[4];
    rect.width = (int) info[5];
    img->anim_pos = 0;
    img->anim_max = (int) info[6];
    img->x_power_anim = (int) info[5];
    img->y_power_anim = (int) info[4];
    img->step_display = (int) info[11];
    img->depth = (int) info[12];
    img->init_rect_x = (int) info[2];
    img->init_rect_y = (int) info[3];
    update(data, img->sprite, rect, info);
    return img;
}
