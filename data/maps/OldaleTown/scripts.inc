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
	msgbox GerbonTown_EventScript_PalladiumBlockers_Text_0
# 81 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 82 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_MadWoman::
# 88 "data/maps/OldaleTown/scripts.pory"
	lock
# 89 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 90 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_MadWoman_Text_0
# 95 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 96 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_BlockingBattleScene::
# 102 "data/maps/OldaleTown/scripts.pory"
	lock
# 103 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_0
# 105 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 106 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 107 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_0
# 108 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 109 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 110 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 111 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 112 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 113 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 114 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 115 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_1
# 117 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 118 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_SALANDIT, CRY_MODE_NORMAL
# 119 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER2_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_3
# 120 "data/maps/OldaleTown/scripts.pory"
	delay 20
# 121 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_2
# 122 "data/maps/OldaleTown/scripts.pory"
	delay 10
# 123 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_BLOCKER_BATTLER1_MON, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 124 "data/maps/OldaleTown/scripts.pory"
	playmoncry SPECIES_LILLIPUP, CRY_MODE_NORMAL
# 125 "data/maps/OldaleTown/scripts.pory"
	waitmoncry
# 126 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 127 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_BlockingBattleScene_Text_2
# 128 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 129 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTown_EventScript_KidTrigger01::
# 134 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 0
# 135 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidTrigger02::
# 139 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_POSITION, 1
# 140 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_EventScript_KidRunIntoPlayer
	return


GerbonTown_EventScript_KidRunIntoPlayer::
# 145 "data/maps/OldaleTown/scripts.pory"
	lock
# 146 "data/maps/OldaleTown/scripts.pory"
	compare VAR_GERBON_FIRST_VISIT_POSITION, 0
	goto_if_eq GerbonTown_EventScript_KidRunIntoPlayer_2
# 151 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move02
# 152 "data/maps/OldaleTown/scripts.pory"
	waitmovement
GerbonTown_EventScript_KidRunIntoPlayer_1:
# 155 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 156 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 157 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_EventScript_KidRunIntoPlayer_Text_0
# 166 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 167 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_RunAway
# 168 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 169 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_KID_RUNNING_CRASH
# 170 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 171 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_FIRST_VISIT_TRIGGERS, 1
# 172 "data/maps/OldaleTown/scripts.pory"
	release
	end

GerbonTown_EventScript_KidRunIntoPlayer_2:
# 147 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_KID_RUNNING_CRASH, GerbonTown_CrashKid_Move01
# 148 "data/maps/OldaleTown/scripts.pory"
	waitmovement
	goto GerbonTown_EventScript_KidRunIntoPlayer_1


# 177 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move01:
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 180 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 183 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_Move02:
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_faster_down
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 187 "data/maps/OldaleTown/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 190 "data/maps/OldaleTown/scripts.pory"
GerbonTown_CrashKid_RunAway:
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_faster_right
	step_end

GerbonTownBattleHall_OutdoorBattleStart::
# 197 "data/maps/OldaleTown/scripts.pory"
	lock
# 198 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 199 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 200 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 201 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownBattleHall_OutdoorBattleStart_Text_0
# 207 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 209 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return


GerbonTown_OutdoorBattleJordanAsk::
# 214 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_0, MSGBOX_YESNO
# 218 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTown_OutdoorBattleJordanAsk_1
# 221 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleJordanAsk_Text_1
# 222 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 223 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleJordanAsk
	return

GerbonTown_OutdoorBattleJordanAsk_1:
# 219 "data/maps/OldaleTown/scripts.pory"
	goto GerbonTown_OutdoorBattleTrigger
	return


GerbonTown_OutdoorBattleTrigger::
# 228 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 229 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonTown_OutdoorBattleTrigger_1
# 239 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonTown_OutdoorBattleTrigger_2
# 249 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonTown_OutdoorBattleTrigger_3
# 259 "data/maps/OldaleTown/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonTown_OutdoorBattleTrigger_4
	return

GerbonTown_OutdoorBattleTrigger_1:
# 230 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_2:
# 240 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_3:
# 250 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_0, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return

GerbonTown_OutdoorBattleTrigger_4:
# 260 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, GerbonTown_OutdoorBattleTrigger_Text_2, GerbonTown_OutdoorBattleTrigger_Text_1, event_script = GerbonTown_OutdoorBattleEnd
	return


GerbonTown_OutdoorBattleEnd::
# 272 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 273 "data/maps/OldaleTown/scripts.pory"
	special HealPlayerParty
# 274 "data/maps/OldaleTown/scripts.pory"
	lock
# 275 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 276 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTown_EventScript_BlockingBattleScene_Movement_1
# 277 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTown_OutdoorBattleEnd_Text_0
# 303 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 304 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 305 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 306 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 307 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 308 "data/maps/OldaleTown/scripts.pory"
	delay 30
# 309 "data/maps/OldaleTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 312 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAWGRASS_SOUTH_BLOCKERS
# 313 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Sailor, MAP_LITTLEROOT_TOWN
# 314 "data/maps/OldaleTown/scripts.pory"
	removeobject ZED_Sawgrass_Blockage_Fearow, MAP_LITTLEROOT_TOWN
# 317 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 319 "data/maps/OldaleTown/scripts.pory"
	release
	return


GerbonTownTourney_JordanStartOutside::
# 325 "data/maps/OldaleTown/scripts.pory"
	lock
# 326 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 327 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_0, MSGBOX_YESNO
# 343 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonTownTourney_JordanStartOutside_1
	return

GerbonTownTourney_JordanStartOutside_1:
# 344 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanStartOutside_Text_1
# 345 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 346 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_JULIA
# 347 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_CANDACE
# 348 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_GOLEM
# 349 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 350 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 1
# 351 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 8
# 352 "data/maps/OldaleTown/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 353 "data/maps/OldaleTown/scripts.pory"
	release
	end


GerbonTownTourney_JordanAfter::
# 360 "data/maps/OldaleTown/scripts.pory"
	lock
# 361 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 362 "data/maps/OldaleTown/scripts.pory"
	msgbox GerbonTownTourney_JordanAfter_Text_0
# 384 "data/maps/OldaleTown/scripts.pory"
	applymovement GERBON_TOWN_JORDAN_FIRSTBATTLE, GerbonTownTourney_JordanAfter_Movement_0
# 387 "data/maps/OldaleTown/scripts.pory"
	waitmovement
# 388 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 10
# 389 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 390 "data/maps/OldaleTown/scripts.pory"
	removeobject GERBON_TOWN_JORDAN_FIRSTBATTLE
# 393 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 395 "data/maps/OldaleTown/scripts.pory"
	questupdated 0
# 397 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 107 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_0:
# 107 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_right
	step_end

# 109 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_1:
# 109 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 111 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_2:
# 111 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 119 "data/maps/OldaleTown/scripts.pory"
GerbonTown_EventScript_BlockingBattleScene_Movement_3:
# 119 "data/maps/OldaleTown/scripts.pory"
	jump_in_place_left
	step_end

# 384 "data/maps/OldaleTown/scripts.pory"
GerbonTownTourney_JordanAfter_Movement_0:
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 385 "data/maps/OldaleTown/scripts.pory"
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
	.string "{COLOR GREEN}Palladium Guard: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Not allowed in when\n"
	.string "there's no match going on.\p"
	.string "Come another time.$"

GerbonTown_EventScript_MadWoman_Text_0:
# 90 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Angry Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}These trainers! Breaking\n"
	.string "out into a battle wherever they please!\p"
	.string "Don't they know they're blocking\n"
	.string "the way? They won't listen!$"

GerbonTown_EventScript_BlockingBattleScene_Text_0:
# 103 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Battler 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Lillipup! Use your Tackle\n"
	.string "attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_1:
# 115 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Battler 2: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Salandit, don't take that!\n"
	.string "Use your Scratch attack!$"

GerbonTown_EventScript_BlockingBattleScene_Text_2:
# 127 "data/maps/OldaleTown/scripts.pory"
	.string "They don't seem to notice you$"

GerbonTown_EventScript_KidRunIntoPlayer_Text_0:
# 157 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Reckless Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ouch, that hurt!\n"
	.string "I'm sorry, I'm just so excited for the\l"
	.string "battle in the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's going to be\l"
	.string "so cool!\p"
	.string "You should go watch it, the {COLOR RED}Palladium{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "on the east side of town.\p"
	.string "Gotta go!$"

GerbonTownBattleHall_OutdoorBattleStart_Text_0:
# 201 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! That was the best\n"
	.string "match I've seen yet! I am glad you were\l"
	.string "able to see it!\p"
	.string "Awhh, it's got me hyped up! Let's\n"
	.string "battle right now {PLAYER}!$"

GerbonTown_OutdoorBattleJordanAsk_Text_0:
# 214 "data/maps/OldaleTown/scripts.pory"
	.string "Don't worry if you lose, I'll heal\n"
	.string "your Pokemon right away!$"

GerbonTown_OutdoorBattleJordanAsk_Text_1:
# 221 "data/maps/OldaleTown/scripts.pory"
	.string "No fun! Come on, a real quick battle!$"

GerbonTown_OutdoorBattleTrigger_Text_0:
# 232 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleTrigger_Text_1:
# 234 "data/maps/OldaleTown/scripts.pory"
	.string "Wow {PLAYER}, I didn't know you could\n"
	.string "battle like that!$"

GerbonTown_OutdoorBattleTrigger_Text_2:
# 262 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's what I'm\n"
	.string "talking about! Let's go!$"

GerbonTown_OutdoorBattleEnd_Text_0:
# 277 "data/maps/OldaleTown/scripts.pory"
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
# 327 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}There you are! It's time to\n"
	.string "start the tournament! I should explain\l"
	.string "exactly how it works, eh?\p"
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
# 344 "data/maps/OldaleTown/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great! Let's go!$"

GerbonTownTourney_JordanAfter_Text_0:
# 362 "data/maps/OldaleTown/scripts.pory"
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
	.string "{COLOR RED}Route 102, and Mullen Cave{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Mullen Cave is full of Pokemon, so we'll\n"
	.string "find lots of new partners. Maybe I'll\l"
	.string "see you while I'm there. Catch you\l"
	.string "later {PLAYER}!$"
