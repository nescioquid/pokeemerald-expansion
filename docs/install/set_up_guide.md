# Setting up pokeemerald-expansion

> 📣 _Got a reason to build with a toolchain other than devkitARM? Check out our notes on [building with other toolchains](build_with_other_toolchains.md)._

Now that we've got our programming environment set up, we're ready get our own copy of the **pokeemerald-expansion** project on our machine.

> 💡 If you're new to Git and GitHub or unsure of the differences, we politely (but firmly) suggest that you take a look at this guide to [The Basics of Git and GitHub](https://github.com/TeamAquasHideout/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub) kindly provided by our friends at [Team Aqua's Hideout](https://github.com/TeamAquasHideout/Team-Aquas-Asset-Repo/) to learn about how to fork and clone the Git repository (get your own copy of the project both online and on your machine).

### Cloning the repository from GitHub

> ⚠️ **Do not use** GitHub's "Download Zip" option. It doesn't include commit history, which you need to get future updates or merge any feature branches. Follow the instructions below instead.

First, make sure you've navigated to the directory you want to keep your project in (like your `decomps` directory, for instance).

Then clone (download, essentially) the pokeemerald-expansion repository using Git:

```console
git clone https://github.com/rh-hideout/pokeemerald-expansion
```

Then navigate into your newly downloaded project:

```console
cd pokeemerald-expansion
```

### Building the ROM locally

Building the ROM is important because it ensures that we've set up our environment for building the ROM correctly. We also can't make our cool, new ROM hacks if we can't make a ROM to begin with.

If everything's been set up right, to build the ROM we should just have to run:

```console
make
```

---

> 📝 To build `pokeemerald.elf`, a version of the ROM with debug symbols and debug-compatible optimizations, run:

```console
make debug
```

---

When it's done, something very similar to to the following should be at the end of your terminal's output:

```console
arm-none-eabi-ld: warning: ../../pokeemerald.elf has a LOAD segment with RWX permissions
Memory region         Used Size  Region Size  %age Used
            EWRAM:      243354 B       256 KB     92.83%
            IWRAM:       30492 B        32 KB     93.05%
            ROM:    26072244 B        32 MB     77.70%
cd build/modern && arm-none-eabi-ld  -T ../../ld_script_modern.ld --print-memory-usage -o ../../pokeemerald.elf <objs> <libs> | cat
tools/gbafix/gbafix pokeemerald.elf -t"POKEMON EMER" -cBPEE -m01 -r0 --silent
arm-none-eabi-objcopy -O binary pokeemerald.elf pokeemerald.gba
tools/gbafix/gbafix pokeemerald.gba -p --silent
```

Finally, the newly built ROM will be in the base directory (the project folder) as `pokeemerald.gba`.

**Congratulations on successfully building your ROM**. _Happy hacking!_ 🎉

Feel free to brag about your achievement in our [Discord server](https://discord.gg/6CzjAG6GZk)!

> 💡 You can spend less time waiting for your ROM to compile by learning how to [make builds go faster](../other_pages/faster_builds.md). It's easy!
