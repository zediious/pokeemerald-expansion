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
# 42 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 43 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_2
# 52 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 55 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	startquest 0
# 58 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 1
# 59 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	return


LittlerootTown_EventScript_JordanRememberTrainers::
# 65 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 66 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 69 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_EventScript_JordanRememberTrainers_Movement_0
# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_1
# 77 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 78 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setspeaker LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 79 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_0
# 90 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 91 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 92 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_POTION, 10
# 93 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 94 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox LittlerootTown_EventScript_JordanRememberTrainers_Text_1
# 106 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 107 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	closemessage
# 108 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanRememberTrainers_Movement_2
# 114 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 115 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_JORDAN_WARNED_TRAINERS, 1
# 116 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
# 117 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	release
	end


SawgrassVillage_AwakenAfterRoute110::
# 123 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	lock
# 124 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 7
# 126 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 127 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_0
# 130 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_PIN
# 131 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 60
# 132 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, LittlerootTown_EventScript_JordanAwakenStart_Movement_1
# 138 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 139 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setspeaker LittlerootTown_EventScript_JordanAwakenStart_Text_0
# 140 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	msgbox SawgrassVillage_AwakenAfterRoute110_Text_0
# 152 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmessage
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	applymovement JordanInHome, SawgrassVillage_AwakenAfterRoute110_Movement_0
# 154 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitmovement
# 155 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	playse SE_DOOR
# 156 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	setflag FLAG_JORDANINHOME
# 157 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	removeobject JordanInHome
# 158 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 159 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1
# 160 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2
# 161 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	clearflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 162 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	waitse
# 163 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	fadedefaultbgm
# 164 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	delay 30
# 166 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	questupdated 0
# 167 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
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

# 45 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanAwakenStart_Movement_2:
# 46 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 47 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 48 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 48 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 48 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 48 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 49 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 50 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_0:
# 70 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_right
	step_end

# 71 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_1:
# 72 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 73 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 73 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 73 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 74 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 74 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 75 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 108 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
LittlerootTown_EventScript_JordanRememberTrainers_Movement_2:
# 109 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 109 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_up
# 110 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 110 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 110 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_right
# 111 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 112 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	face_left
	step_end

# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
SawgrassVillage_AwakenAfterRoute110_Movement_0:
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_down
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	walk_left
# 153 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
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
	.string "Gerbon Town, just east of here. The\l"
	.string "match between Julia and Candace is\l"
	.string "going to be awesome!\p"
	.string "I'm tuckered out today, but I'll go\n"
	.string "to the other {COLOR RED}Battle Halls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} with you\l"
	.string "tomorrow!$"

LittlerootTown_EventScript_JordanRememberTrainers_Text_0:
# 79 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
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
# 94 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Those should cover our meal in\n"
	.string "Woltia City, that you paid for.\p"
	.string "...\p"
	.string "Alright, that was quite a bit more\n"
	.string "expensive I'll admit it. That should\l"
	.string "be at least half!\p"
	.string "Anyways, don't go too hard on your\n"
	.string "Pokemon, those trainers are really\l"
	.string "tough! Good luck!$"

SawgrassVillage_AwakenAfterRoute110_Text_0:
# 140 "data/maps/ZED_LittlerootTown_Test01_1F/scripts.pory"
	.string "Good morning {PLAYER}! You better\n"
	.string "have gotten good sleep, because today,\l"
	.string "we're gonna have great battles!\p"
	.string "The {COLOR RED}Showcase Tournament{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} for {COLOR RED}The\n"
	.string "Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}is starting today! I'm going to\l"
	.string "make my way over there.\p"
	.string "You can take your time, do a bit of\n"
	.string "training if you want! Meet me at the\l"
	.string "entrance to {COLOR RED}The Palladium!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
