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
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_4
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_5
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_7
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 175 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_2
# 177 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_8
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	special ChooseHalfPartyForBattle
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitstate
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, IGRIS_KOWTOWADMIN_01, TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_9, IgrisDesert_EventScript_KowtowAdmin_Text_10, IgrisDesert_KowtowAdmin_AfterBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_2
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 263 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 265 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 266 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 267 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 270 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 271 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 276 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 277 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 278 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 279 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 284 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 286 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 287 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 288 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 289 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 291 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 292 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 293 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 295 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 296 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_7
# 315 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 318 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 319 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 320 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 321 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 322 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 323 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 324 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 329 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 337 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 345 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 353 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 330 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 338 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 346 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 354 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 365 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_SandPitWarningTrigger_01::
# 372 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_01_1
	return

IgrisDesert_SandPitWarningTrigger_01_1:
# 373 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 375 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 377 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_1
# 379 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 3
# 380 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_02::
# 385 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_02_1
	return

IgrisDesert_SandPitWarningTrigger_02_1:
# 386 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 388 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 389 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 390 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_02_Movement_0
# 392 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 2
# 393 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_03::
# 398 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_03_1
	return

IgrisDesert_SandPitWarningTrigger_03_1:
# 399 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 400 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 403 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 404 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_03_Movement_0
# 405 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 1
# 406 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_04::
# 411 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_04_1
	return

IgrisDesert_SandPitWarningTrigger_04_1:
# 412 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 413 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 0
# 418 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarning::
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_Text_1
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq IgrisDesert_SandPitWarning_2
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq IgrisDesert_SandPitWarning_3
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq IgrisDesert_SandPitWarning_4
IgrisDesert_SandPitWarning_1:
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 0
# 447 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_WARNEDSANDPIT
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandPitWarning_2:
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_0
	goto IgrisDesert_SandPitWarning_1

IgrisDesert_SandPitWarning_3:
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_1
	goto IgrisDesert_SandPitWarning_1

IgrisDesert_SandPitWarning_4:
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_2
	goto IgrisDesert_SandPitWarning_1


IgrisDesert_SandPitWarning_TalkAfter::
# 454 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 455 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 456 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 457 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_TalkAfter_Text_0
# 460 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_set FLAG_IGRISUNDER_PLAYERISDIGGER, IgrisDesert_SandPitWarning_TalkAfter_2
IgrisDesert_SandPitWarning_TalkAfter_1:
# 467 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 468 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandPitWarning_TalkAfter_2:
# 461 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 462 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_TalkAfter_Text_1
	goto IgrisDesert_SandPitWarning_TalkAfter_1


IgrisDesert_DetermineJordanTeam02::
# 473 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 481 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 498 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 482 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 490 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 510 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 511 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 512 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_ge IgrisDesert_EventScript_JordanFollower02_4
IgrisDesert_EventScript_JordanFollower02_3:
# 518 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_1
IgrisDesert_EventScript_JordanFollower02_1:
# 527 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 528 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_JordanFollower02_2:
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
	goto IgrisDesert_EventScript_JordanFollower02_1

IgrisDesert_EventScript_JordanFollower02_4:
# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_le IgrisDesert_EventScript_JordanFollower02_2
	goto IgrisDesert_EventScript_JordanFollower02_3


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 535 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 536 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 537 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 541 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 543 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 544 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 551 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 558 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 562 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 572 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 577 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 584 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 586 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 590 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 597 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 602 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 603 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 604 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 605 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 614 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 615 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 616 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 631 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 634 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 635 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 617 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 624 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 625 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 626 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 628 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 644 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 648 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 649 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 650 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 651 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 656 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 657 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 658 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 662 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 664 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 665 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit::
# 671 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 672 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 673 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 674 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0
# 682 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 683 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 685 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 691 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 692 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 693 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 694 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_1
# 697 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 698 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 705 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 706 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 707 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 708 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 709 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 713 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 715 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 716 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 717 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 721 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 722 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 723 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 724 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 725 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 730 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 731 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 732 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 733 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 734 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 737 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 738 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 739 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 740 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 744 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 745 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 746 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 747 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 749 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 751 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 752 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 758 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 759 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 760 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 761 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 762 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 763 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 769 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 770 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 771 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 772 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 773 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 774 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 775 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 776 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 777 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 778 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_4
# 783 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 784 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 785 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 786 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadedefaultbgm
# 787 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 793 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 794 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 795 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 796 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 804 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 805 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 811 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 812 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 814 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 817 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 818 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_2
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3
# 822 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 823 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 824 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 826 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 829 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 830 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 831 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 832 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 833 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 834 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 835 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5, MSGBOX_SIGN
# 838 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitfanfare
# 839 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 840 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 841 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 842 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 844 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 845 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_2
# 846 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_7
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 848 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 849 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 850 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 851 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 852 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 853 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 854 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 855 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_8
# 870 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 871 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 872 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 873 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 874 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 875 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_GERBON_RUVELMOMKID
# 876 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 877 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 878 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 879 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 880 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_Trainer01::
# 886 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_FLINT, IgrisDesert_EventScript_Trainer01_Text_0, IgrisDesert_EventScript_Trainer01_Text_1
# 891 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 892 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer02::
# 897 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_JONAH, IgrisDesert_EventScript_Trainer02_Text_0, IgrisDesert_EventScript_Trainer02_Text_1
# 903 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 905 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer03::
# 911 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, IgrisDesert_EventScript_Trainer03_Text_0, IgrisDesert_EventScript_Trainer03_Text_1
# 916 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 918 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer04::
# 923 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, IgrisDesert_EventScript_Trainer04_Text_0, IgrisDesert_EventScript_Trainer04_Text_1
# 928 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 929 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer05::
# 935 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, IgrisDesert_EventScript_Trainer05_Text_0, IgrisDesert_EventScript_Trainer05_Text_1
# 941 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 943 "data/maps/Vulias_Igris_Desert/scripts.pory"
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

# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 315 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_01_Movement_0:
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 374 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_01_Movement_1:
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_02_Movement_0:
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 404 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_03_Movement_0:
# 404 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_0:
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_1:
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_2:
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 535 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 535 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
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
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
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

# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 706 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 706 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 706 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 722 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 722 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 722 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 745 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 745 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 745 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 757 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 760 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 760 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 760 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 770 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 770 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 770 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 770 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 841 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 841 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 841 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 841 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_1:
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
	.string "...\p"
	.string "This little egg? What, here to serve\n"
	.string "some 'Justice'? that won't be served so\l"
	.string "easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Distant Voice$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan$"

IgrisDesert_EventScript_KowtowAdmin_Text_7:
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm glad I caught up with you! Can't let\n"
	.string "you boot these scum down without me!$"

IgrisDesert_EventScript_KowtowAdmin_Text_8:
# 177 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh, you're a BIG talker huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_9:
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_10:
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Huh, not bad...You caught me on a\n"
	.string "bad day though, don't make anything\l"
	.string "of it!\p"
	.string "Well, I've not had to use one of these\n"
	.string "for quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "They got away again!\n"
	.string "We need to start preparing for that\l"
	.string "smoke bomb, pack some goggles along\l"
	.string "with us, or something.\p"
	.string "We're sure to come across them again,\n"
	.string "they seem to be getting more brazen\l"
	.string "lately...\p"
	.string "That Togepi! It must be the one that\n"
	.string "lady was in shambles over!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_2:
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Happy Woman$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "My Togepi! thank goodness you are\n"
	.string "safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 267 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh I am so glad to see you! You are\n"
	.string "never leaving my arms again my\l"
	.string "precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can hardly thank you enough for what\n"
	.string "you've done! I hope this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 279 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You'll be able to cut down many small\n"
	.string "trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_7:
# 297 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "School Kid$"

IgrisDesert_SandPitWarning_Text_1:
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wait! Be careful if you go that way!\n"
	.string "The sand pit over there will suck you\l"
	.string "up!\p"
	.string "You have to be very skilled, and know\n"
	.string "the right techniques to properly\l"
	.string "navigate through one of those.\p"
	.string "I would steer cleer!$"

IgrisDesert_SandPitWarning_TalkAfter_Text_0:
# 457 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Me? Hehe, of course I can dig in there!\n"
	.string "I just...am waiting here to warn people\l"
	.string "like you who can't!$"

IgrisDesert_SandPitWarning_TalkAfter_Text_1:
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "...\n"
	.string "Oh...you can dig in there? How cool!\l"
	.string "I mean-yeah, cool, whatever!$"

IgrisDesert_EventScript_JordanFollower02_Text_0:
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "We should get moving! Pokemon are the\n"
	.string "best thing in the world, but some of\l"
	.string "them can be really dangerous!$"

IgrisDesert_EventScript_JordanFollower02_Text_1:
# 518 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 605 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{PLAYER}! I've been waiting for you!\n"
	.string "There's this really cool looking\l"
	.string "{COLOR RED}Pyramid{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to the west, past this \l"
	.string "mountain range. Let's check it out\l"
	.string "together!\p"
	.string "Are you ready to go? I'll keep your\n"
	.string "team healthy, and you'll be able to\l"
	.string "catch Pokemon!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1:
# 617 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Great, let's get going! The Pyramid is to\n"
	.string "the west, up those stairs through the\l"
	.string "mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 631 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 644 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hey, let's check out the Pyramid before\n"
	.string "anything else! If you need a Pokemon\l"
	.string "Center or Mart, we can go to {COLOR RED}Palento\l"
	.string "Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0:
# 674 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Woah, watch out! We'll get sucked into\n"
	.string "that sand pit!\p"
	.string "...\p"
	.string "You want to go in? Well, can you do\n"
	.string "that another time? I don't think I'm\l"
	.string "up for that just yet.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 693 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Gentleman$"

IgrisDesert_EventScript_PyramidGentleman01_Text_1:
# 694 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What a distinguished landmark this is!\n"
	.string "Why, I simply must spend as much time\l"
	.string "here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 740 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Distressed Mother$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "My little girl! They were taken by a\n"
	.string "{COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 763 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Please, try to find my little girl! She\n"
	.string "was taken into the closed off areas of\l"
	.string "the Pyramid by an unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_4:
# 778 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, another reason to check out the\n"
	.string "Pyramid! Although, I suppose saving a\l"
	.string "child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 796 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Please don't tarry, who knows what my\n"
	.string "poor child could be going through as we\l"
	.string "speak?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Happy Mother$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 814 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh thank goodness you're okay, my\n"
	.string "sweet! I've been losing my mind over\l"
	.string "you!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 818 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Found Child$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Those nice people saved me! That mean\n"
	.string "Pokemon took me to a dark scary room\l"
	.string "and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 826 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could never repay you for what you've\n"
	.string "done for me and my child. The least I\l"
	.string "can do is give you each one of these.$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 835 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 843 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Now, come along, and stay very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_7:
# 846 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_8:
# 855 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 888 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't get the sand out of my eyes!$"

IgrisDesert_EventScript_Trainer01_Text_1:
# 889 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's everywhere!.$"

IgrisDesert_EventScript_Trainer01_Text_2:
# 891 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's very irritating too!$"

IgrisDesert_EventScript_Trainer02_Text_0:
# 899 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Such a beautiful desert I could stay\n"
	.string "here for hours!$"

IgrisDesert_EventScript_Trainer02_Text_1:
# 901 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Ah, maybe I'll go rest a bit.$"

IgrisDesert_EventScript_Trainer02_Text_2:
# 903 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Second thought, I can't take my eyes\n"
	.string "off of this place!$"

IgrisDesert_EventScript_Trainer03_Text_0:
# 913 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could see you coming, but not you I!$"

IgrisDesert_EventScript_Trainer03_Text_1:
# 914 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I still lost!$"

IgrisDesert_EventScript_Trainer03_Text_2:
# 916 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Maybe I'll get the next passerby. You're\n"
	.string "too tough!$"

IgrisDesert_EventScript_Trainer04_Text_0:
# 925 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! You are not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_1:
# 926 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! I was not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_2:
# 928 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I thought I was prepared for this...$"

IgrisDesert_EventScript_Trainer05_Text_0:
# 937 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "There's less sand in this valley-\n"
	.string "pftttt!$"

IgrisDesert_EventScript_Trainer05_Text_1:
# 939 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "False hope...$"

IgrisDesert_EventScript_Trainer05_Text_2:
# 941 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Why did I even come here? This is no\n"
	.string "place for a picnic!$"
