/*
** EPITECH PROJECT, 2022
** output
** File description:
** No file there , just an epitech header example
*/

#include "editor.h"

void set_void(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {0, 0, 8, 8};
    rectangle->type = 0;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_grass(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 39, 8, 8};
    rectangle->type = 1;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {241, 39, 8, 8};
    rectangle->type = 2;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_buisson2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {233, 48, 16, 8};
    rectangle->type = 3;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_hole1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {253, 39, 16, 8};
    rectangle->type = 4;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairs16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {174,147,8,8};
    rectangle->type = 168;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,754,8,8};
    rectangle->type = 169;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,754,8,8};
    rectangle->type = 170;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,754,8,8};
    rectangle->type = 171;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,754,8,8};
    rectangle->type = 172;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,754,8,8};
    rectangle->type = 173;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,754,8,8};
    rectangle->type = 174;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,754,8,8};
    rectangle->type = 175;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,754,8,8};
    rectangle->type = 176;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,754,8,8};
    rectangle->type = 177;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,754,8,8};
    rectangle->type = 178;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,754,8,8};
    rectangle->type = 179;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house0_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,754,8,8};
    rectangle->type = 180;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,762,8,8};
    rectangle->type = 179;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,762,8,8};
    rectangle->type = 270;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,762,8,8};
    rectangle->type = 271;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,762,8,8};
    rectangle->type = 182;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,762,8,8};
    rectangle->type = 183;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,762,8,8};
    rectangle->type = 184;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,762,8,8};
    rectangle->type = 185;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,762,8,8};
    rectangle->type = 186;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,762,8,8};
    rectangle->type = 187;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,762,8,8};
    rectangle->type = 188;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,762,8,8};
    rectangle->type = 189;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house1_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,762,8,8};
    rectangle->type = 190;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,770,8,8};
    rectangle->type = 272;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,770,8,8};
    rectangle->type = 273;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,770,8,8};
    rectangle->type = 191;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,770,8,8};
    rectangle->type = 192;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,770,8,8};
    rectangle->type = 193;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,770,8,8};
    rectangle->type = 194;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,770,8,8};
    rectangle->type = 195;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,770,8,8};
    rectangle->type = 196;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,770,8,8};
    rectangle->type = 197;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,770,8,8};
    rectangle->type = 198;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,770,8,8};
    rectangle->type = 199;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house2_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,770,8,8};
    rectangle->type = 274;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,778,8,8};
    rectangle->type = 275;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,778,8,8};
    rectangle->type = 200;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,778,8,8};
    rectangle->type = 201;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,778,8,8};
    rectangle->type = 202;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,778,8,8};
    rectangle->type = 203;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,778,8,8};
    rectangle->type = 204;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,778,8,8};
    rectangle->type = 205;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,778,8,8};
    rectangle->type = 206;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,778,8,8};
    rectangle->type = 207;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,778,8,8};
    rectangle->type = 208;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,778,8,8};
    rectangle->type = 209;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house3_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,778,8,8};
    rectangle->type = 210;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,786,8,8};
    rectangle->type = 276;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,786,8,8};
    rectangle->type = 277;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,786,8,8};
    rectangle->type = 211;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,786,8,8};
    rectangle->type = 212;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,786,8,8};
    rectangle->type = 213;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,786,8,8};
    rectangle->type = 214;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,786,8,8};
    rectangle->type = 215;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,786,8,8};
    rectangle->type = 216;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,786,8,8};
    rectangle->type = 217;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,786,8,8};
    rectangle->type = 218;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,786,8,8};
    rectangle->type = 219;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house4_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,786,8,8};
    rectangle->type = 220;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,794,8,8};
    rectangle->type = 278;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,794,8,8};
    rectangle->type = 279;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,794,8,8};
    rectangle->type = 221;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,794,8,8};
    rectangle->type = 222;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,794,8,8};
    rectangle->type = 223;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,794,8,8};
    rectangle->type = 224;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,794,8,8};
    rectangle->type = 225;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,794,8,8};
    rectangle->type = 226;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,794,8,8};
    rectangle->type = 227;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,794,8,8};
    rectangle->type = 228;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,794,8,8};
    rectangle->type = 229;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house5_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,794,8,8};
    rectangle->type = 230;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,802,8,8};
    rectangle->type = 280;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,802,8,8};
    rectangle->type = 281;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,802,8,8};
    rectangle->type = 231;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,802,8,8};
    rectangle->type = 232;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,802,8,8};
    rectangle->type = 233;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,802,8,8};
    rectangle->type = 234;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,802,8,8};
    rectangle->type = 235;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,802,8,8};
    rectangle->type = 236;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,802,8,8};
    rectangle->type = 237;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,802,8,8};
    rectangle->type = 238;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,802,8,8};
    rectangle->type = 239;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house6_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,802,8,8};
    rectangle->type = 240;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,810,8,8};
    rectangle->type = 282;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,810,8,8};
    rectangle->type = 283;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,810,8,8};
    rectangle->type = 241;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,810,8,8};
    rectangle->type = 242;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,810,8,8};
    rectangle->type = 243;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,810,8,8};
    rectangle->type = 244;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,810,8,8};
    rectangle->type = 245;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,810,8,8};
    rectangle->type = 246;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,810,8,8};
    rectangle->type = 247;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,810,8,8};
    rectangle->type = 248;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,810,8,8};
    rectangle->type = 249;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house7_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,810,8,8};
    rectangle->type = 250;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,818,8,8};
    rectangle->type = 284;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,818,8,8};
    rectangle->type = 285;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,818,8,8};
    rectangle->type = 251;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,818,8,8};
    rectangle->type = 252;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,818,8,8};
    rectangle->type = 253;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,818,8,8};
    rectangle->type = 254;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,818,8,8};
    rectangle->type = 255;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,818,8,8};
    rectangle->type = 256;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,818,8,8};
    rectangle->type = 257;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,818,8,8};
    rectangle->type = 258;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,818,8,8};
    rectangle->type = 259;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house8_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,818,8,8};
    rectangle->type = 260;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {555,826,8,8};
    rectangle->type = 286;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {563,826,8,8};
    rectangle->type = 287;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {571,826,8,8};
    rectangle->type = 261;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {579,826,8,8};
    rectangle->type = 262;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {587,826,8,8};
    rectangle->type = 263;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,826,8,8};
    rectangle->type = 264;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,826,8,8};
    rectangle->type = 265;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,826,8,8};
    rectangle->type = 266;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,826,8,8};
    rectangle->type = 267;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {627,826,8,8};
    rectangle->type = 268;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {635,826,8,8};
    rectangle->type = 269;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_house9_11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {643,826,8,8};
    rectangle->type = 288;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {322,40,8,8};
    rectangle->type = 290;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {322,48,8,8};
    rectangle->type = 292;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {313,48,8,8};
    rectangle->type = 293;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau20_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {331,40,8,8};
    rectangle->type = 294;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_poteau21_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {331,48,8,8};
    rectangle->type = 296;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_eau_base(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,2046,8,8};
    rectangle->type = 297;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {302,1995,8,8};
    rectangle->type = 298;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {310,1995,8,8};
    rectangle->type = 299;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {318,1995,8,8};
    rectangle->type = 300;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_water_edge0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {326,1995,8,8};
    rectangle->type = 301;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,548,8,8};
    rectangle->type = 302;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,548,8,8};
    rectangle->type = 303;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,556,8,8};
    rectangle->type = 308;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,556,8,8};
    rectangle->type = 309;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,564,8,8};
    rectangle->type = 314;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,564,8,8};
    rectangle->type = 315;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,572,8,8};
    rectangle->type = 320;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,572,8,8};
    rectangle->type = 321;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry4_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,580,8,8};
    rectangle->type = 326;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry4_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,580,8,8};
    rectangle->type = 327;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry5_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,588,8,8};
    rectangle->type = 332;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry5_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,588,8,8};
    rectangle->type = 333;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry20_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {822,597,8,8};
    rectangle->type = 334;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry20_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {830,597,8,8};
    rectangle->type = 335;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry20_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {838,597,8,8};
    rectangle->type = 336;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry20_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {846,597,8,8};
    rectangle->type = 337;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry20_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {854,597,8,8};
    rectangle->type = 338;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry20_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {862,597,8,8};
    rectangle->type = 339;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {822,605,8,8};
    rectangle->type = 336;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {830,605,8,8};
    rectangle->type = 337;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {838,605,8,8};
    rectangle->type = 338;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {846,605,8,8};
    rectangle->type = 339;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {854,605,8,8};
    rectangle->type = 340;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry21_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {862,605,8,8};
    rectangle->type = 341;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry30_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,614,8,8};
    rectangle->type = 342;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry30_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,614,8,8};
    rectangle->type = 343;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry31_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,622,8,8};
    rectangle->type = 348;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry31_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,622,8,8};
    rectangle->type = 349;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry32_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,630,8,8};
    rectangle->type = 354;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry32_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,630,8,8};
    rectangle->type = 355;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry33_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,638,8,8};
    rectangle->type = 360;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry33_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,638,8,8};
    rectangle->type = 361;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry34_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,646,8,8};
    rectangle->type = 366;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry34_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,646,8,8};
    rectangle->type = 367;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry35_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {805,654,8,8};
    rectangle->type = 372;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry35_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {813,654,8,8};
    rectangle->type = 373;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {756,597,8,8};
    rectangle->type = 374;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {764,597,8,8};
    rectangle->type = 375;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {772,597,8,8};
    rectangle->type = 376;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {780,597,8,8};
    rectangle->type = 377;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {788,597,8,8};
    rectangle->type = 378;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry40_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {796,597,8,8};
    rectangle->type = 379;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry41_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {756,605,8,8};
    rectangle->type = 464;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry41_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {764,605,8,8};
    rectangle->type = 465;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry41_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {772,605,8,8};
    rectangle->type = 466;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry41_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {780,605,8,8};
    rectangle->type = 467;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry41_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {788,605,8,8};
    rectangle->type = 380;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_caves_entry41_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {796,605,8,8};
    rectangle->type = 381;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,719,8,8};
    rectangle->type = 382;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,719,8,8};
    rectangle->type = 383;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,719,8,8};
    rectangle->type = 384;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,719,8,8};
    rectangle->type = 385;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,719,8,8};
    rectangle->type = 386;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,727,8,8};
    rectangle->type = 386;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,727,8,8};
    rectangle->type = 387;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,727,8,8};
    rectangle->type = 388;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,727,8,8};
    rectangle->type = 389;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,727,8,8};
    rectangle->type = 390;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,735,8,8};
    rectangle->type = 390;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,735,8,8};
    rectangle->type = 391;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,735,8,8};
    rectangle->type = 392;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,735,8,8};
    rectangle->type = 393;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,735,8,8};
    rectangle->type = 394;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,743,8,8};
    rectangle->type = 394;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,743,8,8};
    rectangle->type = 395;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,743,8,8};
    rectangle->type = 396;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,743,8,8};
    rectangle->type = 397;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,743,8,8};
    rectangle->type = 398;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,703,8,8};
    rectangle->type = 399;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,703,8,8};
    rectangle->type = 400;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,703,8,8};
    rectangle->type = 401;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave20_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,703,8,8};
    rectangle->type = 402;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,711,8,8};
    rectangle->type = 404;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,711,8,8};
    rectangle->type = 405;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,711,8,8};
    rectangle->type = 406;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave21_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,711,8,8};
    rectangle->type = 407;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,719,8,8};
    rectangle->type = 409;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,719,8,8};
    rectangle->type = 410;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,719,8,8};
    rectangle->type = 411;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave22_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,719,8,8};
    rectangle->type = 412;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,727,8,8};
    rectangle->type = 414;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,727,8,8};
    rectangle->type = 415;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,727,8,8};
    rectangle->type = 416;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave23_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,727,8,8};
    rectangle->type = 417;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,735,8,8};
    rectangle->type = 419;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,735,8,8};
    rectangle->type = 420;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,735,8,8};
    rectangle->type = 421;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave24_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,735,8,8};
    rectangle->type = 422;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,753,8,8};
    rectangle->type = 423;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,753,8,8};
    rectangle->type = 424;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,753,8,8};
    rectangle->type = 425;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,753,8,8};
    rectangle->type = 426;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave30_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,753,8,8};
    rectangle->type = 427;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,761,8,8};
    rectangle->type = 427;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,761,8,8};
    rectangle->type = 428;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,761,8,8};
    rectangle->type = 429;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,761,8,8};
    rectangle->type = 430;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave31_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,761,8,8};
    rectangle->type = 431;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,769,8,8};
    rectangle->type = 431;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,769,8,8};
    rectangle->type = 432;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,769,8,8};
    rectangle->type = 433;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,769,8,8};
    rectangle->type = 434;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave32_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,769,8,8};
    rectangle->type = 435;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,777,8,8};
    rectangle->type = 435;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {990,777,8,8};
    rectangle->type = 436;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,777,8,8};
    rectangle->type = 437;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1006,777,8,8};
    rectangle->type = 438;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave33_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,777,8,8};
    rectangle->type = 439;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,745,8,8};
    rectangle->type = 440;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,745,8,8};
    rectangle->type = 441;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,745,8,8};
    rectangle->type = 442;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave40_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,745,8,8};
    rectangle->type = 443;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,753,8,8};
    rectangle->type = 445;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,753,8,8};
    rectangle->type = 446;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,753,8,8};
    rectangle->type = 447;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave41_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,753,8,8};
    rectangle->type = 448;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,761,8,8};
    rectangle->type = 450;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,761,8,8};
    rectangle->type = 451;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,761,8,8};
    rectangle->type = 452;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave42_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,761,8,8};
    rectangle->type = 453;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,769,8,8};
    rectangle->type = 455;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,769,8,8};
    rectangle->type = 456;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,769,8,8};
    rectangle->type = 457;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave43_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,769,8,8};
    rectangle->type = 458;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,777,8,8};
    rectangle->type = 460;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,777,8,8};
    rectangle->type = 461;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,777,8,8};
    rectangle->type = 462;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_enter_cave44_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,777,8,8};
    rectangle->type = 463;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,850,8,8};
    rectangle->type = 468;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,850,8,8};
    rectangle->type = 469;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,850,8,8};
    rectangle->type = 470;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,850,8,8};
    rectangle->type = 471;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,850,8,8};
    rectangle->type = 472;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,850,8,8};
    rectangle->type = 473;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,850,8,8};
    rectangle->type = 474;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,850,8,8};
    rectangle->type = 475;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,858,8,8};
    rectangle->type = 510;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,858,8,8};
    rectangle->type = 511;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,858,8,8};
    rectangle->type = 512;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,858,8,8};
    rectangle->type = 513;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,858,8,8};
    rectangle->type = 514;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,858,8,8};
    rectangle->type = 515;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,858,8,8};
    rectangle->type = 476;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house_top1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,858,8,8};
    rectangle->type = 477;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,882,8,8};
    rectangle->type = 478;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,882,8,8};
    rectangle->type = 479;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,882,8,8};
    rectangle->type = 480;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,882,8,8};
    rectangle->type = 481;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,882,8,8};
    rectangle->type = 482;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,882,8,8};
    rectangle->type = 483;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,882,8,8};
    rectangle->type = 484;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house0_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,882,8,8};
    rectangle->type = 485;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,890,8,8};
    rectangle->type = 498;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,890,8,8};
    rectangle->type = 499;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,890,8,8};
    rectangle->type = 500;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,890,8,8};
    rectangle->type = 501;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,890,8,8};
    rectangle->type = 486;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,890,8,8};
    rectangle->type = 487;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,890,8,8};
    rectangle->type = 488;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house1_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,890,8,8};
    rectangle->type = 489;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,898,8,8};
    rectangle->type = 502;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,898,8,8};
    rectangle->type = 503;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,898,8,8};
    rectangle->type = 504;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,898,8,8};
    rectangle->type = 505;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,898,8,8};
    rectangle->type = 490;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,898,8,8};
    rectangle->type = 491;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,898,8,8};
    rectangle->type = 492;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house2_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,898,8,8};
    rectangle->type = 493;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_0(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {109,906,8,8};
    rectangle->type = 506;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,906,8,8};
    rectangle->type = 507;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {125,906,8,8};
    rectangle->type = 508;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {133,906,8,8};
    rectangle->type = 509;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {141,906,8,8};
    rectangle->type = 494;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {149,906,8,8};
    rectangle->type = 495;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {157,906,8,8};
    rectangle->type = 496;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_village_house3_7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {165,906,8,8};
    rectangle->type = 497;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,1333,8,8};
    rectangle->type = 2000;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,1333,8,8};
    rectangle->type = 2001;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,1333,8,8};
    rectangle->type = 2002;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,1333,8,8};
    rectangle->type = 2003;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,1341,8,8};
    rectangle->type = 2004;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,1341,8,8};
    rectangle->type = 2005;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,1341,8,8};
    rectangle->type = 2006;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,1341,8,8};
    rectangle->type = 2007;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {595,1349,8,8};
    rectangle->type = 2008;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {603,1349,8,8};
    rectangle->type = 2009;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {611,1349,8,8};
    rectangle->type = 2010;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {619,1349,8,8};
    rectangle->type = 2011;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_groundbed(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {918,1337,8,8};
    rectangle->type = 2012;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1409,8,8};
    rectangle->type = 2013;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {962,1409,8,8};
    rectangle->type = 2014;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1409,8,8};
    rectangle->type = 2015;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1417,8,8};
    rectangle->type = 2016;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {954,1417,8,8};
    rectangle->type = 2017;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1417,8,8};
    rectangle->type = 2018;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1426,8,8};
    rectangle->type = 2019;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {954,1426,8,8};
    rectangle->type = 2020;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {962,1426,8,8};
    rectangle->type = 2021;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1426,8,8};
    rectangle->type = 2022;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {945,1434,8,8};
    rectangle->type = 2023;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {954,1434,8,8};
    rectangle->type = 2024;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {971,1434,8,8};
    rectangle->type = 2025;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairstop(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1349,498,8,8};
    rectangle->type = 2026;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairsdown(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1358,498,8,8};
    rectangle->type = 2027;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bed12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {631,1369,8,8};
    rectangle->type = 2028;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_groundhouse(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {901,1337,16,16};
    rectangle->type = 2028;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_table(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {850,1354,16,16};
    rectangle->type = 2029;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_table2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {867,1354,16,16};
    rectangle->type = 2030;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_table3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {884,1354,16,16};
    rectangle->type = 2031;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_stairsup(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1309,493,16,16};
    rectangle->type = 2032;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bench(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {897,1435,8,8};
    rectangle->type = 2033;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bench2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {905,1435,8,8};
    rectangle->type = 2034;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_bench3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {914,1435,8,8};
    rectangle->type = 2035;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {947,1369,16,16};
    rectangle->type = 2036;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {963,1369,16,16};
    rectangle->type = 2037;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {947,1385,16,16};
    rectangle->type = 2038;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_shelf17(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {963,1385,16,16};
    rectangle->type = 2039;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {783,1496,8,8};
    rectangle->type = 2040;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh1(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {791,1411,8,8};
    rectangle->type = 2041;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {799,1363,8,8};
    rectangle->type = 2042;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {807,1496,8,8};
    rectangle->type = 2043;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {783,1504,8,8};
    rectangle->type = 2044;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {807,1504,8,8};
    rectangle->type = 2045;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {783,1512,8,8};
    rectangle->type = 2046;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {791,1512,8,8};
    rectangle->type = 2047;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {799,1512,8,8};
    rectangle->type = 2048;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_doorh9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {807,1512,8,8};
    rectangle->type = 2049;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1ground(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1089,620,8,8};
    rectangle->type = 2050;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1114,600,16,16};
    rectangle->type = 2051;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1098,600,16,16};
    rectangle->type = 2052;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1114,616,16,16};
    rectangle->type = 2053;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1098,616,16,16};
    rectangle->type = 2054;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1114,632,16,16};
    rectangle->type = 2055;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1door6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1098,632,16,16};
    rectangle->type = 2056;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,703,16,16};
    rectangle->type = 2057;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,703,16,16};
    rectangle->type = 2058;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,719,16,16};
    rectangle->type = 2059;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,719,16,16};
    rectangle->type = 2060;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1025,735,8,8};
    rectangle->type = 2061;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1033,735,8,8};
    rectangle->type = 2062;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1041,735,8,8};
    rectangle->type = 2063;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_dj1hole8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1049,735,8,8};
    rectangle->type = 2064;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djground2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {948,819,16,16};
    rectangle->type = 2065;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djground21(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {965,819,16,16};
    rectangle->type = 2066;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djground22(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,819,16,16};
    rectangle->type = 2067;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {143,2046,8,8};
    rectangle->type = 2068;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {151,2046,8,8};
    rectangle->type = 2069;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {143,2054,8,8};
    rectangle->type = 2070;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {151,2054,8,8};
    rectangle->type = 2071;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djwater5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {117,2046,8,8};
    rectangle->type = 2072;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {61,2044,8,8};
    rectangle->type = 2073;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {69,2044,8,8};
    rectangle->type = 2074;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {61,2052,8,8};
    rectangle->type = 2075;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {69,2052,8,8};
    rectangle->type = 2076;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {61,2060,8,8};
    rectangle->type = 2077;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djcascade6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {69,2060,8,8};
    rectangle->type = 2078;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1282,1630,8,8};
    rectangle->type = 2079;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1290,1630,8,8};
    rectangle->type = 2080;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1298,1630,8,8};
    rectangle->type = 2081;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1306,1630,8,8};
    rectangle->type = 2082;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1282,1638,8,8};
    rectangle->type = 2083;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1306,1638,8,8};
    rectangle->type = 2084;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1282,1646,8,8};
    rectangle->type = 2085;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoortoboss8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1306,1646,8,8};
    rectangle->type = 2086;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djpillar(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1422,1353,16,16};
    rectangle->type = 2087;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djpillar2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1422,1369,16,16};
    rectangle->type = 2088;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,719,16,16};
    rectangle->type = 2089;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,719,16,16};
    rectangle->type = 2090;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,719,8,8};
    rectangle->type = 2091;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,727,8,8};
    rectangle->type = 2092;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {982,735,16,16};
    rectangle->type = 2093;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {998,735,16,16};
    rectangle->type = 2094;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,735,8,8};
    rectangle->type = 2095;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djbreach8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1014,743,8,8};
    rectangle->type = 2096;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1389,8,8};
    rectangle->type = 2097;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1389,8,8};
    rectangle->type = 2098;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1397,8,8};
    rectangle->type = 2099;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1397,8,8};
    rectangle->type = 2100;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1406,8,8};
    rectangle->type = 2101;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1406,8,8};
    rectangle->type = 2102;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1406,8,8};
    rectangle->type = 2103;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djgroundlast8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1335,1406,8,8};
    rectangle->type = 2104;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1287,1414,8,8};
    rectangle->type = 2105;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1295,1414,8,8};
    rectangle->type = 2106;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1414,8,8};
    rectangle->type = 2107;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1414,8,8};
    rectangle->type = 2108;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1414,8,8};
    rectangle->type = 2109;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1414,8,8};
    rectangle->type = 2110;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1335,1414,8,8};
    rectangle->type = 2111;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1343,1414,8,8};
    rectangle->type = 2112;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1351,1414,8,8};
    rectangle->type = 2113;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1359,1414,8,8};
    rectangle->type = 2114;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1287,1422,8,8};
    rectangle->type = 2115;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1295,1422,8,8};
    rectangle->type = 2116;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1422,8,8};
    rectangle->type = 2117;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1422,8,8};
    rectangle->type = 2118;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1422,8,8};
    rectangle->type = 2119;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1422,8,8};
    rectangle->type = 2120;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast17(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1335,1422,8,8};
    rectangle->type = 2121;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast18(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1343,1422,8,8};
    rectangle->type = 2122;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast19(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1351,1422,8,8};
    rectangle->type = 2123;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast20(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1359,1422,8,8};
    rectangle->type = 2124;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast21(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1287,1430,8,8};
    rectangle->type = 2125;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast22(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1295,1430,8,8};
    rectangle->type = 2126;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast23(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1430,8,8};
    rectangle->type = 2127;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast24(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1430,8,8};
    rectangle->type = 2128;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast25(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1430,8,8};
    rectangle->type = 2129;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast26(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1430,8,8};
    rectangle->type = 2130;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast27(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1335,1430,8,8};
    rectangle->type = 2131;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast28(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1343,1430,8,8};
    rectangle->type = 2132;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast29(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1351,1430,8,8};
    rectangle->type = 2133;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast30(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1359,1430,8,8};
    rectangle->type = 2134;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast31(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1287,1438,8,8};
    rectangle->type = 2135;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast32(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1295,1438,8,8};
    rectangle->type = 2136;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast33(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1438,8,8};
    rectangle->type = 2137;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast34(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1438,8,8};
    rectangle->type = 2138;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast35(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1438,8,8};
    rectangle->type = 2139;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast36(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1438,8,8};
    rectangle->type = 2140;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast37(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1335,1438,8,8};
    rectangle->type = 2141;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast38(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1343,1438,8,8};
    rectangle->type = 2142;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast39(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1351,1438,8,8};
    rectangle->type = 2143;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djdoorlast40(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1359,1438,8,8};
    rectangle->type = 2144;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djtyphoon(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {302,2046,8,8};
    rectangle->type = 2145;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djtyphoon2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {310,2046,8,8};
    rectangle->type = 2146;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djtyphoon3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {302,2054,8,8};
    rectangle->type = 2147;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djtyphoon4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {310,2054,8,8};
    rectangle->type = 2148;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1751,8,8};
    rectangle->type = 2149;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss2(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1751,8,8};
    rectangle->type = 2150;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss3(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1751,8,8};
    rectangle->type = 2151;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss4(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1751,8,8};
    rectangle->type = 2152;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss5(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1759,8,8};
    rectangle->type = 2153;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss6(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1759,8,8};
    rectangle->type = 2154;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss7(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1759,8,8};
    rectangle->type = 2155;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss8(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1759,8,8};
    rectangle->type = 2156;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss9(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1767,8,8};
    rectangle->type = 2157;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss10(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1767,8,8};
    rectangle->type = 2158;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss11(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1767,8,8};
    rectangle->type = 2159;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss12(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1767,8,8};
    rectangle->type = 2160;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss13(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1303,1775,8,8};
    rectangle->type = 2161;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss14(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1311,1775,8,8};
    rectangle->type = 2162;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss15(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1319,1775,8,8};
    rectangle->type = 2163;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}

void set_djboss16(sfTexture *texture, node_rectangle *rectangle)
{
    sfIntRect rect = {1327,1775,8,8};
    rectangle->type = 2164;
    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);
    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);
}
