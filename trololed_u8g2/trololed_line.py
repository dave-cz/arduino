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
    draw_hline = []  # [{'x': 0, 'y': 0, 'len': 5}, ...]
    last_col = -2

    for row in xrange(height):
        for col in xrange(width):
            if col >= display_width or row >= display_height:
                continue
            if pixels[row][col] == 0:  # pixel is black
                if col == last_col+1:
                    draw_hline[-1]['len'] += 1
                else:
                    draw_hline.append({'x': col, 'y': row, 'len': 1})
                last_col = col
        last_col = -2

    sum_lines = 0
    sum_pixels = 0
    for line in draw_hline:
        if line['len'] == 1:
            sum_pixels += 1
        else:
            sum_lines += 1

    print img_fn
    print 'lines:', sum_lines
    print 'pixels:', sum_pixels

    with open('trololed_line.ino', 'wb') as pix_file:
        pix_file.write('#include <U8g2lib.h>\n')
        pix_file.write('U8G2_SSD1306_128X64_NONAME_F_4W_SW_SPI u8g2(\n')
        pix_file.write('U8G2_R0, /* clock=*/ 10, /* data=*/ 9, /* cs=*/ 12, /* dc=*/ 11, /* reset=*/ 13\n')
        pix_file.write(');\n')
        pix_file.write('void setup(void) { u8g2.begin(); }\n')
        pix_file.write('void loop(void) { u8g2.firstPage(); do {\n')

        for line in draw_hline:
            if line['len'] == 1:
                pix_file.write('u8g2.drawPixel({},{});\n'.format(line['x'] + shift_x, line['y'] + shift_y))
                continue
            pix_file.write('u8g2.drawHLine({},{},{});\n'.format(line['x'] + shift_x, line['y'] + shift_y, line['len']))

        pix_file.write('  } while ( u8g2.nextPage() ); }\n')
