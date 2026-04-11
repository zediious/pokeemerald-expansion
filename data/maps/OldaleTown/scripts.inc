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
	map_script_2 VAR_ZED_STORY_TRACKER, 9, GerbonTownTourney_JordanAfter
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
	setflag FLAG_GERBON_TOURNEY_TRAINER01
# 31 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER02
# 32 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER03
# 33 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER04
# 34 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER05
# 37 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBONTOURNEY_ENABLED
# 40 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 1
	end


GerbonTown_EventScript_TownSign::
# 46 "data/maps/OldaleTown/scripts.pory"
	lockall
# 47 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TownSign_Text_0
# 50 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_RestarauntSign::
# 55 "data/maps/OldaleTown/scripts.pory"
	lockall
# 56 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RestarauntSign_Text_0
# 59 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_Route110Sign::
# 64 "data/maps/OldaleTown/scripts.pory"
	lockall
# 65 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_Route110Sign_Text_0
# 66 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 71 "data/maps/OldaleTown/scripts.pory"
	lockall
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 73 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_HiddenItemBall::
# 78 "data/maps/OldaleTown/scripts.pory"
	lock
# 79 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 80 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 81 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 82 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 88 "data/maps/OldaleTown/scripts.pory"
	lock
# 89 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_PalladiumBlockers_Text_0
# 90 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_1
# 94 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 95 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 101 "data/maps/OldaleTown/scripts.pory"
	lock
# 102 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 103 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_MadWoman_Text_0
# 104 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_1
# 109 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 110 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 116 "data/maps/OldaleTown/scripts.pory"
	lock
# 117 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_0
# 118 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 119 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 120 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 121 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 122 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 123 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 124 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 125 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 126 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 127 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 128 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 129 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_2
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_3
# 132 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 133 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 134 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 135 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 136 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 137 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 138 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 139 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 140 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 141 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 142 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_4
# 143 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 144 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 149 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 150 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 154 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 155 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 160 "data/maps/OldaleTown/scripts.pory"
	lock
# 161 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 166 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 167 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 170 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 171 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 172 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 173 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_1
# 183 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 184 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 185 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 186 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 187 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 188 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 189 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 162 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 163 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 194 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 197 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 200 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 201 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 203 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 204 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 207 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 208 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 214 "data/maps/OldaleTown/scripts.pory"
	lock
# 215 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 216 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 217 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 218 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 219 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_1
# 225 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 227 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return


GerbonTown_OutdoorBattleJordanAsk::
# 232 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 233 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_0, MSGBOX_YESNO
# 237 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_OutdoorBattleJordanAsk_1
# 240 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_1
# 241 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 242 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return

GerbonTown_OutdoorBattleJordanAsk_1:
# 238 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleTrigger
	return


GerbonTown_OutdoorBattleTrigger::
# 247 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 248 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTown_OutdoorBattleTrigger_1
# 270 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTown_OutdoorBattleTrigger_2
# 292 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTown_OutdoorBattleTrigger_3
# 314 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTown_OutdoorBattleTrigger_4
	return

GerbonTown_OutdoorBattleTrigger_1:
# 249 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_OutdoorBattleTrigger_2:
# 271 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_OutdoorBattleTrigger_3:
# 293 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_OutdoorBattleTrigger_4:
# 315 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonTown_OutdoorBattleEnd::
# 339 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 340 "data/maps/OldaleTown/scripts.pory"
	special HealPlayerParty
# 341 "data/maps/OldaleTown/scripts.pory"
	lock
# 342 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 343 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 344 "data/maps/OldaleTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 345 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 346 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GerbonTown_OutdoorBattleEnd_2
# 351 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_1
# 354 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_OutdoorBattleEnd_1:
# 356 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_2
# 378 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 379 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 380 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 381 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 382 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 383 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 384 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 387 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 388 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 389 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 392 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 393 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 394 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_3, MSGBOX_SIGN
# 395 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 396 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 399 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 401 "data/maps/OldaleTown/scripts.pory"
	release
	return

GerbonTown_OutdoorBattleEnd_2:
# 347 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 349 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_OutdoorBattleEnd_1


GerbonTownTourney_JordanStartOutside::
# 407 "data/maps/OldaleTown/scripts.pory"
	lock
# 408 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 409 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 410 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_0, MSGBOX_YESNO
# 426 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownTourney_JordanStartOutside_1
	return

GerbonTownTourney_JordanStartOutside_1:
# 427 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 428 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_1
# 429 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 430 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_JULIA
# 431 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_CANDACE
# 432 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_GOLEM
# 433 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 434 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 1
# 435 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 8
# 436 "data/maps/OldaleTown/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 437 "data/maps/OldaleTown/scripts.pory"
	waitstate
# 438 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTownTourney_JordanAfter::
# 445 "data/maps/OldaleTown/scripts.pory"
	lock
# 446 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 447 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 448 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_0
# 462 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 463 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_0
# 464 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 465 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 466 "data/maps/OldaleTown/scripts.pory"
	waitse
# 467 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 468 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_1
# 470 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 471 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 472 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 473 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 474 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_2
# 487 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 488 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 489 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_3
# 497 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_1
# 500 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 501 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 10
# 502 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 503 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 506 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 508 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 510 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_RuvelKid::
# 520 "data/maps/OldaleTown/scripts.pory"
	lock
# 521 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 522 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_RuvelKid_Text_0
# 523 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_lt GerbonTown_EventScript_RuvelKid_2
# 530 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKid_Text_2
GerbonTown_EventScript_RuvelKid_1:
# 535 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 536 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_RuvelKid_2:
# 524 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKid_Text_1
	goto GerbonTown_EventScript_RuvelKid_1


GerbonTown_EventScript_RuvelKidMom::
# 541 "data/maps/OldaleTown/scripts.pory"
	lock
# 542 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 543 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_RuvelKidMom_Text_0
# 544 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_lt GerbonTown_EventScript_RuvelKidMom_2
# 550 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKidMom_Text_2
GerbonTown_EventScript_RuvelKidMom_1:
# 558 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 559 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_RuvelKidMom_2:
# 545 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKidMom_Text_1
	goto GerbonTown_EventScript_RuvelKidMom_1


GerbonTown_EventScript_TriathleteHouseMan::
# 565 "data/maps/OldaleTown/scripts.pory"
	lock
# 566 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 567 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 568 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_GERBON_GOT_MACHO, GerbonTown_EventScript_TriathleteHouseMan_2
# 589 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_6
# 590 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_EventScript_TriathleteHouseMan_1:
# 593 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_TriathleteHouseMan_2:
# 569 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_1
# 571 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 572 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 573 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 574 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 575 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 576 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 577 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 578 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_4
# 580 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 581 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_MACHO_BRACE, 1
# 582 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_GOT_MACHO
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_5
# 587 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_EventScript_TriathleteHouseMan_1


GerbonTown_EventScript_TriathleteHouseLinoone::
# 598 "data/maps/OldaleTown/scripts.pory"
	lock
# 599 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 600 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 601 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 602 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 603 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 604 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 605 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseMan::
# 611 "data/maps/OldaleTown/scripts.pory"
	lock
# 612 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 613 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseMan_Text_0
# 614 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseMan_Text_1
# 617 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 618 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseSlaking::
# 623 "data/maps/OldaleTown/scripts.pory"
	lock
# 624 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 625 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 626 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseSlaking_Text_0
# 627 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseSlaking_Text_1
# 628 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 629 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseSlaking_Text_2
# 631 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 632 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 633 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Man::
# 639 "data/maps/OldaleTown/scripts.pory"
	lock
# 640 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 641 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Man_Text_0
# 642 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Man_Text_1
# 645 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 646 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Woman::
# 651 "data/maps/OldaleTown/scripts.pory"
	lock
# 652 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 653 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Woman_Text_0
# 654 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_1
# 656 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 657 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 658 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 659 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 660 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 661 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Pichu::
# 666 "data/maps/OldaleTown/scripts.pory"
	lock
# 667 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 668 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 669 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Pichu_Text_0
# 670 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 671 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 672 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 673 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 121 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 121 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 123 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 123 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 125 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 125 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 134 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 134 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 463 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_0:
# 463 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 497 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_1:
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 498 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 47 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_RestarauntSign_Text_0:
# 56 "data/maps/OldaleTown/scripts.pory"
	.string "The Sassy Salazzle\p"
	.string "Battle and Dine!$"

GerbonTown_EventScript_Route110Sign_Text_0:
# 65 "data/maps/OldaleTown/scripts.pory"
	.string "{DOWN_ARROW} To Route 110$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 72 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 89 "data/maps/OldaleTown/scripts.pory"
	.string "Guard$"

GerbonTown_EventScript_PalladiumBlockers_Text_1:
# 90 "data/maps/OldaleTown/scripts.pory"
	.string "Not allowed in when there's no match\n"
	.string "going on.\p"
	.string "Come back another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 103 "data/maps/OldaleTown/scripts.pory"
	.string "Angry Woman$"

GerbonTown_EventScript_MadWoman_Text_1:
# 104 "data/maps/OldaleTown/scripts.pory"
	.string "These trainers! Breaking out into a\n"
	.string "battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 117 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 1$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 118 "data/maps/OldaleTown/scripts.pory"
	.string "Lillipup! Use your Tackle attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 129 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 2$"

GerbonTown_EventScript_BlockingBattleScene_Text_3:
# 130 "data/maps/OldaleTown/scripts.pory"
	.string "Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_4:
# 142 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 172 "data/maps/OldaleTown/scripts.pory"
	.string "Reckless Child$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_1:
# 173 "data/maps/OldaleTown/scripts.pory"
	.string "Ouch, that hurt!\p"
	.string "I'm sorry, I'm just so excited for the\n"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 218 "data/maps/OldaleTown/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 219 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! That was the best match\n"
	.string "I've seen yet! I am glad you were able\l"
	.string "to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTown_OutdoorBattleJordanAsk_Text_0:
# 233 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry if you lose, I'll heal\n"
	.string "your Pokemon right away!$"

GerbonTown_OutdoorBattleJordanAsk_Text_1:
# 240 "data/maps/OldaleTown/scripts.pory"
	.string "No fun! Come on, a real quick battle!$"

GerbonTown_OutdoorBattleTrigger_Text_0:
# 253 "data/maps/OldaleTown/scripts.pory"
	.string "That's what I'm talking about! Let's go!$"

GerbonTown_OutdoorBattleTrigger_Text_1:
# 254 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "You must have been practicing, I\n"
	.string "thought I had that in the bag!$"

GerbonTown_OutdoorBattleEnd_Text_1:
# 351 "data/maps/OldaleTown/scripts.pory"
	.string "Whew, that was a close one! Looks like\n"
	.string "my training has paid off! I bet you\l"
	.string "didn't expect that huh?$"

GerbonTown_OutdoorBattleEnd_Text_2:
# 356 "data/maps/OldaleTown/scripts.pory"
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

GerbonTown_OutdoorBattleEnd_Text_3:
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "The level cap has been raised to 18!$"

GerbonTownTourney_JordanStartOutside_Text_0:
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "There you are! It's time to start the\n"
	.string "tournament! I should explain exactly\l"
	.string "how it works, eh? That would be helpful.\p"
	.string "16 trainers are entering, and you will\n"
	.string "battle a total of four trainers.\l"
	.string "Then, you'll be facing the current\l"
	.string "{COLOR RED}Rep Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, Julia!\p"
	.string "When the tournament starts, you'll be in\n"
	.string "the prep room, where you'll be able to\l"
	.string "heal up, and start your next match.\p"
	.string "Are you ready to go? You\n"
	.string "can't leave once the tournament has\l"
	.string "started!$"

GerbonTownTourney_JordanStartOutside_Text_1:
# 428 "data/maps/OldaleTown/scripts.pory"
	.string "Great! Let's go!$"

GerbonTownTourney_JordanAfter_Text_0:
# 448 "data/maps/OldaleTown/scripts.pory"
	.string "That was amazing! I'm a little miffed\n"
	.string "that I didn't win, but I can't deny what\l"
	.string "I bore witness to! I said it before, but\l"
	.string "you must have really been practicing!\p"
	.string "Don't worry though, because I'm going\n"
	.string "to get you next time! That's right!\l"
	.string "We're going to battle in the next\l"
	.string "tournament in {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "...\p"
	.string "I'll get you back for the rest of the\n"
	.string "meal, I promi-$"

GerbonTownTourney_JordanAfter_Text_1:
# 468 "data/maps/OldaleTown/scripts.pory"
	.string "Ah I completely forgot! This ought to\n"
	.string "cover that meal in full!$"

GerbonTownTourney_JordanAfter_Text_2:
# 474 "data/maps/OldaleTown/scripts.pory"
	.string "That Repel is awesome! It's new tech\n"
	.string "from a local company in Vulias, you\l"
	.string "probably have not heard of it!\p"
	.string "It's like any normal Repel, but it never\n"
	.string "runs out! Turn it on from your {COLOR RED}Key\l"
	.string "Items{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} pouch, and it will stay on until\l"
	.string "you turn it off! Very useful!\p"
	.string "I suppose I should have gotten you one\n"
	.string "of these earlier, none of the Marts in\l"
	.string "Vulias sell normal Repels anymore\l"
	.string "because everyone has one of these!$"

GerbonTownTourney_JordanAfter_Text_3:
# 489 "data/maps/OldaleTown/scripts.pory"
	.string "Anyways, Woltia City\n"
	.string "is North and then west, through\l"
	.string "{COLOR RED}Route 102, and Mullen Cave{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Mullen Cave is full of Pokemon, so we'll\n"
	.string "find lots of new partners. Maybe I'll\l"
	.string "see you while I'm there. Catch you\l"
	.string "later {PLAYER}!$"

GerbonTown_EventScript_RuvelKid_Text_0:
# 522 "data/maps/OldaleTown/scripts.pory"
	.string "Child$"

GerbonTown_EventScript_RuvelKid_Text_1:
# 524 "data/maps/OldaleTown/scripts.pory"
	.string "I'm so excited! My mommy is going taking\n"
	.string "me to visit a {COLOR RED}Pyramid!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "I hope it's not too scary!$"

GerbonTown_EventScript_RuvelKid_Text_2:
# 530 "data/maps/OldaleTown/scripts.pory"
	.string "It's the mister from the Pyramid! Thank\n"
	.string "you for saving me from that scary\l"
	.string "Pokemon! My mommy doesn't want to take\l"
	.string "me on vacation anymore though!$"

GerbonTown_EventScript_RuvelKidMom_Text_0:
# 543 "data/maps/OldaleTown/scripts.pory"
	.string "Happy Mom$"

GerbonTown_EventScript_RuvelKidMom_Text_1:
# 545 "data/maps/OldaleTown/scripts.pory"
	.string "I always make sure to let me daughter\n"
	.string "see the world! It's important that\l"
	.string "she has a wide range of experiences!$"

GerbonTown_EventScript_RuvelKidMom_Text_2:
# 550 "data/maps/OldaleTown/scripts.pory"
	.string "My daughter's savior! Thank you again!\n"
	.string "I'm glad to see you are well!\p"
	.string "I've decided my duaghter will not leave\n"
	.string "town until she has her own Pokemon! I\l"
	.string "can't allow her to experience such a\l"
	.string "thing again!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_0:
# 567 "data/maps/OldaleTown/scripts.pory"
	.string "Athlete$"

GerbonTown_EventScript_TriathleteHouseMan_Text_1:
# 569 "data/maps/OldaleTown/scripts.pory"
	.string "It's important to train yourself, and\n"
	.string "your Pokemon! Look at Linoone go!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_2:
# 573 "data/maps/OldaleTown/scripts.pory"
	.string "Linoone$"

GerbonTown_EventScript_TriathleteHouseMan_Text_3:
# 574 "data/maps/OldaleTown/scripts.pory"
	.string "Greeee-ah$"

GerbonTown_EventScript_TriathleteHouseMan_Text_4:
# 578 "data/maps/OldaleTown/scripts.pory"
	.string "Here, this can help you make your\n"
	.string "Pokemon as strong as they can be!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_5:
# 583 "data/maps/OldaleTown/scripts.pory"
	.string "If a Pokemon holds that, they'll get\n"
	.string "much stronger than normal! Use it to\l"
	.string "make sure you're always ready for the\l"
	.string "next opponent!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_6:
# 589 "data/maps/OldaleTown/scripts.pory"
	.string "Keep on training my friend!$"

GerbonTown_EventScript_ExpertHouseMan_Text_0:
# 613 "data/maps/OldaleTown/scripts.pory"
	.string "Old Man$"

GerbonTown_EventScript_ExpertHouseMan_Text_1:
# 614 "data/maps/OldaleTown/scripts.pory"
	.string "Hoho, I do love retirement! Why, after a\n"
	.string "lifetime of work, nothing is better\l"
	.string "than nothing at all!$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_0:
# 626 "data/maps/OldaleTown/scripts.pory"
	.string "Slaking$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_1:
# 627 "data/maps/OldaleTown/scripts.pory"
	.string "Grahh-uh!$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_2:
# 629 "data/maps/OldaleTown/scripts.pory"
	.string "It looks as though you have woken up\n"
	.string "the Slaking, not a good idea!$"

GerbonTown_EventScript_CoupleHouse01Man_Text_0:
# 641 "data/maps/OldaleTown/scripts.pory"
	.string "Man$"

GerbonTown_EventScript_CoupleHouse01Man_Text_1:
# 642 "data/maps/OldaleTown/scripts.pory"
	.string "We love to watch the feature matches,\n"
	.string "but our little Pichu doesn't like\l"
	.string "battling!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_0:
# 653 "data/maps/OldaleTown/scripts.pory"
	.string "Woman$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_1:
# 654 "data/maps/OldaleTown/scripts.pory"
	.string "Even though our Pichu doesn't battle,\n"
	.string "we wouldn't change them for the world!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_2:
# 658 "data/maps/OldaleTown/scripts.pory"
	.string "Pi-chu!$"

GerbonTown_EventScript_CoupleHouse01Pichu_Text_0:
# 669 "data/maps/OldaleTown/scripts.pory"
	.string "Pichu$"
