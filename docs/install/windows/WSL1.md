# Setting up WSL1

Before setting up **pokeemerald-expansion** itself, we need to ensure that our programming environment is configured correctly, and that all dependencies (the software that our software in turn relies on) are installed.

### Dependencies

The primary dependency for working with the project on Windows is the **Windows Subsystem for Linux (WSL)**, a highly integrated Linux environment for Windows. _All other dependencies are readily installed within WSL_.

Because of how WSL is integrated with Microsoft Windows, some concepts and conventions lose their distinction compared to running a completely native Linux-based operating system:

- **Linux**: Refers to a [family of open source operating systems](https://en.wikipedia.org/wiki/Linux).
- **Ubuntu**: A very common flavor of Linux (known as a distribution or "distro"), which is why it's recommended and assumed here.
- **WSL**: The specific Linux implementation (the form, the tight integration) designed for Windows.
- **Bash**: The default command-line interface (CLI) on nearly any Linux implementation.

To install the dependencies we need, we'll be working with two different command-line interfaces. First we'll use Powershell, a native Windows CLI, to interact with Windows, then Bash to interact with Ubuntu running on WSL.

### Powershell

Open Powershell and make sure to **run as administrator** ([example image](https://i.imgur.com/QKmVbP9.png)), then run the following command:

```console
wsl --install -d Ubuntu --enable-wsl1
```

> 💡 In Both Powershell and WSL, you can paste text with a `Right-click`.

<!-- Queggs: Test to see if this is still true. On my machine, it opens a Bash session directly in Powershell. -->

WSL may variously open automatically in a new window, open a session directly in the Powershell window, or prompt you to restart your machine before continuing.

Regardless, restart your machine once the process finishes.

After restarting, again open Powershell **as administrator** and run the following command to configure Ubuntu to use WSL1:

```console
wsl --set-version Ubuntu 1
```

Then, open WSL1.

> 💡 You can search for WSL under either "WSL" or "Ubuntu" if and as needed. They're functionally the same program listed under two different names.

### WSL

After opening, it will prompt you to create a username and password specific to WSL1. There will be no visible response when typing in the password, but it's still reading your input.

Update WSL1 before continuing by running the following command. It may take a some time to finish:

```console
sudo apt update && sudo apt upgrade
```

> 📝 These commands may ask for your password specific to WSL or a confirmation to perform a given action. Just enter your password or confirm with `y` (as in "yes") as necessary.

Certain packages are (more software is) required to manage the pokeemerald-expansion project and build its ROM. You can and should install these packages by running the following command:

```console
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```

### Where to set up pokeemerald-expansion with WSL1?

<!-- Queggs: If I'm not mistaken, this isn't the reason why the project is stored on the Windows file system with this approach? -->

WSL1 has its own file system that's not natively accessible from Windows, but Windows files _are_ accessible from WSL1. For that reasion, we're going to store pokeemerald-expansion within the Windows file system, but we still need to interact with them using WSL1's command line.

For our example, let's say your Windows username is `leethaxor` and want to store your project in a folder named `decomps` in your Downloads folder. The Windows path to that folder is `C:\Users\leethaxor\Downloads\decomps`.

And the same path to that folder is `/mnt/c/Users/leethaxor/Desktop/decomps` in WSL1, where folders are more formally called "directories". To get WSL1 to go to our decomps folder, we need to run this command that tells it to _change the directory_ to our `decomps/`:

```console
cd /mnt/c/Users/leethaxor/Desktop/decomps
```

> 📝 In WSL, if the path to your directory has spaces in it, the whole path needs to be put in quotes, like `cd "/mnt/c/users/Leet Haxor/Downloads/decomps"` if your username was `Leet Haxor` instead.

And that's it! Now you're ready to [set up pokeemerald-expansion](../set_up_guide.md)!
