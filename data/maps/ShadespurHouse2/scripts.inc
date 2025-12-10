# 1 "data/maps/ShadespurHouse2/scripts.pory"

# 2 "data/maps/ShadespurHouse2/scripts.pory"
ShadespurHouse2_MapScripts::
# 3 "data/maps/ShadespurHouse2/scripts.pory"
	.byte 0

StrugglingArtist::
# 6 "data/maps/ShadespurHouse2/scripts.pory"
	lock
# 7 "data/maps/ShadespurHouse2/scripts.pory"
	faceplayer
# 8 "data/maps/ShadespurHouse2/scripts.pory"
	random 3
# 9 "data/maps/ShadespurHouse2/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/ShadespurHouse2/scripts.pory"
	case 0, StrugglingArtist_3
# 13 "data/maps/ShadespurHouse2/scripts.pory"
	case 1, StrugglingArtist_4
# 17 "data/maps/ShadespurHouse2/scripts.pory"
	case 2, StrugglingArtist_5
StrugglingArtist_1:
# 23 "data/maps/ShadespurHouse2/scripts.pory"
	release
	end

StrugglingArtist_3:
# 10 "data/maps/ShadespurHouse2/scripts.pory"
	msgbox StrugglingArtist_Text_0
	goto StrugglingArtist_1

StrugglingArtist_4:
# 13 "data/maps/ShadespurHouse2/scripts.pory"
	msgbox StrugglingArtist_Text_1
	goto StrugglingArtist_1

StrugglingArtist_5:
# 17 "data/maps/ShadespurHouse2/scripts.pory"
	msgbox StrugglingArtist_Text_2
	goto StrugglingArtist_1


StrugglingArtist_Text_0:
# 10 "data/maps/ShadespurHouse2/scripts.pory"
	.string "Ah, a visitor.\n"
	.string "I haven't seen a fresh face in...\l"
	.string "well, a long time.$"

StrugglingArtist_Text_1:
# 13 "data/maps/ShadespurHouse2/scripts.pory"
	.string "Shadespur Isle...\n"
	.string "it's ugly, lonely, and raw.\l"
	.string "Nobody here cares about aesthetics.\l"
	.string "They only care about profit and power.\p"
	.string "It’s perfect.$"

StrugglingArtist_Text_2:
# 17 "data/maps/ShadespurHouse2/scripts.pory"
	.string "I'm painting the truth of the Isle.\p"
	.string "The desperation, the sharp edges,\n"
	.string "the shadows.\p"
	.string "It's ugly, messy work, and I'll likely\n"
	.string "never sell a single piece. But at least...\l"
	.string "at least it's mine. It feels real.$"
