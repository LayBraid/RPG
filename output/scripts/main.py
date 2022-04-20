import sys

function_name = sys.argv[1]
rect_left = sys.argv[2]
rect_top = sys.argv[3]
rect_width = sys.argv[4]
rect_height = sys.argv[5]
type = sys.argv[6]

t = open("../sources/editor/textures/texture_1.c", "a")
t.write("\nvoid set_" + str(function_name) + "(sfTexture *texture, node_rectangle *rectangle)\n{\n    sfIntRect rect = {" +
        str(rect_left) + "," + str(rect_top) + "," + str(rect_width) + "," + str(
    rect_height) + "};\n    rectangle->type = "
        + str(type) + ";\n    sfRectangleShape_setTexture(rectangle->rectangle, texture, sfTrue);\n"
        + "    sfRectangleShape_setTextureRect(rectangle->rectangle, rect);\n}\n")
t.close()


h = open("../include/editor.h", "a")
h.write("\nvoid set_" + str(function_name) + "(sfTexture *texture, node_rectangle *rectangle);")
h.close()

i = open("../sources/editor/textures/initializer.c", "a")
i.write("\nadd_next_texture(&texture, set_" + str(function_name) + ", \"" + str(function_name) + "\"," + str(type) + ");")
i.close()
