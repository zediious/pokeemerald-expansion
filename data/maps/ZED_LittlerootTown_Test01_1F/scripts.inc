ZED_LittlerootTown_Test01_1F_MapScripts::
# 2 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZED_LittlerootTown_Test01_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZED_LittlerootTown_Test01_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 0, LittlerootTown_EventScript_JordanAwakenStart
	.2byte 0


LittlerootTown_EventScript_JordanAwakenStart::
# 8 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 11 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 15 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 21 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 22 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 32 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 33 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitbuttonpress
# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_2
# 42 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 44 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 1
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


LittlerootTown_EventScript_JordanRememberTrainers::
# 50 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 53 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 54 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_0
# 60 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_0
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_SUPER_POTION, 10
# 72 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 73 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_1
# 86 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_JORDAN_WARNED_TRAINERS, 1
# 87 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	end


# 11 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_0:
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 15 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_1:
# 16 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 18 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 19 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_2:
# 36 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 37 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 38 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 38 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 38 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 38 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 39 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 40 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 54 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_0:
# 55 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 56 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 56 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 56 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 57 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 57 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 58 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

LittlerootTown_EventScript_JordanAwakenStart_Text_0:
# 22 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Are you okay, you were tossing\n"
	.string "and turning quite a bit. Anyways, I\l"
	.string "bet you're ready to get going!\p"
	.string "Like I said yesterday, you absolutely\n"
	.string "must check out the Palladium in\l"
	.string "Gerbon Town, just east of here.\p"
	.string "I'll let you get to it.$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_0:
# 60 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sorry, I forgot to tell you!\n"
	.string "The trainers around here don't mess\l"
	.string "around, you'll face a pretty tough\l"
	.string "challenge!\p"
	.string "I recommend you stick to the south side\n"
	.string "of Route 101 to avoid them, but that's\l"
	.string "up to you!\p"
	.string "If you decide to battle them, these will\n"
	.string "help out.$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_1:
# 73 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Those should cover our meal at the\n"
	.string "Woltia City train station, that you\l"
	.string "paid for.\p"
	.string "...\p"
	.string "Alright, that was quite a bit more\n"
	.string "expensive I'll admit it. That should\l"
	.string "be at least half!\p"
	.string "Anyways, don't go to hard on your\n"
	.string "Pokemon, those trainers are really\l"
	.string "tough! Good luck!$"
