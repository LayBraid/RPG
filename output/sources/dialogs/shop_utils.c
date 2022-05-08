/*
** EPITECH PROJECT, 2022
** output
** File description:
** shop_utils
*/

#include "my_rpg.h"
#include "dialogs.h"
#include "my.h"
#include "my_fprintf.h"

sfVector2f shop_up
    (data_t *data, unsigned int *current, unsigned int count, sfVector2f pos)
{
    if (*current == 1)
        return (pos);
    for (int i = 0; i < 4; i++) {
        pos.y -= 50;
        sfSprite_setPosition(data->tiles->next->sprite, pos);
    }
    *current -= 1;
    return (pos);
}

sfVector2f shop_down
    (data_t *data, unsigned int *current, unsigned int count, sfVector2f pos)
{
    if (*current == count + 1)
        return (pos);
    for (int i = 0; i < 4; i++) {
        pos.y += 50;
        sfSprite_setPosition(data->tiles->next->sprite, pos);
    }
    *current += 1;
    return (pos);
}

char select_current
    (data_t *data, unsigned int current, unsigned int count, npc_t *npc)
{
    npc_inventory_t *cursor = npc->inventory;
    text_t *text = data->texts;
    unsigned int i = 1;
    if (current == count + 1)
        return (4);
    while (cursor && text && i < current) {
        cursor = cursor->next;
        i++;
    }
    for (int j = 0; j < (count - current) + 1; j++)
        text = text->next;
    if (cursor == NULL || text == NULL || cursor->count == 0)
        return (0);
    cursor->count--;
    if (cursor->count == 0)
        sfText_setColor(text->text, (sfColor){128, 128, 128, 255});
    sfText_setString(text->text, my_fprintf("%s x%d",
        cursor->item_name, cursor->count));
    return (0);
}
