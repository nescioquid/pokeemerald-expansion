# Migrating from pokeemerald

1. Set RHH as a git remote:

    ```console
    git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion
    ```

2. Pull your desired branch:

There are three different options to pull from: `master` `upcoming`, or a specified version.

    ```console
    git pull RHH master
    ```

if you've chosen to use the upcoming branch, replace `master` with `upcoming`. 

If you've chosen a specific version, replace `master` with `expansion/X.Y.Z`, where `X.Y.Z` is the specific version you chose, `1.9.4` for instance.

You may have merge conflicts that you need to resolve.

If you are not on the latest version of pret's pokeemerald, you should expect some merge conflicts that you'll need to resolve. Once complete, you'll be using **pokeemerald-expansion**.
