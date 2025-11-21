# What features are included?

Well, most of them. _We've already done a lot of the work for you!_

>[!TIP]
> _Many of the features here can be toggled or tuned to your needs just by changing their settings in our [configuration files](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/)._

### Upgraded Battle Engine

<!-- - **Every item, ability and move effect up to Generation IX**: Includes contest data up to SwSh ([source](https://pokemonurpg.com/info/contests/rse-move-list/)). -->

- **Battle gimmicks**: Mega Evolution, Primal Reversion, Ultra Burst, Z-Moves, Dynamax, Gigantamax and Terastallization.
- **Newer game battle types**: Double Wild Battles, custom Multi Battles, Inverse Battles, 1v2/2v1 battles, Sky Battles.
- **Updated battle mechanics**: Critical capture, Frostbite support, Poké Ball quick menu, Move description menu, no badge boosts, Generation IV Fog, obedience, Affection, Party swap upon catch, move effectiveness in battle, FRLG/Generation IV+ whiteout money calculation, Generation IV-style shadows.
- **Updated move data**: Fairy/Stellar types, Physical/Special split, flags.
- **Updated calculations**: Damage, experience, mid-turn speed, end-battle stats and EVs, Level 100 EVs.
- **Every item, ability and move effect up to Generation IX**: Includes contest data up to Generation VIII.
- **Initial battle conditions**: Stat stages, battle terrain, Wild AI flags.
- **Faster battles**: Simultaneous HP reduction, shortcut to "Run" option, faster battle intro, faster HP drain, faster AI calculations.
- **Easier customization**: Cleaner codebase to implement custom moves and effects.
- **Improved AI**: Faster and considers new effects added by Expansion.
- **Popular features**: Level/EV Caps, Sleep Clause, Type Indicators.

### Full Trainer customization

- **Compatible with Pokémon Showdown's team syntax**: Create your trainer teams in the [Smogon teambuilder](https://play.pokemonshowdown.com/teambuilder) and paste the results!
- **Custom Pokémon data**: Nicknames, EVs, IVs, Moves, Abilities, Poké Balls, Friendship, Nature, Gender, Shininess, Dynamax level, Gigantamax Factor and Tera Type.
- **Lead and Ace Pokémon**: Will reserve specific Pokémon to be sent out first or last in the party, respectively.
- **Trainer Pools**: A trainer may get a pool of randomized Pokémon instead of set teams.
- **Custom sliding trainer messages**: First Turn, landing a super-effective hit, before Mega Evolution, etc.
- **New AI Flag options**: Customize the intelligence of your trainers.
- **Trainer class Poké Balls**: Divers use Dive Balls, Breeders use Nest Balls, etc.

### Pokémon data

- **Improved Pokémon Data structure**: Optimized space to allow fitting more information, such as Tera type, 12-character names, Hyper-trained stats, evolution conditions, saved HP/status effect.
- **Updated breeding mechanics**: Poké Ball/Egg Move/Ability/Nature inheritance, Level 1 eggs automatic incense babies.
- **Updated species data**: Stats, Types, Abilities, Hidden Abilities, Egg Groups, EV Yields, movesets, Battle Facility bans, guaranteed perfect IV counts, ORAS Dex numbers.
- **Simpler species data manipulation**: Only requires to edit ~5 files instead of vanilla pokeemerald's 20+ to add a new Pokémon.
- **Updated sprites**: DS-style sprites with support for Emerald's 2-frame animations and gender difference.
- **Species toggles**: You can disable specific groups of Pokémon to save space, including families, cross-generation evolutions, Mega Evolutions, Regional forms, etc.
- **Revamped Evolution System**: Multiple Evolution conditions can be stacked in order to create complex methods without additional coding. Every condition except Affection and console gyroscope is supported.
- **Form Change System**: Most form changes can be added without additional coding. This includes support for: Holding/using an item, HP thresholds being met, weather change in and/or out of battle, Fusions, and more.

### Interface improvements

- **Pokémon Summary**: Move relearner, EV/IV checks, Nature colors ([feature branch](https://github.com/DizzyEggg/pokeemerald/tree/nature_color) by @DizzyEggg).
- **Party Menu**: "Move Item" option.
- **Pokémon Storage System**: Move option as default, access from Box Link item.
- **HGSS-style Pokédex**: Detailed in-game information accessible to players ([original feature branch](https://github.com/TheXaman/pokeemerald/tree/tx_pokedexPlus_hgss) by @TheXaman).

### Engine improvements

- **All base pokeemerald bugfixes implemented by default**: Anything under the `BUGFIX` define.
- **Improved sprite and palette compression**: Assets use less space than vanilla compression.
- **Modern compiler support**: Detect potential errors in your code more easily.
- **Dynamic Multichoice**: Easier way to add multiple-choice menus for scripting ([original feature branch](https://github.com/SBird1337/pokeemerald/tree/feature/dynmulti) by @SBird1337).
- **High-Quality RNG**: No more broken vanilla RNG.

### Overworld improvements

- **Modern Mechanics**: Defog field move, B2W2+ Repel system, Running indoors, Removed field poison, Chain fishing, VS. Seeker, FRLG+ whiteout message.
- **Overworld and Follower Pokémon**: ([feature branch](https://github.com/aarant/pokeemerald/tree/followers-expanded-id) by @aarant)
  - _Includes Dynamic overworld palettes (DOWP) and Overworld Expansion for event IDs beyond 255._
  - _Includes Pokémon sprites up to Generation IX._
- **Day/Night System**: ([feature branch](https://github.com/aarant/pokeemerald/tree/lighting-expanded-id) by @aarant)
  - _Includes support for non-real time clock_.
- **NPC Followers**: ([feature branch](https://github.com/ghoulslash/pokeemerald/tree/follow_me) by @ghoulslash)
- **BW Map Pop-ups** ([feature branch](https://github.com/ravepossum/pokeemerald/tree/bsbob_map_popups) by @BSBob)
- **XY Berry Mechanics**: Mutations, moisture, weeds, pests.
- **Obtained Item descriptions** (feature branch by @ghoulslash).

### Developer tools

- **Integrated Testing**: Pinpoint if your custom mechanics have broken something else in the game or not.
- **Pokémon Sprite Visualizer**: Test every Pokémon sprite and animation.
- **Overworld debug menu**: Support menu with an assortment of features to facilitate debugging, including warping, flag and var toggling, Pokémon and item generation and more ([original feature branch](https://github.com/TheXaman/pokeemerald/tree/tx_debug_system) by @TheXaman).
- **Battle Debug Menu**: Modify data on the fly in the middle of a battle.
- **Learnset Helper**: Autogenerate movesets from your custom TM and Tutor data based on official compatibility data.
- **Configurable script flags**: Disabling Wild encounters, Disabling Trainer battles, Forcing/Disabling Shinies.
- **Saveblock Cleansing** ([feature branch](https://github.com/ghoulslash/pokeemerald/tree/saveblock) by @ghoulslash)
