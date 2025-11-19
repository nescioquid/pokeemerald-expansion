# Updating pokeemerald-expansion

<!-- Queggs: See if we can implement release tags like expansion/1.8.x for this updating flow. -->

<!-- Queggs: Ask why the version number doesn't get spat out with the final ROM output? -->

1. Set RHH as a git remote:

    ```console
    git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion
    ```

2. Check your current version. Your local copy of the [changelog](../CHANGELOG.md) will be updated with the version your repo is on.

3. Select a target version. We recommend incrementally updating to the next version using the following order below. If you are on a version older than 1.6.2, you should target 1.6.2.

    - 1.6.2
    - 1.7.4
    - 1.8.3
    - 1.9.4
    - 1.10.3

For example, if your project is currently on version is 1.7.0, you should update to 1.7.4.

4. Pull the target version:

    ```console
    git pull RHH expansion/X.Y.Z
    ```

Replace `X.Y.Z` with the target version, like `1.9.4`, `master`, or `upcoming`.

You may have merge conflicts that you need to resolve.

If you targeted a specific version that is not the latest version listed on the [tags](https://github.com/rh-hideout/pokeemerald-expansion/tags) page, you should repeat steps 3 and 4 until you are.
