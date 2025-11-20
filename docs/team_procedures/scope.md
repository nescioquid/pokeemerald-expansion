# Scope

### Document Purpose

This document is a guide for contributors and Senate to decide if a feature is within "scope" for pokeemerald-expansion. "Scope" in this case comprises a list of features and concepts that could be merged if an appropriate implementation is submitted. If a feature is not in scope, then it should not be merged. Even if an opened PR is within scope, this does not mean it will be merged, as acceptance criteria will often come down to the details of the implementation.

---

### Definitions

- **Showdown Supported (SS)**: A core series game who's metagame can be played on Showdown.
  - Includes every [core series game](https://bulbapedia.bulbagarden.net/wiki/Core_series#List_of_core_series_games) except Pokémon Legends: Arceus.
  - Does not include [spin-off games](https://bulbapedia.bulbagarden.net/wiki/Spin-off_Pokémon_games) such as Pokémon Colosseum, Pokémon XD, Pokémon Trozei!, etc.
- **Base Expansion Version**: "A .gba file built from an unmodified `master` or `upcoming` branch of `pokeemerald-expansion`.
- **Vanilla Emerald Version**: A .gba file built from an unmodified `master` branch of pret's `pokeemerald`.

### Guidelines

A pull request meets the scope criteria if:

- The feature does not belong to a category considered "not in scope" AND
- The feature belongs to a category considered "in scope".

### In Scope Categories

- **SS Species**: Adds Species that have appeared in a Showdown-supported title. Includes follower sprites for all defined species including battle-only ones (ie. Megas).
- **SS Moves**: Adds Moves and Move Animations that have appeared in a Showdown-supported title.
- **SS Abilities**: Adds Abilities that have appeared in a Showdown-supported title.
- **SS Items**: Adds Items that have appeared in a Showdown-supported title.
- **SS Gimmicks**: Adds Gimmicks that have appeared in a Showdown-supported title (Dynamax, Mega Evolution, etc.).
- **SS Battle Types**: Adds Special Battle Types that have appeared in a Showdown-supported title (Triple battles, etc.).
- **SS Battle Mechanics**: Adds mechanical battle changes that have appeared in a Showdown-supported title, and allow developers to choose which generation suits them where applicable.
- **Battle AI Behaviour**: Improvements towards the capability of a human competitive player, and unique or interesting behaviours otherwise.
- **Base Link Compatibility**: The ability for two Base Expansion Version's to connect, trade, and battle one another.
- **SS Overworld Features**: Add overworld changes / additions from Showdown-supported Pokémon titles (followers, raids, sideways stairs, etc.).
- **SS Menu Features**: Add menu changes / additions from Showdown-supported Pokémon titles (type effectivness indicator, PC functions, etc.).
- **Speed Up**: Optimize code to run more efficiently, take up less space, and work better overall to improves the developer and/or player experience.
- **Compression**: Reduces the size of graphic or sound assets, etc. Includes automatic compression
- **Novel Experience**: Adds a novel experience included in another Showdown Supported title (poffins, fishing minigames, etc.).
- **Helper Features**: Eases the addition or inclusion of any of the aforementioned, or facilitates developer ease of use.

### Not In Scope Categories

- **Non-SS Species**: Adds Species that have NOT appeared in a Showdown-supported title (Fakemon, CAP Pokémon, etc.).
- **Non-SS Moves**: Adds Moves and Move Animations that have NOT appeared in a Showdown-supported title.
- **Non-SS Abilities**: Adds Abilities that have NOT appeared in a Showdown-supported title.
- **Non-SS Items**: Adds Items that have NOT appeared in a Showdown-supported title.
- **Non-SS Gimmicks**: Adds Gimmicks that have NOT appeared in a Showdown-supported title (Showdown's Other Metagames, etc.).
- **Non-SS Battle Types**: Adds Special Battle Types that have NOT appeared in a Showdown-supported title.
- **Overworld Maps**: Adds overworld maps from either Showdown-supported titles or non-Showdown-supported titles.
- **Duplicate UIs**: Adds additional user interface that covers the same functionality of an existing feature (HGSS Pokédex, BW Summary Screen, etc.).
- **Vanilla Link Compatibility**: The ability for Base Expansion Version and Vanilla Emerald Version to connect, trade, and battle one another.

### Discussion Required Categories

Pull Requests that fall into this category are not in scope by default and should be brought up to maintainers, who will discuss and vote as to whether or not the feature is considered in scope. Considerations for acceptance may include invasiveness of implementation, popularity, ease of maintenance, etc.

- **Developer Ease of Use**: Lowers barrier of entry for developers to use existing behavior
- **Fangame Features**: Adds a popular feature from other fangames.
- **Popular Non-SS Features**: Exceptions can be made for uniquely popular or requested features (Drowsy, PLA Legend Plate, etc.).
- **External Program**: External programs like poryscript, porymoves, etc.
- **Intergenerational Feature Compatibility**: Addresses limitations and issues resulting from including all generational behaviours in a GBA native title, and extrapolation of features no longer supported by GameFreak.

### Workflow for Proposed Feature Scope Discussion

For the contributor:

1. Make a thread for the feature on Discord.
2. Describe how the feature fits into this scope document, and why you feel it should be considered
3. Optionally include either a draft PR or describe in some detail the proposed implementation. Non-mandatory, but implementation invasiveness, maintenance cost, etc. are major considerations, so use your judgement. The senate may ask for this information during discussion.

For the Senate:

1. Make a senate thread for the discussion.
2. Make and pin a two-week voting poll.
3. Discuss, conclude, and cast votes before the two-week deadline.
4. Inform contributor as to the results and reasons in their thread.
5. Amend this scope document if necessary.
