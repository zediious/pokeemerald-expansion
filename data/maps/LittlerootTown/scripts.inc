LittlerootTown_MapScripts::
	.byte 0


LittlerootTown_EventScript_JordanSign::
# 5 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 6 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanSign_Text_0
# 7 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_TrainerTips01::
# 12 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 13 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTips01_Text_0
# 22 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_JordanTalk01::
# 26 "data/maps/LittlerootTown/scripts.pory"
	lock
# 27 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 28 "data/maps/LittlerootTown/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_SPECIES
# 29 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanTalk01_Text_0
# 32 "data/maps/LittlerootTown/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanTalk01_Movement_0
# 33 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 34 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ElderTalk01::
# 38 "data/maps/LittlerootTown/scripts.pory"
	lock
# 39 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 40 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ElderTalk01_Text_0
# 49 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 50 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ArtistTalk01::
# 54 "data/maps/LittlerootTown/scripts.pory"
	lock
# 55 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 56 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ArtistTalk01_Text_0
# 58 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 59 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_BlockageSailor::
# 63 "data/maps/LittlerootTown/scripts.pory"
	lock
# 64 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 65 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageSailor_Text_0
# 71 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_Sawgrass_Blockage_Sailor, LittlerootTown_EventScript_BlockageSailor_Movement_0
# 72 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_BlockageAzumarill::
# 77 "data/maps/LittlerootTown/scripts.pory"
	lock
# 78 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 79 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageAzumarill_Text_0
# 80 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_HOUNDOOM, CRY_MODE_NORMAL
# 81 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 82 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 83 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_TiredLady::
# 88 "data/maps/LittlerootTown/scripts.pory"
	lock
# 89 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_0
# 93 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 94 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 95 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 96 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 97 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 98 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 99 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TiredLady_Pooch::
# 103 "data/maps/LittlerootTown/scripts.pory"
	lock
# 104 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 105 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 106 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 107 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 108 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 109 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_HusbandLament::
# 113 "data/maps/LittlerootTown/scripts.pory"
	lock
# 114 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 115 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_HusbandLament_Text_0
# 117 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 118 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_WifeCookingForSkitty::
# 122 "data/maps/LittlerootTown/scripts.pory"
	lock
# 123 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 124 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_GOT_SOOTHE_BELL_SAWGRASS, LittlerootTown_EventScript_WifeCookingForSkitty_2
# 131 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_1
# 136 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 137 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 138 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GOT_SOOTHE_BELL_SAWGRASS
LittlerootTown_EventScript_WifeCookingForSkitty_1:
# 140 "data/maps/LittlerootTown/scripts.pory"
	release
# 141 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_SAWGRASS_COOKINGMAMA, LittlerootTown_EventScript_BlockageSailor_Movement_0
	end

LittlerootTown_EventScript_WifeCookingForSkitty_2:
# 125 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_0
	goto LittlerootTown_EventScript_WifeCookingForSkitty_1


LittlerootTown_EventScript_WifeCookingForSkitty_Skitty::
# 146 "data/maps/LittlerootTown/scripts.pory"
	lock
# 147 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 148 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 150 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 151 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 152 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TrainerTeachCatch01::
# 157 "data/maps/LittlerootTown/scripts.pory"
	lock
# 158 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 159 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_0, MSGBOX_YESNO
# 162 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_TrainerTeachCatch01_1
# 180 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_3
# 182 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_TrainerTeachCatch01_1:
# 163 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_1
# 164 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 165 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_2
# 171 "data/maps/LittlerootTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 172 "data/maps/LittlerootTown/scripts.pory"
	removeobject ZED_Sawgrass_CatchTeacher
# 173 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAWGRASS_TEACHER
# 174 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 1
# 175 "data/maps/LittlerootTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 176 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 32 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_JordanTalk01_Movement_0:
# 32 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BlockageSailor_Movement_0:
# 71 "data/maps/LittlerootTown/scripts.pory"
	face_up
	step_end

LittlerootTown_EventScript_JordanSign_Text_0:
# 6 "data/maps/LittlerootTown/scripts.pory"
	.string "Jordan's House$"

LittlerootTown_EventScript_TrainerTips01_Text_0:
# 13 "data/maps/LittlerootTown/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Always be sure to go into\n"
	.string "the Pokemon center in new places you\l"
	.string "visit, even if you don't plan to use the\l"
	.string "services.\p"
	.string "That way, you'll respawn there if you\n"
	.string "lose a battle!$"

LittlerootTown_EventScript_JordanTalk01_Text_0:
# 29 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I worked all week, so I just\n"
	.string "want to relax today. Sorry! I know you\l"
	.string "and {STR_VAR_1} will enjoy it!$"

LittlerootTown_EventScript_ElderTalk01_Text_0:
# 40 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Elder:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sawgrass Village has been around\n"
	.string "for many years, in many different forms.\p"
	.string "War and volcanic eruptions have forced\n"
	.string "us to rebuild three times in my lifetime\p"
	.string "Despite this, we must remain. This place\n"
	.string "is sacred, and bears extreme importance\l"
	.string "to a certain Pokemon.$"

LittlerootTown_EventScript_ArtistTalk01_Text_0:
# 56 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Artist:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} This place is beautiful! My next\n"
	.string "piece will simply be inspired!$"

LittlerootTown_EventScript_BlockageSailor_Text_0:
# 65 "data/maps/LittlerootTown/scripts.pory"
	.string "Sorry, this way is closed for now.\p"
	.string "There's...uhhhh...something going on\n"
	.string "there. Important stuff.\p"
	.string "You'll have to come back another time.$"

LittlerootTown_EventScript_BlockageAzumarill_Text_0:
# 79 "data/maps/LittlerootTown/scripts.pory"
	.string "Raaaaa!$"

LittlerootTown_EventScript_TiredLady_Text_0:
# 89 "data/maps/LittlerootTown/scripts.pory"
	.string "My Poochyena has so much energy, I just\n"
	.string "can't run anymore!\p"
	.string "Look at him, he's still going!$"

LittlerootTown_EventScript_TiredLady_Text_1:
# 94 "data/maps/LittlerootTown/scripts.pory"
	.string "Rah!$"

LittlerootTown_EventScript_HusbandLament_Text_0:
# 115 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty's got it made. I have to make my\n"
	.string "own meals!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_0:
# 125 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty loves me for the food, but she's\n"
	.string "holding a Soothe Bell too!\p"
	.string "I hope Skitty loves me for who I am too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_1:
# 131 "data/maps/LittlerootTown/scripts.pory"
	.string "I always make Skitty home-cooked\n"
	.string "meals. She absolutely loves them!\p"
	.string "Here, this can help your Pokemon grow\n"
	.string "to love you too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0:
# 148 "data/maps/LittlerootTown/scripts.pory"
	.string "Meeow!$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_0:
# 159 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Trainer:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I see you only have one\n"
	.string "Pokemon. Do you want to learn how\l"
	.string "to catch more?$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_1:
# 163 "data/maps/LittlerootTown/scripts.pory"
	.string "Great. Here, have a Poke Ball.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_2:
# 165 "data/maps/LittlerootTown/scripts.pory"
	.string "I challenge you to catch one on\n"
	.string "your own, on your way through\l"
	.string "Route 101.\p"
	.string "I'll meet you at the east side of\n"
	.string "the route.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_3:
# 180 "data/maps/LittlerootTown/scripts.pory"
	.string "Got it, I suppose you'll figure it out on\n"
	.string "your own.$"
