Vulias_Igris_Desert_MapScripts::
# 2 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgrisDesert_OnTransition_SetState
# 3 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 22, IgrisDesert_FoundChildWarpedOutside
	.2byte 0


IgrisDesert_OnTransition_SetState::
# 10 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 22
	goto_if_lt IgrisDesert_OnTransition_SetState_1
	return

IgrisDesert_OnTransition_SetState_1:
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
	return


IgrisDesert_EventScript_PalentoVillageSign::
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lockall
# 20 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PalentoVillageSign_Text_0
# 21 "data/maps/Vulias_Igris_Desert/scripts.pory"
	releaseall
	return


IgrisDesert_EventScript_AngryKrokorok::
# 26 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 27 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 30 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 31 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 35 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 36 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 37 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 41 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 49 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 61 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 72 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 84 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 108 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 118 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 119 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 128 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 129 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 130 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 133 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 136 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 137 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 189 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 203 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 266 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 274 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 282 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 267 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 283 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 291 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 302 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_DetermineJordanTeam02::
# 308 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 324 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 333 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 309 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 317 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 325 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 345 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 346 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 347 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
# 354 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 355 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 361 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 362 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 363 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 364 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 368 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 371 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 375 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 377 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 383 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 384 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 385 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 389 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 390 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 392 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 397 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 398 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 399 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 404 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 405 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 406 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 409 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 411 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 413 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 429 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 431 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 457 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 460 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 461 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 447 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 449 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 453 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 454 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 468 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 469 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 473 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 475 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 476 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 481 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 482 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0
# 486 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 487 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 488 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 495 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 496 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 497 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 500 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 501 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 508 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 511 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 515 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 516 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 517 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 518 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 522 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 524 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 525 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 533 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 535 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 536 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 537 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 538 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 541 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 543 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 546 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 552 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 554 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 558 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_6
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectmovementtype IGRIS_LOSTCHILD_MOM, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 577 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 584 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 23
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 586 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy IGRIS_LOSTCHILD_MOM, 12, 17
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 590 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_0
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 594 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 597 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 598 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 599 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 600 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_2
# 604 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 605 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 606 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 608 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3, MSGBOX_SIGN
# 611 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 613 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 614 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 616 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 617 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 619 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 639 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 644 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject JORDAN_IGRIS_02
# 645 "data/maps/Vulias_Igris_Desert/scripts.pory"
	questupdated 0
# 646 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 136 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 136 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 136 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 362 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 362 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 405 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 405 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 487 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 487 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_6:
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_1:
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_EventScript_PalentoVillageSign_Text_0:
# 20 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{RIGHT_ARROW} Palento Village$"

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 37 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 63 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 64 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 74 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 75 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 108 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 118 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 130 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 177 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}They got away again!\n"
	.string "We need to start preparing for that\l"
	.string "smoke bomb, pack some goggles along\l"
	.string "with us, or something.\p"
	.string "We're sure to come across them again\n"
	.string "with the fact that we've seen them\l"
	.string "twice on our trip so far.\p"
	.string "This Togepi! It must be the one that\n"
	.string "lady was in shambles over! $"

IgrisDesert_KowtowAdmin_AfterBattle_Text_2:
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well that turned out well! You\n"
	.string "got yourself a Cut HM as well!\p"
	.string "...\p"
	.string "Well, I can't get you everything myself\n"
	.string "can I! I only recently got one of those\l"
	.string "myself...\p"
	.string "Anyways, the tournament in Woltia City\n"
	.string "is set to start later today! I came\l"
	.string "looking for you, when I found that lady\l"
	.string "outside.\p"
	.string "We should make our way over there!\n"
	.string "Just head south of the desert, and \l"
	.string "then west! I'll see you there!$"

IgrisDesert_EventScript_JordanFollower02_Text_0:
# 347 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 431 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! I've been waiting\n"
	.string "for you! There's this really cool looking\l"
	.string "{COLOR RED}Pyramid{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to the west, past this \l"
	.string "mountain range. I was waiting for you\l"
	.string "so that we could check it out\l"
	.string "together!\p"
	.string "Are you ready to go? I'll keep your\n"
	.string "team healthy, and you'll be able to\l"
	.string "catch Pokemon!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1:
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great, let's get going!\n"
	.string "The Pyramid is to the west, up those\l"
	.string "stairs through the mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 449 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 457 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 469 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "need a Pokemon Center or Mart, we can\l"
	.string "go to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0:
# 482 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "a Pokemon Center or Mart, we can go\l"
	.string "to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 497 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What a distinguished\n"
	.string "landmark this is! Why, I simply must\l"
	.string "spend as much time here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 538 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My little girl! They\n"
	.string "were taken by a {COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 558 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please, try to find\n"
	.string "my little girl! She was taken into the\l"
	.string "closed off areas of the Pyramid by an\l"
	.string "unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, another reason to check\n"
	.string "out the Pyramid! Although, I suppose\l"
	.string "saving a child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 590 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh thank goodness you're\n"
	.string "okay my sweet! I've been losing my mind\l"
	.string "over you!$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 594 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Those nice people saved\n"
	.string "me! That mean Pokemon took me to a dark\l"
	.string "scary room and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 600 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I could never repay\n"
	.string "you for what you've done for me and\l"
	.string "my child. The least I can do is give\l"
	.string "you each one of these$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 608 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 614 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Now, come along, and stay\n"
	.string "very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 617 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That was a handful! I'm glad we\n"
	.string "were able to save that kid. Not to\l"
	.string "mention, we were able to go into\l"
	.string "the forbidden areas of the\l"
	.string "Pyramid!\p"
	.string "I wonder if they will let us go back\n"
	.string "in now?\p"
	.string "Well, I think I've had enough\n"
	.string "Pyramid spelunking for today, I'm\l"
	.string "going to go rest up at\l"
	.string "Palento Village for a bit.\p"
	.string "You can go on ahead, I'll catch up!\n"
	.string "See you l;ater {PLAYER}!$"
