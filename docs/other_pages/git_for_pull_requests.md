# Using Git for your first pull request

>[!NOTE]
> _This guide assumes you've already successfully [set up a local copy](../install/set_up_guide.md) of the pokeemerald-expansion project._


Ready to share your changes with us and be a ROM Hacking Hideout contributor, but are stil shaky with Git commands? You're in the right place!

You'll need to make sure you've **set RHH as a remote** first. You can do that by running:

```console
git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion
```

Then, **create a new branch**. This command creates a new branch and switches to it. You need to pass in a name the new branch as well. For instance, if you were working on a feature that implements a new minigame called the Corsola Cup, you might call your new branch:

```console
git switch -c corsolaCupMiniGame
```

Make sure to **copy your target branch to your new branch**. This will change your new branch to match the latest version of your chosen target branch.

```console
git reset --hard upcoming
```

If your pull request is going to target the master branch, replace `upcoming` with `master`.

Now for the fun part: **write your code**. Create your solution, solve your problem, fix that bug!

>[!TIP]
> _If you already started work on a different branch, you can [cherry-pick](https://git-scm.com/docs/git-cherry-pick) your old commits onto this new branch, or just copy and paste the changes from the original files._

>[!WARNING]
> **Open a discussion thread** _in the [#pr-discussions](https://discord.com/channels/419213663107416084/1102784418369785948) channel of our Discord server before implementing functionality from community feature branches. Depending on the situation, we may ask you to use the existing feature branch as a base, or to rewrite parts of the feature from scratch._

You'll need to **push your changes**. When you push your first commit, you'll need to push the new branch to the remote repo. For our hypothetical Corsola-based minigame feature branch, the command would look like:

```console
git push --set-upstream origin corsolaCupMiniGame
```
When you're happy with your edits and have pushed all your commits to the remote repo, you're ready to [asdf](../CONTRIBUTING.md#how-do-i-submit-a-pull-request).
