/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "map.h"

static int get_max(node_rectangle **node)
{
    int count = 0;
    node_rectangle *tmp = (*node);

    tmp = tmp->next;
    while (tmp->id != 0) {
        if (tmp->id > count)
            count = tmp->id;
        tmp = tmp->next;
    }
    return count;
}

static void update_this(node_rectangle *new, cf_t info[4])
{
    new->x = info[0];
    new->y = info[1];
    new->type = (int) info[2];
    new->depth = (int) info[3];
}

static void add_map_rectangle(data_t *data, node_rectangle **node,
const float info[4])
{
    node_texture *texture = data->textures;
    node_rectangle *new = malloc(sizeof(node_rectangle));
    node_rectangle *tmp = (*node);

    while (tmp->next->id != 0)
        tmp = tmp->next;
    new->id = get_max(node) + 1;
    update_this(new, info);
    new->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(new->rectangle, (sfVector2f) { 15.0f, 15.0f});
    while (texture->id_r != new->type)
        texture = texture->next;
    texture->function(data->world, new);
    sfRectangleShape_setPosition(new->rectangle,
    (sfVector2f) {(info[0] * 15), (15 * info[1])});
    new->next = (*node);
    tmp->next = new;
    data->collisions_house[(int) new->y][(int) new->x] = new->type;
}

static void setup_map_rectangle(data_t *data, node_rectangle **node,
const float info[4])
{
    node_texture *texture = data->textures;
    (*node) = malloc(sizeof(node_rectangle));
    (*node)->x = info[0];
    (*node)->y = info[1];
    (*node)->type = (int) info[2];
    (*node)->depth = (int) info[3];
    (*node)->rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize((*node)->rectangle, (sfVector2f) {15, 15});
    while (texture->id_r != (*node)->type)
        texture = texture->next;
    texture->function(data->world, (*node));
    sfRectangleShape_setPosition((*node)->rectangle,
    (sfVector2f) {(info[0] * 15), (15 * info[1])});
    (*node)->id = 0;
    (*node)->next = (*node);
    data->collisions_house[(int) (*node)->y][(int) (*node)->x] =
    (*node)->type;
}

void add_map_house(data_t *data, const float info[4])
{
    if (data->map_house == NULL)
        setup_map_rectangle(data, &data->map_house, info);
    else
        add_map_rectangle(data, &data->map_house, info);
}
