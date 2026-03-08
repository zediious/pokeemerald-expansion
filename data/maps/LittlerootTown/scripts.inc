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


# 1040 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_JordanTalk01_Movement_0:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	face_left
	step_end

LittlerootTown_EventScript_JordanSign_Text_0:
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Jordan's House$"

LittlerootTown_EventScript_JordanTalk01_Text_0:
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "Jordan: I worked all week, so I just\n"
	.string "want to relax today. Sorry! I know you\l"
	.string "and your Pokemon will enjoy it!$"

LittlerootTown_EventScript_ElderTalk01_Text_0:
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "Elder: Sawgrass Village has been around\n"
	.string "for many years, in many different forms.\p"
	.string "War and volcanic eruptions have forced\n"
	.string "us to rebuild three times in my lifetime\p"
	.string "Despite this, we must remain. This place\n"
	.string "is sacred, and bears extreme importance\l"
	.string "to a certain Pokemon.$"

LittlerootTown_EventScript_ArtistTalk01_Text_0:
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "Artist: This place is beautiful! My next\n"
	.string "piece will simply be inspired!$"
