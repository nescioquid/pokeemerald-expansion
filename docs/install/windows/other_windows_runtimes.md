# Other Windows runtimes

<!-- Queggs: Is this comment on Windows 7/8 still relevant? I haven't been able to find anything about earlier versions of Windows outside of this message. -->

> ⚠️ **Windows 7 and Windows 8 are officially unsupported by Microsoft**. Some maintainers are unwilling to maintain the Windows 7/8 instructions. These instructions may break in the future, as their fixes take longer than fixes to Windows 10/11 instructions.

On Windows, the project can be built with the following systems:

<!-- Queggs: Technically, this page shouldn't directly reference WSL1/2 links to keep the flow straightforward, but has been left for now. -->

<!-- Queggs: Where did these figures come from exactly? Sauce please! -->

- **WSL2**: The fastest. Find the install instructions [here](windows.md).
- **WSL1**: 7x slower than WSL2. Find the install instructions [here](wsl1.md) and legacy instructions [here](legacy_WSL1_INSTALL.md).
- **MSYS2**: 20x slower than WSL2. Find the install instructions [here](msys2.md).
- **Cygwin**: 30x slower than WSL2. Find the install instructions [here](cygwin.md).

> ⚠️ **Cygwin and MSYS2 don't currently work** with pokeemerald-expansion because of an upstream bug on pret/pokeeemerald.

> 📝 Only WSL systems are recommended.
