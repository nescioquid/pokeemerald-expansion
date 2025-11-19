# Running the documentation website locally (WSL/Ubuntu)

> 📣 _Looking for more information on mdBook? Visit their [official documentation](https://rust-lang.github.io/mdBook/)._

We hope that this guide will make it easier for everyone to contribute to the docs site. Once you've set everyting up, you'll be able to check your changes locally before pushing them to your repo! :D

### Requirements

<!-- TODO: Add documentation for installing and downloading binaries directly as another option. -->

Install the Rust toolchain if you don't have it already by running:

```console
sudo apt install cargo
```

And install mdBook with:

```console
cargo install mdbook
```

Once finished, this message should pop up, with `<username>` being your Linux (WSL/Ubuntu) username:

```console
warning: be sure to add `/home/<username>/.cargo/bin` to your PATH to be able to run the installed binaries
```
  
To then add `/home/<username>/.cargo/bin` to your `PATH`, run the following to open the relevant file with `nano`, a simple terminal-based text editor:

```console
nano ~/.profile
```

Add the following lines, again making sure to **replace** `<username>` **with your Linux username**:

```diff
# Set PATH so it includes user's private bin if it exists.
if [ -d "$HOME/bin" ] ; then
    PATH="$HOME/bin:$PATH"
fi

# Set PATH so it includes user's private bin if it exists.
if [ -d "$HOME/.local/bin" ] ; then
    PATH="$HOME/.local/bin:$PATH"
fi

+ # Set PATH so it includes cargo bin if it exists.
+ if [ -d "/home/<username>/.cargo/bin" ] ; then
+     PATH="/home/<username>/.cargo/bin:$PATH"
+ fi
```

> 💡 To save and exit `nano`, press `Ctrl+S` to save and `Ctrl+X` to exit.

Finally, run this command to refresh the `PATH` in your current terminal session:

```console
source ~/.profile
```

### Running the website locally

Navigate to the `docs/` directory and run:

```console
mdbook serve
```

Once started, you should now be able to open a local version of the website in your browser at [http://127.0.0.1:3000](http://127.0.0.1:3000).

Every change to the `docs/` directory should now be reflected there automatically.

> 💡 To stop the server and go back to your terminal session, press `Ctrl+C`.

### Modifying the documentation site

The navigation menu on the left is handled by `docs/SUMMARY.md`. Every file added needs to be added somewhere here in order to become visible, otherwise you'll get a 404 error (the page can't be found).

Any Markdown files (those with an `.md` file extension) added to the `docs/` directory will automatically be read by mdBook.

To add pages that are not in the `docs/` directory, you can create an empty Markdown file and add the following **without the** `<---->` to reference them:

```console
{{<---->#include ../README.md}}`
```

This example would add the `README.md` file from the root directory, and happens to have already been implemented [here](../README.md).
