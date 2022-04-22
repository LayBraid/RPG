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
