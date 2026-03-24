Vulias_Igris_Desert_MapScripts::
# 2 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgrisDesert_OnTransition_SetState
# 3 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 23, IgrisDesert_FoundChildWarpedOutside
	.2byte 0


IgrisDesert_OnTransition_SetState::
# 10 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_lt IgrisDesert_OnTransition_SetState_2
IgrisDesert_OnTransition_SetState_1:
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_lt IgrisDesert_OnTransition_SetState_4
	return

IgrisDesert_OnTransition_SetState_2:
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
	goto IgrisDesert_OnTransition_SetState_1

IgrisDesert_OnTransition_SetState_4:
# 14 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
	return


IgrisDesert_EventScript_PalentoVillageSign::
# 24 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lockall
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PalentoVillageSign_Text_0
# 26 "data/maps/Vulias_Igris_Desert/scripts.pory"
	releaseall
	return


IgrisDesert_EventScript_AngryKrokorok::
# 31 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 35 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 36 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 37 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 38 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 41 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 45 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 46 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 59 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 71 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 72 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 83 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 84 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 94 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 106 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 108 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 128 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 129 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 130 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 133 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 177 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 203 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 208 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 263 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 265 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 266 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 271 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 279 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 287 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 295 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 280 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 288 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 296 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 307 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_DetermineJordanTeam02::
# 313 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 321 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 329 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 338 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 314 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 322 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 330 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 350 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 351 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 352 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
# 359 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 360 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 366 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 367 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 368 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 373 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 375 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 380 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 381 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 383 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 388 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 389 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 390 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 395 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 397 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 403 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 404 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 409 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 411 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 422 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 428 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 429 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 447 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 462 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 465 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 466 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 453 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 454 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 455 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 456 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 457 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 458 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 459 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 473 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 478 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 479 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 480 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 481 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 486 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 487 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0
# 491 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 493 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 494 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 500 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 501 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 502 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 505 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 506 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 515 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 516 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 517 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 521 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 522 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 524 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 525 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 533 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 538 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 539 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 540 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 541 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 543 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 546 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 551 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 552 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 554 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 562 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 577 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 580 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 586 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 595 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 597 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 605 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 606 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 613 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 614 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_0
# 617 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 624 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_2
# 628 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 629 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 630 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 631 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 632 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3, MSGBOX_SIGN
# 635 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 636 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 637 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 638 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 644 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 645 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 646 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 647 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 648 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 649 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 665 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 666 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 667 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 668 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 669 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 670 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 671 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 672 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 673 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 367 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 367 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 381 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 381 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_EventScript_PalentoVillageSign_Text_0:
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{RIGHT_ARROW} Palento Village$"

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 37 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 56 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 59 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 68 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 71 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 80 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 83 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 92 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 94 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 148 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 182 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 239 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 352 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great, let's get going!\n"
	.string "The Pyramid is to the west, up those\l"
	.string "stairs through the mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 454 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 462 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "need a Pokemon Center or Mart, we can\l"
	.string "go to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0:
# 487 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "a Pokemon Center or Mart, we can go\l"
	.string "to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 502 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What a distinguished\n"
	.string "landmark this is! Why, I simply must\l"
	.string "spend as much time here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 546 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My little girl! They\n"
	.string "were taken by a {COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please, try to find\n"
	.string "my little girl! She was taken into the\l"
	.string "closed off areas of the Pyramid by an\l"
	.string "unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, another reason to check\n"
	.string "out the Pyramid! Although, I suppose\l"
	.string "saving a child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 597 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please don't\n"
	.string "tarry, who knows what my poor child\l"
	.string "could be going through right now?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 614 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh thank goodness you're\n"
	.string "okay my sweet! I've been losing my mind\l"
	.string "over you!$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Those nice people saved\n"
	.string "me! That mean Pokemon took me to a dark\l"
	.string "scary room and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 624 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I could never repay\n"
	.string "you for what you've done for me and\l"
	.string "my child. The least I can do is give\l"
	.string "you each one of these$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 632 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 638 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Now, come along, and stay\n"
	.string "very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 649 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
	.string "See you later {PLAYER}!$"
