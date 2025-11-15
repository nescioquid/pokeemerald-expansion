#!/usr/bin/env python3
import sys
import re
import os
from pathlib import Path

# Match blocks like:
#
#   .align 2
#   Some_Map_Pokemart:
#       .2byte ITEM_...
#       .2byte ITEM_...
#       pokemartlistend
#
# OR with suffixes:
#   Some_Map_Pokemart1:
#   Some_Map_Pokemart_Expanded:
#

MART_RE = re.compile(
    r"(?:\t*\.align\s+2\s*\n)?"                       # optional ".align 2"
    r"([A-Za-z0-9_]+_Pokemart[A-Za-z0-9_]*)\s*:\s*\n" # label ending in "_Pokemart*"
    r"((?:\t*\.2byte\s+ITEM_[A-Za-z0-9_]+\s*\n)+)"    # one or more item lines
    r"\t*pokemartlistend\s*\n",                       # terminator
    re.MULTILINE
)

def convert_mart(label, items):
    items = [item.strip() for item in items]
    return f"mart {label} {{\n\t" + "\n\t".join(items) + "\n}"

def process_file(path):
    path = Path(path)
    text = path.read_text(encoding="utf-8")

    matches = list(MART_RE.finditer(text))
    if not matches:
        print(f"No Pokemarts found in {path}")
        return

    new_blocks = []
    cleaned = text
    offset = 0

    for m in matches:
        label = m.group(1)
        item_raw = m.group(2)

        items = re.findall(r"ITEM_[A-Za-z0-9_]+", item_raw)
        new_blocks.append(convert_mart(label, items))

        start, end = m.start(), m.end()
        start += offset
        end += offset

        cleaned = cleaned[:start] + cleaned[end:]
        offset -= (end - start)

    cleaned = cleaned.rstrip() + "\n\n" + "\n\n".join(new_blocks) + "\n"
    path.write_text(cleaned, encoding="utf-8")

    print(f"Processed: {path}")

def process_dir_recursively(base):
    base = Path(base)
    if not base.exists():
        print(f"Directory not found: {base}")
        return

    for root, dirs, files in os.walk(base):
        for f in files:
            if f == "scripts.pory":
                process_file(os.path.join(root, f))

if __name__ == "__main__":
    if len(sys.argv) >= 2:
        target = Path(sys.argv[1])

        if target.is_dir():
            process_dir_recursively(target)
        elif target.is_file():
            process_file(target)
        else:
            print(f"Path not found: {target}")
    else:
        # default behavior: scan entire data/maps directory (same as your movement script)
        process_dir_recursively("data/maps")
