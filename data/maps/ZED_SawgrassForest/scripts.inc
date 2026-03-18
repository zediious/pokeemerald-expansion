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
	applymovement 0xFF, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_0
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
# 25 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_1, MSGBOX_YESNO
SawgrassForest_MapScript_OnFrameMakeJordanFollower_1:
# 39 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SawgrassForest_MapScript_OnFrameMakeJordanFollower_5
# 54 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4
# 55 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 56 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 57 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_PLAYERLEFT
# 58 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 59 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
# 60 "data/maps/ZED_SawgrassForest/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 25
	end

SawgrassForest_MapScript_OnFrameMakeJordanFollower_2:
# 21 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0, MSGBOX_YESNO
	goto SawgrassForest_MapScript_OnFrameMakeJordanFollower_1

SawgrassForest_MapScript_OnFrameMakeJordanFollower_5:
# 40 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_2
# 41 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 42 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 43 "data/maps/ZED_SawgrassForest/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 44 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_3
# 45 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitse
# 46 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 47 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_DetermineJordanTeam
# 48 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 49 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 4
# 50 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_DetermineJordanTeam::
# 67 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SawgrassForest_DetermineJordanTeam_1
# 75 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SawgrassForest_DetermineJordanTeam_2
# 83 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SawgrassForest_DetermineJordanTeam_3
# 91 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq SawgrassForest_DetermineJordanTeam_4
	return

SawgrassForest_DetermineJordanTeam_1:
# 68 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANPOUR_01
	return

SawgrassForest_DetermineJordanTeam_2:
# 76 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANSEAR_01
	return

SawgrassForest_DetermineJordanTeam_3:
# 84 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANSAGE_01
	return

SawgrassForest_DetermineJordanTeam_4:
# 92 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_INNAPE_01
	return


SawgrassForest_EventScript_JordanFollower::
# 103 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 104 "data/maps/ZED_SawgrassForest/scripts.pory"
	faceplayer
# 105 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_JordanFollower_Text_0
# 109 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 110 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_JordanLeave::
# 116 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 4
	goto_if_eq SawgrassForest_JordanLeave_2
	return

SawgrassForest_JordanLeave_1:
# 117 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 118 "data/maps/ZED_SawgrassForest/scripts.pory"
	faceplayer
# 119 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_JordanLeave_Text_0, MSGBOX_YESNO
# 121 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SawgrassForest_JordanLeave_5
# 135 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_JordanLeave_Movement_0
# 136 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 137 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end

SawgrassForest_JordanLeave_2:
# 116 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_unset FLAG_SAWGRASSFOREST_JORDANNOTRIGGER, SawgrassForest_JordanLeave_1
	return

SawgrassForest_JordanLeave_5:
# 122 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4
# 123 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 124 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
# 125 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data/maps/ZED_SawgrassForest/scripts.pory"
	destroyfollowernpc
# 128 "data/maps/ZED_SawgrassForest/scripts.pory"
	addobject SAWGRASSFOREST_JORDAN_01
# 129 "data/maps/ZED_SawgrassForest/scripts.pory"
	setobjectxy SAWGRASSFOREST_JORDAN_01, 5, 4
# 130 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_PLAYERLEFT
# 131 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 132 "data/maps/ZED_SawgrassForest/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 25
	end


SawgrassForest_EventScript_WarningSign::
# 147 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 148 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_WarningSign_Text_0
# 154 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 155 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	return


SawgrassForest_EventScript_MansionSign::
# 160 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 161 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_MansionSign_Text_0
# 165 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 166 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	return


SawgrassForest_EventScript_TauntGive::
# 171 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 172 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 173 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_TAUNTTM
# 174 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_FOREST_TAUNT
# 175 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 176 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_EventScript_SuperPotionGive::
# 182 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 183 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_MYSTIC_WATER, 1
# 184 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_SUPERPOTION
# 185 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_FOREST_SUPERPOT
# 186 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 187 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_EventScript_Trainer01::
# 193 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_LARRY, SawgrassForest_EventScript_Trainer01_Text_0, SawgrassForest_EventScript_Trainer01_Text_1
# 198 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 200 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer02::
# 205 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, SawgrassForest_EventScript_Trainer02_Text_0, SawgrassForest_EventScript_Trainer02_Text_1
# 211 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 212 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer03::
# 217 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, SawgrassForest_EventScript_Trainer03_Text_0, SawgrassForest_EventScript_Trainer03_Text_1
# 223 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 224 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer04::
# 229 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, SawgrassForest_EventScript_Trainer04_Text_0, SawgrassForest_EventScript_Trainer04_Text_1
# 236 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 238 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer05::
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, SawgrassForest_EventScript_Trainer05_Text_0, SawgrassForest_EventScript_Trainer05_Text_1
# 248 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 249 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_KowtowEncounterTrigger01::
# 256 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_KOWTOWPOSITION
# 257 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassForest_KowtowEncounter
	return


SawgrassForest_EventScript_KowtowEncounterTrigger02::
# 261 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOWPOSITION
# 262 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassForest_KowtowEncounter
	return


SawgrassForest_KowtowEncounter::
# 267 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 268 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_KOWTOW_ENCOUNTERS, 1
# 269 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 270 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 271 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 273 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, SawgrassForest_KowtowEncounter_2
# 277 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_1
SawgrassForest_KowtowEncounter_1:
# 279 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 281 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_0
# 285 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_2
# 286 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_3
# 287 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 288 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 60
# 289 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_4
# 293 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 294 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_5
# 298 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_1
# 305 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 307 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_6
# 308 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_7
# 310 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_2
# 316 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 318 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_3
# 323 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 325 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 327 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_4
# 331 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 333 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_5
# 336 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 338 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_3
# 339 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_3
# 341 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_6
# 345 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 348 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SawgrassForest_KowtowEncounter_5
# 351 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SawgrassForest_KowtowEncounter_6
# 354 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SawgrassForest_KowtowEncounter_7
# 357 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq SawgrassForest_KowtowEncounter_8
	return

SawgrassForest_KowtowEncounter_2:
# 274 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_0
	goto SawgrassForest_KowtowEncounter_1

SawgrassForest_KowtowEncounter_5:
# 349 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Panpour
	return

SawgrassForest_KowtowEncounter_6:
# 352 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Pansear
	return

SawgrassForest_KowtowEncounter_7:
# 355 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Pansage
	return

SawgrassForest_KowtowEncounter_8:
# 358 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Innape
	return


# 365 "data/maps/ZED_SawgrassForest/scripts.pory"

# 366 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Pansage::
# 367 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANSAGE_01
# 368 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 369 "data/maps/ZED_SawgrassForest/scripts.pory"

# 370 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Pansear::
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANSEAR_01
# 372 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 373 "data/maps/ZED_SawgrassForest/scripts.pory"

# 374 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Panpour::
# 375 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANPOUR_01
# 376 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 377 "data/maps/ZED_SawgrassForest/scripts.pory"

# 378 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Innape::
# 379 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_INNAPE_01
# 380 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 381 "data/maps/ZED_SawgrassForest/scripts.pory"

# 382 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_AfterMultiDirect::
# 383 "data/maps/ZED_SawgrassForest/scripts.pory"
    switch VAR_RESULT
# 384 "data/maps/ZED_SawgrassForest/scripts.pory"
	case 1, Sawgrass_Kowtow_AfterBattle
# 385 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto Sawgrass_Kowtow_Whiteout
# 386 "data/maps/ZED_SawgrassForest/scripts.pory"

# 387 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_Grunt1_Loss:
# 388 "data/maps/ZED_SawgrassForest/scripts.pory"
    .string "Awh, no way!$"
# 389 "data/maps/ZED_SawgrassForest/scripts.pory"

# 390 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_Grunt2_Loss:
# 391 "data/maps/ZED_SawgrassForest/scripts.pory"
    .string "This ain't good!$"

Sawgrass_Kowtow_Whiteout::
# 395 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 396 "data/maps/ZED_SawgrassForest/scripts.pory"
	special SetCB2WhiteOut
	return


Sawgrass_Kowtow_AfterBattle::
# 400 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 401 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_0
# 402 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 405 "data/maps/ZED_SawgrassForest/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 406 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 407 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 408 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_KOWTOW_01
# 409 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_KOWTOW_02
# 410 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitse
# 411 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 120
# 412 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 414 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 416 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_1
# 419 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 422 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, Sawgrass_Kowtow_AfterBattle_2
# 429 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_MUGGED_WOMAN, SawgrassForest_KowtowEncounter_Movement_5
# 430 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 431 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Sawgrass_Kowtow_AfterBattle_Movement_1
# 432 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, Sawgrass_Kowtow_AfterBattle_Movement_1
Sawgrass_Kowtow_AfterBattle_1:
# 434 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 435 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_2
# 440 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 441 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 442 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_3
# 447 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 448 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 449 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 450 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_MUGGED_WOMAN
# 451 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 120
# 452 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 454 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 456 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_4
# 481 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 482 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end

Sawgrass_Kowtow_AfterBattle_2:
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_MUGGED_WOMAN, Sawgrass_Kowtow_AfterBattle_Movement_0
# 424 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 425 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Sawgrass_Kowtow_AfterBattle_Movement_1
# 426 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, Sawgrass_Kowtow_AfterBattle_Movement_1
	goto Sawgrass_Kowtow_AfterBattle_1


SawgrassForest_KowtowScene_FollowPlayerFace::
# 487 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, SawgrassForest_KowtowScene_FollowPlayerFace_1
# 492 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_7
# 493 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_KowtowEncounter_Movement_6
	return

SawgrassForest_KowtowScene_FollowPlayerFace_1:
# 488 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_6
# 489 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_KowtowEncounter_Movement_7
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

# 135 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_JordanLeave_Movement_0:
# 135 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
	step_end

# 274 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_0:
# 274 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_up
# 274 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_left
	step_end

# 277 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_1:
# 277 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 277 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_left
	step_end

# 285 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_2:
# 285 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
# 285 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_down
	step_end

# 286 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_3:
# 286 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
# 286 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_right
	step_end

# 289 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_4:
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 294 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_5:
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 295 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 307 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_6:
# 307 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_down
	step_end

# 308 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_7:
# 308 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_up
	step_end

# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
Sawgrass_Kowtow_AfterBattle_Movement_0:
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 423 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 425 "data/maps/ZED_SawgrassForest/scripts.pory"
Sawgrass_Kowtow_AfterBattle_Movement_1:
# 425 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_left
	step_end

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0:
# 21 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You're back! Ready to go?$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_1:
# 25 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}There you are {PLAYER}, I've\n"
	.string "been waiting! There's all sorts of\l"
	.string "Pokemon in this forest, not to mention\l"
	.string "other trainers.\p"
	.string "Let's explore the place, maybe we'll find\n"
	.string "a rare Pokemon!\p"
	.string "I'll keep your party healthy. You'll be\n"
	.string "able to catch Pokemon still, too!\p"
	.string "Are you ready to go?$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_2:
# 40 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Great! Let's go!$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_3:
# 44 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Jordan is now your follower!$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4:
# 54 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Alright, but hurry back!$"

SawgrassForest_EventScript_JordanFollower_Text_0:
# 105 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "This place is a lot spookier than\n"
	.string "I remember...\p"
	.string "Keep your eyes open!$"

SawgrassForest_JordanLeave_Text_0:
# 119 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Do you want to take a break?\n"
	.string "I'll be waiting for you.$"

SawgrassForest_EventScript_WarningSign_Text_0:
# 148 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "WARNING:\p"
	.string "Patrols in Sawgrass Forest are not\n"
	.string "frequent.\p"
	.string "Stick to the lamplight for safety.$"

SawgrassForest_EventScript_MansionSign_Text_0:
# 161 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You can make out some words, but it's\n"
	.string "been faded with time.\p"
	.string "PRIVATE PROPERTY: KEEP OUT OR ELSE$"

SawgrassForest_EventScript_Trainer01_Text_0:
# 195 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Ah! A ghost!$"

SawgrassForest_EventScript_Trainer01_Text_1:
# 196 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You could still be a ghost!$"

SawgrassForest_EventScript_Trainer01_Text_2:
# 198 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I think my friends pranked me, this is\n"
	.string "not a good place to camp!.$"

SawgrassForest_EventScript_Trainer02_Text_0:
# 207 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "This place is scary, but there's so\n"
	.string "many bugs!$"

SawgrassForest_EventScript_Trainer02_Text_1:
# 209 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Watch out, you're scaring off the bugs!$"

SawgrassForest_EventScript_Trainer02_Text_2:
# 211 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Where did the bugs go?$"

SawgrassForest_EventScript_Trainer03_Text_0:
# 219 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "So many Pokemon to collect and\n"
	.string "research! Help me train these!$"

SawgrassForest_EventScript_Trainer03_Text_1:
# 221 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Ah well, that was unexpected.$"

SawgrassForest_EventScript_Trainer03_Text_2:
# 223 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I know! I just need to catch more!$"

SawgrassForest_EventScript_Trainer04_Text_0:
# 231 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Two guys in funny outfits ran by\n"
	.string "here, they were faster than me!$"

SawgrassForest_EventScript_Trainer04_Text_1:
# 233 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Maybe I should catch them, they\n"
	.string "could train me!!$"

SawgrassForest_EventScript_Trainer04_Text_2:
# 236 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Wait, how am I going to catch them if\n"
	.string "they are faster than me?$"

SawgrassForest_EventScript_Trainer05_Text_0:
# 245 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Aha! The strike of the ninja style!$"

SawgrassForest_EventScript_Trainer05_Text_1:
# 246 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "We must retreat!$"

SawgrassForest_EventScript_Trainer05_Text_2:
# 248 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I got you pretty good huh?$"

SawgrassForest_KowtowEncounter_Text_0:
# 282 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What's going on here!$"

SawgrassForest_KowtowEncounter_Text_1:
# 301 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What are you doing\n"
	.string "here! I guess that guy we paid to block\l"
	.string "the entrance tucked tail.$"

SawgrassForest_KowtowEncounter_Text_2:
# 311 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I guess we'll just have\n"
	.string "to take them, down ourselves, the boss\l"
	.string "don't got to know we messed up a little\l"
	.string "bit!$"

SawgrassForest_KowtowEncounter_Text_3:
# 319 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 2: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sure, sure, until his\n"
	.string "{COLOR RED}Kingambit{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} stares us down for so long\l"
	.string "that we break into a sweat!$"

SawgrassForest_KowtowEncounter_Text_4:
# 328 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sheesh, the trash might take\n"
	.string "itself out if they keep arguing.$"

SawgrassForest_KowtowEncounter_Text_5:
# 334 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Quit being a...$"

SawgrassForest_KowtowEncounter_Text_6:
# 342 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Who are you calling\n"
	.string "trash!$"

Sawgrass_Kowtow_AfterBattle_Text_0:
# 401 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "No good, use the smokescreen!$"

Sawgrass_Kowtow_AfterBattle_Text_1:
# 417 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}They got away!$"

Sawgrass_Kowtow_AfterBattle_Text_2:
# 435 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Thank you for dealing with them!\n"
	.string "They did take my money, but I was\l"
	.string "worried for my life!\p"
	.string "Here, have this! I insist!$"

Sawgrass_Kowtow_AfterBattle_Text_3:
# 442 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I was going to train my Pokemon\n"
	.string "with that, but I think I'm going to take\l"
	.string "some time to relax. Keep it!$"

Sawgrass_Kowtow_AfterBattle_Text_4:
# 457 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Argh! I can't believe\n"
	.string "we let those {COLOR RED}Team Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} members\l"
	.string "get away!\p"
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
	.string "What? I waas going to get you one!\n"
	.string "Honest!\p"
	.string "Anyways, we should press on, and get to\n"
	.string "{COLOR RED}Route 110{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} soon! I don't think I want\l"
	.string "to come back to this place.$"
