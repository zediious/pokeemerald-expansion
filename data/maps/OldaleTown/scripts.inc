OldaleTown_MapScripts::
# 6 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GerbonTown_MapScript_OnTransition
# 2 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 2, GerbonTownBattleHall_OutdoorBattleStart
	.2byte 0


GerbonTown_MapScript_OnTransition::
# 10 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 0
	goto_if_eq GerbonTown_MapScript_OnTransition_2
GerbonTown_MapScript_OnTransition_1:
	end

GerbonTown_MapScript_OnTransition_2:
# 11 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_BattleHallDisables
	goto GerbonTown_MapScript_OnTransition_1


GerbonTown_BattleHallDisables::
# 18 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 19 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 20 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 21 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_BLOCKERS
# 22 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_MANTINE, MAP_GERBON_TOWN_BATTLE_HALL
# 23 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_BATTLEHALL_JORDAN_01, MAP_GERBON_TOWN_BATTLE_HALL
# 24 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 25 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_PALLADIUM_BLOCKER_1, MAP_OLDALE_TOWN
# 26 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_PALLADIUM_BLOCKER_2, MAP_OLDALE_TOWN
# 29 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 1
	end


GerbonTown_EventScript_TownSign::
# 35 "data/maps/OldaleTown/scripts.pory"
	lockall
# 36 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TownSign_Text_0
# 39 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 44 "data/maps/OldaleTown/scripts.pory"
	lockall
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 46 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_PalladiumBlockers::
# 51 "data/maps/OldaleTown/scripts.pory"
	lock
# 52 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_0
# 56 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 61 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 62 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 66 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 67 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 72 "data/maps/OldaleTown/scripts.pory"
	lock
# 73 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 78 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 79 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 82 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 92 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 93 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 94 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 95 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 96 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 97 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 98 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 74 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 75 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 103 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 106 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 109 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 113 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 116 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 123 "data/maps/OldaleTown/scripts.pory"
	lock
# 124 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 125 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_OutdoorBattleStart_Movement_0
# 126 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 127 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_0, MSGBOX_YESNO
# 135 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_2
GerbonTownBattleHall_OutdoorBattleStart_1:
	end

GerbonTownBattleHall_OutdoorBattleStart_2:
# 136 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_4
# 146 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_5
# 156 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_6
# 166 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_7
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_4:
# 137 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_5:
# 147 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_6:
# 157 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_7:
# 167 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_3, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1


GerbonTown_OutdoorBattleEnd::
# 181 "data/maps/OldaleTown/scripts.pory"
	lock
# 182 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 183 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_OutdoorBattleStart_Movement_0
# 184 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 208 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 209 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 210 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 212 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 213 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 214 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 217 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 219 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 125 "data/maps/OldaleTown/scripts.pory"
GerbonTownBattleHall_OutdoorBattleStart_Movement_0:
# 125 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 36 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 45 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Not allowed in when\n"
	.string "there's no match going on.\p"
	.string "Come another time.$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 83 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ouch, that hurt!\n"
	.string "I'm sorry, I'm just so excited for the\l"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 127 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! That was the best\n"
	.string "match I've seen yet! I am glad you were\l"
	.string "able to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 139 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_2:
# 141 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_3:
# 169 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 184 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You must have been\n"
	.string "practicing, I thought I had that in\l"
	.string "the bag!\p"
	.string "I've been thinking, maybe we should try\n"
	.string "to challenge the {COLOR RED}Representative\l"
	.string "Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} of Gerbon Town. That's Julia,\l"
	.string "one of the trainers we just watched!\p"
	.string "Every three years, there is a\n"
	.string "tournment in each of the stadiums.\l"
	.string "Whoever wins gets to face the current\l"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. If they\l"
	.string "win, they get to become the\l"
	.string "{COLOR RED}Representative Trainer!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "We've got to get stronger first though,\n"
	.string "I don't think either of us stand a\l"
	.string "chance right now.\p"
	.string "Meet me on Route 110, {COLOR RED} south of\n"
	.string "Sawgrass Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. I know of a good place\l"
	.string "to train our Pokemon there!\l"
	.string "See you soon!$"
