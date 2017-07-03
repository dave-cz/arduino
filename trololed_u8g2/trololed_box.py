#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
"""
    @author: https://github.com/dave-cz/

    TODO: https://github.com/olikraus/u8g2/wiki/u8g2reference#drawbox
"""

from PIL import Image  # pip install pillow

if __name__ == '__main__':

    img_fn = 'trollface.png'
    im = Image.open(img_fn)

    display_width = 128
    display_height = 64

    pixels = list(im.getdata())

    width, height = im.size

    pixels = [pixels[i * width:(i + 1) * width] for i in xrange(height)]

    # for centering
    shift_x = max(0, (display_width - width) / 2)
    shift_y = max(0, (display_height - height) / 2)

    # x is col
    # y is row
    draw_box = []  # [{'x': 3, 'y': 7, 'w': 25, 'h': 15}, ...]

    for row in xrange(height):
        for col in xrange(width):
            # TODO find boxes in an image
            pass

    with open('trololed_box.ino', 'wb') as pix_file:
        pix_file.write('#include <U8g2lib.h>\n')
        pix_file.write('U8G2_SSD1306_128X64_NONAME_F_4W_SW_SPI u8g2(\n')
        pix_file.write('U8G2_R0, /* clock=*/ 10, /* data=*/ 9, /* cs=*/ 12, /* dc=*/ 11, /* reset=*/ 13\n')
        pix_file.write(');\n')
        pix_file.write('void setup(void) { u8g2.begin(); }\n')
        pix_file.write('void loop(void) { u8g2.firstPage(); do {\n')

        for box in draw_box:
            # TODO
            # pix_file.write('u8g2.drawBox({},{},{}, {});\n'.format(
            #     box['x'] + shift_x, box['y'] + shift_y, box['w'], box['h']))
            pass

        pix_file.write('  } while ( u8g2.nextPage() ); }\n')
