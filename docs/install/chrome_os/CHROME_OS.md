# Setting up on ChromeOS

Enable the Linux terminal by following the instructions on this [ChromOS.dev post](https://chromeos.dev/en/productivity/terminal). Be sure to allocate enough space for the Linux install.

After the Linux terminal has finished installing, run the following command in the terminal to update and upgrade the Linux terminal:

```console
sudo apt update && apt upgrade
```

Then install all dependencies by running the following command:

```console
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```
> [!NOTE]
> _The project must be kept in a directory inside the Linux filesystem, such as `~/decomps/pokeemerald-expansion`._

And that's it! Now you're ready to [set up pokeemerald-expansion](../set_up_guide.md).
