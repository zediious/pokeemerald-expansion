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
	goto_if_unset FLAG_LEAVING_IGRIS_UNDER_SOUTH, IgrisDesert_SandHoleSpitOutOnEntry_2
# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandHoleSpitOutOnEntry_Text_1, MSGBOX_SIGN
# 24 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_LEAVING_IGRIS_UNDER_SOUTH
IgrisDesert_SandHoleSpitOutOnEntry_1:
# 27 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandHoleSpitOutOnEntry_2:
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandHoleSpitOutOnEntry_Text_0, MSGBOX_SIGN
	goto IgrisDesert_SandHoleSpitOutOnEntry_1


IgrisDesert_OnTransition_SetState::
# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_lt IgrisDesert_OnTransition_SetState_2
IgrisDesert_OnTransition_SetState_1:
# 37 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_lt IgrisDesert_OnTransition_SetState_5
IgrisDesert_OnTransition_SetState_4:
# 43 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_DIGBUFFER_DOTELE, 0
# 44 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_ENTERING_IGRISUNDER_NORTH
	return

IgrisDesert_OnTransition_SetState_2:
# 35 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
	goto IgrisDesert_OnTransition_SetState_1

IgrisDesert_OnTransition_SetState_5:
# 38 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 41 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_PALENTOPOKECENTER_JORDAN01
	goto IgrisDesert_OnTransition_SetState_4


IgrisDesert_EventScript_PalentoVillageSign::
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lockall
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PalentoVillageSign_Text_0
# 53 "data/maps/Vulias_Igris_Desert/scripts.pory"
	releaseall
	return


IgrisDesert_EventScript_AngryKrokorok::
# 58 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 59 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 62 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 63 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 64 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 65 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 67 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 68 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 72 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 73 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 81 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 93 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 133 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_0
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_2
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_4
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_5
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_7
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_2
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_8
# 175 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, IGRIS_KOWTOWADMIN_01, TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_9, IgrisDesert_EventScript_KowtowAdmin_Text_10, IgrisDesert_KowtowAdmin_AfterBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_2
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 244 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 246 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 247 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 263 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 266 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 267 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 268 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 269 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 271 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 274 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 280 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 281 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 282 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 283 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 284 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 286 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 287 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 288 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 289 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 291 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 292 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_7
# 311 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 314 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 315 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 317 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 318 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 319 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 320 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 325 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 333 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 341 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 349 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 326 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 334 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 342 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 350 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 361 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_SandPitWarningTrigger_01::
# 368 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_01_1
	return

IgrisDesert_SandPitWarningTrigger_01_1:
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 371 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 372 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 373 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_1
# 375 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 3
# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_02::
# 381 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_02_1
	return

IgrisDesert_SandPitWarningTrigger_02_1:
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 383 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 384 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 385 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 386 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_02_Movement_0
# 388 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 2
# 389 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_03::
# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_03_1
	return

IgrisDesert_SandPitWarningTrigger_03_1:
# 395 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 397 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 398 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 399 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 400 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_03_Movement_0
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 1
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_04::
# 407 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_04_1
	return

IgrisDesert_SandPitWarningTrigger_04_1:
# 408 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 409 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 411 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 413 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 0
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarning::
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_Text_1
# 429 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 431 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq IgrisDesert_SandPitWarning_2
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq IgrisDesert_SandPitWarning_3
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq IgrisDesert_SandPitWarning_4
IgrisDesert_SandPitWarning_1:
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 0
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_WARNEDSANDPIT
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandPitWarning_2:
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_0
	goto IgrisDesert_SandPitWarning_1

IgrisDesert_SandPitWarning_3:
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_1
	goto IgrisDesert_SandPitWarning_1

IgrisDesert_SandPitWarning_4:
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_2
	goto IgrisDesert_SandPitWarning_1


IgrisDesert_SandPitWarning_TalkAfter::
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 453 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_TalkAfter_Text_0
# 456 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_set FLAG_IGRISUNDER_PLAYERISDIGGER, IgrisDesert_SandPitWarning_TalkAfter_2
IgrisDesert_SandPitWarning_TalkAfter_1:
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 464 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandPitWarning_TalkAfter_2:
# 457 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 458 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 459 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_TalkAfter_Text_1
	goto IgrisDesert_SandPitWarning_TalkAfter_1


IgrisDesert_DetermineJordanTeam02::
# 469 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 477 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 485 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 494 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 470 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 478 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 486 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 506 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 507 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 508 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_ge IgrisDesert_EventScript_JordanFollower02_4
IgrisDesert_EventScript_JordanFollower02_3:
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_1
IgrisDesert_EventScript_JordanFollower02_1:
# 523 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 524 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_JordanFollower02_2:
# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
	goto IgrisDesert_EventScript_JordanFollower02_1

IgrisDesert_EventScript_JordanFollower02_4:
# 509 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_le IgrisDesert_EventScript_JordanFollower02_2
	goto IgrisDesert_EventScript_JordanFollower02_3


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 530 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 532 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 533 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 537 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 538 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 539 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 540 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 546 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 551 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 552 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 553 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 554 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 558 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 559 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 573 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 580 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 584 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 586 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 598 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 599 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 600 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 610 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 611 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 630 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 631 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 613 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 616 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 617 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 618 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 619 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 624 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 638 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 639 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 644 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 645 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 646 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 647 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 652 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 653 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 654 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 658 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 661 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit::
# 667 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 668 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 669 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 670 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0
# 678 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 679 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 680 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 681 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 687 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 689 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 690 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_1
# 693 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 694 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 701 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 702 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 703 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 704 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 705 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 709 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 710 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 711 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 712 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 713 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 717 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 719 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 720 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 721 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 726 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 727 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 729 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 730 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 731 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 733 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 734 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 737 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 740 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 742 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 743 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 744 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 745 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 747 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 749 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 752 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 754 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 755 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 758 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 759 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 765 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 766 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 767 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 768 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 769 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 770 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 771 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 772 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 773 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 774 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_4
# 779 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 780 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 781 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 782 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadedefaultbgm
# 783 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 789 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 790 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 791 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 792 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 800 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 801 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 807 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 808 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 809 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 810 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 814 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_2
# 815 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3
# 818 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 820 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 821 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 822 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 826 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 827 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 828 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 829 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 830 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 831 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5, MSGBOX_SIGN
# 834 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitfanfare
# 835 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 836 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 837 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 838 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 839 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 840 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 841 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_2
# 842 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_7
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 844 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 845 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 846 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 848 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 849 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 850 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 851 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_8
# 866 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 867 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 868 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 869 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 870 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 871 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_GERBON_RUVELMOMKID
# 872 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 873 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 874 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 875 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 876 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_Trainer01::
# 882 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_FLINT, IgrisDesert_EventScript_Trainer01_Text_0, IgrisDesert_EventScript_Trainer01_Text_1
# 887 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 888 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer02::
# 893 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_JONAH, IgrisDesert_EventScript_Trainer02_Text_0, IgrisDesert_EventScript_Trainer02_Text_1
# 899 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 901 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer03::
# 907 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, IgrisDesert_EventScript_Trainer03_Text_0, IgrisDesert_EventScript_Trainer03_Text_1
# 912 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 914 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer04::
# 919 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, IgrisDesert_EventScript_Trainer04_Text_0, IgrisDesert_EventScript_Trainer04_Text_1
# 924 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 925 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer05::
# 931 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, IgrisDesert_EventScript_Trainer05_Text_0, IgrisDesert_EventScript_Trainer05_Text_1
# 937 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 939 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
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

# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 311 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 312 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_01_Movement_0:
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_01_Movement_1:
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_02_Movement_0:
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 400 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_03_Movement_0:
# 400 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_0:
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_1:
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_2:
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 531 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 545 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 702 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 702 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 702 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 766 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 766 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 766 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 766 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 837 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 837 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 837 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 837 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_1:
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_SandHoleSpitOutOnEntry_Text_0:
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You were thrown out back into the\n"
	.string "Desert!\p"
	.string "Perhaps if you could {COLOR RED}Dig{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} better, you\n"
	.string "could find yourself somewhere else!$"

IgrisDesert_SandHoleSpitOutOnEntry_Text_1:
# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You were thrown out back into the\n"
	.string "Desert!$"

IgrisDesert_EventScript_PalentoVillageSign_Text_0:
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{RIGHT_ARROW} Palento Village$"

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 64 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 83 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "If you know what's good for you, scram!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 84 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I know what's good for me!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 95 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, ignoring him? We'll show you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stupid Pawniard, get it together!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Get out of my sight!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 106 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 118 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 119 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Weak! These Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "???$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "For the last time, stand on guard\n"
	.string "while I deal with the-$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Kowtow Admin$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You're not my team! Did those worms\n"
	.string "succumb to you?\p"
	.string "What, here to serve some 'Justice'?\n"
	.string "That won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Distant Voice$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan$"

IgrisDesert_EventScript_KowtowAdmin_Text_7:
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm glad I caught up with you! Can't let\n"
	.string "you boot these scum down without me!$"

IgrisDesert_EventScript_KowtowAdmin_Text_8:
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh, you're a BIG talker huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_9:
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_10:
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Huh, not bad for a group of\n"
	.string "'do-gooders'. You caught me on a\l"
	.string "bad day though, don't make anything\l"
	.string "of it!\p"
	.string "Well, I've not had to use one of these\n"
	.string "for quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "They got away again!\n"
	.string "We need to start preparing for that\l"
	.string "smoke bomb, pack some goggles along\l"
	.string "with us, or something.\p"
	.string "We're sure to come across them again\n"
	.string "with the fact that we've seen them\l"
	.string "twice on our trip so far.\p"
	.string "This Togepi! It must be the one that\n"
	.string "lady was in shambles over! $"

IgrisDesert_KowtowAdmin_AfterBattle_Text_2:
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Happy Woman$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "My Togepi! thank goodness you are\n"
	.string "safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 263 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh I am so glad to see you! You are\n"
	.string "never leaving my arms again my\l"
	.string "precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 269 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can hardly thank you enough for what\n"
	.string "you've done! I hope this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You'll be able to cut down many small\n"
	.string "trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_7:
# 293 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well that turned out well! You\n"
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

IgrisDesert_SandPitWarning_Text_0:
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "School Kid$"

IgrisDesert_SandPitWarning_Text_1:
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wait! Be careful if you go that way!\n"
	.string "The sand pit over there will suck you\l"
	.string "up!\p"
	.string "You have to be very skilled, and know\n"
	.string "the right techniques to properly\l"
	.string "navigate through one of those.\p"
	.string "I would steer cleer!$"

IgrisDesert_SandPitWarning_TalkAfter_Text_0:
# 453 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Me? Hehe, of course I can dig in there!\n"
	.string "I just...am waiting here to warn people\l"
	.string "like you who can't!$"

IgrisDesert_SandPitWarning_TalkAfter_Text_1:
# 459 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "...\n"
	.string "Oh...you can dig in there? How cool!\l"
	.string "I mean-yeah, cool, whatever!$"

IgrisDesert_EventScript_JordanFollower02_Text_0:
# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "We should get moving! Pokemon are the\n"
	.string "best thing in the world, but some of\l"
	.string "them can be really dangerous!$"

IgrisDesert_EventScript_JordanFollower02_Text_1:
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{PLAYER}! I've been waiting for you!\n"
	.string "There's this really cool looking\l"
	.string "{COLOR RED}Pyramid{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to the west, past this \l"
	.string "mountain range. Let's check it out\l"
	.string "together!\p"
	.string "Are you ready to go? I'll keep your\n"
	.string "team healthy, and you'll be able to\l"
	.string "catch Pokemon!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1:
# 613 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Great, let's get going! The Pyramid is to\n"
	.string "the west, up those stairs through the\l"
	.string "mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 619 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hey, let's check out the Pyramid before\n"
	.string "anything else! If you need a Pokemon\l"
	.string "Center or Mart, we can go to {COLOR RED}Palento\l"
	.string "Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0:
# 670 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Woah, watch out! We'll get sucked into\n"
	.string "that sand pit!\p"
	.string "...\p"
	.string "You want to go in? Well, can you do\n"
	.string "that another time? I don't think I'm\l"
	.string "up for that just yet.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 689 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Gentleman$"

IgrisDesert_EventScript_PyramidGentleman01_Text_1:
# 690 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What a distinguished landmark this is!\n"
	.string "Why, I simply must spend as much time\l"
	.string "here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Distressed Mother$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 737 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "My little girl! They were taken by a\n"
	.string "{COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 749 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 759 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Please, try to find my little girl! She\n"
	.string "was taken into the closed off areas of\l"
	.string "the Pyramid by an unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_4:
# 774 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, another reason to check out the\n"
	.string "Pyramid! Although, I suppose saving a\l"
	.string "child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 792 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Please don't tarry, who knows what my\n"
	.string "poor child could be going through as we\l"
	.string "speak?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 809 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Happy Mother$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 810 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh thank goodness you're okay, my\n"
	.string "sweet! I've been losing my mind over\l"
	.string "you!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 814 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Found Child$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 815 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Those nice people saved me! That mean\n"
	.string "Pokemon took me to a dark scary room\l"
	.string "and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 822 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could never repay you for what you've\n"
	.string "done for me and my child. The least I\l"
	.string "can do is give you each one of these.$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 831 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 839 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Now, come along, and stay very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_7:
# 842 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_8:
# 851 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "That was a handful! I'm glad we were\n"
	.string "able to save that kid. Not to mention,\l"
	.string "we were able to go into the forbidden\l"
	.string "areas of the Pyramid!\p"
	.string "I wonder if they will let us go back\n"
	.string "in now?\p"
	.string "Well, I think I've had enough\n"
	.string "Pyramid spelunking for today, I'm\l"
	.string "going to go rest up at\l"
	.string "Palento Village for a bit.\p"
	.string "You can go on ahead, I'll catch up!\n"
	.string "See you later {PLAYER}!$"

IgrisDesert_EventScript_Trainer01_Text_0:
# 884 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't get the sand out of my eyes!$"

IgrisDesert_EventScript_Trainer01_Text_1:
# 885 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's everywhere!.$"

IgrisDesert_EventScript_Trainer01_Text_2:
# 887 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's very irritating too!$"

IgrisDesert_EventScript_Trainer02_Text_0:
# 895 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Such a beautiful desert I could stay\n"
	.string "here for hours!$"

IgrisDesert_EventScript_Trainer02_Text_1:
# 897 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Ah, maybe I'll go rest a bit.$"

IgrisDesert_EventScript_Trainer02_Text_2:
# 899 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Second thought, I can't take my eyes\n"
	.string "off of this place!$"

IgrisDesert_EventScript_Trainer03_Text_0:
# 909 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could see you coming, but not you I!$"

IgrisDesert_EventScript_Trainer03_Text_1:
# 910 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I still lost!$"

IgrisDesert_EventScript_Trainer03_Text_2:
# 912 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Maybe I'll get the next passerby. You're\n"
	.string "too tough!$"

IgrisDesert_EventScript_Trainer04_Text_0:
# 921 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! You are not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_1:
# 922 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! I was not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_2:
# 924 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I thought I was prepared for this...$"

IgrisDesert_EventScript_Trainer05_Text_0:
# 933 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "There's less sand in this valley-\n"
	.string "pftttt!$"

IgrisDesert_EventScript_Trainer05_Text_1:
# 935 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "False hope...$"

IgrisDesert_EventScript_Trainer05_Text_2:
# 937 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Why did I even come here? This is no\n"
	.string "place for a picnic!$"
