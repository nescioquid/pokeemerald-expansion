#!/usr/bin/env python3
import sys
import re
import os

# ---------------------------------------------------------
# Convert one RouteXXX_Text block into the new syntax
# ---------------------------------------------------------
def convert_block(label, strings):
    full = " ".join(strings)

    # Remove trailing $
    full = re.sub(r'\$$', '', full)

    # Add spaces after \n \l \p if missing
    full = re.sub(r'\\([nlp])(?!\s)', r'\\\1 ', full)

    # Collapse whitespace
    full = re.sub(r'\s+', ' ', full).strip()

    # Use tabs for indentation
    return f'text {label} {{\n\t"{full}"\n}}\n'


# ---------------------------------------------------------
# Process a single file
# ---------------------------------------------------------
def process_file(path):
    with open(path, "r", encoding="utf-8") as f:
        original = f.read()

    # Locate raw block
    raw_match = re.search(r'raw\s*`(.*?)`', original, flags=re.DOTALL)
    if not raw_match:
        print(f"Skipping {path}: raw block not found.")
        return

    raw_content = raw_match.group(1)
    raw_start, raw_end = raw_match.span(1)

    # Match any label token containing "_Text_" (no whitespace or colon inside the label),
    # then capture one or more .string "..." lines following it.
    block_re = re.compile(
        r'([^\s:]*_Text_[^\s:]*):\s*\n'         # label containing _Text_
        r'((?:\s*\.string\s*"[^"]*"\s*\n)+)',   # one-or-more .string lines
        re.DOTALL
    )

    matches = list(block_re.finditer(raw_content))

    if not matches:
        print(f"Skipping {path}: no text blocks found.")
        return

    new_blocks = []
    blocks_to_remove = []

    for m in matches:
        label = m.group(1)
        body = m.group(2)

        # Extract .string contents
        strs = re.findall(r'\.string\s*"([^"]*)"', body)
        new_blocks.append(convert_block(label, strs))

        blocks_to_remove.append((m.start(), m.end()))

    # Remove original blocks from raw content
    new_raw = raw_content
    offset = 0

    for start, end in blocks_to_remove:
        start += offset
        end += offset
        new_raw = new_raw[:start] + new_raw[end:]
        offset -= (end - start)

    # Reconstruct entire file
    rebuilt = (
        original[:raw_start] +
        new_raw +
        original[raw_end:]
    )

    # Append new converted blocks (one blank line between)
    rebuilt = rebuilt.rstrip() + "\n\n" + "\n\n".join(block.strip() for block in new_blocks) + "\n"

    # Write back
    with open(path, "w", encoding="utf-8") as f:
        f.write(rebuilt)

    print(f"Converted {path}")


# ---------------------------------------------------------
# Walk `data/maps/*/scripts.pory`
# ---------------------------------------------------------
def process_all_maps(base_path="data/maps"):
    for root, dirs, files in os.walk(base_path):
        if "scripts.pory" in files:
            full_path = os.path.join(root, "scripts.pory")
            process_file(full_path)


# ---------------------------------------------------------
# Entry point
# ---------------------------------------------------------
if __name__ == "__main__":
    if len(sys.argv) == 2:
        # If user explicitly passed a path, process only that file
        process_file(sys.argv[1])
    else:
        # Otherwise process all scripts under data/maps
        process_all_maps()
