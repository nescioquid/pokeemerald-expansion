# Faster builds

> 📣 _Build still slow on Windows? Try [WSL2](../install/windows/windows.md), it's the fastest build environment of them all!_

To speed up our build times, we can tell the `make` command how many processes it can run in parallel (instead of running just one). To do so, first run this command that returns a value (a number):

```console
nproc
```

We can then pass that value to the `make` command like so:

```console
make -j<output-of-nproc>
```

Where `<output-of-nproc>` is the value that the `nproc` command returned. So, if `nproc` returns an `8` on your machine, you can run `make -j8` and go real fast (seat belt not included :).

And that's it! Happy (even faster) hacking!

> 📝 The `nproc` command is _not_ available on MacOS, and the alternative is `sysctl -n hw.ncpu`. See this [Stack Overflow thread](https://stackoverflow.com/questions/1715580) for more information.

> 📝 See the [GNU docs](https://www.gnu.org/software/make/manual/html_node/Parallel.html) and this [Stack Exchange thread](https://unix.stackexchange.com/questions/208568) for more information on parallel builds.
