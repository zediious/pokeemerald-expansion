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
# 73 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_Sawgrass_Blockage_Sailor, LittlerootTown_EventScript_BlockageSailor_Movement_0
# 74 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_BlockageAzumarill::
# 79 "data/maps/LittlerootTown/scripts.pory"
	lock
# 80 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 81 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageAzumarill_Text_0
# 82 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_HOUNDOOM, CRY_MODE_NORMAL
# 83 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 84 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 85 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_TiredLady::
# 90 "data/maps/LittlerootTown/scripts.pory"
	lock
# 91 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_0
# 95 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 96 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 97 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 98 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 99 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 100 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 101 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TiredLady_Pooch::
# 105 "data/maps/LittlerootTown/scripts.pory"
	lock
# 106 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 107 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 108 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 109 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 110 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 111 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_HusbandLament::
# 115 "data/maps/LittlerootTown/scripts.pory"
	lock
# 116 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 117 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_HusbandLament_Text_0
# 119 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 120 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_WifeCookingForSkitty::
# 124 "data/maps/LittlerootTown/scripts.pory"
	lock
# 125 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 126 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_GOT_SOOTHE_BELL_SAWGRASS, LittlerootTown_EventScript_WifeCookingForSkitty_2
# 133 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_1
# 138 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 139 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 140 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GOT_SOOTHE_BELL_SAWGRASS
LittlerootTown_EventScript_WifeCookingForSkitty_1:
# 142 "data/maps/LittlerootTown/scripts.pory"
	release
# 143 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_SAWGRASS_COOKINGMAMA, LittlerootTown_EventScript_BlockageSailor_Movement_0
	end

LittlerootTown_EventScript_WifeCookingForSkitty_2:
# 127 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_0
	goto LittlerootTown_EventScript_WifeCookingForSkitty_1


LittlerootTown_EventScript_WifeCookingForSkitty_Skitty::
# 148 "data/maps/LittlerootTown/scripts.pory"
	lock
# 149 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 150 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0
# 151 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 153 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 154 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TrainerTeachCatch01::
# 159 "data/maps/LittlerootTown/scripts.pory"
	lock
# 160 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 161 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_0, MSGBOX_YESNO
# 164 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_TrainerTeachCatch01_1
# 182 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_3
# 184 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_TrainerTeachCatch01_1:
# 165 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_1
# 166 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 167 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_2
# 173 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 174 "data/maps/LittlerootTown/scripts.pory"
	removeobject ZED_Sawgrass_CatchTeacher
# 175 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAWGRASS_TEACHER
# 176 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 1
# 177 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 178 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 32 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_JordanTalk01_Movement_0:
# 32 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BlockageSailor_Movement_0:
# 73 "data/maps/LittlerootTown/scripts.pory"
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
	.string "Someone broke all the lamps in\n"
	.string "{COLOR RED}Sawgrass Forest{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, and the place is pitch\l"
	.string "without them. We're working on repairing\l"
	.string "them now.\p"
	.string "You'll have to come back another time.$"

LittlerootTown_EventScript_BlockageAzumarill_Text_0:
# 81 "data/maps/LittlerootTown/scripts.pory"
	.string "Raaaaa!$"

LittlerootTown_EventScript_TiredLady_Text_0:
# 91 "data/maps/LittlerootTown/scripts.pory"
	.string "My Poochyena has so much energy, I just\n"
	.string "can't run anymore!\p"
	.string "Look at him, he's still going!$"

LittlerootTown_EventScript_TiredLady_Text_1:
# 96 "data/maps/LittlerootTown/scripts.pory"
	.string "Rah!$"

LittlerootTown_EventScript_HusbandLament_Text_0:
# 117 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty's got it made. I have to make my\n"
	.string "own meals!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_0:
# 127 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty loves me for the food, but she's\n"
	.string "holding a Soothe Bell too!\p"
	.string "I hope Skitty loves me for who I am too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_1:
# 133 "data/maps/LittlerootTown/scripts.pory"
	.string "I always make Skitty home-cooked\n"
	.string "meals. She absolutely loves them!\p"
	.string "Here, this can help your Pokemon grow\n"
	.string "to love you too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0:
# 150 "data/maps/LittlerootTown/scripts.pory"
	.string "Meeow!$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_0:
# 161 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Trainer:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I see you only have one\n"
	.string "Pokemon. Do you want to learn how\l"
	.string "to catch more?$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_1:
# 165 "data/maps/LittlerootTown/scripts.pory"
	.string "Great. Here, have a Poke Ball.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_2:
# 167 "data/maps/LittlerootTown/scripts.pory"
	.string "I challenge you to catch one on\n"
	.string "your own, on your way through\l"
	.string "Route 101.\p"
	.string "I'll meet you at the east side of\n"
	.string "the route.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_3:
# 182 "data/maps/LittlerootTown/scripts.pory"
	.string "Got it, I suppose you'll figure it out on\n"
	.string "your own.$"
