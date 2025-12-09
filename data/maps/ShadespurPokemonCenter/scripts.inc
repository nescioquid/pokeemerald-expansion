# 1 "data/maps/ShadespurPokemonCenter/scripts.pory"
ShadespurPokemonCenter_MapScripts::
# 2 "data/maps/ShadespurPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShadespurPokemonCenter_OnTransition
# 3 "data/maps/ShadespurPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 4 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.byte 0
# 5 "data/maps/ShadespurPokemonCenter/scripts.pory"

# 6 "data/maps/ShadespurPokemonCenter/scripts.pory"
ShadespurPokemonCenter_OnTransition:
# 7 "data/maps/ShadespurPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SHADESPUR_ISLE
# 8 "data/maps/ShadespurPokemonCenter/scripts.pory"
	end
# 9 "data/maps/ShadespurPokemonCenter/scripts.pory"

# 10 "data/maps/ShadespurPokemonCenter/scripts.pory"
ShadespurPokemonCenter_EventScript_Nurse::
# 11 "data/maps/ShadespurPokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_SHADESPUR_NURSE
# 12 "data/maps/ShadespurPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/ShadespurPokemonCenter/scripts.pory"
	waitmessage
# 14 "data/maps/ShadespurPokemonCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/ShadespurPokemonCenter/scripts.pory"
	release
# 16 "data/maps/ShadespurPokemonCenter/scripts.pory"
	end

Aqua_Grunt_Chats::
# 19 "data/maps/ShadespurPokemonCenter/scripts.pory"
	lock
# 20 "data/maps/ShadespurPokemonCenter/scripts.pory"
	faceplayer
# 21 "data/maps/ShadespurPokemonCenter/scripts.pory"
	random 3
# 22 "data/maps/ShadespurPokemonCenter/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/ShadespurPokemonCenter/scripts.pory"
	case 0, Aqua_Grunt_Chats_3
# 27 "data/maps/ShadespurPokemonCenter/scripts.pory"
	case 1, Aqua_Grunt_Chats_4
# 31 "data/maps/ShadespurPokemonCenter/scripts.pory"
	case 2, Aqua_Grunt_Chats_5
Aqua_Grunt_Chats_1:
# 37 "data/maps/ShadespurPokemonCenter/scripts.pory"
	release
	end

Aqua_Grunt_Chats_3:
# 23 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox Aqua_Grunt_Chats_Text_0
	goto Aqua_Grunt_Chats_1

Aqua_Grunt_Chats_4:
# 27 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox Aqua_Grunt_Chats_Text_1
	goto Aqua_Grunt_Chats_1

Aqua_Grunt_Chats_5:
# 31 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox Aqua_Grunt_Chats_Text_2
	goto Aqua_Grunt_Chats_1


Magma_Grunt_Chats::
# 42 "data/maps/ShadespurPokemonCenter/scripts.pory"
	lock
# 43 "data/maps/ShadespurPokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/ShadespurPokemonCenter/scripts.pory"
	random 3
# 45 "data/maps/ShadespurPokemonCenter/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/ShadespurPokemonCenter/scripts.pory"
	case 0, Magma_Grunt_Chats_3
# 51 "data/maps/ShadespurPokemonCenter/scripts.pory"
	case 1, Magma_Grunt_Chats_4
# 56 "data/maps/ShadespurPokemonCenter/scripts.pory"
	case 2, Magma_Grunt_Chats_5
Magma_Grunt_Chats_1:
# 63 "data/maps/ShadespurPokemonCenter/scripts.pory"
	release
	end

Magma_Grunt_Chats_3:
# 46 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox Magma_Grunt_Chats_Text_0
	goto Magma_Grunt_Chats_1

Magma_Grunt_Chats_4:
# 51 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox Magma_Grunt_Chats_Text_1
	goto Magma_Grunt_Chats_1

Magma_Grunt_Chats_5:
# 56 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox Magma_Grunt_Chats_Text_2
	goto Magma_Grunt_Chats_1


OldManWarning::
# 68 "data/maps/ShadespurPokemonCenter/scripts.pory"
	lock
# 69 "data/maps/ShadespurPokemonCenter/scripts.pory"
	faceplayer
# 70 "data/maps/ShadespurPokemonCenter/scripts.pory"
	msgbox OldManWarning_Text_0
# 73 "data/maps/ShadespurPokemonCenter/scripts.pory"
	release
	end


Aqua_Grunt_Chats_Text_0:
# 23 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "Well look what the tide dragged in. A\n"
	.string "fresh face. Don't worry, kid, we won't\l"
	.string "steal your Pokémon. We're done with all\l"
	.string "that. We just... ran out of oceans to\l"
	.string "conquer.$"

Aqua_Grunt_Chats_Text_1:
# 27 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "The hardest part of leaving? The quiet.\n"
	.string "No more yelling, no more rushed orders,\l"
	.string "no more bosses treating you like a\l"
	.string "spare anchor. This island is cold, but at\l"
	.string "least the cold is honest.$"

Aqua_Grunt_Chats_Text_2:
# 31 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "I heard the boss is still out there,\n"
	.string "pushing for the Eternal Tide. Good luck\l"
	.string "to him. I just needed a place where I\l"
	.string "didn't have to choose between a life\l"
	.string "jacket and a jail cell. This place,\l"
	.string "Shadespur Isle, it's far enough from\l"
	.string "everyone.$"

Magma_Grunt_Chats_Text_0:
# 46 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "You startled me. Yeah, I’m Magma. He's\n"
	.string "Aqua. We found this spot and called a\l"
	.string "truce. Out here, we're not teams, we're\l"
	.string "just... outcasts. Nothing worse than\l"
	.string "being a grunt without a team to back\l"
	.string "you up.$"

Magma_Grunt_Chats_Text_1:
# 51 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "The boss always talked about the\n"
	.string "perfect land, the perfect world. But\l"
	.string "the only perfect thing I ever found was\l"
	.string "a cot that didn't smell like volcanic\l"
	.string "sulfur. We’re all refugees from our own\l"
	.string "bad decisions, kid.$"

Magma_Grunt_Chats_Text_2:
# 56 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "You see that computer? It's rigged for\n"
	.string "basic healing and storage. No network.\l"
	.string "No calls back to headquarters. We made\l"
	.string "sure of that. This isn't just a hideout;\l"
	.string "it's a dead zone. If you want peace,\l"
	.string "this is where you go when the fighting\l"
	.string "gets too loud.$"

OldManWarning_Text_0:
# 70 "data/maps/ShadespurPokemonCenter/scripts.pory"
	.string "They call this place a refuge. But the\n"
	.string "shore is where you bury your debts, not\l"
	.string "pay them. Be careful who you owe, young\l"
	.string "one.$"
