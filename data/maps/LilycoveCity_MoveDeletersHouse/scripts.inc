# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts::
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .byte 0
# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_EventScript_Trainer::
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    lock
# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    faceplayer
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_Intro, MSGBOX_DEFAULT
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    multichoice 0, 0, MULTI_HYPER_TRAIN_TYPE, 0
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseSilver
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseGold
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseSilver:
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    setvar VAR_TEMP_0, 0 // 0 = Bottle Cap
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_CheckBottleCap
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseGold:
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    setvar VAR_TEMP_0, 1 // 1 = Gold Bottle Cap
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_CheckGoldCap
# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
// ---- Item checks ----
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_CheckBottleCap:
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    checkitem ITEM_BOTTLE_CAP, 1
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_NoBottleCap
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectPokemon
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_CheckGoldCap:
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    checkitem ITEM_GOLD_BOTTLE_CAP, 1
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_NoGoldBottleCap
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    // fall through to select Pokémon
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
// ---- Select a Pokémon ----
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_SelectPokemon:
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SelectPokemon, MSGBOX_DEFAULT
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    specialvar VAR_RESULT, ChoosePartyMon
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 255
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_End
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    copyvar VAR_TEMP_1, VAR_RESULT // party index
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_TEMP_0, 1
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_GoldCapPath
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
// ---- Bottle Cap Path (one stat) ----
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_SelectStat_Start:
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    multichoice 0, 0, MULTI_HYPER_STAT, 0
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseHP
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseAtk
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 2
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseDef
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 3
# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseSpAtk
# 63 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 4
# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseSpDef
# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 5
# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_ChooseSpe
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 127
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_End
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 70 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 71 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseHP:
# 72 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AskHP, MSGBOX_YESNO
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_HP
# 75 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 76 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 77 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_HP:
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain STAT_HP, VAR_TEMP_1
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 81 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_AlreadyMaxed_One
# 83 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain STAT_HP, VAR_TEMP_1
# 84 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_BOTTLE_CAP, 1
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SingleDone, MSGBOX_DEFAULT
# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 88 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 89 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 90 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 92 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 93 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseAtk:
# 94 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AskAtk, MSGBOX_YESNO
# 95 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_Atk
# 97 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 99 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 100 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Atk:
# 101 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain STAT_ATK, VAR_TEMP_1
# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 104 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_AlreadyMaxed_One
# 105 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain STAT_ATK, VAR_TEMP_1
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 107 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_BOTTLE_CAP, 1
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SingleDone, MSGBOX_DEFAULT
# 109 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 110 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 111 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 112 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 113 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 114 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 115 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseDef:
# 116 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AskDef, MSGBOX_YESNO
# 117 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 118 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_Def
# 119 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 120 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 121 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 122 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Def:
# 123 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain STAT_DEF, VAR_TEMP_1
# 124 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 125 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 126 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_AlreadyMaxed_One
# 127 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain STAT_DEF, VAR_TEMP_1
# 128 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 129 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_BOTTLE_CAP, 1
# 130 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SingleDone, MSGBOX_DEFAULT
# 131 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 132 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 133 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 134 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 135 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 136 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 137 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseSpAtk:
# 138 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AskSpAtk, MSGBOX_YESNO
# 139 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 140 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_SpAtk
# 141 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 142 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 143 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 144 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_SpAtk:
# 145 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain STAT_SPATK, VAR_TEMP_1
# 146 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 147 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 148 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_AlreadyMaxed_One
# 149 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain STAT_SPATK, VAR_TEMP_1
# 150 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 151 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_BOTTLE_CAP, 1
# 152 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SingleDone, MSGBOX_DEFAULT
# 153 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 154 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 155 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 156 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 157 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 158 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 159 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseSpDef:
# 160 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AskSpDef, MSGBOX_YESNO
# 161 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 162 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_SpDef
# 163 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 164 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 165 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 166 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_SpDef:
# 167 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain STAT_SPDEF, VAR_TEMP_1
# 168 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 169 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 170 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_AlreadyMaxed_One
# 171 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain STAT_SPDEF, VAR_TEMP_1
# 172 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 173 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_BOTTLE_CAP, 1
# 174 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SingleDone, MSGBOX_DEFAULT
# 175 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 176 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 177 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 178 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 179 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 180 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 181 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_ChooseSpe:
# 182 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AskSpe, MSGBOX_YESNO
# 183 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 184 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_Spe
# 185 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 186 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 187 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 188 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Spe:
# 189 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain STAT_SPEED, VAR_TEMP_1
# 190 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 191 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 192 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_AlreadyMaxed_One
# 193 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain STAT_SPEED, VAR_TEMP_1
# 194 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 195 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_BOTTLE_CAP, 1
# 196 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_SingleDone, MSGBOX_DEFAULT
# 197 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 198 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 199 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 200 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 201 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 202 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 203 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_AlreadyMaxed_One:
# 204 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AlreadyMaxed, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_TrainAnother, MSGBOX_YESNO
# 206 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1
# 207 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_CheckAnotherBottleCap
# 208 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 209 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 210 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 211 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_CheckAnotherBottleCap:
# 212 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage
# 213 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    checkitem ITEM_BOTTLE_CAP, 1
# 214 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 0
# 215 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_NoBottleCap
# 216 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_SelectStat_Start
# 217 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 218 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
// ---- Gold Bottle Cap Path (all applicable stats) ----
# 219 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_GoldCapPath:
# 220 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    setvar VAR_TEMP_2, 0 // stat index
# 221 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    setvar VAR_TEMP_3, 0 // count trained
# 222 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_LoopStats:
# 223 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    canhypertrain VAR_TEMP_2, VAR_TEMP_1     // stat, slot
# 224 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 225 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_RESULT, 1                    // 1 = can train
# 226 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_ne HyperTrainer_SkipTrain
# 227 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    hypertrain VAR_TEMP_2, VAR_TEMP_1        // stat, slot
# 228 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    waitstate
# 229 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    addvar VAR_TEMP_3, 1
# 230 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_SkipTrain:
# 231 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    addvar VAR_TEMP_2, 1
# 232 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_TEMP_2, 6
# 233 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_lt HyperTrainer_LoopStats
# 234 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 235 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    compare VAR_TEMP_3, 0
# 236 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto_if_eq HyperTrainer_NothingToDo
# 237 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    removeitem ITEM_GOLD_BOTTLE_CAP, 1
# 238 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AllDone, MSGBOX_DEFAULT
# 239 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 240 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 241 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_NothingToDo:
# 242 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_AllMaxed, MSGBOX_DEFAULT
# 243 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 244 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 245 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
// ---- Messages / early exits ----
# 246 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_NoBottleCap:
# 247 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_NoBottleCap, MSGBOX_DEFAULT
# 248 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 249 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 250 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_NoGoldBottleCap:
# 251 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    msgbox HyperTrainer_Text_NoGoldBottleCap, MSGBOX_DEFAULT
# 252 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    goto HyperTrainer_End
# 253 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 254 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_End:
# 255 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    closemessage      // ensure any box (including YES/NO) is closed
# 256 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    release
# 257 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    end
# 258 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 259 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
// ---- Text blocks ----
# 260 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_Intro:
# 261 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hey there! I can\n"
# 262 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train your Pokémon.\p"
# 263 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "With a Bottle Cap,\n"
# 264 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "I can max one stat of your choice.\p"
# 265 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "With a Gold Bottle Cap,\n"
# 266 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "I can max all stats at once!\p"
# 267 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Which will it be?$"
# 268 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 269 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_SelectPokemon:
# 270 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Choose a Pokémon for Hyper Training.$"
# 271 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 272 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AskHP:
# 273 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train HP?$"
# 274 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 275 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AskAtk:
# 276 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train Attack?$"
# 277 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 278 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AskDef:
# 279 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train Defense?$"
# 280 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 281 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AskSpAtk:
# 282 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train Sp. Atk?$"
# 283 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 284 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AskSpDef:
# 285 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train Sp. Def?$"
# 286 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 287 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AskSpe:
# 288 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Hyper Train Speed?$"
# 289 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 290 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AlreadyMaxed:
# 291 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "That stat is already at its maximum.\p"
# 292 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "No need to waste a Bottle Cap.$"
# 293 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 294 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_TrainAnother:
# 295 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Train another stat?$"
# 296 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 297 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_SingleDone:
# 298 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "All done! That stat is now\n"
# 299 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "as strong as it can be.$"
# 300 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 301 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AllDone:
# 302 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Incredible! I hyper trained\n"
# 303 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "every stat that needed it.$"
# 304 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 305 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_AllMaxed:
# 306 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "All of that Pokémon’s stats are already maxed.\p"
# 307 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "We won't use your Gold Bottle Cap.$"
# 308 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 309 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_NoBottleCap:
# 310 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "You don’t have a Bottle Cap.\p"
# 311 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Come back when you find one.$"
# 312 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 313 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
HyperTrainer_Text_NoGoldBottleCap:
# 314 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "You don’t have a Gold Bottle Cap.\p"
# 315 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
    .string "Come back when you find one.$"
