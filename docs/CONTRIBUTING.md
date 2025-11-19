# Make a Contribution

> 📣 _Did you know? this guide was based on [CONTRIBUTING.md's generator](https://contributing.md/generator)!_

First off, thanks for wanting to help improve **pokeemerald-expansion**!

All contributions are encouraged and valued. Please take a moment to read the relevant section here before making yours, it makes everything easier for all of us. We're excited to see your contributions! 🎉

Take a look at the sections below to learn about [reporting bugs](#reporting-a-bug), [requesting features](#requesting-a-feature), or [submitting pull requests](#submitting-a-pull-request).

### Reporting a bug

Found a bug? We use [GitHub Issues](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=sort%3Aupdated-desc+is%3Aissue+is%3Aopen+label%3Abug) to keep track of them.

#### What should I do before reporting a bug?

First **confirm that your bug occurs** on the latest clean (unmodified) version of the `upcoming` or `master` branch. If not, please do _not_ open an issue --you most likely introduced the bug yourself in your local changes.

Then **you should look through** the [bugs already being tracked](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=label%3Abug) on GitHub Issues to see if anybody else has the same problem. If there already is an issue open, replying to it with more information about the bug can help solve it.

#### How do I report a bug?

If you do find a bug that's not already being tracked, [open a new issue](https://github.com/rh-hideout/pokeemerald-expansion/issues/new) for it on GitHub. 

Please try to report as much information about how to reproduce the bug as possible, it saves everyone a lot of time not having to track down more information from you later. We welcome all efforts to improve the project, but please complete as much of the checklist as possible when opening your issue.

#### What happens after I report a bug?

One of the maintainers will [label the issue](https://github.com/rh-hideout/pokeemerald-expansion/labels) that you've opened.

Then they'll try to reproduce the bug with your provided steps. If there are no reproduction steps or no obvious way to reproduce the issue, **we'll ask you for those steps**. Until the bug can be reproduced, the bug will stay labed as `bug:unconfirmed`.

> 💡 Unconfirmed bugs are less likely get fixed, so please include steps to reproduce yours as much as you can.

If we're able to reproduce the bug, we'll labeel it `bug:confirmed`, and your reported bug is ready to be fixed by any contributor (like you!) with a [pull request](#submitting-a-pull-request).

### Requesting a feature

We use [GitHub Issues](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=sort%3Aupdated-desc+is%3Aissue+is%3Aopen+label%3Afeature-request) to keep track of requested features. 

#### What should I do before requesting a feature?

You should **confirm if the functionality already exists** or not by [reading the documentation](https://rh-hideout.github.io/pokeemerald-expansion/).

Also **make sure that it's within the project's scope** by [reading this document](docs/team_procedures/scope.md) that defines ours.

> 💡 If you're still not sure whether something is in scope or not after doing your reading, you can start a discussion thread in the [#pr-discussions](https://discord.com/channels/419213663107416084/1102784418369785948) channel of our Discord server.

Then **you should search** through the [new features we're implementing](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=state%3Aopen%20label%3Anew-feature) and the [features others have already requested](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=state%3Aopen%20label%3Afeature-request), and see if others have already opened an issue requesting the same feature. If someone already has, add a comment with your ideas.

#### How do I request a feature?

If you have a feature in mind that hasn't already been requested, [open a new issue](https://github.com/rh-hideout/pokeemerald-expansion/issues/new) for it on GitHub. 

#### What happens after I request a feature?

One of the maintainers will [label the issue](https://github.com/rh-hideout/pokeemerald-expansion/labels) that you've opened.

If the feature requested already exists or is out of the scope, it will be closed.

If the request is in scope, any contributor (like you!) can volunteer to implement the requested feature with a [pull request](#submitting-a-pull-request).

### Submitting a pull request

The primary way a change to the pokeemerald-expansion project is submitted, discussed, and adopted is with a **pull request** (PR) on GitHub. They're a major reason why GitHub is so popular among programmers to store and manage their code.

#### What should I do before creating a pull request?

Start by **making sure that your idea is within the project's scope** by [reading this document](docs/team_procedures/scope.md) that defines ours. If you're planning on fixing a bug, your idea is within scope.

> 💡 If you're still not sure whether something is in scope or not after doing your reading, you can start a discussion thread in the [#pr-discussions](https://discord.com/channels/419213663107416084/1102784418369785948) channel of our Discord server.

Then, **create a new branch** from the most recent version of one of the following:

- **master**: If you're submitting a fix for a bug currently present in the `master` branch.
- **upcoming**: If you're submitting anything else.

Then, **write the code**. Create your solution, solve your problem, fix that bug!

> 📝 If your contribution's going to introduce, remove, or change a lot of existing code, we recommend getting [one of the maintainers](docs/other_pages/maintainers.md) to agree to review it before you start hacking.

> 💡 You can check out this short guide on how to [use Git for your first pull request](docs/other_pages/git_for_pull_requests.md) if you need help getting started with Git, and you can take a look at the guide to [The Basics of Git and GitHub](https://github.com/TeamAquasHideout/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub) kindly provided by our friends at [Team Aqua's Hideout](https://github.com/TeamAquasHideout/Team-Aquas-Asset-Repo/) to learn more.

#### How do I submit a pull request?

Once your work is complete and pushed to a branch on GitHub, you can [open a pull request](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request-from-a-fork) from your branch, targeting RHH's `master` or `upcoming` branches. Please fill out the pull request description as completely as possible.

#### What happens after I submit a pull request?

One of the maintainers will assign themselves as a reviewer of your pull request, and may provide feedback in the form of a pull request review. 

> ⚠️ **Do not force-push** new changes once a maintainer has begun reviewing your pull request, please: normal pushes are fine. And don't worry about the git history --we squash most incoming changes anyway.

Contributors (you) are responsible for responding to and updating their branch by addressing the feedback in the review. It's also your responsibility to make sure the branch passes the checklist at all times.

The maintainers then measure the submitted pull request against a [merge checklist](docs/team_procedures/merge_checklist.md).

Once all items on the merge checklist are true, the branch will be merged in.
