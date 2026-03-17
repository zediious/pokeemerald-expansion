OldaleTown_MapScripts::
# 7 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GerbonTown_MapScript_OnTransition
# 2 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 2, GerbonTownBattleHall_OutdoorBattleStart
# 4 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 8, GerbonTownTourney_JordanAfter
	.2byte 0


GerbonTown_MapScript_OnTransition::
# 11 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 0
	goto_if_eq GerbonTown_MapScript_OnTransition_2
GerbonTown_MapScript_OnTransition_1:
	end

GerbonTown_MapScript_OnTransition_2:
# 12 "data/maps/OldaleTown/scripts.pory"
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
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 23 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_MANTINE, MAP_GERBON_TOWN_BATTLE_HALL
# 24 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_BATTLEHALL_JORDAN_01, MAP_GERBON_TOWN_BATTLE_HALL
# 25 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 26 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_PALLADIUM_BLOCKER_1, MAP_OLDALE_TOWN
# 27 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_PALLADIUM_BLOCKER_2, MAP_OLDALE_TOWN
# 30 "data/maps/OldaleTown/scripts.pory"
	setflag GERBONTOURNEY_TRAINER01
# 33 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 1
	end


GerbonTown_EventScript_TownSign::
# 39 "data/maps/OldaleTown/scripts.pory"
	lockall
# 40 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TownSign_Text_0
# 43 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_Route110Sign::
# 48 "data/maps/OldaleTown/scripts.pory"
	lockall
# 49 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_Route110Sign_Text_0
# 50 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 55 "data/maps/OldaleTown/scripts.pory"
	lockall
# 56 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 57 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_HiddenItemBall::
# 62 "data/maps/OldaleTown/scripts.pory"
	lock
# 63 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 64 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 65 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 66 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 72 "data/maps/OldaleTown/scripts.pory"
	lock
# 73 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_0
# 77 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 78 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 84 "data/maps/OldaleTown/scripts.pory"
	lock
# 85 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 86 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_0
# 91 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 92 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 98 "data/maps/OldaleTown/scripts.pory"
	lock
# 99 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_0
# 101 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 102 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 103 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 104 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 105 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 106 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 107 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 108 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 109 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 110 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 113 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 114 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 115 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 116 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 117 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 118 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 119 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 120 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 121 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 122 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 123 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_2
# 124 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 125 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 130 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 131 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 135 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 136 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 141 "data/maps/OldaleTown/scripts.pory"
	lock
# 142 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 147 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 148 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 151 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 152 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 153 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 162 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 163 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 164 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 165 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 166 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 167 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 168 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 143 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 144 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 173 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 179 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 186 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 193 "data/maps/OldaleTown/scripts.pory"
	lock
# 194 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 195 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 196 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 197 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_0, MSGBOX_YESNO
# 205 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_2
GerbonTownBattleHall_OutdoorBattleStart_1:
	end

GerbonTownBattleHall_OutdoorBattleStart_2:
# 206 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_4
# 216 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_5
# 226 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_6
# 236 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTownBattleHall_OutdoorBattleStart_7
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_4:
# 207 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_5:
# 217 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_6:
# 227 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_1, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1

GerbonTownBattleHall_OutdoorBattleStart_7:
# 237 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTownBattleHall_OutdoorBattleStart_Text_3, GerbonTownBattleHall_OutdoorBattleStart_Text_2, event_script = GerbonTown_OutdoorBattleEnd
	goto GerbonTownBattleHall_OutdoorBattleStart_1


GerbonTown_OutdoorBattleEnd::
# 251 "data/maps/OldaleTown/scripts.pory"
	lock
# 252 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 253 "data/maps/OldaleTown/scripts.pory"
	applymovement 0xFF, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 254 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 280 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 281 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 282 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 284 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 285 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 286 "data/maps/OldaleTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 289 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 290 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 291 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 294 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 296 "data/maps/OldaleTown/scripts.pory"
	release
	return


GerbonTownTourney_JordanStartOutside::
# 302 "data/maps/OldaleTown/scripts.pory"
	lock
# 303 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 304 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_0, MSGBOX_YESNO
# 322 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownTourney_JordanStartOutside_1
	return

GerbonTownTourney_JordanStartOutside_1:
# 323 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_1
# 324 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 325 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 1
# 326 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 8
# 327 "data/maps/OldaleTown/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 328 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTownTourney_JordanAfter::
# 335 "data/maps/OldaleTown/scripts.pory"
	lock
# 336 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 337 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_0
# 359 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_0
# 362 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 363 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 364 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 365 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 103 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 103 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 105 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 105 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 107 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 107 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 115 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 115 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 359 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_0:
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 360 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 40 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_Route110Sign_Text_0:
# 49 "data/maps/OldaleTown/scripts.pory"
	.string "{DOWN_ARROW} To Route 110$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 56 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 73 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Palladium Guard: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Not allowed in when\n"
	.string "there's no match going on.\p"
	.string "Come another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 86 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Angry Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}These trainers! Breaking\n"
	.string "out into a battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 99 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Battler 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lillipup! Use your Tackle\n"
	.string "attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 111 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Battler 2: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 153 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ouch, that hurt!\n"
	.string "I'm sorry, I'm just so excited for the\l"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 197 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! That was the best\n"
	.string "match I've seen yet! I am glad you were\l"
	.string "able to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 209 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_2:
# 211 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_3:
# 239 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 254 "data/maps/OldaleTown/scripts.pory"
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

GerbonTownTourney_JordanStartOutside_Text_0:
# 304 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}There you are! It's time to\n"
	.string "start the tournament! I should explain\l"
	.string "exactly how it works, eh?\p"
	.string "16 trainers are entering the tourny\n"
	.string "and it will be a swiss matchup.\l"
	.string "You will battle a total of four trainers,\l"
	.string "then you'll be facing the current\l"
	.string "{COLOR RED}Rep Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, Julia!\p"
	.string "When the tournament starts, you'll be in\n"
	.string "the prep room, where you'll be able to\l"
	.string "heal up, and start your next match.\p"
	.string "Are you ready to go? You'll be able to\n"
	.string "heal between your matches, but you\l"
	.string "can't leave once the tournament has\l"
	.string "started!$"

GerbonTownTourney_JordanStartOutside_Text_1:
# 323 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great! Let's go!$"

GerbonTownTourney_JordanAfter_Text_0:
# 337 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That was amazing! I'm a little\n"
	.string "miffed that I didn't win, but I can't\l"
	.string "deny what I bore witness to! I said it\l"
	.string "before, but you must have really been\l"
	.string "practicing!\p"
	.string "Don't worry though, because I'm going\n"
	.string "to get you next time! That's right!\l"
	.string "We're going to battle in the next\l"
	.string "tournament in {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "...\p"
	.string "I'll get you back for the rest of the\n"
	.string "meal, I promise! Anyways, Woltia City\l"
	.string "is North and then west, through\l"
	.string "{COLOR RED}Route 102, and Mulled Cave{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Mulled Cave is full of Pokemon, so we'll\n"
	.string "find lots of new partners. Maybe I'll\l"
	.string "see you while I'm there. Catch you\l"
	.string "later {PLAYER}!$"
