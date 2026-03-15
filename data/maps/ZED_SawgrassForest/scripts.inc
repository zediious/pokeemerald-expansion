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
# 36 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SawgrassForest_MapScript_OnFrameMakeJordanFollower_5
# 51 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4
# 52 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 53 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 54 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_PLAYERLEFT
# 55 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 56 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
# 57 "data/maps/ZED_SawgrassForest/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 25
	end

SawgrassForest_MapScript_OnFrameMakeJordanFollower_2:
# 21 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_0, MSGBOX_YESNO
	goto SawgrassForest_MapScript_OnFrameMakeJordanFollower_1

SawgrassForest_MapScript_OnFrameMakeJordanFollower_5:
# 37 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_2
# 38 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 39 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 40 "data/maps/ZED_SawgrassForest/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 41 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_3
# 42 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitse
# 43 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 44 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_DetermineJordanTeam
# 45 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 46 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 4
# 47 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_DetermineJordanTeam::
# 64 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SawgrassForest_DetermineJordanTeam_1
# 72 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SawgrassForest_DetermineJordanTeam_2
# 80 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SawgrassForest_DetermineJordanTeam_3
# 88 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq SawgrassForest_DetermineJordanTeam_4
	return

SawgrassForest_DetermineJordanTeam_1:
# 65 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANPOUR_01
	return

SawgrassForest_DetermineJordanTeam_2:
# 73 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANSEAR_01
	return

SawgrassForest_DetermineJordanTeam_3:
# 81 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_PANSAGE_01
	return

SawgrassForest_DetermineJordanTeam_4:
# 89 "data/maps/ZED_SawgrassForest/scripts.pory"
	setfollowernpc SAWGRASSFOREST_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, SawgrassForest_EventScript_JordanFollower, PARTNER_JORDAN_INNAPE_01
	return


SawgrassForest_EventScript_JordanFollower::
# 100 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 101 "data/maps/ZED_SawgrassForest/scripts.pory"
	faceplayer
# 102 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_JordanFollower_Text_0
# 106 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 107 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_JordanLeave::
# 113 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 4
	goto_if_eq SawgrassForest_JordanLeave_2
	return

SawgrassForest_JordanLeave_1:
# 114 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 115 "data/maps/ZED_SawgrassForest/scripts.pory"
	faceplayer
# 116 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_JordanLeave_Text_0, MSGBOX_YESNO
# 118 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SawgrassForest_JordanLeave_5
# 132 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_JordanLeave_Movement_0
# 133 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 134 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end

SawgrassForest_JordanLeave_2:
# 113 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_unset FLAG_SAWGRASSFOREST_JORDANNOTRIGGER, SawgrassForest_JordanLeave_1
	return

SawgrassForest_JordanLeave_5:
# 119 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4
# 120 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 121 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
# 122 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 124 "data/maps/ZED_SawgrassForest/scripts.pory"
	destroyfollowernpc
# 125 "data/maps/ZED_SawgrassForest/scripts.pory"
	addobject SAWGRASSFOREST_JORDAN_01
# 126 "data/maps/ZED_SawgrassForest/scripts.pory"
	setobjectxy SAWGRASSFOREST_JORDAN_01, 5, 4
# 127 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_PLAYERLEFT
# 128 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 3
# 129 "data/maps/ZED_SawgrassForest/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 3, 25
	end


SawgrassForest_EventScript_WarningSign::
# 144 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 145 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_WarningSign_Text_0
# 151 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 152 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	return


SawgrassForest_EventScript_MansionSign::
# 157 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 158 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_MansionSign_Text_0
# 162 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 163 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	return


SawgrassForest_EventScript_TauntGive::
# 168 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 169 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_TM_TAUNT
# 170 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_TAUNTTM
# 171 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_FOREST_TAUNT
# 172 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 173 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end


SawgrassForest_EventScript_Trainer01::
# 179 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_LARRY, SawgrassForest_EventScript_Trainer01_Text_0, SawgrassForest_EventScript_Trainer01_Text_1
# 184 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 186 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_Trainer02::
# 191 "data/maps/ZED_SawgrassForest/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, SawgrassForest_EventScript_Trainer02_Text_0, SawgrassForest_EventScript_Trainer02_Text_1
# 197 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 198 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
	end


SawgrassForest_EventScript_KowtowEncounterTrigger01::
# 204 "data/maps/ZED_SawgrassForest/scripts.pory"
	clearflag FLAG_SAWGRASSFOREST_KOWTOWPOSITION
# 205 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassForest_KowtowEncounter
	return


SawgrassForest_EventScript_KowtowEncounterTrigger02::
# 209 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOWPOSITION
# 210 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassForest_KowtowEncounter
	return


SawgrassForest_KowtowEncounter::
# 215 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 216 "data/maps/ZED_SawgrassForest/scripts.pory"
	setvar VAR_KOWTOW_ENCOUNTERS, 1
# 217 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 218 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_MapScript_OnFrameMakeJordanFollower_Movement_1
# 219 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 221 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, SawgrassForest_KowtowEncounter_2
# 225 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_1
SawgrassForest_KowtowEncounter_1:
# 227 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 229 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_0
# 233 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_2
# 234 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_3
# 235 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 236 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 60
# 237 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_4
# 241 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 242 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_5
# 246 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 248 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_1
# 253 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 255 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_6
# 256 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_7
# 258 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_2
# 264 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 266 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_3
# 271 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 273 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 275 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_4
# 279 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 281 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_5
# 284 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 286 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_01, SawgrassForest_KowtowEncounter_Movement_3
# 287 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_KOWTOW_02, SawgrassForest_KowtowEncounter_Movement_3
# 289 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox SawgrassForest_KowtowEncounter_Text_6
# 293 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 296 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SawgrassForest_KowtowEncounter_5
# 299 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SawgrassForest_KowtowEncounter_6
# 302 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SawgrassForest_KowtowEncounter_7
# 305 "data/maps/ZED_SawgrassForest/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq SawgrassForest_KowtowEncounter_8
	return

SawgrassForest_KowtowEncounter_2:
# 222 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_0
	goto SawgrassForest_KowtowEncounter_1

SawgrassForest_KowtowEncounter_5:
# 297 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Panpour
	return

SawgrassForest_KowtowEncounter_6:
# 300 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Pansear
	return

SawgrassForest_KowtowEncounter_7:
# 303 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Pansage
	return

SawgrassForest_KowtowEncounter_8:
# 306 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto SawgrassVillage_RawScript_Start2v2_Innape
	return


# 313 "data/maps/ZED_SawgrassForest/scripts.pory"

# 314 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Pansage::
# 315 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANSAGE_01
# 316 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 317 "data/maps/ZED_SawgrassForest/scripts.pory"

# 318 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Pansear::
# 319 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANSEAR_01
# 320 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 321 "data/maps/ZED_SawgrassForest/scripts.pory"

# 322 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Panpour::
# 323 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_PANPOUR_01
# 324 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 325 "data/maps/ZED_SawgrassForest/scripts.pory"

# 326 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_Start2v2_Innape::
# 327 "data/maps/ZED_SawgrassForest/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_AQUA_HIDEOUT_1, SawgrassVillage_Grunt1_Loss, TRAINER_GRUNT_AQUA_HIDEOUT_2, SawgrassVillage_Grunt2_Loss, PARTNER_JORDAN_INNAPE_01
# 328 "data/maps/ZED_SawgrassForest/scripts.pory"
    goto(SawgrassVillage_RawScript_AfterMultiDirect)
# 329 "data/maps/ZED_SawgrassForest/scripts.pory"

# 330 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_RawScript_AfterMultiDirect::
# 331 "data/maps/ZED_SawgrassForest/scripts.pory"
    switch VAR_RESULT
# 332 "data/maps/ZED_SawgrassForest/scripts.pory"
	case 1, Sawgrass_Kowtow_AfterBattle
# 333 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto Sawgrass_Kowtow_Whiteout
# 334 "data/maps/ZED_SawgrassForest/scripts.pory"

# 335 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_Grunt1_Loss:
# 336 "data/maps/ZED_SawgrassForest/scripts.pory"
    .string "Awh, no way!$"
# 337 "data/maps/ZED_SawgrassForest/scripts.pory"

# 338 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassVillage_Grunt2_Loss:
# 339 "data/maps/ZED_SawgrassForest/scripts.pory"
    .string "This ain't good!$"

Sawgrass_Kowtow_Whiteout::
# 343 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 344 "data/maps/ZED_SawgrassForest/scripts.pory"
	special SetCB2WhiteOut
	return


Sawgrass_Kowtow_AfterBattle::
# 348 "data/maps/ZED_SawgrassForest/scripts.pory"
	lock
# 349 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_0
# 350 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 353 "data/maps/ZED_SawgrassForest/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 354 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 355 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 356 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_KOWTOW_01
# 357 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_KOWTOW_02
# 358 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitse
# 359 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 120
# 360 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 362 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 364 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_1
# 367 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 370 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, Sawgrass_Kowtow_AfterBattle_2
# 377 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_MUGGED_WOMAN, SawgrassForest_KowtowEncounter_Movement_5
# 378 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 379 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Sawgrass_Kowtow_AfterBattle_Movement_1
# 380 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, Sawgrass_Kowtow_AfterBattle_Movement_1
Sawgrass_Kowtow_AfterBattle_1:
# 382 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmovement
# 383 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_2
# 388 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 389 "data/maps/ZED_SawgrassForest/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 390 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_3
# 395 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 396 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 397 "data/maps/ZED_SawgrassForest/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 398 "data/maps/ZED_SawgrassForest/scripts.pory"
	removeobject SAWGRASS_MUGGED_WOMAN
# 399 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 120
# 400 "data/maps/ZED_SawgrassForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 402 "data/maps/ZED_SawgrassForest/scripts.pory"
	call SawgrassForest_KowtowScene_FollowPlayerFace
# 404 "data/maps/ZED_SawgrassForest/scripts.pory"
	msgbox Sawgrass_Kowtow_AfterBattle_Text_4
# 418 "data/maps/ZED_SawgrassForest/scripts.pory"
	waitmessage
# 419 "data/maps/ZED_SawgrassForest/scripts.pory"
	release
	end

Sawgrass_Kowtow_AfterBattle_2:
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement SAWGRASS_MUGGED_WOMAN, Sawgrass_Kowtow_AfterBattle_Movement_0
# 372 "data/maps/ZED_SawgrassForest/scripts.pory"
	delay 30
# 373 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Sawgrass_Kowtow_AfterBattle_Movement_1
# 374 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, Sawgrass_Kowtow_AfterBattle_Movement_1
	goto Sawgrass_Kowtow_AfterBattle_1


SawgrassForest_KowtowScene_FollowPlayerFace::
# 424 "data/maps/ZED_SawgrassForest/scripts.pory"
	goto_if_set FLAG_SAWGRASSFOREST_KOWTOWPOSITION, SawgrassForest_KowtowScene_FollowPlayerFace_1
# 429 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_7
# 430 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement 0xFF, SawgrassForest_KowtowEncounter_Movement_6
	return

SawgrassForest_KowtowScene_FollowPlayerFace_1:
# 425 "data/maps/ZED_SawgrassForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, SawgrassForest_KowtowEncounter_Movement_6
# 426 "data/maps/ZED_SawgrassForest/scripts.pory"
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

# 132 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_JordanLeave_Movement_0:
# 132 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_0:
# 222 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_up
# 222 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_left
	step_end

# 225 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_1:
# 225 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 225 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_left
	step_end

# 233 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_2:
# 233 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
# 233 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_down
	step_end

# 234 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_3:
# 234 "data/maps/ZED_SawgrassForest/scripts.pory"
	emote_exclamation_mark
# 234 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_right
	step_end

# 237 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_4:
# 238 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 238 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 238 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 238 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 238 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_5:
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 243 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 255 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_6:
# 255 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_down
	step_end

# 256 "data/maps/ZED_SawgrassForest/scripts.pory"
SawgrassForest_KowtowEncounter_Movement_7:
# 256 "data/maps/ZED_SawgrassForest/scripts.pory"
	face_up
	step_end

# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
Sawgrass_Kowtow_AfterBattle_Movement_0:
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_down
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
# 371 "data/maps/ZED_SawgrassForest/scripts.pory"
	walk_right
	step_end

# 373 "data/maps/ZED_SawgrassForest/scripts.pory"
Sawgrass_Kowtow_AfterBattle_Movement_1:
# 373 "data/maps/ZED_SawgrassForest/scripts.pory"
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
	.string "Are you ready to go?$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_2:
# 37 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Great! Let's go!$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_3:
# 41 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Jordan is now your follower!$"

SawgrassForest_MapScript_OnFrameMakeJordanFollower_Text_4:
# 51 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Alright, but hurry back!$"

SawgrassForest_EventScript_JordanFollower_Text_0:
# 102 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "This place is a lot spookier than\n"
	.string "I remember...\p"
	.string "Keep your eyes open!$"

SawgrassForest_JordanLeave_Text_0:
# 116 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Do you want to take a break?\n"
	.string "I'll be waiting for you.$"

SawgrassForest_EventScript_WarningSign_Text_0:
# 145 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "WARNING:\p"
	.string "Patrols in Sawgrass Forest are not\n"
	.string "frequent.\p"
	.string "Stick to the lamplight for safety.$"

SawgrassForest_EventScript_MansionSign_Text_0:
# 158 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You can make out some words, but it's\n"
	.string "been faded with time.\p"
	.string "PRIVATE PROPERTY: KEEP OUT OR ELSE$"

SawgrassForest_EventScript_Trainer01_Text_0:
# 181 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Ah! A ghost!$"

SawgrassForest_EventScript_Trainer01_Text_1:
# 182 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "You could still be a ghost!$"

SawgrassForest_EventScript_Trainer01_Text_2:
# 184 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "I think my friends pranked me, this is\n"
	.string "not a good place to camp!.$"

SawgrassForest_EventScript_Trainer02_Text_0:
# 193 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "This place is scary, but there's so\n"
	.string "many bugs!$"

SawgrassForest_EventScript_Trainer02_Text_1:
# 195 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Watch out, you're scaring off the bugs!$"

SawgrassForest_EventScript_Trainer02_Text_2:
# 197 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "Where did the bugs go?$"

SawgrassForest_KowtowEncounter_Text_0:
# 230 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What's going on here!$"

SawgrassForest_KowtowEncounter_Text_1:
# 249 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What are you doing\n"
	.string "here! I guess that guy we paid to block\l"
	.string "the entrance tucked tail.$"

SawgrassForest_KowtowEncounter_Text_2:
# 259 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I guess we'll just have\n"
	.string "to take them, down ourselves, the boss\l"
	.string "don't got to know we messed up a little\l"
	.string "bit!$"

SawgrassForest_KowtowEncounter_Text_3:
# 267 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 2: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sure, sure, until his\n"
	.string "{COLOR RED}Kingambit{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} stares us down for so long\l"
	.string "that we break into a sweat!$"

SawgrassForest_KowtowEncounter_Text_4:
# 276 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Sheesh, the trash might take\n"
	.string "itself out if they keep arguing.$"

SawgrassForest_KowtowEncounter_Text_5:
# 282 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Quit being a...$"

SawgrassForest_KowtowEncounter_Text_6:
# 290 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Kowtow Grunt 1: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Who are you calling\n"
	.string "trash!$"

Sawgrass_Kowtow_AfterBattle_Text_0:
# 349 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "No good, use the smokescreen!$"

Sawgrass_Kowtow_AfterBattle_Text_1:
# 365 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}They got away!$"

Sawgrass_Kowtow_AfterBattle_Text_2:
# 383 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Thank you for dealing with them!\n"
	.string "They did take my money, but I was\l"
	.string "worried for my life!\p"
	.string "Here, have this! I insist!$"

Sawgrass_Kowtow_AfterBattle_Text_3:
# 390 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I was going to train my Pokemon\n"
	.string "with that, but I think I'm going to take\l"
	.string "some time to relax. Keep it!$"

Sawgrass_Kowtow_AfterBattle_Text_4:
# 405 "data/maps/ZED_SawgrassForest/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That was a lo! But hey, that\n"
	.string "{COLOR RED}Exp Share{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} will definitely be useful!\l"
	.string "Lucky for me, I already have one!\p"
	.string "...\p"
	.string "What? I waas going to get you one!\n"
	.string "Honest!\p"
	.string "Anyways, we should press on, and get to\n"
	.string "{COLOR GREEN}Route 110{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} soon! I don't think I want\l"
	.string "to come back to this place.$"
