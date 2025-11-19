# Choosing a WSL version

<!-- Queggs: Can we get an explanation of the differences between WSL1/2 at a glance here? -->

If you want the best performance and least amount of issues with Windows interfering with compiling the project, use WSL2 and store the project on the Linux file system (under `~/`).

If you must store your project on the Windows file system (under `/mnt/c/`), use WSL1.

<!-- Queggs: Something something GitHub Desktop or not. Needs to be discussed. -->

If you're unsure about learning how to use a new file system on a command line, you'll gain back any time spent finding your way around rather quickly just based on how much faster buildin the ROM is on WSL2.

Sticking with WSL2? You can continue the recommended setup by [following this link](WINDOWS.md#powershell).

Need to go with WSL? Find the guide to setting it up [here](WSL1.md).
