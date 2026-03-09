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


LittlerootTown_EventScript_JordanTalk01::
# 1035 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1036 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1037 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanTalk01_Text_0
# 1040 "data/maps/LittlerootTown/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanTalk01_Movement_0
# 1041 "data/maps/LittlerootTown/scripts.pory"
	waitmovement
# 1042 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ElderTalk01::
# 1046 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1047 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1048 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ElderTalk01_Text_0
# 1057 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1058 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_ArtistTalk01::
# 1062 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1063 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1064 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_ArtistTalk01_Text_0
# 1066 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1067 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_BlockageSailor::
# 1071 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1072 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1073 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageSailor_Text_0
# 1078 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_Sawgrass_Blockage_Sailor, LittlerootTown_EventScript_BlockageSailor_Movement_0
# 1079 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_BlockageAzumarill::
# 1084 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1085 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1086 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_BlockageAzumarill_Text_0
# 1087 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 1088 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1089 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1090 "data/maps/LittlerootTown/scripts.pory"
	release
	end


LittlerootTown_EventScript_TiredLady::
# 1095 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1096 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_0
# 1100 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1101 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 1102 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 1103 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1104 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1105 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1106 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TiredLady_Pooch::
# 1110 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1111 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 1112 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TiredLady_Text_1
# 1113 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1114 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1115 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1116 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_HusbandLament::
# 1120 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1121 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1122 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_HusbandLament_Text_0
# 1124 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1125 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_WifeCookingForSkitty::
# 1129 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1130 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1131 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_GOT_SOOTHE_BELL_SAWGRASS, LittlerootTown_EventScript_WifeCookingForSkitty_2
# 1138 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_1
# 1143 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1144 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_SOOTHE_BELL, 1
# 1145 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_GOT_SOOTHE_BELL_SAWGRASS
LittlerootTown_EventScript_WifeCookingForSkitty_1:
# 1147 "data/maps/LittlerootTown/scripts.pory"
	release
# 1148 "data/maps/LittlerootTown/scripts.pory"
	applymovement ZED_SAWGRASS_COOKINGMAMA, LittlerootTown_EventScript_BlockageSailor_Movement_0
	end

LittlerootTown_EventScript_WifeCookingForSkitty_2:
# 1132 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Text_0
	goto LittlerootTown_EventScript_WifeCookingForSkitty_1


LittlerootTown_EventScript_WifeCookingForSkitty_Skitty::
# 1153 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1154 "data/maps/LittlerootTown/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 1155 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0
# 1156 "data/maps/LittlerootTown/scripts.pory"
	waitmoncry
# 1157 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1158 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 1159 "data/maps/LittlerootTown/scripts.pory"
	release
	return


LittlerootTown_EventScript_TrainerTeachCatch01::
# 1164 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1165 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1166 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_0, MSGBOX_YESNO
# 1169 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_EventScript_TrainerTeachCatch01_1
# 1185 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_2
# 1187 "data/maps/LittlerootTown/scripts.pory"
	release
	end

LittlerootTown_EventScript_TrainerTeachCatch01_1:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_TrainerTeachCatch01_Text_1
# 1175 "data/maps/LittlerootTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 1176 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1177 "data/maps/LittlerootTown/scripts.pory"
	removeobject ZED_Sawgrass_CatchTeacher
# 1178 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SAWGRASS_TEACHER
# 1179 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 1
# 1180 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1181 "data/maps/LittlerootTown/scripts.pory"
	release
	end


# 1040 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_JordanTalk01_Movement_0:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

# 1078 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BlockageSailor_Movement_0:
# 1078 "data/maps/LittlerootTown/scripts.pory"
	face_up
	step_end

LittlerootTown_EventScript_JordanSign_Text_0:
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Jordan's House$"

LittlerootTown_EventScript_JordanTalk01_Text_0:
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I worked all week, so I just\n"
	.string "want to relax today. Sorry! I know you\l"
	.string "and your Pokemon will enjoy it!$"

LittlerootTown_EventScript_ElderTalk01_Text_0:
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Elder:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sawgrass Village has been around\n"
	.string "for many years, in many different forms.\p"
	.string "War and volcanic eruptions have forced\n"
	.string "us to rebuild three times in my lifetime\p"
	.string "Despite this, we must remain. This place\n"
	.string "is sacred, and bears extreme importance\l"
	.string "to a certain Pokemon.$"

LittlerootTown_EventScript_ArtistTalk01_Text_0:
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Artist:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} This place is beautiful! My next\n"
	.string "piece will simply be inspired!$"

LittlerootTown_EventScript_BlockageSailor_Text_0:
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "Sorry, this way is closed for now. There\n"
	.string "has been an incident, we don't have any\l"
	.string "details right now.\p"
	.string "You'll have to come back another time.$"

LittlerootTown_EventScript_BlockageAzumarill_Text_0:
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "Skreee!$"

LittlerootTown_EventScript_TiredLady_Text_0:
# 1096 "data/maps/LittlerootTown/scripts.pory"
	.string "My Poochyena has so much energy, I just\n"
	.string "can't run anymore!\p"
	.string "Look at him, he's still going!$"

LittlerootTown_EventScript_TiredLady_Text_1:
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "Rah!$"

LittlerootTown_EventScript_HusbandLament_Text_0:
# 1122 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty's got it made. I have to make my\n"
	.string "own meals!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_0:
# 1132 "data/maps/LittlerootTown/scripts.pory"
	.string "Skitty loves me for the food, but she's\n"
	.string "holding a Soothe Bell too!\p"
	.string "I hope Skitty loves me for who I am too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Text_1:
# 1138 "data/maps/LittlerootTown/scripts.pory"
	.string "I always make Skitty home-cooked\n"
	.string "meals. She absolutely loves them!\p"
	.string "Here, this can help your Pokemon grow\n"
	.string "to love you too!$"

LittlerootTown_EventScript_WifeCookingForSkitty_Skitty_Text_0:
# 1155 "data/maps/LittlerootTown/scripts.pory"
	.string "Meeow!$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_0:
# 1166 "data/maps/LittlerootTown/scripts.pory"
	.string "{COLOR GREEN}Trainer:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I see you only have one\n"
	.string "Pokemon. Do you want to learn how\l"
	.string "to catch more?$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_1:
# 1170 "data/maps/LittlerootTown/scripts.pory"
	.string "Great. Here, have a Poke Ball. I\n"
	.string "challenge you to catch one on your own,\l"
	.string "on your way through Route 101.\p"
	.string "I'll meet you at the end of the route.$"

LittlerootTown_EventScript_TrainerTeachCatch01_Text_2:
# 1185 "data/maps/LittlerootTown/scripts.pory"
	.string "Got it, I suppose you'll figure it out on\n"
	.string "your own.$"
