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
# 20 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 21 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_OnTransition_SetState::
# 27 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_lt IgrisDesert_OnTransition_SetState_2
IgrisDesert_OnTransition_SetState_1:
# 30 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_lt IgrisDesert_OnTransition_SetState_4
	return

IgrisDesert_OnTransition_SetState_2:
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
	goto IgrisDesert_OnTransition_SetState_1

IgrisDesert_OnTransition_SetState_4:
# 31 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_PALENTOPOKECENTER_JORDAN01
	return


IgrisDesert_EventScript_PalentoVillageSign::
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lockall
# 43 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PalentoVillageSign_Text_0
# 44 "data/maps/Vulias_Igris_Desert/scripts.pory"
	releaseall
	return


IgrisDesert_EventScript_AngryKrokorok::
# 49 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 50 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 53 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 55 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 56 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 58 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 59 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 63 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 64 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 72 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 84 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 95 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 130 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 133 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 147 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 148 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 175 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 182 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 189 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 212 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 239 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 246 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 247 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 278 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 279 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 280 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 281 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 282 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 283 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 284 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 289 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 297 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 305 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 313 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 298 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 306 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 314 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 325 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_DetermineJordanTeam02::
# 331 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 339 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 347 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 332 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 340 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 348 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 368 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
# 377 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 384 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 385 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 386 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 392 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 393 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 398 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 399 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 400 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 405 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 406 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 407 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 408 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 413 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 422 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 427 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 428 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 429 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 447 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 453 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 454 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 464 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 465 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 480 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 483 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 484 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 466 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 469 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 470 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 471 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 472 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 473 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 475 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 476 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 477 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 491 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 496 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 497 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 498 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 499 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 504 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 505 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 511 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 512 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 518 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 519 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 520 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 524 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 533 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 535 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 539 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 540 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 541 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 543 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 551 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 558 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 559 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 562 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 572 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 580 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 584 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 594 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 595 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 597 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 598 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 599 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 604 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 605 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 606 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 613 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 614 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 615 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 624 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 630 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 631 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 632 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_0
# 635 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 636 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 639 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_2
# 646 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 647 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 648 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 649 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 650 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3, MSGBOX_SIGN
# 653 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 654 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 655 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 656 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 658 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 661 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 662 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 664 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 665 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 666 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 667 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 683 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 685 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 686 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 687 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 689 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 690 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 691 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 692 "data/maps/Vulias_Igris_Desert/scripts.pory"
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

# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 385 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 385 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 399 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 399 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 428 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 428 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_SandHoleSpitOutOnEntry_Text_0:
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You were thrown out back into the\n"
	.string "Desert!\p"
	.string "Perhaps if you could {COLOR RED}Dig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} better, you\n"
	.string "could find yourself somewhere else!$"

IgrisDesert_EventScript_PalentoVillageSign_Text_0:
# 43 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{RIGHT_ARROW} Palento Village$"

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 55 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 74 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 75 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 97 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 175 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 454 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 466 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great, let's get going!\n"
	.string "The Pyramid is to the west, up those\l"
	.string "stairs through the mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 472 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 480 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "need a Pokemon Center or Mart, we can\l"
	.string "go to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0:
# 505 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "a Pokemon Center or Mart, we can go\l"
	.string "to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 520 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What a distinguished\n"
	.string "landmark this is! Why, I simply must\l"
	.string "spend as much time here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My little girl! They\n"
	.string "were taken by a {COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 584 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please, try to find\n"
	.string "my little girl! She was taken into the\l"
	.string "closed off areas of the Pyramid by an\l"
	.string "unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 599 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, another reason to check\n"
	.string "out the Pyramid! Although, I suppose\l"
	.string "saving a child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 615 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please don't\n"
	.string "tarry, who knows what my poor child\l"
	.string "could be going through right now?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 632 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh thank goodness you're\n"
	.string "okay my sweet! I've been losing my mind\l"
	.string "over you!$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 636 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Those nice people saved\n"
	.string "me! That mean Pokemon took me to a dark\l"
	.string "scary room and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I could never repay\n"
	.string "you for what you've done for me and\l"
	.string "my child. The least I can do is give\l"
	.string "you each one of these$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 650 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 656 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Now, come along, and stay\n"
	.string "very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 667 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
