# Setting up on Linux

The project can be built on any Linux distribution, with documented install patterns for [Ubuntu](#ubuntu), [Debian](#debian), [Arch Linux](#arch_linux) and [NixOS](#nixos) provided below, as well as [guidance for others](#other-distributions).

Afterwards, you'll be ready to [set up pokeemerald-expansion](../set_up_guide.md).

### Ubuntu

> ⚠️ **This is not** the correct installation path for Windows users running the Windows Subsystem for Linux (WSL). The page you're looking for is [here](../windows/WINDOWS.md).

Open a terminal and run the following command:

```console
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```

### Arch Linux

Open a terminal and run the following command:

```console
sudo pacman -S base-devel arm-none-eabi-binutils arm-none-eabi-gcc arm-none-eabi-newlib git libpng python
```

### Debian

Open a terminal and run the following command:

```console
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```

### NixOS

Run the following command to start an interactive shell with the necessary packages:

```console
nix-shell -p pkgsCross.arm-embedded.stdenv.cc git pkg-config libpng
```

### Other distributions

Figuring out how to get things running must be inferred. Generally speaking, try to find the required software in its repositories:

- `gcc`
- `g++`
- `arm-none-eabi-gcc`
- `arm-none-eabi-binutils`
- `arm-none-eabi-newlib`
- `make`
- `git`
- `libpng-dev`
- `python3`
