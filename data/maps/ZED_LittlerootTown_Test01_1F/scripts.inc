MAP_ZED_LITTLEROOT_TOWN_TEST01_1F_MapScripts::
# 2 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_EventScript_JordanAwakenStart
	.byte 0


LittlerootTown_EventScript_JordanAwakenStart::
# 6 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 8 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 15 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 25 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 27 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 33 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 36 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


# 8 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_0:
# 9 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 11 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
	step_end

# 27 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_1:
# 28 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 29 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 30 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 30 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 30 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 30 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 31 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
	step_end

LittlerootTown_EventScript_JordanAwakenStart_Text_0:
# 15 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Jordan: Are you okay, you were tossing\n"
	.string "and turning quite a bit. Anyways, I\l"
	.string "bet you're ready to get going!\p"
	.string "Like I said yesterday, you absolutely\n"
	.string "must check out the Palladium in\l"
	.string "Gerbon Town, just east of here.\p"
	.string "I'll let you get to it.$"
