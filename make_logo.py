#!/usr/bin/env python3

import sys
import os
import struct
from PIL import Image

def rgb_888_to_565(buf):
    r, g, b = struct.unpack(">BBB", buf)
    return struct.pack(">H", ((((r>>3)<<11) | ((g>>2)<<5) | (b>>3))))

try:
    im = Image.open(sys.argv[1])
except IndexError:
    print("Usage: make_logo.py <image file> [logo template file]")
    sys.exit(1)

cont = im.tobytes()

logo_array = ["0x" + rgb_888_to_565(cont[x:x+3]).hex().upper() for x in range(0, len(cont), 4)]

if len(sys.argv) >= 3:
    header_template = sys.argv[2]
else:
    header_template = "fatal_ams_logo.inc"

logo_name = os.path.basename(os.path.splitext(im.filename)[0])
header_name, header_ext = os.path.splitext(header_template)
header_name = os.path.basename(header_name)
header_name += "_" + logo_name + header_ext

with open(header_name, "w") as header:
    with open(header_template) as template:
        header.write(template.read().format(
            im.width,
            im.height,
            "{" + ", ".join(logo_array) + "}"
            ))

print(f"Generated file: {header_name}")