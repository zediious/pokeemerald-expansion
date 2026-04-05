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


GerbonTown_EventScript_Route110Sign::
# 55 "data/maps/OldaleTown/scripts.pory"
	lockall
# 56 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_Route110Sign_Text_0
# 57 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_KeepOffFlowers::
# 62 "data/maps/OldaleTown/scripts.pory"
	lockall
# 63 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KeepOffFlowers_Text_0
# 64 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


GerbonTown_EventScript_HiddenItemBall::
# 69 "data/maps/OldaleTown/scripts.pory"
	lock
# 70 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
# 71 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_CANDY_BALL
# 72 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_HIDDENITEMBALL
# 73 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_PalladiumBlockers::
# 79 "data/maps/OldaleTown/scripts.pory"
	lock
# 80 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_PalladiumBlockers_Text_0
# 81 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_1
# 85 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 86 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 92 "data/maps/OldaleTown/scripts.pory"
	lock
# 93 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 94 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_MadWoman_Text_0
# 95 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_1
# 100 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 101 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 107 "data/maps/OldaleTown/scripts.pory"
	lock
# 108 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_0
# 109 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 110 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 111 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 112 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 113 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 114 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 115 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 116 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 117 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 118 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 119 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 120 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_BlockingBattleScene_Text_2
# 121 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_3
# 123 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 124 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 125 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 126 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 127 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 128 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 129 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 130 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 131 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 132 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 133 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_4
# 134 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 135 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 140 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 141 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 145 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 146 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 151 "data/maps/OldaleTown/scripts.pory"
	lock
# 152 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 157 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 158 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 161 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 162 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 163 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 164 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_1
# 174 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 175 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 176 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 177 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 178 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 179 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 180 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 153 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 154 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 185 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 191 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 195 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 198 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 205 "data/maps/OldaleTown/scripts.pory"
	lock
# 206 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 207 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 208 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 209 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 210 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_1
# 216 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 218 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return


GerbonTown_OutdoorBattleJordanAsk::
# 223 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 224 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_0, MSGBOX_YESNO
# 228 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_OutdoorBattleJordanAsk_1
# 231 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_1
# 232 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 233 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return

GerbonTown_OutdoorBattleJordanAsk_1:
# 229 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleTrigger
	return


GerbonTown_OutdoorBattleTrigger::
# 238 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 239 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTown_OutdoorBattleTrigger_1
# 249 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTown_OutdoorBattleTrigger_2
# 259 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTown_OutdoorBattleTrigger_3
# 269 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTown_OutdoorBattleTrigger_4
	return

GerbonTown_OutdoorBattleTrigger_1:
# 240 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_2:
# 250 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_3:
# 260 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_4:
# 270 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_2, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return


GerbonTown_OutdoorBattleEnd::
# 282 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 283 "data/maps/OldaleTown/scripts.pory"
	special HealPlayerParty
# 284 "data/maps/OldaleTown/scripts.pory"
	lock
# 285 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 286 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 287 "data/maps/OldaleTown/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 288 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 289 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq GerbonTown_OutdoorBattleEnd_2
# 294 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_1
# 297 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_OutdoorBattleEnd_1:
# 299 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_2
# 321 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 322 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 323 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 324 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 325 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 326 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 327 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 330 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 331 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 332 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 335 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 336 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 337 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_3, MSGBOX_SIGN
# 338 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 339 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 342 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 344 "data/maps/OldaleTown/scripts.pory"
	release
	return

GerbonTown_OutdoorBattleEnd_2:
# 290 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 292 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_OutdoorBattleEnd_1


GerbonTownTourney_JordanStartOutside::
# 350 "data/maps/OldaleTown/scripts.pory"
	lock
# 351 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 352 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 353 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_0, MSGBOX_YESNO
# 369 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownTourney_JordanStartOutside_1
	return

GerbonTownTourney_JordanStartOutside_1:
# 370 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_1
# 371 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 372 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_JULIA
# 373 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_CANDACE
# 374 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_GOLEM
# 375 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 376 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 1
# 377 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 8
# 378 "data/maps/OldaleTown/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 379 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTownTourney_JordanAfter::
# 386 "data/maps/OldaleTown/scripts.pory"
	lock
# 387 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 388 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 389 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_0
# 410 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_0
# 413 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 414 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 10
# 415 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 416 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 419 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 421 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 423 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_RuvelKid::
# 433 "data/maps/OldaleTown/scripts.pory"
	lock
# 434 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 435 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_RuvelKid_Text_0
# 436 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_lt GerbonTown_EventScript_RuvelKid_2
# 443 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKid_Text_2
GerbonTown_EventScript_RuvelKid_1:
# 448 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 449 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_RuvelKid_2:
# 437 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKid_Text_1
	goto GerbonTown_EventScript_RuvelKid_1


GerbonTown_EventScript_RuvelKidMom::
# 454 "data/maps/OldaleTown/scripts.pory"
	lock
# 455 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 456 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_RuvelKidMom_Text_0
# 457 "data/maps/OldaleTown/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_lt GerbonTown_EventScript_RuvelKidMom_2
# 463 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKidMom_Text_2
GerbonTown_EventScript_RuvelKidMom_1:
# 471 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 472 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_RuvelKidMom_2:
# 458 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_RuvelKidMom_Text_1
	goto GerbonTown_EventScript_RuvelKidMom_1


GerbonTown_EventScript_TriathleteHouseMan::
# 478 "data/maps/OldaleTown/scripts.pory"
	lock
# 479 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 480 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 481 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_GERBON_GOT_MACHO, GerbonTown_EventScript_TriathleteHouseMan_2
# 502 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_6
# 503 "data/maps/OldaleTown/scripts.pory"
	waitmessage
GerbonTown_EventScript_TriathleteHouseMan_1:
# 506 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_TriathleteHouseMan_2:
# 482 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_1
# 484 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 485 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 486 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 487 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 488 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 489 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 490 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_0
# 491 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_4
# 493 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 494 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_MACHO_BRACE, 1
# 495 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_GOT_MACHO
# 496 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_5
# 500 "data/maps/OldaleTown/scripts.pory"
	waitmessage
	goto GerbonTown_EventScript_TriathleteHouseMan_1


GerbonTown_EventScript_TriathleteHouseLinoone::
# 511 "data/maps/OldaleTown/scripts.pory"
	lock
# 512 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 513 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LINOONE, CRY_MODE_NORMAL
# 514 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_TriathleteHouseMan_Text_2
# 515 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_TriathleteHouseMan_Text_3
# 516 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 517 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 518 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseMan::
# 524 "data/maps/OldaleTown/scripts.pory"
	lock
# 525 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 526 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseMan_Text_0
# 527 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseMan_Text_1
# 530 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 531 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_ExpertHouseSlaking::
# 536 "data/maps/OldaleTown/scripts.pory"
	lock
# 537 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 538 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SLAKING, CRY_MODE_NORMAL
# 539 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_ExpertHouseSlaking_Text_0
# 540 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_ExpertHouseSlaking_Text_1
# 544 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 545 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 546 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Man::
# 552 "data/maps/OldaleTown/scripts.pory"
	lock
# 553 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 554 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Man_Text_0
# 555 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Man_Text_1
# 558 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 559 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Woman::
# 564 "data/maps/OldaleTown/scripts.pory"
	lock
# 565 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 566 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Woman_Text_0
# 567 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_1
# 569 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 570 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 571 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 572 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 573 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 574 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_CoupleHouse01Pichu::
# 579 "data/maps/OldaleTown/scripts.pory"
	lock
# 580 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 581 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 582 "data/maps/OldaleTown/scripts.pory"
	setspeaker GerbonTown_EventScript_CoupleHouse01Pichu_Text_0
# 583 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_CoupleHouse01Woman_Text_2
# 584 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 585 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 586 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 112 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 112 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 114 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 114 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 116 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 116 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 125 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 125 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 410 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_0:
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 411 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

GerbonTown_EventScript_TownSign_Text_0:
# 47 "data/maps/OldaleTown/scripts.pory"
	.string "Gerbon Town\p"
	.string "Home of the Palladium$"

GerbonTown_EventScript_Route110Sign_Text_0:
# 56 "data/maps/OldaleTown/scripts.pory"
	.string "{DOWN_ARROW} To Route 110$"

GerbonTown_EventScript_KeepOffFlowers_Text_0:
# 63 "data/maps/OldaleTown/scripts.pory"
	.string "Keep off the flowers!$"

GerbonTown_EventScript_PalladiumBlockers_Text_0:
# 80 "data/maps/OldaleTown/scripts.pory"
	.string "Guard$"

GerbonTown_EventScript_PalladiumBlockers_Text_1:
# 81 "data/maps/OldaleTown/scripts.pory"
	.string "Not allowed in when there's no match\n"
	.string "going on.\p"
	.string "Come back another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 94 "data/maps/OldaleTown/scripts.pory"
	.string "Angry Woman$"

GerbonTown_EventScript_MadWoman_Text_1:
# 95 "data/maps/OldaleTown/scripts.pory"
	.string "These trainers! Breaking out into a\n"
	.string "battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 108 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 1$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 109 "data/maps/OldaleTown/scripts.pory"
	.string "Lillipup! Use your Tackle attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 120 "data/maps/OldaleTown/scripts.pory"
	.string "Battler 2$"

GerbonTown_EventScript_BlockingBattleScene_Text_3:
# 121 "data/maps/OldaleTown/scripts.pory"
	.string "Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_4:
# 133 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 163 "data/maps/OldaleTown/scripts.pory"
	.string "Reckless Child$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_1:
# 164 "data/maps/OldaleTown/scripts.pory"
	.string "Ouch, that hurt!\p"
	.string "I'm sorry, I'm just so excited for the\n"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 209 "data/maps/OldaleTown/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_OutdoorBattleStart_Text_1:
# 210 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}! That was the best match\n"
	.string "I've seen yet! I am glad you were able\l"
	.string "to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTown_OutdoorBattleJordanAsk_Text_0:
# 224 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry if you lose, I'll heal\n"
	.string "your Pokemon right away!$"

GerbonTown_OutdoorBattleJordanAsk_Text_1:
# 231 "data/maps/OldaleTown/scripts.pory"
	.string "No fun! Come on, a real quick battle!$"

GerbonTown_OutdoorBattleTrigger_Text_0:
# 242 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleTrigger_Text_1:
# 244 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTown_OutdoorBattleTrigger_Text_2:
# 272 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 290 "data/maps/OldaleTown/scripts.pory"
	.string "You must have been practicing, I\n"
	.string "thought I had that in the bag!$"

GerbonTown_OutdoorBattleEnd_Text_1:
# 294 "data/maps/OldaleTown/scripts.pory"
	.string "Whew, that was a close one! Looks like\n"
	.string "my training has paid off! I bet you\l"
	.string "didn't expect that huh?$"

GerbonTown_OutdoorBattleEnd_Text_2:
# 299 "data/maps/OldaleTown/scripts.pory"
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
# 337 "data/maps/OldaleTown/scripts.pory"
	.string "The level cap has been raised to 18!$"

GerbonTownTourney_JordanStartOutside_Text_0:
# 353 "data/maps/OldaleTown/scripts.pory"
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
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great! Let's go!$"

GerbonTownTourney_JordanAfter_Text_0:
# 389 "data/maps/OldaleTown/scripts.pory"
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

GerbonTown_EventScript_RuvelKid_Text_0:
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Child$"

GerbonTown_EventScript_RuvelKid_Text_1:
# 437 "data/maps/OldaleTown/scripts.pory"
	.string "I'm so excited! My mommy is going taking\n"
	.string "me to visit a {COLOR RED}Pyramid!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "I hope it's not too scary!$"

GerbonTown_EventScript_RuvelKid_Text_2:
# 443 "data/maps/OldaleTown/scripts.pory"
	.string "It's the mister from the Pyramid! Thank\n"
	.string "you for saving me from that scary\l"
	.string "Pokemon! My mommy doesn't want to take\l"
	.string "me on vacation anymore though!$"

GerbonTown_EventScript_RuvelKidMom_Text_0:
# 456 "data/maps/OldaleTown/scripts.pory"
	.string "Happy Mom$"

GerbonTown_EventScript_RuvelKidMom_Text_1:
# 458 "data/maps/OldaleTown/scripts.pory"
	.string "I always make sure to let me daughter\n"
	.string "see the world! It's important that\l"
	.string "she has a wide range of experiences!$"

GerbonTown_EventScript_RuvelKidMom_Text_2:
# 463 "data/maps/OldaleTown/scripts.pory"
	.string "My daughter's savior! Thank you again!\n"
	.string "I'm glad to see you are well!\p"
	.string "I've decided my duaghter will not leave\n"
	.string "town until she has her own Pokemon! I\l"
	.string "can't allow her to experience such a\l"
	.string "thing again!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_0:
# 480 "data/maps/OldaleTown/scripts.pory"
	.string "Athlete$"

GerbonTown_EventScript_TriathleteHouseMan_Text_1:
# 482 "data/maps/OldaleTown/scripts.pory"
	.string "It's important to train yourself, and\n"
	.string "your Pokemon! Look at Linoone go!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_2:
# 486 "data/maps/OldaleTown/scripts.pory"
	.string "Linoone$"

GerbonTown_EventScript_TriathleteHouseMan_Text_3:
# 487 "data/maps/OldaleTown/scripts.pory"
	.string "Greeee-ah$"

GerbonTown_EventScript_TriathleteHouseMan_Text_4:
# 491 "data/maps/OldaleTown/scripts.pory"
	.string "Here, this can help you make your\n"
	.string "Pokemon as strong as they can be!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_5:
# 496 "data/maps/OldaleTown/scripts.pory"
	.string "If a Pokemon holds that, they'll get\n"
	.string "much stronger than normal! Use it to\l"
	.string "make sure you're always ready for the\l"
	.string "next opponent!$"

GerbonTown_EventScript_TriathleteHouseMan_Text_6:
# 502 "data/maps/OldaleTown/scripts.pory"
	.string "Keep on training my friend!$"

GerbonTown_EventScript_ExpertHouseMan_Text_0:
# 526 "data/maps/OldaleTown/scripts.pory"
	.string "Old Man$"

GerbonTown_EventScript_ExpertHouseMan_Text_1:
# 527 "data/maps/OldaleTown/scripts.pory"
	.string "Hoho, I do love retirement! Why, after a\n"
	.string "lifetime of work, nothing is better\l"
	.string "than nothing at all!$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_0:
# 539 "data/maps/OldaleTown/scripts.pory"
	.string "Slaking$"

GerbonTown_EventScript_ExpertHouseSlaking_Text_1:
# 540 "data/maps/OldaleTown/scripts.pory"
	.string "Grahh-uh!\p"
	.string "It looks as though you have woken up\n"
	.string "the Slaking, not a good idea!$"

GerbonTown_EventScript_CoupleHouse01Man_Text_0:
# 554 "data/maps/OldaleTown/scripts.pory"
	.string "Man$"

GerbonTown_EventScript_CoupleHouse01Man_Text_1:
# 555 "data/maps/OldaleTown/scripts.pory"
	.string "We love to watch the feature matches,\n"
	.string "but our little Pichu doesn't like\l"
	.string "battling!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_0:
# 566 "data/maps/OldaleTown/scripts.pory"
	.string "Woman$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_1:
# 567 "data/maps/OldaleTown/scripts.pory"
	.string "Even though our Pichu doesn't battle,\n"
	.string "we wouldn't change them for the world!$"

GerbonTown_EventScript_CoupleHouse01Woman_Text_2:
# 571 "data/maps/OldaleTown/scripts.pory"
	.string "Pi-chu!$"

GerbonTown_EventScript_CoupleHouse01Pichu_Text_0:
# 582 "data/maps/OldaleTown/scripts.pory"
	.string "Pichu$"
