# Running tests with Rosetta

<!-- Queggs: Why are we supporting install paths while literally saying the user probably doesn't want them in the same breath? -->

<!-- Queggs: Maybe rather than this being a separate page as I've implemented it, we could implement some kind of footnote feature for community notes like this. I'm sure this felt/feels incredibly relevant to the original contributor that wrote this, but it doesn't seem like it needs to be mainlined. -->

You probably don't want to do this as it's much slower.

Most users can use native tools, but some may have other reasons to use this setup such as working with Intel-only custom tooling.

You will need an Intel-compatible Homebrew installation. Check out this [GitHub Issues comment](https://github.com/Homebrew/brew/issues/9173#issuecomment-729206868) to learn more about how.

Then, install `coreutils` but using your Intel-compatible installation of Homebrew.
