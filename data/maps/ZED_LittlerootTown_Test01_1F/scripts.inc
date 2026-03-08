ZED_LittlerootTown_Test01_1F_MapScripts::
# 2 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZED_LittlerootTown_Test01_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZED_LittlerootTown_Test01_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script_2 VAR_DEWFORD_TOWN_STATE, 0, LittlerootTown_EventScript_JordanAwakenStart
	.2byte 0


LittlerootTown_EventScript_JordanAwakenStart::
# 8 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 16 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 27 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 29 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 36 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 38 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 39 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_0:
# 11 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 13 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
	step_end

# 29 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_1:
# 30 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 31 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 33 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 34 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

LittlerootTown_EventScript_JordanAwakenStart_Text_0:
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Jordan: Are you okay, you were tossing\n"
	.string "and turning quite a bit. Anyways, I\l"
	.string "bet you're ready to get going!\p"
	.string "Like I said yesterday, you absolutely\n"
	.string "must check out the Palladium in\l"
	.string "Gerbon Town, just east of here.\p"
	.string "I'll let you get to it.$"
