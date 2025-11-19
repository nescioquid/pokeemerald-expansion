# Setting up on Windows

> 📣 _Gotta have your Cygwin or MSYS2? Don't have admin privileges? Take a look at the [install guides for other Windows runtimes](other_windows_runtimes.md)!_

Before setting up **pokeemerald-expansion** itself, we need to ensure that our programming environment is configured correctly, and that all dependencies (the software that our software in turn relies on) are installed.

### Dependencies

The primary dependency for working with the project on Windows is the **Windows Subsystem for Linux (WSL)**, a highly integrated Linux environment for Windows. _All other dependencies are readily installed within WSL_.

Because of how WSL is integrated with Microsoft Windows, some concepts and conventions lose their distinction compared to running a completely native Linux-based operating system:

- **Linux**: Refers to a [family of open source operating systems](https://en.wikipedia.org/wiki/Linux).
- **Ubuntu**: A very common flavor of Linux (known as a distribution or "distro"), which is why it's recommended and assumed here.
- **WSL**: The specific Linux implementation (the form, the tight integration) designed for Windows.
- **Bash**: The default command-line interface (CLI) on nearly any Linux implementation.

To install the dependencies we need, we'll be working with two different command-line interfaces. First we'll use Powershell, a native Windows CLI, to interact with Windows, then Bash to interact with Ubuntu running on WSL.

> 📝 This guide assumes WSL2, which is the approach we recommended. If you're especially opinionated or unsure of which version of WSL to use, check out our [discussion on the topic](which_wsl.md) for more information.

### Powershell

Open Powershell and make sure to **run as administrator** ([example image](https://i.imgur.com/QKmVbP9.png)), then run the following command:

```console
wsl --install -d Ubuntu
```

> 💡 In Both Powershell and WSL, you can paste text with a `Right-click`.

WSL may variously open automatically in a new window, open a session directly in the Powershell window, or prompt you to restart your machine before continuing.

> 💡 You can search for WSL under either "WSL" or "Ubuntu" if and as needed. They're functionally the same program listed under two different names.

### WSL

Regardless, after opening it will prompt you to create a username and password specific to WSL. There will be no visible response when typing in the password, but it's still reading your input.

Update WSL before continuing by running the following command. It may take a some time to finish:

```console
sudo apt update && sudo apt upgrade
```

> 📝 These commands may ask for your password specific to WSL or a confirmation to perform a given action. Just enter your password or confirm with `y` (as in "yes") as necessary.

Certain packages are (more software is) required to manage the pokeemerald-expansion project and build its ROM. You can and should install these packages by running the following command:

```console
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```

### Where to set up pokeemerald-expansion?

Take note that **WSL has its own separate file system**. We'll be setting up our pokeemerald-expansion project entirely within the separate WSL file system.

> 📝 Accessing files on the Windows file system with WSL can be painfully slow when considering the amount of operations needed to build the project's ROM. That's why keeping your project in the Windows file system is highly discouraged.

We're going to create a directory (a folder) for our decompilation projects, but first, change to the home directory (referred to with `~`) of the WSL file system by running:

```console
cd ~
```
Then we'll make a new directory called "decomps" and `cd` into it:

```console
mkdir decomps && cd decomps
```

And that's it! Now you're ready to [set up pokeemerald-expansion](../set_up_guide.md)!
