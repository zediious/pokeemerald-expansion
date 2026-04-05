ZED_SawgrassForest_MapScripts::
# 2 "data/maps/ZED_SawgrassForest/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZED_SawgrassForest_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZED_SawgrassForest_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZED_SawgrassForest/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 3, SawgrassForest_MapScript_OnFrameMakeJordanFollower
	.2byte 0


SawgrassForest_MapScript_OnFrameMakeJordanFollower::
# 9 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 10 "data/maps/ZED_SawgrassForest/scripts.pory"
	addobject SAWGRASSFOREST_JORDAN_01
# 11 "data/maps/ZED_SawgrassForest/scripts.pory"
	setobjectxy SAWGRASSFOREST_JORDAN_01, 5, 4
# 12 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_0
# 13 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 14 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASSFOREST_JORDAN_01, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 15 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 16 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 19 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_PLAYERLEFT, SawgrassForest_MapScript_OnFrameMakeJordanFollower_2
# 26 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 27 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_2, MSGBOX_YESNO
SawgrassForest_MapScript_OnFrameMakeJordanFollower_1:
# 41 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SawgrassForest_MapScript_OnFrameMakeJordanFollower_5
# 56 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_5
# 57 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 58 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 59 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_PLAYERLEFT
# 60 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 61 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
# 62 "data/maps/ZED_SawgrassForest/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 25
	end

SawgrassForest_MapScript_OnFrameMakeJordanFollower_2:
# 21 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 22 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_1, MSGBOX_YESNO
	goto SawgrassForest_MapScript_OnFrameMakeJordanFollower_1

SawgrassForest_MapScript_OnFrameMakeJordanFollower_5:
# 42 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_3
# 43 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 44 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 45 "data/maps/ZED_SawgrassForest/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 46 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4
# 47 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitse
# 48 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 49 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_DetermineJordanTeam
# 50 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 51 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 4
# 52 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_DetermineJordanTeam::
# 69 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SawgrassForest_DetermineJordanTeam_1
# 77 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SawgrassForest_DetermineJordanTeam_2
# 85 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SawgrassForest_DetermineJordanTeam_3
# 93 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq SawgrassForest_DetermineJordanTeam_4
	return

SawgrassForest_DetermineJordanTeam_1:
# 70 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANPOUR_01
	return

SawgrassForest_DetermineJordanTeam_2:
# 78 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANSEAR_01
	return

SawgrassForest_DetermineJordanTeam_3:
# 86 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANSAGE_01
	return

SawgrassForest_DetermineJordanTeam_4:
# 94 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_INNAPE_01
	return


SawgrassForest_EventScript_JordanFollower::
# 105 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 106 "data/maps/ZED_SawgrassForest/scripts.pory"
	faceplayer
# 107 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 108 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_JordanFollower_Text_0
# 112 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 113 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_JordanLeave::
# 119 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 4
	goto_if_eq SawgrassForest_JordanLeave_2
	return

SawgrassForest_JordanLeave_1:
# 120 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 121 "data/maps/ZED_SawgrassForest/scripts.pory"
	faceplayer
# 122 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 123 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_JordanLeave_Text_0, MSGBOX_YESNO
# 125 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SawgrassForest_JordanLeave_5
# 139 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SawgrassForest_JordanLeave_Movement_0
# 140 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 141 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end

SawgrassForest_JordanLeave_2:
# 119 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_unset FLAG_SAWGRASSFOREST_JORDANNOTRIGGER, SawgrassForest_JordanLeave_1
	return

SawgrassForest_JordanLeave_5:
# 126 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_5
# 127 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 128 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
# 129 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 131 "data/maps/ZED_SawgrassForest/scripts.pory"
	destroyfollowernpc
# 132 "data/maps/ZED_SawgrassForest/scripts.pory"
	addobject SAWGRASSFOREST_JORDAN_01
# 133 "data/maps/ZED_SawgrassForest/scripts.pory"
	setobjectxy SAWGRASSFOREST_JORDAN_01, 5, 4
# 134 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_PLAYERLEFT
# 135 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 136 "data/maps/ZED_SawgrassForest/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 25
	end


SawgrassForest_EventScript_WarningSign::
# 151 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 152 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_WarningSign_Text_0
# 158 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 159 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	return


SawgrassForest_EventScript_MansionSign::
# 164 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 165 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_MansionSign_Text_0
# 169 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 170 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	return


SawgrassForest_EventScript_TauntGive::
# 175 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 176 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 177 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_TAUNTTM
# 178 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_FOREST_TAUNT
# 179 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 180 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_EventScript_SuperPotionGive::
# 186 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 187 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_MYSTIC_WATER, 1
# 188 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_SUPERPOTION
# 189 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_FOREST_SUPERPOT
# 190 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 191 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_EventScript_Trainer01::
# 197 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_LARRY, SawgrassForest_EventScript_Trainer01_Text_0, SawgrassForest_EventScript_Trainer01_Text_1
# 202 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 204 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer02::
# 209 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, SawgrassForest_EventScript_Trainer02_Text_0, SawgrassForest_EventScript_Trainer02_Text_1
# 215 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 216 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer03::
# 221 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, SawgrassForest_EventScript_Trainer03_Text_0, SawgrassForest_EventScript_Trainer03_Text_1
# 227 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 228 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer04::
# 233 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, SawgrassForest_EventScript_Trainer04_Text_0, SawgrassForest_EventScript_Trainer04_Text_1
# 240 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 242 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer05::
# 247 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, SawgrassForest_EventScript_Trainer05_Text_0, SawgrassForest_EventScript_Trainer05_Text_1
# 252 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 253 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_KowtowEncounterTrigger01::
# 260 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_KOWTOWPOSITION
# 261 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassForest_KowtowEncounter
	return


SawgrassForest_EventScript_KowtowEncounterTrigger02::
# 265 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOWPOSITION
# 266 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassForest_KowtowEncounter
	return


SawgrassForest_KowtowEncounter::
# 271 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 272 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_KOWTOW_ENCOUNTERS, 1
# 273 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 274 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 275 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 277 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, SawgrassForest_KowtowEncounter_2
# 281 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_1
SawgrassForest_KowtowEncounter_1:
# 283 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 285 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 286 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_0
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_2
# 291 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_3
# 292 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 293 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 60
# 294 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_4
# 298 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 299 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_5
# 303 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 305 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_KowtowEncounter_Text_1
# 306 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_2
# 311 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 313 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_6
# 314 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_7
# 316 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_KowtowEncounter_Text_1
# 317 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_3
# 322 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 324 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_KowtowEncounter_Text_4
# 325 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_5
# 330 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 332 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 60
# 333 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_6
# 335 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 337 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 339 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 340 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_7
# 344 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 346 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_KowtowEncounter_Text_1
# 347 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_8
# 350 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 352 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_3
# 353 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_3
# 355 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_KowtowEncounter_Text_1
# 356 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_9
# 359 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 362 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SawgrassForest_KowtowEncounter_5
# 365 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SawgrassForest_KowtowEncounter_6
# 368 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SawgrassForest_KowtowEncounter_7
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq SawgrassForest_KowtowEncounter_8
	return

SawgrassForest_KowtowEncounter_2:
# 278 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_0
	goto SawgrassForest_KowtowEncounter_1

SawgrassForest_KowtowEncounter_5:
# 363 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Panpour
	return

SawgrassForest_KowtowEncounter_6:
# 366 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Pansear
	return

SawgrassForest_KowtowEncounter_7:
# 369 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Pansage
	return

SawgrassForest_KowtowEncounter_8:
# 372 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Innape
	return


# 379 "data/maps/ZED_SawgrassForest/scripts.pory"

# 380 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Pansage::
# 381 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANSAGE_01
# 382 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 383 "data/maps/ZED_SawgrassForest/scripts.pory"

# 384 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Pansear::
# 385 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANSEAR_01
# 386 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 387 "data/maps/ZED_SawgrassForest/scripts.pory"

# 388 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Panpour::
# 389 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANPOUR_01
# 390 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 391 "data/maps/ZED_SawgrassForest/scripts.pory"

# 392 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Innape::
# 393 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_INNAPE_01
# 394 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 395 "data/maps/ZED_SawgrassForest/scripts.pory"

# 396 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_AfterMultiDirect::
# 397 "data/maps/ZED_SawgrassForest/scripts.pory"
    switch VAR_RESULT
# 398 "data/maps/ZED_SawgrassForest/scripts.pory"
	case 1, Sawgrass_Kowtow_AfterBattle
# 399 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto Sawgrass_Kowtow_Whiteout
# 400 "data/maps/ZED_SawgrassForest/scripts.pory"

# 401 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_Grunt1_Loss:
# 402 "data/maps/ZED_SawgrassForest/scripts.pory"
    .string "Awh, no way!$"
# 403 "data/maps/ZED_SawgrassForest/scripts.pory"

# 404 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_Grunt2_Loss:
# 405 "data/maps/ZED_SawgrassForest/scripts.pory"
    .string "This ain't good!$"

Sawgrass_Kowtow_Whiteout::
# 409 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 410 "data/maps/ZED_SawgrassForest/scripts.pory"
	special SetCB2WhiteOut
	return


Sawgrass_Kowtow_AfterBattle::
# 414 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 415 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_KowtowEncounter_Text_1
# 416 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_0
# 417 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 420 "data/maps/ZED_SawgrassForest/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 421 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 422 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_KOWTOW_01
# 424 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_KOWTOW_02
# 425 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitse
# 426 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 120
# 427 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 429 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 431 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 432 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_1
# 435 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 438 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, Sawgrass_Kowtow_AfterBattle_2
# 445 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_MUGGED_WOMAN, SawgrassForest_KowtowEncounter_Movement_5
# 446 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 447 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Sawgrass_Kowtow_AfterBattle_Movement_1
# 448 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sawgrass_Kowtow_AfterBattle_Movement_1
Sawgrass_Kowtow_AfterBattle_1:
# 450 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 451 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker Sawgrass_Kowtow_AfterBattle_Text_2
# 452 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_3
# 457 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 458 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 459 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker Sawgrass_Kowtow_AfterBattle_Text_2
# 460 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_4
# 465 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 466 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 467 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 468 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_MUGGED_WOMAN
# 469 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 120
# 470 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 472 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 474 "data/maps/ZED_SawgrassForest/scripts.pory"
	setspeaker SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0
# 475 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_5
# 503 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 504 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end

Sawgrass_Kowtow_AfterBattle_2:
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_MUGGED_WOMAN, Sawgrass_Kowtow_AfterBattle_Movement_0
# 440 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 441 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Sawgrass_Kowtow_AfterBattle_Movement_1
# 442 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Sawgrass_Kowtow_AfterBattle_Movement_1
	goto Sawgrass_Kowtow_AfterBattle_1


SawgrassForest_KowtowScene_FollowPlayerFace::
# 509 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, SawgrassForest_KowtowScene_FollowPlayerFace_1
# 514 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_7
# 515 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SawgrassForest_KowtowEncounter_Movement_6
	return

SawgrassForest_KowtowScene_FollowPlayerFace_1:
# 510 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_6
# 511 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SawgrassForest_KowtowEncounter_Movement_7
	return


# 12 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_0:
# 12 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 12 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 12 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_left
	step_end

# 14 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1:
# 14 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
	step_end

# 139 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_JordanLeave_Movement_0:
# 139 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
	step_end

# 278 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_0:
# 278 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_up
# 278 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_left
	step_end

# 281 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_1:
# 281 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 281 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_left
	step_end

# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_2:
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_down
	step_end

# 291 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_3:
# 291 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
# 291 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_right
	step_end

# 294 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_4:
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 299 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_5:
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 313 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_6:
# 313 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_down
	step_end

# 314 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_7:
# 314 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_up
	step_end

# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
Sawgrass_Kowtow_AfterBattle_Movement_0:
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 439 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 441 "data/maps/ZED_SawgrassForest/scripts.pory"
Sawgrass_Kowtow_AfterBattle_Movement_1:
# 441 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_left
	step_end

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0:
# 21 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Jordan$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_1:
# 22 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You're back! Ready to go?$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_2:
# 27 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "There you are {PLAYER}, I've been\n"
	.string "waiting! There's all sorts of Pokemon\l"
	.string "in this forest, not to mention other\l"
	.string "trainers.\p"
	.string "Let's explore the place, maybe we'll find\n"
	.string "a rare Pokemon!\p"
	.string "I'll keep your party healthy. You'll be\n"
	.string "able to catch Pokemon still, too!\p"
	.string "Are you ready to go?$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_3:
# 42 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Great! Let's go!$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4:
# 46 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Jordan is now your follower!$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_5:
# 56 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Alright, but hurry back!$"

SawgrassForest_EventScript_JordanFollower_Text_0:
# 108 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "This place is a lot spookier than\n"
	.string "I remember...\p"
	.string "Keep your eyes open!$"

SawgrassForest_JordanLeave_Text_0:
# 123 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Do you want to take a break?\n"
	.string "I'll be waiting for you.$"

SawgrassForest_EventScript_WarningSign_Text_0:
# 152 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "WARNING:\p"
	.string "Patrols in Sawgrass Forest are not\n"
	.string "frequent.\p"
	.string "Stick to the lamplight for safety.$"

SawgrassForest_EventScript_MansionSign_Text_0:
# 165 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You can make out some words, but it's\n"
	.string "been faded with time.\p"
	.string "PRIVATE PROPERTY: KEEP OUT OR ELSE$"

SawgrassForest_EventScript_Trainer01_Text_0:
# 199 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Ah! A ghost!$"

SawgrassForest_EventScript_Trainer01_Text_1:
# 200 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You could still be a ghost!$"

SawgrassForest_EventScript_Trainer01_Text_2:
# 202 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I think my friends pranked me, this is\n"
	.string "not a good place to camp!.$"

SawgrassForest_EventScript_Trainer02_Text_0:
# 211 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "This place is scary, but there's so\n"
	.string "many bugs!$"

SawgrassForest_EventScript_Trainer02_Text_1:
# 213 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Watch out, you're scaring off the bugs!$"

SawgrassForest_EventScript_Trainer02_Text_2:
# 215 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Where did the bugs go?$"

SawgrassForest_EventScript_Trainer03_Text_0:
# 223 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "So many Pokemon to collect and\n"
	.string "research! Help me train these!$"

SawgrassForest_EventScript_Trainer03_Text_1:
# 225 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Ah well, that was unexpected.$"

SawgrassForest_EventScript_Trainer03_Text_2:
# 227 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I know! I just need to catch more!$"

SawgrassForest_EventScript_Trainer04_Text_0:
# 235 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Two guys in funny outfits ran by\n"
	.string "here, they were faster than me!$"

SawgrassForest_EventScript_Trainer04_Text_1:
# 237 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Maybe I should catch them, they\n"
	.string "could train me!!$"

SawgrassForest_EventScript_Trainer04_Text_2:
# 240 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Wait, how am I going to catch them if\n"
	.string "they are faster than me?$"

SawgrassForest_EventScript_Trainer05_Text_0:
# 249 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Aha! The strike of the ninja style!$"

SawgrassForest_EventScript_Trainer05_Text_1:
# 250 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "We must retreat!$"

SawgrassForest_EventScript_Trainer05_Text_2:
# 252 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I got you pretty good huh?$"

SawgrassForest_KowtowEncounter_Text_0:
# 287 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "What's going on here!$"

SawgrassForest_KowtowEncounter_Text_1:
# 305 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Kowtow Grnt 1$"

SawgrassForest_KowtowEncounter_Text_2:
# 307 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "What are you doing here! I guess that\n"
	.string "guy we paid to block the entrance\l"
	.string "tucked tail.$"

SawgrassForest_KowtowEncounter_Text_3:
# 318 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I guess we'll just have to take them\n"
	.string "down ourselves, the boss don't got to\l"
	.string "know we messed up a little bit!$"

SawgrassForest_KowtowEncounter_Text_4:
# 324 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Kowtow Grnt 2$"

SawgrassForest_KowtowEncounter_Text_5:
# 326 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Sure, sure, until his {COLOR RED}Kingambit{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} stares\n"
	.string "us down for so long that we break into\l"
	.string "a sweat!$"

SawgrassForest_KowtowEncounter_Text_6:
# 333 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "The two continue to bicker for some\n"
	.string "time.$"

SawgrassForest_KowtowEncounter_Text_7:
# 341 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Sheesh, the trash might take itself out\n"
	.string "if they keep arguing.$"

SawgrassForest_KowtowEncounter_Text_8:
# 348 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Quit being a...$"

SawgrassForest_KowtowEncounter_Text_9:
# 357 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Who are you calling trash!$"

Sawgrass_Kowtow_AfterBattle_Text_0:
# 416 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "No good, use the smokescreen!$"

Sawgrass_Kowtow_AfterBattle_Text_1:
# 433 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "They got away!$"

Sawgrass_Kowtow_AfterBattle_Text_2:
# 451 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Woman$"

Sawgrass_Kowtow_AfterBattle_Text_3:
# 452 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Thank you for dealing with them!\n"
	.string "They did take my money, but I was\l"
	.string "worried for my life!\p"
	.string "Here, have this! I insist!$"

Sawgrass_Kowtow_AfterBattle_Text_4:
# 460 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I was going to train my Pokemon with\n"
	.string "that, but I think I'm going to take some\l"
	.string "time to relax. Keep it!$"

Sawgrass_Kowtow_AfterBattle_Text_5:
# 476 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Argh! I can't believe we let those\n"
	.string "{COLOR RED}Team Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} members get away!\p"
	.string "They're a gang of criminals, and they\n"
	.string "have started to cause more trouble\l"
	.string "lately. Robbing people, stores, and\l"
	.string "stealing Pokemon!\p"
	.string "Ah well, I'm not sure we would be able to\n"
	.string "restrain them anyways. In any case, it's\l"
	.string "good that you got that {COLOR RED}Exp Share{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\l"
	.string "will definitely be useful! Lucky for\l"
	.string "me, I already have one!\p"
	.string "...\p"
	.string "What? I was going to get you one!\n"
	.string "Honest!\p"
	.string "Don't forget to turn it on though!\n"
	.string "Just open up your bag, find it in\l"
	.string "your {COLOR RED}Key Items pocket, and activate it!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Anyways, we should press on, and get to\n"
	.string "{COLOR RED}Route 110{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} soon! I don't think I want\l"
	.string "to come back to this place.$"
