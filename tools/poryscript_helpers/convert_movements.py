#!/usr/bin/env python3
import sys
import re
import os
from pathlib import Path

MOVEMENT_RE = re.compile(
    r"(^[A-Za-z0-9_]+_Movement_[A-Za-z0-9_]+):\s*\n"
    r"((?:\t[^\n]+\n)+)",
    re.MULTILINE
)

def convert_movement(label, body):
    body = body.rstrip("\n")
    return f"movement {label} {{\n{body}\n}}"

def process_file(path):
    path = Path(path)
    text = path.read_text(encoding="utf-8")

    matches = list(MOVEMENT_RE.finditer(text))
    if not matches:
        print(f"No movement scripts found in {path}")
        return

    new_blocks = []
    cleaned = text
    offset = 0

    for m in matches:
        label = m.group(1)
        body = m.group(2)

        new_blocks.append(convert_movement(label, body))

        start, end = m.start(), m.end()
        start += offset
        end += offset
        cleaned = cleaned[:start] + cleaned[end:]
        offset -= (end - start)

    cleaned = cleaned.rstrip()
    cleaned += "\n\n" + "\n\n".join(new_blocks) + "\n"

    path.write_text(cleaned, encoding="utf-8")
    print(f"Processed: {path}")

def process_dir_recursively(base_dir):
    base = Path(base_dir)
    if not base.exists():
        print(f"Directory not found: {base}")
        return
    for root, dirs, files in os.walk(base):
        for f in files:
            if f == "scripts.pory":
                process_file(os.path.join(root, f))

if __name__ == "__main__":
    # If an argument is given, use it.
    # If no argument, default to data/maps (process all data/maps/*/scripts.pory).
    if len(sys.argv) >= 2:
        target = sys.argv[1]
        p = Path(target)
        if p.is_dir():
            process_dir_recursively(p)
        elif p.is_file():
            process_file(p)
        else:
            print(f"Path not found: {target}")
    else:
        # Default base dir when no args provided:
        default_base = Path("data/maps")
        process_dir_recursively(default_base)
