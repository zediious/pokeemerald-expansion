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
	setvar VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 1
	end


GerbonTown_EventScript_TownSign::
# 43 "data/maps/OldaleTown/scripts.pory"
	lockall
# 44 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TownSign_Text_0
# 47 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_Route110Sign::
# 52 "data/maps/OldaleTown/scripts.pory"
	lockall
# 53 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_Route110Sign_Text_0
# 54 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 59 "data/maps/OldaleTown/scripts.pory"
	lockall
# 60 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 61 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_HiddenItemBall::
# 66 "data/maps/OldaleTown/scripts.pory"
	lock
# 67 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 68 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 69 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 70 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 76 "data/maps/OldaleTown/scripts.pory"
	lock
# 77 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_PalladiumBlockers_Text_0
# 78 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_1
# 82 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 83 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 89 "data/maps/OldaleTown/scripts.pory"
	lock
# 90 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 91 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_MadWoman_Text_0
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_1
# 97 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 98 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 104 "data/maps/OldaleTown/scripts.pory"
	lock
# 105 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_0
# 106 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 107 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 108 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 109 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 110 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 111 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 112 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 114 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 115 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 116 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 117 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_2
# 118 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_3
# 120 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 121 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 122 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 123 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 124 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 125 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 126 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 127 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 128 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 129 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 130 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_4
# 131 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 132 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 137 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 138 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 142 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 143 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 148 "data/maps/OldaleTown/scripts.pory"
	lock
# 149 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 154 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 155 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 158 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 159 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 160 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 161 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_1
# 171 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 172 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 173 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 174 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 175 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 176 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 177 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 150 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 151 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 182 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 188 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 192 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 195 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 202 "data/maps/OldaleTown/scripts.pory"
	lock
# 203 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 204 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 205 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 206 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 207 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_1
# 213 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 215 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return


GerbonTown_OutdoorBattleJordanAsk::
# 220 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_0, MSGBOX_YESNO
# 225 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_OutdoorBattleJordanAsk_1
# 228 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_1
# 229 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 230 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return

GerbonTown_OutdoorBattleJordanAsk_1:
# 226 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleTrigger
	return


GerbonTown_OutdoorBattleTrigger::
# 235 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 236 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTown_OutdoorBattleTrigger_1
# 246 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTown_OutdoorBattleTrigger_2
# 256 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTown_OutdoorBattleTrigger_3
# 266 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTown_OutdoorBattleTrigger_4
	return

GerbonTown_OutdoorBattleTrigger_1:
# 237 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_2:
# 247 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_3:
# 257 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_4:
# 267 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_2, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return


GerbonTown_OutdoorBattleEnd::
# 279 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 280 "data/maps/OldaleTown/scripts.pory"
	special HealPlayerParty
# 281 "data/maps/OldaleTown/scripts.pory"
	lock
# 282 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 283 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 284 "data/maps/OldaleTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 285 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 286 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GerbonTown_OutdoorBattleEnd_2
# 291 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_1
# 294 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_OutdoorBattleEnd_1:
# 296 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_2
# 318 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 319 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 320 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 321 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 322 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 323 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 324 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 327 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 328 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 329 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 332 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 333 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 334 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_3, MSGBOX_SIGN
# 335 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 336 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 339 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 341 "data/maps/OldaleTown/scripts.pory"
	release
	return

GerbonTown_OutdoorBattleEnd_2:
# 287 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 289 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_OutdoorBattleEnd_1


GerbonTownTourney_JordanStartOutside::
# 347 "data/maps/OldaleTown/scripts.pory"
	lock
# 348 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 349 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 350 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_0, MSGBOX_YESNO
# 366 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownTourney_JordanStartOutside_1
	return

GerbonTownTourney_JordanStartOutside_1:
# 367 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_1
# 368 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 369 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_JULIA
# 370 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_CANDACE
# 371 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_GOLEM
# 372 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 373 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 1
# 374 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 8
# 375 "data/maps/OldaleTown/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 376 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTownTourney_JordanAfter::
# 383 "data/maps/OldaleTown/scripts.pory"
	lock
# 384 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 385 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 386 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_0
# 407 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_0
# 410 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 411 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 10
# 412 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 413 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 416 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 418 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 420 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_TriathleteHouseMan::
# 430 "data/maps/OldaleTown/scripts.pory"
	lock
# 431 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 432 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 433 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_GERBON_GOT_MACHO, GerbonTown_EventScript_TriathleteHouseMan_2
# 454 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_6
# 455 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_EventScript_TriathleteHouseMan_1:
# 458 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_TriathleteHouseMan_2:
# 434 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_1
# 436 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 437 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 438 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 439 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 440 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 441 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 442 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 443 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_4
# 445 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 446 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_MACHO_BRACE, 1
# 447 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_GOT_MACHO
# 448 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_5
# 452 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_EventScript_TriathleteHouseMan_1


GerbonTown_EventScript_TriathleteHouseLinoone::
# 463 "data/maps/OldaleTown/scripts.pory"
	lock
# 464 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 465 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 466 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 467 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 468 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 469 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 470 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseMan::
# 476 "data/maps/OldaleTown/scripts.pory"
	lock
# 477 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 478 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseMan_Text_0
# 479 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseMan_Text_1
# 482 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 483 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseSlaking::
# 488 "data/maps/OldaleTown/scripts.pory"
	lock
# 489 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 490 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 491 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseSlaking_Text_0
# 492 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseSlaking_Text_1
# 496 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 497 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 498 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Man::
# 504 "data/maps/OldaleTown/scripts.pory"
	lock
# 505 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 506 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Man_Text_0
# 507 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Man_Text_1
# 510 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 511 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Woman::
# 516 "data/maps/OldaleTown/scripts.pory"
	lock
# 517 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 518 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Woman_Text_0
# 519 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_1
# 521 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 522 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 523 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 524 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 525 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 526 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Pichu::
# 531 "data/maps/OldaleTown/scripts.pory"
	lock
# 532 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 533 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 534 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Pichu_Text_0
# 535 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 536 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 537 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 538 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 109 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 109 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 111 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 111 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 113 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 113 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 122 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 122 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 407 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_0:
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 44 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_Route110Sign_Text_0:
# 53 "data/maps/OldaleTown/scripts.pory"
	.string "{DOWN_ARROW} To Route 110$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 60 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 77 "data/maps/OldaleTown/scripts.pory"
	.string "Guard$"

GerbonTown_EventScript_PalladiumBlockers_Text_1:
# 78 "data/maps/OldaleTown/scripts.pory"
	.string "Not allowed in when there's no match\n"
	.string "going on.\p"
	.string "Come back another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 91 "data/maps/OldaleTown/scripts.pory"
	.string "Angry Woman$"

GerbonTown_EventScript_MadWoman_Text_1:
# 92 "data/maps/OldaleTown/scripts.pory"
	.string "These trainers! Breaking out into a\n"
	.string "battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 105 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 1$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 106 "data/maps/OldaleTown/scripts.pory"
	.string "Lillipup! Use your Tackle attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 117 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 2$"

GerbonTown_EventScript_BlockingBattleScene_Text_3:
# 118 "data/maps/OldaleTown/scripts.pory"
	.string "Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_4:
# 130 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 160 "data/maps/OldaleTown/scripts.pory"
	.string "Reckless Child$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_1:
# 161 "data/maps/OldaleTown/scripts.pory"
	.string "Ouch, that hurt!\p"
	.string "I'm sorry, I'm just so excited for the\n"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 206 "data/maps/OldaleTown/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 207 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! That was the best match\n"
	.string "I've seen yet! I am glad you were able\l"
	.string "to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTown_OutdoorBattleJordanAsk_Text_0:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry if you lose, I'll heal\n"
	.string "your Pokemon right away!$"

GerbonTown_OutdoorBattleJordanAsk_Text_1:
# 228 "data/maps/OldaleTown/scripts.pory"
	.string "No fun! Come on, a real quick battle!$"

GerbonTown_OutdoorBattleTrigger_Text_0:
# 239 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleTrigger_Text_1:
# 241 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTown_OutdoorBattleTrigger_Text_2:
# 269 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 287 "data/maps/OldaleTown/scripts.pory"
	.string "You must have been practicing, I\n"
	.string "thought I had that in the bag!$"

GerbonTown_OutdoorBattleEnd_Text_1:
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "Whew, that was a close one! Looks like\n"
	.string "my training has paid off! I bet you\l"
	.string "didn't expect that huh?$"

GerbonTown_OutdoorBattleEnd_Text_2:
# 296 "data/maps/OldaleTown/scripts.pory"
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
# 334 "data/maps/OldaleTown/scripts.pory"
	.string "The level cap has been raised to 18!$"

GerbonTownTourney_JordanStartOutside_Text_0:
# 350 "data/maps/OldaleTown/scripts.pory"
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
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great! Let's go!$"

GerbonTownTourney_JordanAfter_Text_0:
# 386 "data/maps/OldaleTown/scripts.pory"
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
	.string "meal, I promise! Anyways, Woltia City\l"
	.string "is North and then west, through\l"
	.string "{COLOR RED}Route 102, and Mullen Cave{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Mullen Cave is full of Pokemon, so we'll\n"
	.string "find lots of new partners. Maybe I'll\l"
	.string "see you while I'm there. Catch you\l"
	.string "later {PLAYER}!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_0:
# 432 "data/maps/OldaleTown/scripts.pory"
	.string "Athlete$"

GerbonTown_EventScript_TriathleteHouseMan_Text_1:
# 434 "data/maps/OldaleTown/scripts.pory"
	.string "It's important to train yourself, and\n"
	.string "your Pokemon! Look at Linoone go!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_2:
# 438 "data/maps/OldaleTown/scripts.pory"
	.string "Linoone$"

GerbonTown_EventScript_TriathleteHouseMan_Text_3:
# 439 "data/maps/OldaleTown/scripts.pory"
	.string "Greeee-ah$"

GerbonTown_EventScript_TriathleteHouseMan_Text_4:
# 443 "data/maps/OldaleTown/scripts.pory"
	.string "Here, this can help you make your\n"
	.string "Pokemon as strong as they can be!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_5:
# 448 "data/maps/OldaleTown/scripts.pory"
	.string "If a Pokemon holds that, they'll get\n"
	.string "much stronger than normal! Use it to\l"
	.string "make sure you're always ready for the\l"
	.string "next opponent!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_6:
# 454 "data/maps/OldaleTown/scripts.pory"
	.string "Keep on training my friend!$"

GerbonTown_EventScript_ExpertHouseMan_Text_0:
# 478 "data/maps/OldaleTown/scripts.pory"
	.string "Old Man$"

GerbonTown_EventScript_ExpertHouseMan_Text_1:
# 479 "data/maps/OldaleTown/scripts.pory"
	.string "Hoho, I do love retirement! Why, after a\n"
	.string "lifetime of work, nothing is better\l"
	.string "than nothing at all!$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_0:
# 491 "data/maps/OldaleTown/scripts.pory"
	.string "Slaking$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_1:
# 492 "data/maps/OldaleTown/scripts.pory"
	.string "Grahh-uh!\p"
	.string "It looks as though you have woken up\n"
	.string "the Slaking, not a good idea!$"

GerbonTown_EventScript_CoupleHouse01Man_Text_0:
# 506 "data/maps/OldaleTown/scripts.pory"
	.string "Man$"

GerbonTown_EventScript_CoupleHouse01Man_Text_1:
# 507 "data/maps/OldaleTown/scripts.pory"
	.string "We love to watch the feature matches,\n"
	.string "but our little Pichu doesn't like\l"
	.string "battling!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_0:
# 518 "data/maps/OldaleTown/scripts.pory"
	.string "Woman$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_1:
# 519 "data/maps/OldaleTown/scripts.pory"
	.string "Even though our Pichu doesn't battle,\n"
	.string "we wouldn't change them for the world!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_2:
# 523 "data/maps/OldaleTown/scripts.pory"
	.string "Pi-chu!$"

GerbonTown_EventScript_CoupleHouse01Pichu_Text_0:
# 534 "data/maps/OldaleTown/scripts.pory"
	.string "Pichu$"
