import sys

function_name = sys.argv[1]
rect_left = int(sys.argv[2])
rect_top = int(sys.argv[3])
rect_width = int(sys.argv[4])
rect_height = int(sys.argv[5])
type_tile = int(sys.argv[6])
x = int(sys.argv[7])
y = int(sys.argv[8])

count = 0

for i in range(1, x + 1):
    for j in range(1, y + 1):
        tmp = rect_left + (rect_width * (j - 1))
        count = (i - 1) * x + j
        tmp2 = rect_top + (rect_height * (i - 1))
        tmp3 = type_tile + count

        t = open("../sources/editor/textures/texture_1.c", "a")
        t.write("\nvoid set_" + str(function_name) + str((i - 1)) + "_" + str(j - 1) + "(sfTexture *texture, node_rectangle *rectangle)\n{\n "
                                                                  "   sfIntRect rect = {" +
                str(tmp) + "," + str(tmp2) + "," +
                str(rect_width) + "," + str(rect_height) + "};\n    rectangle->type = "
                + str(tmp3) + ";\n    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);\n"
                + "    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);\n}\n")
        t.close()

        h = open("../include/editor.h", "a")
        h.write("\nvoid set_" + str(function_name) + str((i - 1)) + "_" + str(j - 1) + "(sfTexture *texture, node_rectangle *rectangle);")
        h.close()

        inc = open("../sources/editor/textures/initializer.c", "a")
        inc.write("\nadd_next_texture(&texture, set_" + str(function_name) + str((i - 1)) + "_" + str(j - 1) + ", \"" + str(function_name) +
                  str((i - 1)) + "_" + str(j - 1) + "\"," + str(tmp3) + ");")
        inc.close()
