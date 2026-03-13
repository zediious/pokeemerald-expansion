GerbonTown_BattleHall_MapScripts::
	.byte 0


GerbonTownBattleHall_EventScript_FirstEnterWatchLeft::
# 5 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 6 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 8 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 12 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 13 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0
# 17 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 18 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchRight::
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 24 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 30 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 31 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 38 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_CandaceAndJulia01::
# 44 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_0
# 48 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 51 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_1
# 53 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_GOLEM, CRY_MODE_NORMAL
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_GOLEM, GerbonTownBattleHall_CandaceAndJulia01_Movement_2
# 62 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 63 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_3
# 66 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_GOLEM, GerbonTownBattleHall_CandaceAndJulia01_Movement_4
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_5
# 75 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_6
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_1
# 84 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_7
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 90 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 93 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_KILOWATTREL
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 96 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 100 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag GERBONBATTLEHALL_CANDACE_01_MANTINE
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONBATTLEHALL_CANDACE_01_MANTINE
# 102 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_MANTINE, GerbonTownBattleHall_CandaceAndJulia01_Movement_8
# 103 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 20
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 105 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 106 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 109 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_BATTLEHALL_JORDAN_01
# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_9
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_10
# 115 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 117 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 2
# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_CandaceAndJulia01_Movement_11
# 119 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_3
# 134 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_CandaceAndJulia01_Movement_12
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_13
# 137 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 139 "data/maps/GerbonTown_BattleHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 141 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 143 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 10
	end


# 13 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0:
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0:
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 33 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 34 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_0:
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 51 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_1:
# 51 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_right
	step_end

# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_2:
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_right
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 63 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_3:
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_4:
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_5:
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_left
	step_end

# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_6:
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
	step_end

# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_7:
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_left
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 102 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_8:
# 102 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_9:
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_10:
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_11:
# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_down
# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_12:
# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_up
	step_end

# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_13:
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0:
# 8 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "The match is about to begin!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_0:
# 53 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Julia: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Golem! Use your\n"
	.string "Stone Edge attack!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_1:
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}No good! Use your\n"
	.string "U-Turn Kilowattrel!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_2:
# 96 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, now is your\n"
	.string "time! Go Mantine!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_3:
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! I didn't mean to\n"
	.string "surprise you!\p"
	.string "... ... ...\p"
	.string "Well, I did, but not in a bad way! I'm glad\n"
	.string "I got to you before the show ended! I\l"
	.string "decided I couldn't let you see your\l"
	.string "first {COLOR RED}Exhibition Match!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} alone! Are you\l"
	.string "enjoying it so far?\p"
	.string "Let's keep watching!$"
