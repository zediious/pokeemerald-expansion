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


GerbonTown_EventScript_Route110Sign::
# 44 "data/maps/OldaleTown/scripts.pory"
	lockall
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_Route110Sign_Text_0
# 46 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 51 "data/maps/OldaleTown/scripts.pory"
	lockall
# 52 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 53 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_HiddenItemBall::
# 58 "data/maps/OldaleTown/scripts.pory"
	lock
# 59 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 60 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 61 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 62 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 68 "data/maps/OldaleTown/scripts.pory"
	lock
# 69 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_0
# 73 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 74 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 80 "data/maps/OldaleTown/scripts.pory"
	lock
# 81 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 82 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_0
# 87 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 88 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 94 "data/maps/OldaleTown/scripts.pory"
	lock
# 95 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_0
# 97 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 98 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 99 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 100 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 101 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 102 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 104 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 105 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 106 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 107 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 109 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 110 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 111 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 112 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 114 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 115 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 116 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 117 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 118 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 119 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_2
# 120 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 121 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 126 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 127 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 131 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 132 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 137 "data/maps/OldaleTown/scripts.pory"
	lock
# 138 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 143 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 144 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 147 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 148 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 157 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 158 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 159 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 160 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 161 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 162 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 163 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 139 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 140 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 168 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 171 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 174 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 181 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 188 "data/maps/OldaleTown/scripts.pory"
	lock
# 189 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 190 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 191 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 192 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_0, MSGBOX_YESNO
# 200 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_2
GerbonTownBattleHall_OutdoorBattleStart_1:
	end

GerbonTownBattleHall_OutdoorBattleStart_2:
# 201 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_4
# 211 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_5
# 221 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_6
# 231 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_7
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_4:
# 202 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_5:
# 212 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_6:
# 222 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_7:
# 232 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_3, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1


GerbonTown_OutdoorBattleEnd::
# 246 "data/maps/OldaleTown/scripts.pory"
	lock
# 247 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 248 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 249 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 275 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 276 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 277 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 278 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 279 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 280 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 281 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 284 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 285 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 286 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 289 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 291 "data/maps/OldaleTown/scripts.pory"
	release
	return


# 99 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 99 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 101 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 101 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 103 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 103 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 111 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 111 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 36 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_Route110Sign_Text_0:
# 45 "data/maps/OldaleTown/scripts.pory"
	.string "{DOWN_ARROW} To Route 110$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 52 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 69 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Palladium Guard: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Not allowed in when\n"
	.string "there's no match going on.\p"
	.string "Come another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 82 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Angry Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}These trainers! Breaking\n"
	.string "out into a battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 95 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Battler 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lillipup! Use your Tackle\n"
	.string "attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 107 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Battler 2: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 119 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 148 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ouch, that hurt!\n"
	.string "I'm sorry, I'm just so excited for the\l"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 192 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! That was the best\n"
	.string "match I've seen yet! I am glad you were\l"
	.string "able to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 204 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_2:
# 206 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_3:
# 234 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 249 "data/maps/OldaleTown/scripts.pory"
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
