Vulias_Igris_Desert_MapScripts::
# 2 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgrisDesert_OnTransition_SetState
# 3 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 23, IgrisDesert_FoundChildWarpedOutside
# 5 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script_2 VAR_IGRIS_DIGDUNGEON_DOHOP, 1, IgrisDesert_SandHoleSpitOutOnEntry
	.2byte 0


IgrisDesert_SandHoleSpitOutOnEntry::
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 0
# 12 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_SandHoleSpitOutOnEntry_Movement_0
# 14 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandHoleSpitOutOnEntry_Text_0, MSGBOX_SIGN
# 17 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 18 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_OnTransition_SetState::
# 24 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_lt IgrisDesert_OnTransition_SetState_2
IgrisDesert_OnTransition_SetState_1:
# 27 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_lt IgrisDesert_OnTransition_SetState_4
	return

IgrisDesert_OnTransition_SetState_2:
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
	goto IgrisDesert_OnTransition_SetState_1

IgrisDesert_OnTransition_SetState_4:
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 29 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 30 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 31 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_PALENTOPOKECENTER_JORDAN01
	return


IgrisDesert_EventScript_PalentoVillageSign::
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lockall
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PalentoVillageSign_Text_0
# 41 "data/maps/Vulias_Igris_Desert/scripts.pory"
	releaseall
	return


IgrisDesert_EventScript_AngryKrokorok::
# 46 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 47 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 48 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 50 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 53 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 55 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 56 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 61 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 74 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 81 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 92 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 119 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 128 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 130 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 137 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 148 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 182 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 189 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 212 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 242 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 244 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 246 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 247 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 277 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 278 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 279 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 280 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 281 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 286 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 302 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 310 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 287 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 295 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 303 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 311 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 322 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_DetermineJordanTeam02::
# 328 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 336 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 344 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 353 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 329 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 337 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 345 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 365 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 366 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 367 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 375 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 381 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 383 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 384 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 388 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 389 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 390 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 395 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 397 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 398 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 403 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 404 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 405 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 409 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 411 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 426 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 429 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 431 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 449 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 461 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 462 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 477 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 480 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 481 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 466 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 467 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 468 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 469 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 470 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 471 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 472 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 473 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 488 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 493 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 494 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 495 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 496 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 501 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 502 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0
# 506 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 507 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 508 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 515 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 516 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 517 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 520 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 521 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 528 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 536 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 537 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 538 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 539 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 540 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 546 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 554 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 558 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 559 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 572 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 577 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 580 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 590 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 594 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 595 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 602 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 603 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 604 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 610 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 611 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 628 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 629 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_0
# 632 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 633 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 636 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 637 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 638 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 639 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_2
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 644 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 645 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 646 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 647 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3, MSGBOX_SIGN
# 650 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 651 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 652 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 653 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 655 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 656 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 658 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 661 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 662 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 664 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 680 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 681 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 682 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 683 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 685 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 686 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 687 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 689 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandHoleSpitOutOnEntry_Movement_0:
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_2_up
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_up
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 507 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 507 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_SandHoleSpitOutOnEntry_Text_0:
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You were thrown out back into the\n"
	.string "Desert!$"

IgrisDesert_EventScript_PalentoVillageSign_Text_0:
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{RIGHT_ARROW} Palento Village$"

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 48 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 71 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 72 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 74 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 83 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 84 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 94 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 95 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 106 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 128 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 367 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great, let's get going!\n"
	.string "The Pyramid is to the west, up those\l"
	.string "stairs through the mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 469 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 477 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "need a Pokemon Center or Mart, we can\l"
	.string "go to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0:
# 502 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "a Pokemon Center or Mart, we can go\l"
	.string "to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 517 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What a distinguished\n"
	.string "landmark this is! Why, I simply must\l"
	.string "spend as much time here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My little girl! They\n"
	.string "were taken by a {COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 572 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please, try to find\n"
	.string "my little girl! She was taken into the\l"
	.string "closed off areas of the Pyramid by an\l"
	.string "unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, another reason to check\n"
	.string "out the Pyramid! Although, I suppose\l"
	.string "saving a child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please don't\n"
	.string "tarry, who knows what my poor child\l"
	.string "could be going through right now?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 629 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh thank goodness you're\n"
	.string "okay my sweet! I've been losing my mind\l"
	.string "over you!$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 633 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Those nice people saved\n"
	.string "me! That mean Pokemon took me to a dark\l"
	.string "scary room and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 639 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I could never repay\n"
	.string "you for what you've done for me and\l"
	.string "my child. The least I can do is give\l"
	.string "you each one of these$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 647 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 653 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Now, come along, and stay\n"
	.string "very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 656 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 664 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
