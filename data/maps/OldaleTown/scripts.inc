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
# 14 "data/maps/OldaleTown/scripts.pory"
	call GerbonTown_Restaurant_Prepare
# 15 "data/maps/OldaleTown/scripts.pory"
	call GerbonTown_DisableReportersBeforeValid
	end

GerbonTown_MapScript_OnTransition_2:
# 12 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_BattleHallDisables
	goto GerbonTown_MapScript_OnTransition_1


GerbonTown_DisableReportersBeforeValid::
# 22 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 9
	goto_if_lt GerbonTown_DisableReportersBeforeValid_1
	return

GerbonTown_DisableReportersBeforeValid_1:
# 24 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_INTERVIEW01_INTERVIEWCREW
# 25 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_INTERVIEW01_INTERVIEWER
# 26 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_INTERVIEW01_CAMERAMAN
	return


GerbonTown_Restaurant_Prepare::
# 32 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 0
# 33 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_WAITER_T1_01
	return


GerbonTown_BattleHallDisables::
# 38 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 39 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 40 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 41 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_BLOCKERS
# 42 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 43 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_MANTINE, MAP_GERBON_TOWN_BATTLE_HALL
# 44 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_BATTLEHALL_JORDAN_01, MAP_GERBON_TOWN_BATTLE_HALL
# 45 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 46 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_PALLADIUM_BLOCKER_1, MAP_OLDALE_TOWN
# 47 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_PALLADIUM_BLOCKER_2, MAP_OLDALE_TOWN
# 50 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER01
# 51 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER02
# 52 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER03
# 53 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER04
# 54 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER05
# 57 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBONTOURNEY_ENABLED
# 60 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 1
	end


GerbonTown_EventScript_TownSign::
# 66 "data/maps/OldaleTown/scripts.pory"
	lockall
# 67 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TownSign_Text_0
# 70 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_RestarauntSign::
# 75 "data/maps/OldaleTown/scripts.pory"
	lockall
# 76 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RestarauntSign_Text_0
# 79 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_Route110Sign::
# 84 "data/maps/OldaleTown/scripts.pory"
	lockall
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_Route110Sign_Text_0
# 86 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 91 "data/maps/OldaleTown/scripts.pory"
	lockall
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 93 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_HiddenItemBall::
# 98 "data/maps/OldaleTown/scripts.pory"
	lock
# 99 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 100 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 101 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 102 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 108 "data/maps/OldaleTown/scripts.pory"
	lock
# 109 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_PalladiumBlockers_Text_0
# 110 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_1
# 114 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 115 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 121 "data/maps/OldaleTown/scripts.pory"
	lock
# 122 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 123 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_MadWoman_Text_0
# 124 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_1
# 129 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 130 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 136 "data/maps/OldaleTown/scripts.pory"
	lock
# 137 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_0
# 138 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 139 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 140 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 141 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 142 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 143 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 144 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 145 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 146 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 147 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 148 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 149 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_2
# 150 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_3
# 152 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 153 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 154 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 155 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 156 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 157 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 158 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 159 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 160 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 161 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 162 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_4
# 163 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 164 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 169 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 170 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 174 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 175 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 180 "data/maps/OldaleTown/scripts.pory"
	lock
# 181 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 186 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 187 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 190 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 191 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 192 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 193 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_1
# 203 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 204 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 205 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 206 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 207 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 208 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 209 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 182 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 183 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 214 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 216 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 217 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 220 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 221 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 222 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 223 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 224 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 227 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 228 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 234 "data/maps/OldaleTown/scripts.pory"
	lock
# 235 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 236 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 237 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 238 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 239 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_1
# 245 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 247 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return


GerbonTown_OutdoorBattleJordanAsk::
# 252 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 253 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_0, MSGBOX_YESNO
# 257 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_OutdoorBattleJordanAsk_1
# 260 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_1
# 261 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 262 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return

GerbonTown_OutdoorBattleJordanAsk_1:
# 258 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleTrigger
	return


GerbonTown_OutdoorBattleTrigger::
# 267 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 268 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTown_OutdoorBattleTrigger_1
# 290 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTown_OutdoorBattleTrigger_2
# 312 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTown_OutdoorBattleTrigger_3
# 334 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTown_OutdoorBattleTrigger_4
	return

GerbonTown_OutdoorBattleTrigger_1:
# 269 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_OutdoorBattleTrigger_2:
# 291 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_OutdoorBattleTrigger_3:
# 313 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_OutdoorBattleTrigger_4:
# 335 "data/maps/OldaleTown/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBON_TOWN_JORDAN_FIRSTBATTLE, TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, GerbonTown_OutdoorBattleEnd, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonTown_OutdoorBattleEnd::
# 359 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 360 "data/maps/OldaleTown/scripts.pory"
	special HealPlayerParty
# 361 "data/maps/OldaleTown/scripts.pory"
	lock
# 362 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 363 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 364 "data/maps/OldaleTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 365 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 366 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GerbonTown_OutdoorBattleEnd_2
# 371 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_1
# 374 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_OutdoorBattleEnd_1:
# 376 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_2
# 399 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 400 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 401 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 402 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 403 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 404 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 405 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 408 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 409 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 410 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 413 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 414 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 415 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_3, MSGBOX_SIGN
# 416 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 417 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 420 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 422 "data/maps/OldaleTown/scripts.pory"
	release
	return

GerbonTown_OutdoorBattleEnd_2:
# 367 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 369 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_OutdoorBattleEnd_1


GerbonTownTourney_JordanStartOutside::
# 428 "data/maps/OldaleTown/scripts.pory"
	lock
# 429 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 430 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 431 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_0, MSGBOX_YESNO
# 447 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownTourney_JordanStartOutside_1
	return

GerbonTownTourney_JordanStartOutside_1:
# 448 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 449 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_1
# 450 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 451 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_JULIA
# 452 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_CANDACE
# 453 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_GOLEM
# 454 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 455 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 1
# 456 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 8
# 457 "data/maps/OldaleTown/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 458 "data/maps/OldaleTown/scripts.pory"
	waitstate
# 459 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTownTourney_JordanAfter::
# 466 "data/maps/OldaleTown/scripts.pory"
	lock
# 467 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 468 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 469 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 470 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_0
# 489 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 490 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_0
# 491 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 492 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 493 "data/maps/OldaleTown/scripts.pory"
	waitse
# 494 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 495 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_1
# 497 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 498 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 499 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 500 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 501 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_2
# 514 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 515 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 516 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_3
# 524 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_1
# 527 "data/maps/OldaleTown/scripts.pory"
	delay 40
# 528 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 529 "data/maps/OldaleTown/scripts.pory"
	waitmovement GERBON_TOWN_JORDAN_FIRSTBATTLE
# 530 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 10
# 531 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_TV_START
# 532 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_INTERVIEWS_STORY, 1
# 533 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 534 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 537 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 539 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 541 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 542 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTownTourney_InterviewAfterGerbonWin
	end


GerbonTownTourney_InterviewAfterGerbonWin::
# 548 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_INTERVIEW01_INTERVIEWER, GerbonTownTourney_InterviewAfterGerbonWin_Movement_0
# 549 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_INTERVIEW01_CAMERAMAN, GerbonTownTourney_InterviewAfterGerbonWin_Movement_1
# 550 "data/maps/OldaleTown/scripts.pory"
	waitmovement GERBON_INTERVIEW01_CAMERAMAN
# 551 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownTourney_InterviewAfterGerbonWin_Movement_2
# 552 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 553 "data/maps/OldaleTown/scripts.pory"
	waitse
# 554 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownTourney_InterviewAfterGerbonWin_Text_0
# 555 "data/maps/OldaleTown/scripts.pory"
	call BattleHall_EventScript_InterviewStart
# 556 "data/maps/OldaleTown/scripts.pory"
	lock
# 557 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownTourney_InterviewAfterGerbonWin_Text_0
# 558 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_InterviewAfterGerbonWin_Text_1
# 560 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 561 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 562 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_INTERVIEW01_CAMERAMAN, GerbonTownTourney_InterviewAfterGerbonWin_Movement_3
# 563 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 564 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_INTERVIEW01_INTERVIEWER, GerbonTownTourney_InterviewAfterGerbonWin_Movement_4
# 565 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 566 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_INTERVIEW01_CAMERAMAN, GerbonTownTourney_InterviewAfterGerbonWin_Movement_5
# 567 "data/maps/OldaleTown/scripts.pory"
	waitmovement GERBON_INTERVIEW01_INTERVIEWER
# 568 "data/maps/OldaleTown/scripts.pory"
	waitmovement GERBON_INTERVIEW01_CAMERAMAN
# 569 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_INTERVIEW01_INTERVIEWER
# 570 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_INTERVIEW01_CAMERAMAN
# 571 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_INTERVIEWS_STORY, 2
# 572 "data/maps/OldaleTown/scripts.pory"
	release
	return


GerbonTown_EventScript_RuvelKid::
# 581 "data/maps/OldaleTown/scripts.pory"
	lock
# 582 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 583 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_RuvelKid_Text_0
# 584 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_lt GerbonTown_EventScript_RuvelKid_2
# 591 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKid_Text_2
GerbonTown_EventScript_RuvelKid_1:
# 596 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 597 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_RuvelKid_2:
# 585 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKid_Text_1
	goto GerbonTown_EventScript_RuvelKid_1


GerbonTown_EventScript_RuvelKidMom::
# 602 "data/maps/OldaleTown/scripts.pory"
	lock
# 603 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 604 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_RuvelKidMom_Text_0
# 605 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_lt GerbonTown_EventScript_RuvelKidMom_2
# 611 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKidMom_Text_2
GerbonTown_EventScript_RuvelKidMom_1:
# 619 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 620 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_RuvelKidMom_2:
# 606 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKidMom_Text_1
	goto GerbonTown_EventScript_RuvelKidMom_1


GerbonTown_EventScript_TriathleteHouseMan::
# 626 "data/maps/OldaleTown/scripts.pory"
	lock
# 627 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 628 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 629 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_GERBON_GOT_MACHO, GerbonTown_EventScript_TriathleteHouseMan_2
# 650 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_6
# 651 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_EventScript_TriathleteHouseMan_1:
# 654 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_TriathleteHouseMan_2:
# 630 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_1
# 632 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 633 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 634 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 635 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 636 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 637 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 638 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 639 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_4
# 641 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 642 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_MACHO_BRACE, 1
# 643 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_GOT_MACHO
# 644 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_5
# 648 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_EventScript_TriathleteHouseMan_1


GerbonTown_EventScript_TriathleteHouseLinoone::
# 659 "data/maps/OldaleTown/scripts.pory"
	lock
# 660 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 661 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 662 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 663 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 664 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 665 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 666 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseMan::
# 672 "data/maps/OldaleTown/scripts.pory"
	lock
# 673 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 674 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseMan_Text_0
# 675 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseMan_Text_1
# 678 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 679 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseSlaking::
# 684 "data/maps/OldaleTown/scripts.pory"
	lock
# 685 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 686 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 687 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseSlaking_Text_0
# 688 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseSlaking_Text_1
# 689 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 690 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseSlaking_Text_2
# 692 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 693 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 694 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Man::
# 700 "data/maps/OldaleTown/scripts.pory"
	lock
# 701 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 702 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Man_Text_0
# 703 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Man_Text_1
# 706 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 707 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Woman::
# 712 "data/maps/OldaleTown/scripts.pory"
	lock
# 713 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 714 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Woman_Text_0
# 715 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_1
# 717 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 718 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 719 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 720 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 721 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 722 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Pichu::
# 727 "data/maps/OldaleTown/scripts.pory"
	lock
# 728 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 729 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 730 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Pichu_Text_0
# 731 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 732 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 733 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 734 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 141 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 141 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 143 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 143 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 145 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 145 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 154 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 154 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 490 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_0:
# 490 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 524 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_1:
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 525 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 548 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_InterviewAfterGerbonWin_Movement_0:
# 548 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 548 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 548 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 549 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_InterviewAfterGerbonWin_Movement_1:
# 549 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 549 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 549 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 549 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 549 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 551 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_InterviewAfterGerbonWin_Movement_2:
# 551 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
# 551 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 562 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_InterviewAfterGerbonWin_Movement_3:
# 562 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 562 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 564 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_InterviewAfterGerbonWin_Movement_4:
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 564 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 566 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_InterviewAfterGerbonWin_Movement_5:
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 566 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 67 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_RestarauntSign_Text_0:
# 76 "data/maps/OldaleTown/scripts.pory"
	.string "The Sassy Salazzle\p"
	.string "Battle and Dine!$"

GerbonTown_EventScript_Route110Sign_Text_0:
# 85 "data/maps/OldaleTown/scripts.pory"
	.string "{DOWN_ARROW} To Route 110$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 92 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 109 "data/maps/OldaleTown/scripts.pory"
	.string "Guard$"

GerbonTown_EventScript_PalladiumBlockers_Text_1:
# 110 "data/maps/OldaleTown/scripts.pory"
	.string "Not allowed in when there's no match\n"
	.string "going on.\p"
	.string "Come back another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 123 "data/maps/OldaleTown/scripts.pory"
	.string "Angry Woman$"

GerbonTown_EventScript_MadWoman_Text_1:
# 124 "data/maps/OldaleTown/scripts.pory"
	.string "These trainers! Breaking out into a\n"
	.string "battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 1$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 138 "data/maps/OldaleTown/scripts.pory"
	.string "Lillipup! Use your Tackle attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 149 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 2$"

GerbonTown_EventScript_BlockingBattleScene_Text_3:
# 150 "data/maps/OldaleTown/scripts.pory"
	.string "Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_4:
# 162 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 192 "data/maps/OldaleTown/scripts.pory"
	.string "Reckless Child$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_1:
# 193 "data/maps/OldaleTown/scripts.pory"
	.string "Ouch, that hurt!\p"
	.string "I'm sorry, I'm just so excited for the\n"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 238 "data/maps/OldaleTown/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 239 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! That was the best match\n"
	.string "I've seen yet! I am glad you were able\l"
	.string "to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTown_OutdoorBattleJordanAsk_Text_0:
# 253 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry if you lose, I'll heal\n"
	.string "your Pokemon right away!$"

GerbonTown_OutdoorBattleJordanAsk_Text_1:
# 260 "data/maps/OldaleTown/scripts.pory"
	.string "No fun! Come on, a real quick battle!$"

GerbonTown_OutdoorBattleTrigger_Text_0:
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "That's what I'm talking about! Let's go!$"

GerbonTown_OutdoorBattleTrigger_Text_1:
# 274 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "You must have been practicing, I\n"
	.string "thought I had that in the bag!$"

GerbonTown_OutdoorBattleEnd_Text_1:
# 371 "data/maps/OldaleTown/scripts.pory"
	.string "Whew, that was a close one! Looks like\n"
	.string "my training has paid off! I bet you\l"
	.string "didn't expect that huh?$"

GerbonTown_OutdoorBattleEnd_Text_2:
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "I've been thinking, maybe we should try\n"
	.string "to challenge the {COLOR RED}Battle Ace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} of Gerbon\l"
	.string "Town. That's Julia, one of the trainers\l"
	.string "we just watched!\p"
	.string "Every two years, there is a\n"
	.string "tournament in each of the stadiums.\l"
	.string "Sinvesta calls it a {COLOR RED}Showcase\l"
	.string "Tournament{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. Whoever wins gets to face\l"
	.string "the current {COLOR RED}Battle Ace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. It's a great way\l"
	.string "to test your skill!\p"
	.string "I think we need to train our Pokemon\n"
	.string "though. I don't think either of us would\l"
	.string "even be able to make it to the end of\l"
	.string "tournament!\p"
	.string "Meet me at the entrance to {COLOR RED}\n"
	.string "Sawgrass Forest{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, just south of my\l"
	.string "house! We'll be able to train our\l"
	.string "Pokemon there!\p"
	.string "See you soon!$"

GerbonTown_OutdoorBattleEnd_Text_3:
# 415 "data/maps/OldaleTown/scripts.pory"
	.string "The level cap has been raised to 18!$"

GerbonTownTourney_JordanStartOutside_Text_0:
# 431 "data/maps/OldaleTown/scripts.pory"
	.string "There you are! It's time to start the\n"
	.string "tournament! I should explain exactly\l"
	.string "how it works, eh? That would be helpful.\p"
	.string "16 trainers are entering, and you will\n"
	.string "battle a total of four trainers.\l"
	.string "Then, you'll be facing the {COLOR RED}Battle Ace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY},\l"
	.string "Julia!\p"
	.string "When the tournament starts, you'll be in\n"
	.string "the prep room, where you'll be able to\l"
	.string "heal up, and start your next match.\p"
	.string "Are you ready to go? You\n"
	.string "can't leave once the tournament has\l"
	.string "started!$"

GerbonTownTourney_JordanStartOutside_Text_1:
# 449 "data/maps/OldaleTown/scripts.pory"
	.string "Great! Let's go!$"

GerbonTownTourney_JordanAfter_Text_0:
# 470 "data/maps/OldaleTown/scripts.pory"
	.string "That was amazing! I'm a little miffed\n"
	.string "that I didn't win, but I can't deny what\l"
	.string "I bore witness to! I said it before, but\l"
	.string "you must have really been practicing!\p"
	.string "Honestly, it's pretty rare for someone\n"
	.string "to beat a Battle Ace, they're supposed\l"
	.string "to be the best of the best! I think you\l"
	.string "surpised a lot of people just now!\p"
	.string "I can't let you get away with that by\n"
	.string "yourself, I'm going to get you next\l"
	.string "time! That's right, we're going to battle\l"
	.string "in the next tournament in {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "...\p"
	.string "I'll get you back for the rest of the\n"
	.string "meal, I promi-$"

GerbonTownTourney_JordanAfter_Text_1:
# 495 "data/maps/OldaleTown/scripts.pory"
	.string "Ah I completely forgot! This ought to\n"
	.string "cover that meal in full!$"

GerbonTownTourney_JordanAfter_Text_2:
# 501 "data/maps/OldaleTown/scripts.pory"
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
# 516 "data/maps/OldaleTown/scripts.pory"
	.string "Anyways, Woltia City\n"
	.string "is North and then west, through\l"
	.string "{COLOR RED}Route 102, and Mullen Cave{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Mullen Cave is full of Pokemon, so we'll\n"
	.string "find lots of new partners. Maybe I'll\l"
	.string "see you while I'm there. Catch you\l"
	.string "later {PLAYER}!$"

GerbonTownTourney_InterviewAfterGerbonWin_Text_0:
# 554 "data/maps/OldaleTown/scripts.pory"
	.string "Interviewer$"

GerbonTownTourney_InterviewAfterGerbonWin_Text_1:
# 558 "data/maps/OldaleTown/scripts.pory"
	.string "Thank you for your time! We hope to see\n"
	.string "you again soon!$"

GerbonTown_EventScript_RuvelKid_Text_0:
# 583 "data/maps/OldaleTown/scripts.pory"
	.string "Child$"

GerbonTown_EventScript_RuvelKid_Text_1:
# 585 "data/maps/OldaleTown/scripts.pory"
	.string "I'm so excited! My mommy is going taking\n"
	.string "me to visit a {COLOR RED}Pyramid!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "I hope it's not too scary!$"

GerbonTown_EventScript_RuvelKid_Text_2:
# 591 "data/maps/OldaleTown/scripts.pory"
	.string "It's the mister from the Pyramid! Thank\n"
	.string "you for saving me from that scary\l"
	.string "Pokemon! My mommy doesn't want to take\l"
	.string "me on vacation anymore though!$"

GerbonTown_EventScript_RuvelKidMom_Text_0:
# 604 "data/maps/OldaleTown/scripts.pory"
	.string "Happy Mom$"

GerbonTown_EventScript_RuvelKidMom_Text_1:
# 606 "data/maps/OldaleTown/scripts.pory"
	.string "I always make sure to let me daughter\n"
	.string "see the world! It's important that\l"
	.string "she has a wide range of experiences!$"

GerbonTown_EventScript_RuvelKidMom_Text_2:
# 611 "data/maps/OldaleTown/scripts.pory"
	.string "My daughter's savior! Thank you again!\n"
	.string "I'm glad to see you are well!\p"
	.string "I've decided my duaghter will not leave\n"
	.string "town until she has her own Pokemon! I\l"
	.string "can't allow her to experience such a\l"
	.string "thing again!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_0:
# 628 "data/maps/OldaleTown/scripts.pory"
	.string "Athlete$"

GerbonTown_EventScript_TriathleteHouseMan_Text_1:
# 630 "data/maps/OldaleTown/scripts.pory"
	.string "It's important to train yourself, and\n"
	.string "your Pokemon! Look at Linoone go!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_2:
# 634 "data/maps/OldaleTown/scripts.pory"
	.string "Linoone$"

GerbonTown_EventScript_TriathleteHouseMan_Text_3:
# 635 "data/maps/OldaleTown/scripts.pory"
	.string "Greeee-ah$"

GerbonTown_EventScript_TriathleteHouseMan_Text_4:
# 639 "data/maps/OldaleTown/scripts.pory"
	.string "Here, this can help you make your\n"
	.string "Pokemon as strong as they can be!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_5:
# 644 "data/maps/OldaleTown/scripts.pory"
	.string "If a Pokemon holds that, they'll get\n"
	.string "much stronger than normal! Use it to\l"
	.string "make sure you're always ready for the\l"
	.string "next opponent!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_6:
# 650 "data/maps/OldaleTown/scripts.pory"
	.string "Keep on training my friend!$"

GerbonTown_EventScript_ExpertHouseMan_Text_0:
# 674 "data/maps/OldaleTown/scripts.pory"
	.string "Old Man$"

GerbonTown_EventScript_ExpertHouseMan_Text_1:
# 675 "data/maps/OldaleTown/scripts.pory"
	.string "Hoho, I do love retirement! Why, after a\n"
	.string "lifetime of work, nothing is better\l"
	.string "than nothing at all!$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_0:
# 687 "data/maps/OldaleTown/scripts.pory"
	.string "Slaking$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_1:
# 688 "data/maps/OldaleTown/scripts.pory"
	.string "Grahh-uh!$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_2:
# 690 "data/maps/OldaleTown/scripts.pory"
	.string "It looks as though you have woken up\n"
	.string "the Slaking, not a good idea!$"

GerbonTown_EventScript_CoupleHouse01Man_Text_0:
# 702 "data/maps/OldaleTown/scripts.pory"
	.string "Man$"

GerbonTown_EventScript_CoupleHouse01Man_Text_1:
# 703 "data/maps/OldaleTown/scripts.pory"
	.string "We love to watch the feature matches,\n"
	.string "but our little Pichu doesn't like\l"
	.string "battling!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_0:
# 714 "data/maps/OldaleTown/scripts.pory"
	.string "Woman$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_1:
# 715 "data/maps/OldaleTown/scripts.pory"
	.string "Even though our Pichu doesn't battle,\n"
	.string "we wouldn't change them for the world!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_2:
# 719 "data/maps/OldaleTown/scripts.pory"
	.string "Pi-chu!$"

GerbonTown_EventScript_CoupleHouse01Pichu_Text_0:
# 730 "data/maps/OldaleTown/scripts.pory"
	.string "Pichu$"
