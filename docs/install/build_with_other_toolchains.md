# Building with other toolchains

To build using a toolchain other than devkitARM, override the `TOOLCHAIN` environment variable with the path to your toolchain, which must contain the subdirectory `bin`.

```console
make TOOLCHAIN="/path/to/toolchain/here
```

The following is an example:

```console
make TOOLCHAIN="/usr/local/arm-none-eabi"
```

To compile the `modern` target with this toolchain, the subdirectories `lib`, `include`, and `arm-none-eabi` must also be present.
