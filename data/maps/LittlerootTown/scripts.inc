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
	setspeaker LittlerootTown_EventScript_JordanTalk01_Text_0
# 30 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanTalk01_Text_1
# 33 "data/maps/LittlerootTown/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanTalk01_Movement_0
# 34 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 35 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ElderTalk01::
# 39 "data/maps/LittlerootTown/scripts.pory"
	lock
# 40 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 41 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_ElderTalk01_Text_0
# 42 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ElderTalk01_Text_1
# 51 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 52 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ArtistTalk01::
# 56 "data/maps/LittlerootTown/scripts.pory"
	lock
# 57 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 58 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_ArtistTalk01_Text_0
# 59 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ArtistTalk01_Text_1
# 61 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 62 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_BlockageSailor::
# 66 "data/maps/LittlerootTown/scripts.pory"
	lock
# 67 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 68 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_BlockageSailor_Text_0
# 69 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageSailor_Text_1
# 75 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_Sawgrass_Blockage_Sailor, LittlerootTown_EventScript_BlockageSailor_Movement_0
# 76 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_BlockageAzumarill::
# 81 "data/maps/LittlerootTown/scripts.pory"
	lock
# 82 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 83 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_BlockageAzumarill_Text_0
# 84 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageAzumarill_Text_1
# 85 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_HOUNDOOM, CRY_MODE_NORMAL
# 86 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 87 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 88 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_TiredLady::
# 93 "data/maps/LittlerootTown/scripts.pory"
	lock
# 94 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_TiredLady_Text_0
# 95 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 99 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 100 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_TiredLady_Text_2
# 101 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_3
# 102 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 103 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 104 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 105 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 106 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TiredLady_Pooch::
# 110 "data/maps/LittlerootTown/scripts.pory"
	lock
# 111 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 112 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_TiredLady_Text_2
# 113 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_3
# 114 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 115 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 116 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 117 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_HusbandLament::
# 121 "data/maps/LittlerootTown/scripts.pory"
	lock
# 122 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 123 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_HusbandLament_Text_0
# 124 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_HusbandLament_Text_1
# 126 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 127 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_WifeCookingForSkitty::
# 131 "data/maps/LittlerootTown/scripts.pory"
	lock
# 132 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 133 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_WifeCookingForSkitty_Text_0
# 134 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_GOT_SOOTHE_BELL_SAWGRASS, LittlerootTown_EventScript_WifeCookingForSkitty_2
# 141 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_2
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 147 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 148 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GOT_SOOTHE_BELL_SAWGRASS
LittlerootTown_EventScript_WifeCookingForSkitty_1:
# 150 "data/maps/LittlerootTown/scripts.pory"
	release
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_SAWGRASS_COOKINGMAMA, LittlerootTown_EventScript_BlockageSailor_Movement_0
	end

LittlerootTown_EventScript_WifeCookingForSkitty_2:
# 135 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_1
	goto LittlerootTown_EventScript_WifeCookingForSkitty_1


LittlerootTown_EventScript_WifeCookingForSkitty_Skitty::
# 156 "data/maps/LittlerootTown/scripts.pory"
	lock
# 157 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 158 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0
# 159 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_1
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 162 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 163 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_KidOutside::
# 167 "data/maps/LittlerootTown/scripts.pory"
	lock
# 168 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 169 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_KidOutside_Text_0
# 170 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_KidOutside_Text_1
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 173 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_BUNNELBY, CRY_MODE_NORMAL
# 174 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_KidOutside_Text_2
# 175 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_KidOutside_Text_3
# 176 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 177 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 178 "data/maps/LittlerootTown/scripts.pory"
	release
# 179 "data/maps/LittlerootTown/scripts.pory"
	applymovement SAWGRASS_KID_OUTSIDE, LittlerootTown_EventScript_KidOutside_Movement_0
# 180 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
	end


LittlerootTown_EventScript_KidOutsideBunnelby::
# 185 "data/maps/LittlerootTown/scripts.pory"
	lock
# 186 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 187 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_BUNNELBY, CRY_MODE_NORMAL
# 188 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_KidOutside_Text_2
# 189 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_KidOutside_Text_3
# 190 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 191 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 192 "data/maps/LittlerootTown/scripts.pory"
	release
# 193 "data/maps/LittlerootTown/scripts.pory"
	applymovement SAWGRASS_KID_OUTSIDE_MON, LittlerootTown_EventScript_JordanTalk01_Movement_0
# 194 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
	end


LittlerootTown_EventScript_TrainerTeachCatch01::
# 200 "data/maps/LittlerootTown/scripts.pory"
	lock
# 201 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 202 "data/maps/LittlerootTown/scripts.pory"
	setspeaker LittlerootTown_EventScript_TrainerTeachCatch01_Text_0
# 203 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_1, MSGBOX_YESNO
# 205 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_TrainerTeachCatch01_1
# 223 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_4
# 225 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_TrainerTeachCatch01_1:
# 206 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_2
# 207 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 208 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_3
# 214 "data/maps/LittlerootTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 215 "data/maps/LittlerootTown/scripts.pory"
	removeobject ZED_Sawgrass_CatchTeacher
# 216 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAWGRASS_TEACHER
# 217 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 1
# 218 "data/maps/LittlerootTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 219 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 33 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_JordanTalk01_Movement_0:
# 33 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BlockageSailor_Movement_0:
# 75 "data/maps/LittlerootTown/scripts.pory"
	face_up
	step_end

# 179 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_KidOutside_Movement_0:
# 179 "data/maps/LittlerootTown/scripts.pory"
	face_right
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
	.string "Jordan$"

LittlerootTown_EventScript_JordanTalk01_Text_1:
# 30 "data/maps/LittlerootTown/scripts.pory"
	.string "I worked all week, so I just want to\n"
	.string "relax today. Sorry! I know you and\l"
	.string "{STR_VAR_1} will enjoy it!$"

LittlerootTown_EventScript_ElderTalk01_Text_0:
# 41 "data/maps/LittlerootTown/scripts.pory"
	.string "Elder$"

LittlerootTown_EventScript_ElderTalk01_Text_1:
# 42 "data/maps/LittlerootTown/scripts.pory"
	.string "Sawgrass Village has been around for\n"
	.string "many years, in many different forms.\p"
	.string "War and volcanic eruptions have forced\n"
	.string "us to rebuild three times in my lifetime\p"
	.string "Despite this, we must remain. This place\n"
	.string "is sacred, and bears extreme importance\l"
	.string "to a certain Pokemon.$"

LittlerootTown_EventScript_ArtistTalk01_Text_0:
# 58 "data/maps/LittlerootTown/scripts.pory"
	.string "Artist$"

LittlerootTown_EventScript_ArtistTalk01_Text_1:
# 59 "data/maps/LittlerootTown/scripts.pory"
	.string "This place is beautiful! My next piece\n"
	.string "will simply be inspired!$"

LittlerootTown_EventScript_BlockageSailor_Text_0:
# 68 "data/maps/LittlerootTown/scripts.pory"
	.string "Suspicious Man$"

LittlerootTown_EventScript_BlockageSailor_Text_1:
# 69 "data/maps/LittlerootTown/scripts.pory"
	.string "Sorry, this way is closed for now.\p"
	.string "There's...uhhhh...something going on\n"
	.string "there. Important stuff.\p"
	.string "You'll have to come back another time.$"

LittlerootTown_EventScript_BlockageAzumarill_Text_0:
# 83 "data/maps/LittlerootTown/scripts.pory"
	.string "Houndoom$"

LittlerootTown_EventScript_BlockageAzumarill_Text_1:
# 84 "data/maps/LittlerootTown/scripts.pory"
	.string "Raaaaa!$"

LittlerootTown_EventScript_TiredLady_Text_0:
# 94 "data/maps/LittlerootTown/scripts.pory"
	.string "Old Woman$"

LittlerootTown_EventScript_TiredLady_Text_1:
# 95 "data/maps/LittlerootTown/scripts.pory"
	.string "My Poochyena has so much energy, I just\n"
	.string "can't run anymore!\p"
	.string "Look at him, he's still going!$"

LittlerootTown_EventScript_TiredLady_Text_2:
# 100 "data/maps/LittlerootTown/scripts.pory"
	.string "Poochyena$"

LittlerootTown_EventScript_TiredLady_Text_3:
# 101 "data/maps/LittlerootTown/scripts.pory"
	.string "Rah!$"

LittlerootTown_EventScript_HusbandLament_Text_0:
# 123 "data/maps/LittlerootTown/scripts.pory"
	.string "Man$"

LittlerootTown_EventScript_HusbandLament_Text_1:
# 124 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty's got it made. I have to make my\n"
	.string "own meals!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_0:
# 133 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty's Mom$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_1:
# 135 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty loves me for the food, but she's\n"
	.string "holding a Soothe Bell too!\p"
	.string "I hope Skitty loves me for who I am too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_2:
# 141 "data/maps/LittlerootTown/scripts.pory"
	.string "I always make Skitty home-cooked\n"
	.string "meals. She absolutely loves them!\p"
	.string "Here, this can help your Pokemon grow\n"
	.string "to love you too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0:
# 158 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty$"

LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_1:
# 159 "data/maps/LittlerootTown/scripts.pory"
	.string "Meeow!$"

LittlerootTown_EventScript_KidOutside_Text_0:
# 169 "data/maps/LittlerootTown/scripts.pory"
	.string "Child$"

LittlerootTown_EventScript_KidOutside_Text_1:
# 170 "data/maps/LittlerootTown/scripts.pory"
	.string "I love my {COLOR RED}Bunnelbly{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, they always play\n"
	.string "with me!$"

LittlerootTown_EventScript_KidOutside_Text_2:
# 174 "data/maps/LittlerootTown/scripts.pory"
	.string "Bunnelby$"

LittlerootTown_EventScript_KidOutside_Text_3:
# 175 "data/maps/LittlerootTown/scripts.pory"
	.string "Oiii-wa$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_0:
# 202 "data/maps/LittlerootTown/scripts.pory"
	.string "Trainer$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_1:
# 203 "data/maps/LittlerootTown/scripts.pory"
	.string "I see you only have one Pokemon. Do you\n"
	.string "want to learn how to catch more?$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_2:
# 206 "data/maps/LittlerootTown/scripts.pory"
	.string "Great. Here, have a Poke Ball.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_3:
# 208 "data/maps/LittlerootTown/scripts.pory"
	.string "I challenge you to catch one on\n"
	.string "your own, on your way through\l"
	.string "Route 101.\p"
	.string "I'll meet you at the east side of\n"
	.string "the route.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_4:
# 223 "data/maps/LittlerootTown/scripts.pory"
	.string "Got it, I suppose you'll figure it out on\n"
	.string "your own.$"
