# 1 "data/maps/MeteorFalls_B1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
MeteorFalls_B1F_2R_MapScripts::
# 3 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.byte 0

MeteorFalls_B1F_2R_EventScript_Drake::
# 7 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	lock
# 8 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	faceplayer
# 9 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	trainerbattle_single TRAINER_DRAKE, Drake_Text_IntroSpeech, Drake_Text_Defeat, Drake_EventScript_PostbattleSpeech
# 10 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	msgbox Drake_Text_PostBattleSpeech, MSGBOX_AUTOCLOSE
	end


Drake_EventScript_PostbattleSpeech::
# 15 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	msgbox Drake_Text_PostBattleSpeech
# 16 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	release
	end


Drake_Text_IntroSpeech::
# 20 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.string "I am formerly the last of the Pokémon\n"
	.string "League Elite Four, Drake the Dragon\l"
	.string "master!\p"
	.string "In their natural state, Pokémon are\n"
	.string "wild living things. They are free.\p"
	.string "At times, they hinder us.\n"
	.string "At times, they help us.\p"
	.string "For us to battle with Pokémon as\n"
	.string "partners, do you know what it takes?\p"
	.string "Do you know what is needed?\p"
	.string "If you don't, then you will never\n"
	.string "prevail over me!$"

Drake_Text_Defeat::
# 34 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.string "Superb, it should be said.$"

Drake_Text_PostBattleSpeech::
# 38 "data/maps/MeteorFalls_B1F_2R/scripts.pory"
	.string "You deserve every credit for coming\n"
	.string "this far as a Trainer of Pokémon.\p"
	.string "You do seem to know what is needed.\p"
	.string "Yes, what a Trainer needs is a\n"
	.string "virtuous heart.\p"
	.string "Pokémon touch the good hearts of\n"
	.string "Trainers and learn good from wrong.\p"
	.string "They touch the good hearts of\n"
	.string "Trainers and grow strong.\p"
	.string "Go! Go onwards!\n"
	.string "The Pokémon League is waiting!$"
