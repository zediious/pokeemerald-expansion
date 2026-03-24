ZED_LittlerootTown_Test01_1F_MapScripts::
# 2 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZED_LittlerootTown_Test01_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZED_LittlerootTown_Test01_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 0, LittlerootTown_EventScript_JordanAwakenStart
# 4 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 6, SawgrassVillage_AwakenAfterRoute110
	.2byte 0


LittlerootTown_EventScript_JordanAwakenStart::
# 10 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 12 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 13 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 16 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_PIN
# 17 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 18 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 24 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 25 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 39 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 40 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 42 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_2
# 49 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 52 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	startquest 0
# 55 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 1
# 56 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


LittlerootTown_EventScript_JordanRememberTrainers::
# 62 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 63 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 66 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 67 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_EventScript_JordanRememberTrainers_Movement_0
# 68 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_1
# 74 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 75 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_0
# 86 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 87 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 88 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_POTION, 10
# 89 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 90 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_1
# 103 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 104 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 105 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_2
# 111 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 112 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_JORDAN_WARNED_TRAINERS, 1
# 113 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
# 114 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	end


SawgrassVillage_AwakenAfterRoute110::
# 120 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 121 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 7
# 123 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 124 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 127 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_PIN
# 128 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 129 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 135 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 136 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox SawgrassVillage_AwakenAfterRoute110_Text_0
# 149 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, SawgrassVillage_AwakenAfterRoute110_Movement_0
# 151 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_DOOR
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setflag FLAG_JORDANINHOME
# 154 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	removeobject JordanInHome
# 155 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setflag FLAG_GERBON_TOWN_BLOCKERS
# 156 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	clearflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 157 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitse
# 158 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 159 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 30
# 160 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	questupdated 0
# 161 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	end


# 13 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_0:
# 14 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 18 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_1:
# 19 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 20 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 20 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 20 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 20 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 21 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 22 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
	step_end

# 42 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_2:
# 43 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 44 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 47 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 67 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_0:
# 67 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_right
	step_end

# 68 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_1:
# 69 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 72 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 105 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_2:
# 106 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 106 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 107 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 107 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 107 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 108 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 109 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
SawgrassVillage_AwakenAfterRoute110_Movement_0:
# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 150 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
	step_end

LittlerootTown_EventScript_JordanAwakenStart_Text_0:
# 25 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Are you okay? You were tossing\n"
	.string "and turning for the past few minutes.\l"
	.string "Anyways, I bet you're ready to get\l"
	.string "going, those feature matches are the\l"
	.string "coolest thing in the world!\p"
	.string "Like I said yesterday, you absolutely\n"
	.string "must check out {COLOR RED}The Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in\l"
	.string "Gerbon Town, just east of here.\p"
	.string "I'm tuckered out today, but I'll go\n"
	.string "to the other {COLOR RED}Battle Stadiums{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}with you\l"
	.string "tomorrow!.$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_0:
# 75 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Sorry, I forgot to tell you!\n"
	.string "The trainers around here don't mess\l"
	.string "around, you'll face a pretty tough\l"
	.string "challenge!\p"
	.string "I recommend you stick to the south side\n"
	.string "of Route 101 to avoid them, but that's\l"
	.string "up to you!\p"
	.string "If you decide to battle them, these will\n"
	.string "help out. Catch!$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_1:
# 90 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
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

SawgrassVillage_AwakenAfterRoute110_Text_0:
# 136 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "{COLOR GREEN}Jordan:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good morning {PLAYER}! You\n"
	.string "better have gotten good sleep, because\l"
	.string "today, we're gonna have great battles!\p"
	.string "The tournament to decide the next \n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} for {COLOR RED}The\l"
	.string "Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is starting today! I'm going\l"
	.string "to make my way over there.\p"
	.string "You can take your time, do a bit of\n"
	.string "training if you want! Meet me at the\l"
	.string "entrance to {COLOR RED}The Palladium!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
