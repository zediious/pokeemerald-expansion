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
	setspeaker LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 26 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanAwakenStart_Text_1
# 40 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 41 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 43 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_2
# 50 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 53 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	startquest 0
# 56 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 1
# 57 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 58 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


LittlerootTown_EventScript_JordanRememberTrainers::
# 63 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 64 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 67 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 68 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_EventScript_JordanRememberTrainers_Movement_0
# 69 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_1
# 75 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 76 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setspeaker LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 77 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_0
# 88 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 89 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 90 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_POTION, 10
# 91 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 92 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_1
# 104 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 105 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 106 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_2
# 112 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 113 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_JORDAN_WARNED_TRAINERS, 1
# 114 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
# 115 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	end


SawgrassVillage_AwakenAfterRoute110::
# 121 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 122 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 7
# 124 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 125 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 128 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_PIN
# 129 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 130 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 136 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 137 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setspeaker LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 138 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox SawgrassVillage_AwakenAfterRoute110_Text_0
# 151 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, SawgrassVillage_AwakenAfterRoute110_Movement_0
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 154 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_DOOR
# 155 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setflag FLAG_JORDANINHOME
# 156 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	removeobject JordanInHome
# 157 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 158 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1
# 159 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2
# 160 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	clearflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 161 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitse
# 162 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 163 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 30
# 164 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	questupdated 0
# 165 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
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

# 43 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_2:
# 44 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 47 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 48 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 68 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_0:
# 68 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_right
	step_end

# 69 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_1:
# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 72 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 72 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 73 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 106 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_2:
# 107 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 107 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 108 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 108 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 108 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 109 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 110 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
SawgrassVillage_AwakenAfterRoute110_Movement_0:
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
	step_end

LittlerootTown_EventScript_JordanAwakenStart_Text_0:
# 25 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Jordan$"

LittlerootTown_EventScript_JordanAwakenStart_Text_1:
# 26 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Are you okay? You were tossing and\n"
	.string "turning for the past few minutes.\l"
	.string "Anyways, I bet you're ready to get\l"
	.string "going, those feature matches are the\l"
	.string "coolest thing in the world!\p"
	.string "Like I said yesterday, you absolutely\n"
	.string "must check out {COLOR RED}The Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in\l"
	.string "Gerbon Town, just east of here.\p"
	.string "I'm tuckered out today, but I'll go\n"
	.string "to the other {COLOR RED}Battle Stadiums{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} with you\l"
	.string "tomorrow!$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_0:
# 77 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Sorry, I forgot to tell you!\n"
	.string "The trainers around here don't mess\l"
	.string "around, you'll face a pretty tough\l"
	.string "challenge!\p"
	.string "I recommend you stick to the south side\n"
	.string "of Route 101 to avoid them, but that's\l"
	.string "up to you!\p"
	.string "If you decide to battle them, these will\n"
	.string "help out. Catch!$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_1:
# 92 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Those should cover our meal in\n"
	.string "Woltia City, that you paid for.\p"
	.string "...\p"
	.string "Alright, that was quite a bit more\n"
	.string "expensive I'll admit it. That should\l"
	.string "be at least half!\p"
	.string "Anyways, don't go to hard on your\n"
	.string "Pokemon, those trainers are really\l"
	.string "tough! Good luck!$"

SawgrassVillage_AwakenAfterRoute110_Text_0:
# 138 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Good morning {PLAYER}! You better\n"
	.string "have gotten good sleep, because today,\l"
	.string "we're gonna have great battles!\p"
	.string "The tournament to decide the next \n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} for {COLOR RED}The\l"
	.string "Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is starting today! I'm going\l"
	.string "to make my way over there.\p"
	.string "You can take your time, do a bit of\n"
	.string "training if you want! Meet me at the\l"
	.string "entrance to {COLOR RED}The Palladium!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
