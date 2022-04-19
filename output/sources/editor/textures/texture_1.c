/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_void(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {0, 0, 8, 8};
    rectangle->type = 0;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_grass(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 39, 8, 8};
    rectangle->type = 1;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {241, 39, 8, 8};
    rectangle->type = 2;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 48, 16, 8};
    rectangle->type = 3;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_hole1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {253, 39, 16, 8};
    rectangle->type = 4;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_hole2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {253, 48, 16, 8};
    rectangle->type = 5;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_souch1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {287, 57, 16, 8};
    rectangle->type = 6;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_souch2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {287, 65, 16, 8};
    rectangle->type = 7;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_trefle1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {304, 57, 16, 8};
    rectangle->type = 8;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_trefle2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {304, 65, 16, 8};
    rectangle->type = 9;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_panneau1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {270, 74, 16, 8};
    rectangle->type = 10;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_panneau2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {270, 82, 16, 8};
    rectangle->type = 11;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_support(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {287,74,16,8};
    rectangle->type = 12;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_support2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {287,82,16,8};
    rectangle->type = 13;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {17,122,8,8};
    rectangle->type = 14;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {25,122,8,8};
    rectangle->type = 15;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry3(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {33,122,8,8};
    rectangle->type = 16;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry4(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {41,122,8,8};
    rectangle->type = 17;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry5(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {17,130,8,8};
    rectangle->type = 18;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry6(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {25,130,8,8};
    rectangle->type = 19;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry7(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {33,130,8,8};
    rectangle->type = 20;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry8(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {41,130,8,8};
    rectangle->type = 21;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry9(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {17,138,8,8};
    rectangle->type = 22;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry10(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {25,138,8,8};
    rectangle->type = 23;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry11(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {33,138,8,8};
    rectangle->type = 24;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry12(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {41,138,8,8};
    rectangle->type = 25;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry13(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {17,146,8,8};
    rectangle->type = 26;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry14(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {25,146,8,8};
    rectangle->type = 27;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry15(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {33,146,8,8};
    rectangle->type = 28;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_entry16(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {41,146,8,8};
    rectangle->type = 29;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {343,162,8,8};
    rectangle->type = 30;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {351,162,8,8};
    rectangle->type = 31;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin3(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {367,162,8,8};
    rectangle->type = 32;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin4(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {343,170,8,8};
    rectangle->type = 33;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin5(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {351,170,8,8};
    rectangle->type = 34;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin6(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {367,170,8,8};
    rectangle->type = 35;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin7(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {343,186,8,8};
    rectangle->type = 36;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin8(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {351,186,8,8};
    rectangle->type = 37;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_chemin9(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {367,186,8,8};
    rectangle->type = 38;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,206,8,8};
    rectangle->type = 39;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,206,8,8};
    rectangle->type = 40;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree3(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,206,8,8};
    rectangle->type = 41;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree4(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,206,8,8};
    rectangle->type = 42;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree5(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,206,8,8};
    rectangle->type = 43;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree6(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,206,8,8};
    rectangle->type = 44;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree7(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,206,8,8};
    rectangle->type = 45;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree8(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,206,8,8};
    rectangle->type = 46;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree11(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,214,8,8};
    rectangle->type = 49;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree12(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,214,8,8};
    rectangle->type = 50;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree13(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,214,8,8};
    rectangle->type = 51;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree14(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,214,8,8};
    rectangle->type = 52;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree15(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,214,8,8};
    rectangle->type = 53;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree16(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,214,8,8};
    rectangle->type = 54;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree17(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,214,8,8};
    rectangle->type = 55;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree18(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,214,8,8};
    rectangle->type = 56;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree21(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,222,8,8};
    rectangle->type = 59;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree22(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,222,8,8};
    rectangle->type = 60;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree23(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,222,8,8};
    rectangle->type = 61;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree24(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,222,8,8};
    rectangle->type = 62;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree25(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,222,8,8};
    rectangle->type = 63;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree26(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,222,8,8};
    rectangle->type = 64;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree27(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,222,8,8};
    rectangle->type = 65;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree28(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,222,8,8};
    rectangle->type = 66;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree31(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,230,8,8};
    rectangle->type = 69;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree32(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,230,8,8};
    rectangle->type = 70;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree33(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,230,8,8};
    rectangle->type = 71;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree34(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,230,8,8};
    rectangle->type = 72;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree35(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,230,8,8};
    rectangle->type = 73;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree36(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,230,8,8};
    rectangle->type = 74;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree37(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,230,8,8};
    rectangle->type = 75;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree38(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,230,8,8};
    rectangle->type = 76;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree41(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,238,8,8};
    rectangle->type = 79;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree42(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,238,8,8};
    rectangle->type = 80;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree43(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,238,8,8};
    rectangle->type = 81;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree44(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,238,8,8};
    rectangle->type = 82;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree45(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,238,8,8};
    rectangle->type = 83;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree46(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,238,8,8};
    rectangle->type = 84;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree47(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,238,8,8};
    rectangle->type = 85;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree48(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,238,8,8};
    rectangle->type = 86;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree51(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,246,8,8};
    rectangle->type = 89;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree52(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,246,8,8};
    rectangle->type = 90;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree53(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,246,8,8};
    rectangle->type = 91;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree54(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,246,8,8};
    rectangle->type = 92;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree55(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,246,8,8};
    rectangle->type = 93;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree56(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,246,8,8};
    rectangle->type = 94;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree57(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,246,8,8};
    rectangle->type = 95;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree58(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,246,8,8};
    rectangle->type = 96;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree61(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,254,8,8};
    rectangle->type = 99;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree62(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,254,8,8};
    rectangle->type = 100;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree63(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,254,8,8};
    rectangle->type = 101;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree64(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,254,8,8};
    rectangle->type = 102;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree65(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,254,8,8};
    rectangle->type = 103;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree66(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,254,8,8};
    rectangle->type = 104;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree67(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,254,8,8};
    rectangle->type = 105;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree68(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,254,8,8};
    rectangle->type = 106;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree71(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,262,8,8};
    rectangle->type = 109;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree72(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,262,8,8};
    rectangle->type = 110;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree73(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,262,8,8};
    rectangle->type = 111;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree74(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,262,8,8};
    rectangle->type = 112;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree75(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,262,8,8};
    rectangle->type = 113;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree76(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,262,8,8};
    rectangle->type = 114;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree77(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,262,8,8};
    rectangle->type = 115;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree78(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,262,8,8};
    rectangle->type = 116;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree81(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,270,8,8};
    rectangle->type = 119;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree82(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,270,8,8};
    rectangle->type = 120;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree83(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,270,8,8};
    rectangle->type = 121;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree84(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,270,8,8};
    rectangle->type = 122;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree85(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,270,8,8};
    rectangle->type = 123;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree86(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,270,8,8};
    rectangle->type = 124;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree87(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,270,8,8};
    rectangle->type = 125;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree88(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,270,8,8};
    rectangle->type = 126;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree91(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {375,278,8,8};
    rectangle->type = 129;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree92(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {383,278,8,8};
    rectangle->type = 130;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree93(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {391,278,8,8};
    rectangle->type = 131;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree94(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {399,278,8,8};
    rectangle->type = 132;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree95(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {407,278,8,8};
    rectangle->type = 133;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree96(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {415,278,8,8};
    rectangle->type = 134;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree97(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {423,278,8,8};
    rectangle->type = 135;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tree98(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {431,278,8,8};
    rectangle->type = 136;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {349,83,8,8};
    rectangle->type = 137;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {357,83,8,8};
    rectangle->type = 138;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc3(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {365,83,8,8};
    rectangle->type = 139;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc4(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {373,83,8,8};
    rectangle->type = 140;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc5(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {349,91,8,8};
    rectangle->type = 141;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc6(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {357,91,8,8};
    rectangle->type = 142;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc7(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {365,91,8,8};
    rectangle->type = 143;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc8(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {373,91,8,8};
    rectangle->type = 144;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc9(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {349,99,8,8};
    rectangle->type = 145;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc10(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {357,99,8,8};
    rectangle->type = 146;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc11(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {365,99,8,8};
    rectangle->type = 147;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc12(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {373,99,8,8};
    rectangle->type = 148;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc13(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {349,107,8,8};
    rectangle->type = 149;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc14(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {357,107,8,8};
    rectangle->type = 150;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc15(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {365,107,8,8};
    rectangle->type = 151;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_tronc16(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {373,107,8,8};
    rectangle->type = 152;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs1(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {150,123,8,8};
    rectangle->type = 153;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs2(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {158,123,8,8};
    rectangle->type = 154;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs3(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {166,123,8,8};
    rectangle->type = 155;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs4(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {174,123,8,8};
    rectangle->type = 156;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs5(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {150,131,8,8};
    rectangle->type = 157;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs6(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {158,131,8,8};
    rectangle->type = 158;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs7(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {166,131,8,8};
    rectangle->type = 159;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs8(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {174,131,8,8};
    rectangle->type = 160;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs9(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {150,139,8,8};
    rectangle->type = 161;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs10(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {158,139,8,8};
    rectangle->type = 162;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs11(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {166,139,8,8};
    rectangle->type = 163;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs12(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {174,139,8,8};
    rectangle->type = 164;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs13(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {150,147,8,8};
    rectangle->type = 165;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs14(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {158,147,8,8};
    rectangle->type = 166;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs15(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {166,147,8,8};
    rectangle->type = 167;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs16(editor_t *editor, node_rectangle *rectangle)
{
    sfIntRect rect = {174,147,8,8};
    rectangle->type = 168;
    sfRectangleShape_setTexture(rectangle->rectangle, editor->world, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}
