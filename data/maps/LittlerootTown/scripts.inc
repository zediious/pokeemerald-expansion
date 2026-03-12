LittlerootTown_MapScripts::
	.byte 0


LittlerootTown_EventScript_JordanSign::
# 1029 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1030 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanSign_Text_0
# 1031 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_TrainerTips01::
# 1036 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1037 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTips01_Text_0
# 1046 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_JordanTalk01::
# 1050 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1051 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1052 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanTalk01_Text_0
# 1055 "data/maps/LittlerootTown/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanTalk01_Movement_0
# 1056 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 1057 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ElderTalk01::
# 1061 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1062 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1063 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ElderTalk01_Text_0
# 1072 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1073 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ArtistTalk01::
# 1077 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1078 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1079 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ArtistTalk01_Text_0
# 1081 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1082 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_BlockageSailor::
# 1086 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1087 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1088 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageSailor_Text_0
# 1093 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_Sawgrass_Blockage_Sailor, LittlerootTown_EventScript_BlockageSailor_Movement_0
# 1094 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_BlockageAzumarill::
# 1099 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1100 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1101 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageAzumarill_Text_0
# 1102 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_HOUNDOOM, CRY_MODE_NORMAL
# 1103 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1104 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1105 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_TiredLady::
# 1110 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1111 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_0
# 1115 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1116 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 1117 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 1118 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1119 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1120 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1121 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TiredLady_Pooch::
# 1125 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1126 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 1127 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 1128 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1129 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1130 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1131 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_HusbandLament::
# 1135 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1136 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1137 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_HusbandLament_Text_0
# 1139 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1140 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_WifeCookingForSkitty::
# 1144 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1145 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1146 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_GOT_SOOTHE_BELL_SAWGRASS, LittlerootTown_EventScript_WifeCookingForSkitty_2
# 1153 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_1
# 1158 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1159 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 1160 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GOT_SOOTHE_BELL_SAWGRASS
LittlerootTown_EventScript_WifeCookingForSkitty_1:
# 1162 "data/maps/LittlerootTown/scripts.pory"
	release
# 1163 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_SAWGRASS_COOKINGMAMA, LittlerootTown_EventScript_BlockageSailor_Movement_0
	end

LittlerootTown_EventScript_WifeCookingForSkitty_2:
# 1147 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_0
	goto LittlerootTown_EventScript_WifeCookingForSkitty_1


LittlerootTown_EventScript_WifeCookingForSkitty_Skitty::
# 1168 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1169 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 1170 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0
# 1171 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1172 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1173 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1174 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TrainerTeachCatch01::
# 1179 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1180 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1181 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_0, MSGBOX_YESNO
# 1184 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_TrainerTeachCatch01_1
# 1200 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_2
# 1202 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_TrainerTeachCatch01_1:
# 1185 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_1
# 1190 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 1191 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1192 "data/maps/LittlerootTown/scripts.pory"
	removeobject ZED_Sawgrass_CatchTeacher
# 1193 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAWGRASS_TEACHER
# 1194 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 1
# 1195 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1196 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 1055 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_JordanTalk01_Movement_0:
# 1055 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 1093 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BlockageSailor_Movement_0:
# 1093 "data/maps/LittlerootTown/scripts.pory"
	face_up
	step_end

LittlerootTown_EventScript_JordanSign_Text_0:
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Jordan's House$"

LittlerootTown_EventScript_TrainerTips01_Text_0:
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Always be sure to go into\n"
	.string "the Pokemon center in new places you\l"
	.string "visit, even if you don't plan to use the\l"
	.string "services.\p"
	.string "That way, you'll respawn there if you\n"
	.string "lose a battle!$"

LittlerootTown_EventScript_JordanTalk01_Text_0:
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I worked all week, so I just\n"
	.string "want to relax today. Sorry! I know you\l"
	.string "and your Pokemon will enjoy it!$"

LittlerootTown_EventScript_ElderTalk01_Text_0:
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Elder:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sawgrass Village has been around\n"
	.string "for many years, in many different forms.\p"
	.string "War and volcanic eruptions have forced\n"
	.string "us to rebuild three times in my lifetime\p"
	.string "Despite this, we must remain. This place\n"
	.string "is sacred, and bears extreme importance\l"
	.string "to a certain Pokemon.$"

LittlerootTown_EventScript_ArtistTalk01_Text_0:
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Artist:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} This place is beautiful! My next\n"
	.string "piece will simply be inspired!$"

LittlerootTown_EventScript_BlockageSailor_Text_0:
# 1088 "data/maps/LittlerootTown/scripts.pory"
	.string "Sorry, this way is closed for now. There\n"
	.string "has been an incident, we don't have any\l"
	.string "details right now.\p"
	.string "You'll have to come back another time.$"

LittlerootTown_EventScript_BlockageAzumarill_Text_0:
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "Raaaaa!$"

LittlerootTown_EventScript_TiredLady_Text_0:
# 1111 "data/maps/LittlerootTown/scripts.pory"
	.string "My Poochyena has so much energy, I just\n"
	.string "can't run anymore!\p"
	.string "Look at him, he's still going!$"

LittlerootTown_EventScript_TiredLady_Text_1:
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "Rah!$"

LittlerootTown_EventScript_HusbandLament_Text_0:
# 1137 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty's got it made. I have to make my\n"
	.string "own meals!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_0:
# 1147 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty loves me for the food, but she's\n"
	.string "holding a Soothe Bell too!\p"
	.string "I hope Skitty loves me for who I am too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_1:
# 1153 "data/maps/LittlerootTown/scripts.pory"
	.string "I always make Skitty home-cooked\n"
	.string "meals. She absolutely loves them!\p"
	.string "Here, this can help your Pokemon grow\n"
	.string "to love you too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	.string "Meeow!$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_0:
# 1181 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Trainer:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I see you only have one\n"
	.string "Pokemon. Do you want to learn how\l"
	.string "to catch more?$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_1:
# 1185 "data/maps/LittlerootTown/scripts.pory"
	.string "Great. Here, have a Poke Ball. I\n"
	.string "challenge you to catch one on your own,\l"
	.string "on your way through Route 101.\p"
	.string "I'll meet you at the end of the route.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_2:
# 1200 "data/maps/LittlerootTown/scripts.pory"
	.string "Got it, I suppose you'll figure it out on\n"
	.string "your own.$"
