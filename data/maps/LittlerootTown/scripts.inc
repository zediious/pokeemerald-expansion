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
