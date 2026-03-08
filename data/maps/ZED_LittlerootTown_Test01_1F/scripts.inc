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
	playbgm MUS_ENCOUNTER_MAY, 0
# 11 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 18 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 19 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 29 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 30 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitbuttonpress
# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 39 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 41 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 42 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 43 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


# 11 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_0:
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	emote_exclamation_mark
# 13 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 15 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 16 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
	step_end

# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_1:
# 33 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 34 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 36 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 37 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

LittlerootTown_EventScript_JordanAwakenStart_Text_0:
# 19 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Jordan: Are you okay, you were tossing\n"
	.string "and turning quite a bit. Anyways, I\l"
	.string "bet you're ready to get going!\p"
	.string "Like I said yesterday, you absolutely\n"
	.string "must check out the Palladium in\l"
	.string "Gerbon Town, just east of here.\p"
	.string "I'll let you get to it.$"
