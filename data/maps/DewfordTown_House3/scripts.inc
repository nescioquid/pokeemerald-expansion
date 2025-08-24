# 18 "data/maps/DewfordTown_House3/scripts.pory"

# 19 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_MapScripts::
# 20 "data/maps/DewfordTown_House3/scripts.pory"
    .byte 0
# 21 "data/maps/DewfordTown_House3/scripts.pory"

# 22 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_EventScript_PokemonGiver::
# 23 "data/maps/DewfordTown_House3/scripts.pory"
    lock
# 24 "data/maps/DewfordTown_House3/scripts.pory"
    faceplayer
# 25 "data/maps/DewfordTown_House3/scripts.pory"
    goto_if_set FLAG_GIVEN_GEN4_STARTER, DewfordTown_House3_EventScript_AlreadyReceivedPokemon // Check if already received
# 26 "data/maps/DewfordTown_House3/scripts.pory"

# 27 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_HelloTrainer, MSGBOX_DEFAULT
# 28 "data/maps/DewfordTown_House3/scripts.pory"

# 29 "data/maps/DewfordTown_House3/scripts.pory"
    switch VAR_STARTER_MON
# 30 "data/maps/DewfordTown_House3/scripts.pory"
    case 0, DewfordTown_House3_EventScript_GivePiplup
# 31 "data/maps/DewfordTown_House3/scripts.pory"
    case 1, DewfordTown_House3_EventScript_GiveTurtwig
# 32 "data/maps/DewfordTown_House3/scripts.pory"
    case 2, DewfordTown_House3_EventScript_GiveChimchar
# 33 "data/maps/DewfordTown_House3/scripts.pory"

# 34 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_ComeBackLater, MSGBOX_DEFAULT
# 35 "data/maps/DewfordTown_House3/scripts.pory"
    release
# 36 "data/maps/DewfordTown_House3/scripts.pory"
    end
# 37 "data/maps/DewfordTown_House3/scripts.pory"

# 38 "data/maps/DewfordTown_House3/scripts.pory"
// --- Script branches for giving specific Pokémon ---
# 39 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_EventScript_GivePiplup::
# 40 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_YouChoseTreeckoHereIsPiplup, MSGBOX_DEFAULT
# 41 "data/maps/DewfordTown_House3/scripts.pory"
    // givemon(species, level, item, ball, gender, ability, ivs, evs, moves, shiny, nickname, otid, personality, friendship, eggmoves, metlocation, metlevel, metgame, otname, otgender, otid)
# 42 "data/maps/DewfordTown_House3/scripts.pory"
    getpartysize
# 43 "data/maps/DewfordTown_House3/scripts.pory"
    goto_if_eq VAR_RESULT, PARTY_SIZE, DewfordTown_House3_EventScript_PartyFull
# 44 "data/maps/DewfordTown_House3/scripts.pory"
    givemon SPECIES_PIPLUP, 10, ITEM_LUM_BERRY, ITEM_CHERISH_BALL, 0, 2 // Piplup, Level 5, Lum Berry, Cherish Ball, Male, Hidden Ability (slot 2)
# 45 "data/maps/DewfordTown_House3/scripts.pory"
    setflag FLAG_GIVEN_GEN4_STARTER // Mark as received
# 46 "data/maps/DewfordTown_House3/scripts.pory"
    waitmessage
# 47 "data/maps/DewfordTown_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/DewfordTown_House3/scripts.pory"
	waitfanfare
# 49 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_EnjoyYourNewPokemon, MSGBOX_DEFAULT
# 50 "data/maps/DewfordTown_House3/scripts.pory"
    release
# 51 "data/maps/DewfordTown_House3/scripts.pory"
    end
# 52 "data/maps/DewfordTown_House3/scripts.pory"

# 53 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_EventScript_GiveTurtwig::
# 54 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_YouChoseTorchicHereIsTurtwig, MSGBOX_DEFAULT
# 55 "data/maps/DewfordTown_House3/scripts.pory"
    getpartysize
# 56 "data/maps/DewfordTown_House3/scripts.pory"
    goto_if_eq VAR_RESULT, PARTY_SIZE, DewfordTown_House3_EventScript_PartyFull
# 57 "data/maps/DewfordTown_House3/scripts.pory"
    givemon SPECIES_TURTWIG, 10, ITEM_LUM_BERRY, ITEM_CHERISH_BALL, 0, 2 // Turtwig, Level 5, Lum Berry, Cherish Ball, Male, Hidden Ability (slot 2)
# 58 "data/maps/DewfordTown_House3/scripts.pory"
    setflag FLAG_GIVEN_GEN4_STARTER
# 59 "data/maps/DewfordTown_House3/scripts.pory"
    waitmessage
# 60 "data/maps/DewfordTown_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/DewfordTown_House3/scripts.pory"
	waitfanfare
# 62 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_EnjoyYourNewPokemon, MSGBOX_DEFAULT
# 63 "data/maps/DewfordTown_House3/scripts.pory"
    release
# 64 "data/maps/DewfordTown_House3/scripts.pory"
    end
# 65 "data/maps/DewfordTown_House3/scripts.pory"

# 66 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_EventScript_GiveChimchar::
# 67 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_YouChoseMudkipHereIsChimchar, MSGBOX_DEFAULT
# 68 "data/maps/DewfordTown_House3/scripts.pory"
    getpartysize
# 69 "data/maps/DewfordTown_House3/scripts.pory"
    goto_if_eq VAR_RESULT, PARTY_SIZE, DewfordTown_House3_EventScript_PartyFull
# 70 "data/maps/DewfordTown_House3/scripts.pory"
    givemon SPECIES_CHIMCHAR, 10, ITEM_LUM_BERRY, ITEM_CHERISH_BALL, 0, 2 // Chimchar, Level 5, Lum Berry, Cherish Ball, Male, Hidden Ability (slot 2)
# 71 "data/maps/DewfordTown_House3/scripts.pory"
    setflag FLAG_GIVEN_GEN4_STARTER
# 72 "data/maps/DewfordTown_House3/scripts.pory"
    waitmessage
# 73 "data/maps/DewfordTown_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/DewfordTown_House3/scripts.pory"
	waitfanfare
# 75 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_EnjoyYourNewPokemon, MSGBOX_DEFAULT
# 76 "data/maps/DewfordTown_House3/scripts.pory"
    release
# 77 "data/maps/DewfordTown_House3/scripts.pory"
    end
# 78 "data/maps/DewfordTown_House3/scripts.pory"

# 79 "data/maps/DewfordTown_House3/scripts.pory"
// --- Script branches for various outcomes ---
# 80 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_EventScript_PartyFull::
# 81 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_PartyIsFull, MSGBOX_DEFAULT
# 82 "data/maps/DewfordTown_House3/scripts.pory"
    release
# 83 "data/maps/DewfordTown_House3/scripts.pory"
    end
# 84 "data/maps/DewfordTown_House3/scripts.pory"

# 85 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_EventScript_AlreadyReceivedPokemon::
# 86 "data/maps/DewfordTown_House3/scripts.pory"
    msgbox DewfordTown_House3_Text_AlreadyReceivedPokemon, MSGBOX_DEFAULT
# 87 "data/maps/DewfordTown_House3/scripts.pory"
    release
# 88 "data/maps/DewfordTown_House3/scripts.pory"
    end
# 89 "data/maps/DewfordTown_House3/scripts.pory"

# 90 "data/maps/DewfordTown_House3/scripts.pory"
// =============================================================================
# 91 "data/maps/DewfordTown_House3/scripts.pory"
// Text Definitions (add these to your data/text/dewford_house3_text.inc file)
# 92 "data/maps/DewfordTown_House3/scripts.pory"
// =============================================================================
# 93 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_HelloTrainer:
# 94 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Hello, trainer! I've been waiting for you!\n"
# 95 "data/maps/DewfordTown_House3/scripts.pory"
    .string "I have a special gift for you,\l"
# 96 "data/maps/DewfordTown_House3/scripts.pory"
    .string "based on your journey so far.$"
# 97 "data/maps/DewfordTown_House3/scripts.pory"

# 98 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_YouChoseTreeckoHereIsPiplup:
# 99 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Ah, you chose Treecko! A wise choice.\n"
# 100 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Here, take this Piplup to accompany you!$"
# 101 "data/maps/DewfordTown_House3/scripts.pory"

# 102 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_YouChoseTorchicHereIsTurtwig:
# 103 "data/maps/DewfordTown_House3/scripts.pory"
    .string "So, you picked Torchic! Excellent!\n"
# 104 "data/maps/DewfordTown_House3/scripts.pory"
    .string "This Turtwig will be a great addition\l"
# 105 "data/maps/DewfordTown_House3/scripts.pory"
    .string "to your team!$"
# 106 "data/maps/DewfordTown_House3/scripts.pory"

# 107 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_YouChoseMudkipHereIsChimchar:
# 108 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Mudkip, huh? A strong start!\n"
# 109 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Allow me to give you this Chimchar!$"
# 110 "data/maps/DewfordTown_House3/scripts.pory"

# 111 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_EnjoyYourNewPokemon:
# 112 "data/maps/DewfordTown_House3/scripts.pory"
    .string "I hope you and your new Pokémon\n"
# 113 "data/maps/DewfordTown_House3/scripts.pory"
    .string "become great friends!$"
# 114 "data/maps/DewfordTown_House3/scripts.pory"

# 115 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_PartyIsFull:
# 116 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Oh, it looks like your party is full!\n"
# 117 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Please make some space and come back.$"
# 118 "data/maps/DewfordTown_House3/scripts.pory"

# 119 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_AlreadyReceivedPokemon:
# 120 "data/maps/DewfordTown_House3/scripts.pory"
    .string "You've already received your special\n"
# 121 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Pokémon from me. Train it well!$"
# 122 "data/maps/DewfordTown_House3/scripts.pory"

# 123 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_Text_ComeBackLater:
# 124 "data/maps/DewfordTown_House3/scripts.pory"
    .string "Hmm, it seems your journey is\n"
# 125 "data/maps/DewfordTown_House3/scripts.pory"
    .string "just beginning. Come back to me\l"
# 126 "data/maps/DewfordTown_House3/scripts.pory"
    .string "once you've truly started your adventure!$"
