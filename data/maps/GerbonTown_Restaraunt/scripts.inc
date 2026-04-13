GerbonTown_Restaraunt_MapScripts::
# 2 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GerbonTown_Restaraunt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GerbonTown_Restaraunt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	map_script_2 VAR_RESTARAUNT_STATE, 0, GerbonTown_Restaurant_Init
	.2byte 0


GerbonTown_Restaurant_Init::
# 31 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 1
# 32 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	lock
# 33 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_Restaurant_Init_Movement_0
# 34 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 35 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 20
# 36 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 37 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_Init_Text_1
# 38 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
	return


GerbonTown_Restaurant_DecideTier::
# 42 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 1
# 43 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 44 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_0
# 45 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 46 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	dynmultipush GerbonTown_Restaurant_DecideTier_Text_1, 2
# 47 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	dynmultipush GerbonTown_Restaurant_DecideTier_Text_2, 3
# 48 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	dynmultipush GerbonTown_Restaurant_DecideTier_Text_3, 4
# 49 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	dynmultipush GerbonTown_Restaurant_DecideTier_Text_4, 100
# 50 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	dynmultistack 0, 0, TRUE, 4, FALSE, 1, 0
# 51 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	copyvar VAR_RESTARAUNT_STATE, VAR_RESULT
# 52 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	closemessage
# 53 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 54 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 56 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 2, GerbonTown_Restaurant_DecideTier_2
# 77 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 3, GerbonTown_Restaurant_DecideTier_3
# 108 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 4, GerbonTown_Restaurant_DecideTier_4
# 139 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 100, GerbonTown_Restaurant_DecideTier_5
	return

GerbonTown_Restaurant_DecideTier_2:
# 57 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_5, MSGBOX_YESNO
# 58 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_Restaurant_DecideTier_7
# 75 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
GerbonTown_Restaurant_DecideTier_6:
	return

GerbonTown_Restaurant_DecideTier_3:
# 78 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_7, MSGBOX_YESNO
# 79 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_Restaurant_DecideTier_11
# 106 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
GerbonTown_Restaurant_DecideTier_10:
	return

GerbonTown_Restaurant_DecideTier_4:
# 109 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_9, MSGBOX_YESNO
# 110 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_Restaurant_DecideTier_15
# 137 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
GerbonTown_Restaurant_DecideTier_14:
	return

GerbonTown_Restaurant_DecideTier_5:
# 140 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 100
# 141 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_EarlyExitNevermind
	return

GerbonTown_Restaurant_DecideTier_7:
	checkmoney 300
# 0 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GerbonTown_Restaurant_DecideTier_18
# 68 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 69 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_6
# 71 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 72 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
	goto GerbonTown_Restaurant_DecideTier_6

GerbonTown_Restaurant_DecideTier_11:
	specialvar VAR_RESULT, GetPlayerLevelCeiling
# 0 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, 25
	goto_if_lt GerbonTown_Restaurant_DecideTier_22
GerbonTown_Restaurant_DecideTier_21:
	checkmoney 1000
# 0 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GerbonTown_Restaurant_DecideTier_27
# 99 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 100 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_6
# 102 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 103 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
	goto GerbonTown_Restaurant_DecideTier_10

GerbonTown_Restaurant_DecideTier_15:
	specialvar VAR_RESULT, GetPlayerLevelCeiling
# 0 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, 40
	goto_if_lt GerbonTown_Restaurant_DecideTier_25
GerbonTown_Restaurant_DecideTier_24:
	checkmoney 2000
# 0 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GerbonTown_Restaurant_DecideTier_30
# 130 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 131 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_6
# 133 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 134 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
	goto GerbonTown_Restaurant_DecideTier_14

GerbonTown_Restaurant_DecideTier_18:
# 62 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	removemoney 300
# 63 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 20
# 64 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_BringPlayerToTable
	goto GerbonTown_Restaurant_DecideTier_6

GerbonTown_Restaurant_DecideTier_22:
# 83 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 84 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_8
# 88 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 89 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
	goto GerbonTown_Restaurant_DecideTier_21

GerbonTown_Restaurant_DecideTier_25:
# 114 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 115 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_DecideTier_Text_10
# 119 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 120 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_DecideTier
	goto GerbonTown_Restaurant_DecideTier_24

GerbonTown_Restaurant_DecideTier_27:
# 93 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	removemoney 1000
# 94 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 30
# 95 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_BringPlayerToTable
	goto GerbonTown_Restaurant_DecideTier_10

GerbonTown_Restaurant_DecideTier_30:
# 124 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	removemoney 2000
# 125 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 40
# 126 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_BringPlayerToTable
	goto GerbonTown_Restaurant_DecideTier_14


GerbonTown_Restaurant_EarlyExitNevermind::
# 147 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 148 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_EarlyExitNevermind_Text_0
# 149 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 150 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_Restaurant_EarlyExitNevermind_Movement_0
# 151 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	warp MAP_OLDALE_TOWN, 18
# 152 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitstate
# 153 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	release
	end


GerbonTown_Restaurant_BringPlayerToTable::
# 158 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 159 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 160 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_BringPlayerToTable_Text_0
# 162 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 163 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement GERBON_WAITRESS, GerbonTown_Restaurant_BringPlayerToTable_Movement_0
# 166 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 30
# 167 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_Restaurant_BringPlayerToTable_Movement_1
# 170 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 171 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement GERBON_WAITRESS, GerbonTown_Restaurant_BringPlayerToTable_Movement_2
# 172 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 173 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 174 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_BringPlayerToTable_Text_1
# 175 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 176 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	closemessage
# 177 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement GERBON_WAITRESS, GerbonTown_Restaurant_BringPlayerToTable_Movement_3
# 179 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 180 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	addobject BATTLE_WAITER
# 181 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_BeginBattle01
	return


GerbonTown_Restaurant_BeginBattle01::
# 185 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 10
# 186 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement BATTLE_WAITER, BattleWaiter_WalkToTable
# 187 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 188 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	special HealPlayerParty
# 189 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_BeginBattle01_Text_0
# 190 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 192 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 20, GerbonTown_Restaurant_BeginBattle01_2
# 213 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 30, GerbonTown_Restaurant_BeginBattle01_3
# 234 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 40, GerbonTown_Restaurant_BeginBattle01_4
	return

GerbonTown_Restaurant_BeginBattle01_2:
# 193 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_RODNEY, GerbonTown_Restaurant_BeginBattle01_Text_1, GerbonTown_Restaurant_BeginBattle01_Text_2, GerbonTown_Restaurant_EndBattle01, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_Restaurant_BeginBattle01_3:
# 214 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_SANTIAGO, GerbonTown_Restaurant_BeginBattle01_Text_1, GerbonTown_Restaurant_BeginBattle01_Text_2, GerbonTown_Restaurant_EndBattle01, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_Restaurant_BeginBattle01_4:
# 235 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_KEVIN, GerbonTown_Restaurant_BeginBattle01_Text_1, GerbonTown_Restaurant_BeginBattle01_Text_2, GerbonTown_Restaurant_EndBattle01, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonTown_Restaurant_EndBattle01::
# 259 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	lock
# 260 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 261 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GerbonTown_Restaurant_EndBattle01_2
GerbonTown_Restaurant_EndBattle01_1:
# 266 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 268 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 20, GerbonTown_Restaurant_EndBattle01_6
# 272 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 30, GerbonTown_Restaurant_EndBattle01_7
# 276 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 40, GerbonTown_Restaurant_EndBattle01_8
GerbonTown_Restaurant_EndBattle01_4:
# 281 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_BeginBattle01_Text_0
# 282 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_EndBattle01_Text_0
# 283 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 284 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_BeginBattle02
	return

GerbonTown_Restaurant_EndBattle01_2:
# 263 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_LostBattleSkipToLeave
	goto GerbonTown_Restaurant_EndBattle01_1

GerbonTown_Restaurant_EndBattle01_6:
# 269 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 21
# 270 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_RODNEY
	goto GerbonTown_Restaurant_EndBattle01_4

GerbonTown_Restaurant_EndBattle01_7:
# 273 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 31
# 274 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_SANTIAGO
	goto GerbonTown_Restaurant_EndBattle01_4

GerbonTown_Restaurant_EndBattle01_8:
# 277 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 41
# 278 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_KEVIN
	goto GerbonTown_Restaurant_EndBattle01_4


GerbonTown_Restaurant_BeginBattle02::
# 288 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	special HealPlayerParty
# 289 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	closemessage
# 290 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	call BattleWaiter_TableWalkAwayAndBack
# 291 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_BeginBattle02_Text_0
# 292 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 294 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 21, GerbonTown_Restaurant_BeginBattle02_2
# 315 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 31, GerbonTown_Restaurant_BeginBattle02_3
# 336 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 41, GerbonTown_Restaurant_BeginBattle02_4
	return

GerbonTown_Restaurant_BeginBattle02_2:
# 295 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_RICHARD, GerbonTown_Restaurant_BeginBattle02_Text_1, GerbonTown_Restaurant_BeginBattle02_Text_2, GerbonTown_Restaurant_EndBattle02, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_Restaurant_BeginBattle02_3:
# 316 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_GILBERT, GerbonTown_Restaurant_BeginBattle02_Text_1, GerbonTown_Restaurant_BeginBattle02_Text_2, GerbonTown_Restaurant_EndBattle02, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_Restaurant_BeginBattle02_4:
# 337 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_JACK, GerbonTown_Restaurant_BeginBattle02_Text_1, GerbonTown_Restaurant_BeginBattle02_Text_2, GerbonTown_Restaurant_EndBattle02, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonTown_Restaurant_EndBattle02::
# 361 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	lock
# 362 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 363 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GerbonTown_Restaurant_EndBattle02_2
GerbonTown_Restaurant_EndBattle02_1:
# 368 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 370 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 21, GerbonTown_Restaurant_EndBattle02_6
# 374 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 31, GerbonTown_Restaurant_EndBattle02_7
# 378 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 41, GerbonTown_Restaurant_EndBattle02_8
GerbonTown_Restaurant_EndBattle02_4:
# 383 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_BeginBattle02_Text_0
# 384 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_EndBattle02_Text_0
# 385 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 386 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_BeginBattle03
	return

GerbonTown_Restaurant_EndBattle02_2:
# 365 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_LostBattleSkipToLeave
	goto GerbonTown_Restaurant_EndBattle02_1

GerbonTown_Restaurant_EndBattle02_6:
# 371 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 22
# 372 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_RICHARD
	goto GerbonTown_Restaurant_EndBattle02_4

GerbonTown_Restaurant_EndBattle02_7:
# 375 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 32
# 376 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_GILBERT
	goto GerbonTown_Restaurant_EndBattle02_4

GerbonTown_Restaurant_EndBattle02_8:
# 379 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 42
# 380 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_JACK
	goto GerbonTown_Restaurant_EndBattle02_4


GerbonTown_Restaurant_BeginBattle03::
# 390 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	special HealPlayerParty
# 391 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	call BattleWaiter_TableWalkAwayAndBack
# 392 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_BeginBattle03_Text_0
# 393 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 395 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 22, GerbonTown_Restaurant_BeginBattle03_2
# 417 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 32, GerbonTown_Restaurant_BeginBattle03_3
# 439 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 42, GerbonTown_Restaurant_BeginBattle03_4
	return

GerbonTown_Restaurant_BeginBattle03_2:
# 396 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_HERMAN, GerbonTown_Restaurant_BeginBattle03_Text_1, GerbonTown_Restaurant_BeginBattle03_Text_2, GerbonTown_Restaurant_EndBattle03, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_Restaurant_BeginBattle03_3:
# 418 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_FRANKLIN, GerbonTown_Restaurant_BeginBattle03_Text_1, GerbonTown_Restaurant_BeginBattle03_Text_2, GerbonTown_Restaurant_EndBattle03, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonTown_Restaurant_BeginBattle03_4:
# 440 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, BATTLE_WAITER, TRAINER_DUDLEY, GerbonTown_Restaurant_BeginBattle03_Text_1, GerbonTown_Restaurant_BeginBattle03_Text_2, GerbonTown_Restaurant_EndBattle03, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonTown_Restaurant_EndBattle03::
# 465 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	lock
# 466 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 467 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	closemessage
# 468 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GerbonTown_Restaurant_EndBattle03_2
GerbonTown_Restaurant_EndBattle03_1:
# 473 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 475 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 22, GerbonTown_Restaurant_EndBattle03_6
# 479 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 32, GerbonTown_Restaurant_EndBattle03_7
# 483 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 42, GerbonTown_Restaurant_EndBattle03_8
GerbonTown_Restaurant_EndBattle03_4:
# 488 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_BeginBattle03_Text_0
# 489 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_EndBattle03_Text_0
# 493 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 494 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_GivePrizeAndLeave
	return

GerbonTown_Restaurant_EndBattle03_2:
# 470 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_LostBattleSkipToLeave
	goto GerbonTown_Restaurant_EndBattle03_1

GerbonTown_Restaurant_EndBattle03_6:
# 476 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 23
# 477 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_HERMAN
	goto GerbonTown_Restaurant_EndBattle03_4

GerbonTown_Restaurant_EndBattle03_7:
# 480 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 33
# 481 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_FRANKLIN
	goto GerbonTown_Restaurant_EndBattle03_4

GerbonTown_Restaurant_EndBattle03_8:
# 484 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setvar VAR_RESTARAUNT_STATE, 43
# 485 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	cleartrainerflag TRAINER_DUDLEY
	goto GerbonTown_Restaurant_EndBattle03_4


GerbonTown_Restaurant_LostBattleSkipToLeave::
# 499 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 500 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 30
# 501 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	removeobject BATTLE_WAITER
# 502 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setobjectxy GERBON_WAITRESS, 3, 5
# 503 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 30
# 504 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 505 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 506 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_LostBattleSkipToLeave_Text_0
# 510 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_EscortAfterwards
	return


GerbonTown_Restaurant_GivePrizeAndLeave::
# 515 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	closemessage
# 516 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement BATTLE_WAITER, BattleWaiter_WalkAwayFromTable
# 517 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 518 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setobjectxy GERBON_WAITRESS, 12, 6
# 519 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 60
# 520 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement GERBON_WAITRESS, BattleWaiter_WalkToTable
# 521 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 522 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 523 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_GivePrizeAndLeave_Text_0
# 526 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	call GerbonTown_Restaurant_DeterminePrize
# 527 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	setspeaker GerbonTown_Restaurant_Init_Text_0
# 528 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	msgbox GerbonTown_Restaurant_GivePrizeAndLeave_Text_1
# 529 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmessage
# 530 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	goto GerbonTown_Restaurant_EscortAfterwards
	return


GerbonTown_Restaurant_DeterminePrize::
# 525 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	switch VAR_RESTARAUNT_STATE
# 527 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 23, GerbonTown_Restaurant_DeterminePrize_2
# 530 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 33, GerbonTown_Restaurant_DeterminePrize_3
# 533 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	case 43, GerbonTown_Restaurant_DeterminePrize_4
	return

GerbonTown_Restaurant_DeterminePrize_2:
# 528 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	giveitem ITEM_TINY_MUSHROOM, 1
	return

GerbonTown_Restaurant_DeterminePrize_3:
# 531 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	giveitem ITEM_TINY_MUSHROOM, 1
	return

GerbonTown_Restaurant_DeterminePrize_4:
# 534 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	giveitem ITEM_TINY_MUSHROOM, 1
	return


GerbonTown_Restaurant_EscortAfterwards::
# 547 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement GERBON_WAITRESS, BattleWaiter_WalkAwayFromTable
# 548 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 30
# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_Restaurant_EscortAfterwards_Movement_0
# 550 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 551 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	warp MAP_OLDALE_TOWN, 18
# 552 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitstate
# 553 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	release
	end


BattleWaiter_TableWalkAwayAndBack::
# 559 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement BATTLE_WAITER, BattleWaiter_WalkAwayFromTable
# 560 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
# 561 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	delay 60
# 562 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	applymovement BATTLE_WAITER, BattleWaiter_WalkToTable
# 563 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	waitmovement
	return


# 566 "data/maps/GerbonTown_Restaraunt/scripts.pory"
BattleWaiter_WalkToTable:
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 567 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	face_down
	step_end

# 570 "data/maps/GerbonTown_Restaraunt/scripts.pory"
BattleWaiter_WalkAwayFromTable:
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 571 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
	step_end

# 33 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_Init_Movement_0:
# 33 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 33 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_EarlyExitNevermind_Movement_0:
# 150 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
# 150 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
	step_end

# 163 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_BringPlayerToTable_Movement_0:
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 164 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 165 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 165 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 165 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 165 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	face_down
	step_end

# 167 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_BringPlayerToTable_Movement_1:
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 168 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 169 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 169 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_left
# 169 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
# 169 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	face_left
	step_end

# 171 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_BringPlayerToTable_Movement_2:
# 171 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
	step_end

# 177 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_BringPlayerToTable_Movement_3:
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
# 178 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
	step_end

# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
GerbonTown_Restaurant_EscortAfterwards_Movement_0:
# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_up
# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_down
# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
# 549 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	walk_right
	step_end

GerbonTown_Restaurant_Init_Text_0:
# 36 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Hostess$"

GerbonTown_Restaurant_Init_Text_1:
# 37 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Welcome to {COLOR RED}The Sassy Salazzle!$"

GerbonTown_Restaurant_DecideTier_Text_0:
# 44 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "What experience will you have today?$"

GerbonTown_Restaurant_DecideTier_Text_1:
# 46 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Tier 1$"

GerbonTown_Restaurant_DecideTier_Text_2:
# 47 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Tier 2$"

GerbonTown_Restaurant_DecideTier_Text_3:
# 48 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Tier 3$"

GerbonTown_Restaurant_DecideTier_Text_4:
# 49 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Nevermind$"

GerbonTown_Restaurant_DecideTier_Text_5:
# 57 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "That will cost you 300, are you sure?$"

GerbonTown_Restaurant_DecideTier_Text_6:
# 69 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "I'm sorry, you don't have enough money\n"
	.string "for that!$"

GerbonTown_Restaurant_DecideTier_Text_7:
# 78 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "That will cost you 1000, are you sure?$"

GerbonTown_Restaurant_DecideTier_Text_8:
# 84 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "I'm sorry, your Pokemon are not\n"
	.string "powerful enough to participate!\l"
	.string "At least one of your Pokemon must\l"
	.string "be Level 25.$"

GerbonTown_Restaurant_DecideTier_Text_9:
# 109 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "That will cost you 2000, are you sure?$"

GerbonTown_Restaurant_DecideTier_Text_10:
# 115 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "I'm sorry, your Pokemon are not\n"
	.string "powerful enough to participate!\l"
	.string "At least one of your Pokemon must\l"
	.string "be Level 40.$"

GerbonTown_Restaurant_EarlyExitNevermind_Text_0:
# 148 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Come again!$"

GerbonTown_Restaurant_BringPlayerToTable_Text_0:
# 160 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Thank you for dining with us! Please\n"
	.string "follow me!$"

GerbonTown_Restaurant_BringPlayerToTable_Text_1:
# 174 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Our team will be with you shortly!$"

GerbonTown_Restaurant_BeginBattle01_Text_0:
# 189 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Rodney$"

GerbonTown_Restaurant_BeginBattle01_Text_1:
# 197 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "I present you with your first course!$"

GerbonTown_Restaurant_BeginBattle01_Text_2:
# 198 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "You eat fast! I hope you liked it!$"

GerbonTown_Restaurant_EndBattle01_Text_0:
# 282 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Your second course will be here soon!$"

GerbonTown_Restaurant_BeginBattle02_Text_0:
# 291 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Richard$"

GerbonTown_Restaurant_BeginBattle02_Text_1:
# 299 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Your delectable second course is here!$"

GerbonTown_Restaurant_BeginBattle02_Text_2:
# 300 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Did you even taste that?$"

GerbonTown_Restaurant_EndBattle02_Text_0:
# 384 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Your final course is en route!$"

GerbonTown_Restaurant_BeginBattle03_Text_0:
# 392 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Herman$"

GerbonTown_Restaurant_BeginBattle03_Text_1:
# 400 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Surely you'll have no better meal than\n"
	.string "this!$"

GerbonTown_Restaurant_BeginBattle03_Text_2:
# 402 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Magnifico!$"

GerbonTown_Restaurant_EndBattle03_Text_0:
# 489 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "We hope you enjoyed your time here!\p"
	.string "Your hostess will come soon to\n"
	.string "get you sorted!$"

GerbonTown_Restaurant_LostBattleSkipToLeave_Text_0:
# 506 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "We're sorry you lost a battle, but we\n"
	.string "hope you enjoyed your meal!\p"
	.string "Allow me to escort you to the door.$"

GerbonTown_Restaurant_GivePrizeAndLeave_Text_0:
# 523 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Congratulations on defeating all of\n"
	.string "our skilled staff! Here is a prize\l"
	.string "to commemorate your achievement!$"

GerbonTown_Restaurant_GivePrizeAndLeave_Text_1:
# 528 "data/maps/GerbonTown_Restaraunt/scripts.pory"
	.string "Allow me to escort you to the door.$"
