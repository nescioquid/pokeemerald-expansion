# Setting up on MacOS

Before setting up **pokeemerald-expansion** itself, we need to ensure that our programming environment is configured correctly, and that all dependencies (the software that our software in turn relies on) are installed.

Installing dependencies on MacOS often involves both downloading an application from a web browser and running commands in the terminal.

### Dependencies

The required dependencies that you can download right from the browser are as follows. **Make sure to open the newly downloaded installers and run them** as you would any other downloaded software:

- **Xcode**: The main programming software suite for MacOS. Download it [here](https://developer.apple.com/xcode/resources/).
- **python3**: A programming language the project uses to process files and automate tasks. Get the 
latest version [here](https://www.python.org/downloads/macos/).
- **dkp-pacman**: Used to manage dependencies for software like devkitARM (see below). Find the latest release of `devkitpro-pacman-installer.pkg` [here](https://github.com/devkitPro/pacman/releases).

Those we'll install using the terminal are:

- **Xcode CLT**: The _Command Line Interface (CLI) Tools_ for Xcode. It's how you'll interact with Xcode in your terminal.
- **homebrew**: A package manager for MacOS. Software that installs other software, even more dependencies in this case!
- **devkitARM**: A cross-compiler toolchain for building software for devices like the _Game Boy Advance_.

### Xcode

First, [download the Xcode application](#dependencies). Then run the following command in your terminal to also install its CLI tools:

```console
xcode-select --install
```

### Homebrew

> 📣 _Got some Intel-only custom tooling going on? Need to run tests using Rosetta? You may want to [check out our notes](run_tests_with_rosetta.md) on the topic._

If you haven't already, install the Homebrew package manager. The process involves copying the command provided on [Homebrew's website](https://brew.sh/) and running it:

```console
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

Certain packages are (more software is) required to manage the pokeemerald-expansion project and build its ROM. You can and should install these packages with Homebrew by running the following command:

```console
brew install libpng pkg-config coreutils
```

> 📝 Advanced users can, of course, install the depedencies by means other than Homebrew as desired.

### devkitARM

Ensure that you've [downloaded the devkitpro-pacman installer](#dependencies) and ran it successfully.

<!-- Queggs: Confirm my suspicion that you do, in fact, have to run these commands separately. -->

In the terminal, run these commands in order. First:

<!-- Queggs: Give an explanation for each? -->

```console
sudo dkp-pacman -Sy
```

<!-- Queggs: Shouldn't there be a flag like `-y` that we can pass in? -->

The following command will ask you about which packages to install. Just press `enter` to install all of them, then `y` (as in "yes") to continue the installation.

```console
sudo dkp-pacman -S gba-dev
```

Then finally:

```console
sudo dkp-pacman -S devkitarm-rules
```

<!-- Queggs: Why is this only necessary for MacOS? -->

<!-- Queggs: We could do this instead as a shell script called by the user that would also handle the Bash case? -->

Afterwards, devkitARM now needs to be made accessible from anywhere by your system. To do so, run the following script (yes, the entire thing):

> 📣 _Migrated from an older version of MacOS? Still running Bash? You probably want to [use this script](still_running_bash.md) instead!_

```console
export DEVKITPRO=/opt/devkitpro
echo "export DEVKITPRO=$DEVKITPRO" >> ~/.zshrc
export DEVKITARM=$DEVKITPRO/devkitARM
echo "export DEVKITARM=$DEVKITARM" >> ~/.zshrc

echo "if [ -f ~/.zshrc ]; then . ~/.zshrc; fi" >> ~/.zprofile
```

And that's it! Now you're ready to [set up pokeemerald-expansion](../set_up_guide.md)!
