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
