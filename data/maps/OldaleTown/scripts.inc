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


GerbonTown_EventScript_HiddenItemBall::
# 51 "data/maps/OldaleTown/scripts.pory"
	lock
# 52 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 53 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 54 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 55 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 61 "data/maps/OldaleTown/scripts.pory"
	lock
# 62 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_0
# 66 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 71 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 72 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 76 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 77 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 82 "data/maps/OldaleTown/scripts.pory"
	lock
# 83 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 88 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 89 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 92 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 93 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 102 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 104 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 105 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 106 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 107 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 108 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 84 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 85 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 113 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 119 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 123 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 126 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 133 "data/maps/OldaleTown/scripts.pory"
	lock
# 134 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 135 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_OutdoorBattleStart_Movement_0
# 136 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 137 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_0, MSGBOX_YESNO
# 145 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_2
GerbonTownBattleHall_OutdoorBattleStart_1:
	end

GerbonTownBattleHall_OutdoorBattleStart_2:
# 146 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_4
# 156 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_5
# 166 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_6
# 176 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_7
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_4:
# 147 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_5:
# 157 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_6:
# 167 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_7:
# 177 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_3, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1


GerbonTown_OutdoorBattleEnd::
# 191 "data/maps/OldaleTown/scripts.pory"
	lock
# 192 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 193 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_OutdoorBattleStart_Movement_0
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 220 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 221 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 222 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 224 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 225 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 226 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 229 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 230 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 231 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 234 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 236 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 135 "data/maps/OldaleTown/scripts.pory"
GerbonTownBattleHall_OutdoorBattleStart_Movement_0:
# 135 "data/maps/OldaleTown/scripts.pory"
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
# 62 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Not allowed in when\n"
	.string "there's no match going on.\p"
	.string "Come another time.$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 93 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ouch, that hurt!\n"
	.string "I'm sorry, I'm just so excited for the\l"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! That was the best\n"
	.string "match I've seen yet! I am glad you were\l"
	.string "able to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_2:
# 151 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_3:
# 179 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 194 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You must have been\n"
	.string "practicing, I thought I had that in\l"
	.string "the bag!\p"
	.string "I've been thinking, maybe we should try\n"
	.string "to challenge the {COLOR RED}Representative\l"
	.string "Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} of Gerbon Town. That's Julia,\l"
	.string "one of the trainers we just watched!\l"
	.string "Most people call them 'Rep Trainers'.\p"
	.string "Every three years, there is a\n"
	.string "tournment in each of the stadiums.\l"
	.string "Whoever wins gets to face the current\l"
	.string "{COLOR RED}Rep Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. If they win, they get to\l"
	.string "become the new {COLOR RED}Rep Trainer!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "We've got to get stronger first though,\n"
	.string "I don't think either of us stand a\l"
	.string "chance right now.\p"
	.string "Meet me at the entrance to {COLOR RED}\n"
	.string "Sawgrass Forest{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, south of\l"
	.string "Sawgrass Village. I know a good place\l"
	.string "to train Pokemon there!\p"
	.string "See you soon!$"
