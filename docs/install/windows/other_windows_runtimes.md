# Other Windows runtimes

> [!WARNING]
> **Windows 7 and Windows 8 are officially unsupported by Microsoft**. _Some maintainers are unwilling to maintain the Windows 7/8 instructions. These instructions may break in the future, as their fixes take longer than fixes to Windows 10/11 instructions._

On Windows, the project can be built with the following systems:

- **WSL2**: The fastest. Find the install instructions [here](WINDOWS.md).
- **WSL1**: 7x slower than WSL2. Find the install instructions [here](WSL1.md) and legacy instructions [here](WSL1_legacy.md).
- **MSYS2**: 20x slower than WSL2. Find the install instructions [here](MSYS2.md).
- **Cygwin**: 30x slower than WSL2. Find the install instructions [here](CYGWIN.md).

> [!WARNING]
> **Cygwin and MSYS2 don't currently work** _with pokeemerald-expansion because of an upstream bug on pret/pokeeemerald._

> [!NOTE]
> _Only WSL systems are recommended._
