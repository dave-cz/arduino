#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
"""
    @author: https://github.com/dave-cz/
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
    pix_x = []
    pix_y = []

    for row in xrange(height):
        for col in xrange(width):
            if col >= display_width or row >= display_height:
                continue
            if pixels[row][col] == 0:  # pixel is black
                pix_x.append(col)
                pix_y.append(row)

    print img_fn
    print len(pix_x), 'of', display_width * display_height, 'pixels are black'

    with open('trololed_pix.ino', 'wb') as pix_file:
        pix_file.write('#include <U8g2lib.h>\n')
        pix_file.write('U8G2_SSD1306_128X64_NONAME_F_4W_SW_SPI u8g2(\n')
        pix_file.write('U8G2_R0, /* clock=*/ 10, /* data=*/ 9, /* cs=*/ 12, /* dc=*/ 11, /* reset=*/ 13\n')
        pix_file.write(');\n')
        pix_file.write('void setup(void) { u8g2.begin(); }\n')
        pix_file.write('void loop(void) { u8g2.firstPage(); do {\n')

        for x, y in zip(pix_x, pix_y):
            pix_file.write('u8g2.drawPixel({},{});\n'.format(x + shift_x, y + shift_y))

        pix_file.write('  } while ( u8g2.nextPage() ); }\n')
