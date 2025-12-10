# 1 "data/maps/ShadespurHouse1/scripts.pory"

# 2 "data/maps/ShadespurHouse1/scripts.pory"
ShadespurHouse1_MapScripts::
# 3 "data/maps/ShadespurHouse1/scripts.pory"
	.byte 0

MysteryMan::
# 6 "data/maps/ShadespurHouse1/scripts.pory"
	lock
# 7 "data/maps/ShadespurHouse1/scripts.pory"
	faceplayer
# 8 "data/maps/ShadespurHouse1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POLICIES, MysteryMan_2
# 36 "data/maps/ShadespurHouse1/scripts.pory"
	msgbox PostScamIMeanSale
MysteryMan_1:
# 38 "data/maps/ShadespurHouse1/scripts.pory"
	hidemoneybox
# 39 "data/maps/ShadespurHouse1/scripts.pory"
	release
	end

MysteryMan_2:
# 9 "data/maps/ShadespurHouse1/scripts.pory"
	goto_if_unset FLAG_TEMP_1, MysteryMan_6
MysteryMan_5:
# 13 "data/maps/ShadespurHouse1/scripts.pory"
	showmoneybox 0, 0
# 14 "data/maps/ShadespurHouse1/scripts.pory"
	msgbox ShadyDealings, MSGBOX_YESNO
# 15 "data/maps/ShadespurHouse1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MysteryMan_8
# 29 "data/maps/ShadespurHouse1/scripts.pory"
	hidemoneybox
# 30 "data/maps/ShadespurHouse1/scripts.pory"
	msgbox YouWillBeBack
# 31 "data/maps/ShadespurHouse1/scripts.pory"
	release
	end

MysteryMan_6:
# 10 "data/maps/ShadespurHouse1/scripts.pory"
	msgbox MysteryManIntro
# 11 "data/maps/ShadespurHouse1/scripts.pory"
	setflag FLAG_TEMP_1
	goto MysteryMan_5

MysteryMan_8:
# 16 "data/maps/ShadespurHouse1/scripts.pory"
	checkmoney 50000
# 17 "data/maps/ShadespurHouse1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MysteryMan_11
# 25 "data/maps/ShadespurHouse1/scripts.pory"
	call NotEnoughMoney
	goto MysteryMan_1

MysteryMan_11:
# 18 "data/maps/ShadespurHouse1/scripts.pory"
	checkitemspace ITEM_WEAKNESS_POLICY
# 19 "data/maps/ShadespurHouse1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 20 "data/maps/ShadespurHouse1/scripts.pory"
	checkitemspace ITEM_BLUNDER_POLICY
# 21 "data/maps/ShadespurHouse1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 22 "data/maps/ShadespurHouse1/scripts.pory"
	call MaketheDeal
	goto MysteryMan_1


MaketheDeal::
# 44 "data/maps/ShadespurHouse1/scripts.pory"
	removemoney 50000
# 45 "data/maps/ShadespurHouse1/scripts.pory"
	updatemoneybox
# 46 "data/maps/ShadespurHouse1/scripts.pory"
	giveitem ITEM_WEAKNESS_POLICY
# 47 "data/maps/ShadespurHouse1/scripts.pory"
	giveitem ITEM_BLUNDER_POLICY
# 48 "data/maps/ShadespurHouse1/scripts.pory"
	hidemoneybox
# 49 "data/maps/ShadespurHouse1/scripts.pory"
	msgbox WiseChoice
# 50 "data/maps/ShadespurHouse1/scripts.pory"
	setflag FLAG_RECEIVED_POLICIES
# 51 "data/maps/ShadespurHouse1/scripts.pory"
	release
	end


NotEnoughMoney::
# 56 "data/maps/ShadespurHouse1/scripts.pory"
	hidemoneybox
# 57 "data/maps/ShadespurHouse1/scripts.pory"
	msgbox TooPoor
# 58 "data/maps/ShadespurHouse1/scripts.pory"
	release
	end


MysteryManIntro::
# 62 "data/maps/ShadespurHouse1/scripts.pory"
	.string "Welcome, welcome!\n"
	.string "Come closer.\p"
	.string "I run a very exclusive market\n"
	.string "here on Shadespur Isle.\p"
	.string "You see, I sell...\n"
	.string "promises.\p"
	.string "Would hate for something...\n"
	.string "bad...\l"
	.string "to happen to your Pokémon, right?\p"
	.string "I have two exquisite pieces for a\n"
	.string "daring trainer like yourself.\p"
	.string "Think of them as advanced\n"
	.string "insurance policies.\p"
	.string "You pay the premium of failure,\n"
	.string "but the payout...\l"
	.string "the payout is incredible.$"

ShadyDealings::
# 80 "data/maps/ShadespurHouse1/scripts.pory"
	.string "I'll sell you both policies for ¥50,000.\p"
	.string "What do you say?\n"
	.string "Ready to invest in some beautiful risk?$"

YouWillBeBack::
# 86 "data/maps/ShadespurHouse1/scripts.pory"
	.string "I see...\p"
	.string "You prefer the certainty of weakness,\n"
	.string "then. A shame.\l"
	.string "But don't worry.\l"
	.string "This Isle has a way of showing trainers\l"
	.string "what they need.\l"
	.string "You will find your way back to me.\p"
	.string "Everyone does...$"

WiseChoice::
# 95 "data/maps/ShadespurHouse1/scripts.pory"
	.string "Use them wisely.\n"
	.string "Don't fear the risk, embrace it.\p"
	.string "Show them that a little bit of failure is\n"
	.string "just a setup for success.$"

TooPoor::
# 100 "data/maps/ShadespurHouse1/scripts.pory"
	.string "It looks like you are\n"
	.string "too poor for my polices.\p"
	.string "Come back when you can afford them.$"

PostScamIMeanSale::
# 106 "data/maps/ShadespurHouse1/scripts.pory"
	.string "The Weakness Policy is for those who\n"
	.string "welcome pain.\p"
	.string "It multiplies your strength the moment\n"
	.string "you should have fallen.\p"
	.string "The Blunder Policy is for the clumsy.\n"
	.string "It turns an embarrassing miss into\l"
	.string "lightning speed.\p"
	.string "Remember, success is just the\n"
	.string "exploitation of risk. Don't forget that.$"
