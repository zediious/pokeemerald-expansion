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
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 203 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 208 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 241 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 242 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 246 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 247 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 258 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 263 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 265 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 284 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 287 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 288 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 289 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 290 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 291 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 292 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 293 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 298 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 306 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 314 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 322 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 299 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 307 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 315 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 323 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 334 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_DetermineJordanTeam02::
# 340 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 348 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 365 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 341 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 349 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 357 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 377 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 379 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
# 386 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 387 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 393 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 395 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 400 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 403 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 407 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 408 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 409 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 410 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 415 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 421 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 422 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 423 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 428 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 429 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 430 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 431 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 436 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 443 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 445 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 447 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 449 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 455 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 456 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 461 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 462 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 473 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 474 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 493 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 475 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 478 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 479 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 480 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 481 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 482 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 483 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 484 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 485 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 486 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 500 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 501 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 505 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 506 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 507 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 508 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0
# 518 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 519 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 520 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 521 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit::
# 527 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 528 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0
# 537 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 538 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 539 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 540 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 546 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 551 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 552 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 559 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 562 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 577 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 578 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 579 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 584 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 585 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 586 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 587 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 589 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 590 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 591 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 595 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 597 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 598 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 599 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 600 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 602 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 603 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 606 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 608 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 609 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 610 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 611 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 619 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 623 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 624 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 625 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 626 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 632 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 633 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 634 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 635 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 651 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 652 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 658 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 659 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_0
# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 664 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 667 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 668 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 669 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 670 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_2
# 674 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 675 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 676 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 677 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 678 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3, MSGBOX_SIGN
# 681 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 682 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 683 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 686 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 687 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 689 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 690 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 691 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 692 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 693 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 694 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 695 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 711 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 712 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 713 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 715 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 716 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 717 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 719 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 720 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_Trainer01::
# 808 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_FLINT, IgrisDesert_EventScript_Trainer01_Text_0, IgrisDesert_EventScript_Trainer01_Text_1
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 814 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer02::
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_JONAH, IgrisDesert_EventScript_Trainer02_Text_0, IgrisDesert_EventScript_Trainer02_Text_1
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 827 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer03::
# 833 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, IgrisDesert_EventScript_Trainer03_Text_0, IgrisDesert_EventScript_Trainer03_Text_1
# 838 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 840 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer04::
# 845 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, IgrisDesert_EventScript_Trainer04_Text_0, IgrisDesert_EventScript_Trainer04_Text_1
# 850 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 851 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer05::
# 857 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, IgrisDesert_EventScript_Trainer05_Text_0, IgrisDesert_EventScript_Trainer05_Text_1
# 863 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 865 "data/maps/Vulias_Igris_Desert/scripts.pory"
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

# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 166 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 284 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 285 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 408 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 408 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 437 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 442 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 444 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 448 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 450 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 519 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 519 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 576 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 588 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 596 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 607 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 610 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 610 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 610 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 688 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 84 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 95 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

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
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 175 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 266 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 379 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 463 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 475 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great, let's get going!\n"
	.string "The Pyramid is to the west, up those\l"
	.string "stairs through the mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 481 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 501 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "need a Pokemon Center or Mart, we can\l"
	.string "go to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Text_0:
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's check out the\n"
	.string "Pyramid before anything else! If you\l"
	.string "a Pokemon Center or Mart, we can go\l"
	.string "to {COLOR RED}Palento Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0:
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Woah, watch out! We'll get\n"
	.string "sucked into that sand pit!\p"
	.string "...\p"
	.string "You want to go in? Well, can you do\n"
	.string "that another time? I don't think I'm\l"
	.string "up for that just yet.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}What a distinguished\n"
	.string "landmark this is! Why, I simply must\l"
	.string "spend as much time here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My little girl! They\n"
	.string "were taken by a {COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 603 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Gentleman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please, try to find\n"
	.string "my little girl! She was taken into the\l"
	.string "closed off areas of the Pyramid by an\l"
	.string "unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well, another reason to check\n"
	.string "out the Pyramid! Although, I suppose\l"
	.string "saving a child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distressed Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please don't\n"
	.string "tarry, who knows what my poor child\l"
	.string "could be going through right now?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh thank goodness you're\n"
	.string "okay my sweet! I've been losing my mind\l"
	.string "over you!$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 664 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Those nice people saved\n"
	.string "me! That mean Pokemon took me to a dark\l"
	.string "scary room and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 670 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I could never repay\n"
	.string "you for what you've done for me and\l"
	.string "my child. The least I can do is give\l"
	.string "you each one of these$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 678 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Mother: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Now, come along, and stay\n"
	.string "very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 687 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Found Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 695 "data/maps/Vulias_Igris_Desert/scripts.pory"
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

IgrisDesert_EventScript_Trainer01_Text_0:
# 810 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't get the sand out of my eyes!$"

IgrisDesert_EventScript_Trainer01_Text_1:
# 811 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's everywhere!.$"

IgrisDesert_EventScript_Trainer01_Text_2:
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's very irritating too!$"

IgrisDesert_EventScript_Trainer02_Text_0:
# 821 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Such a beautiful desert I could stay\n"
	.string "here for hours!$"

IgrisDesert_EventScript_Trainer02_Text_1:
# 823 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Ah, maybe I'll go rest a bit.$"

IgrisDesert_EventScript_Trainer02_Text_2:
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Second thought, I can't take my eyes\n"
	.string "off of this place!$"

IgrisDesert_EventScript_Trainer03_Text_0:
# 835 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could see you coming, but not you I!$"

IgrisDesert_EventScript_Trainer03_Text_1:
# 836 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I still lost!$"

IgrisDesert_EventScript_Trainer03_Text_2:
# 838 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Maybe I'll get the next passerby. You're\n"
	.string "too tough!$"

IgrisDesert_EventScript_Trainer04_Text_0:
# 847 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! You are not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_1:
# 848 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! I was not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_2:
# 850 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I thought I was prepared for this...$"

IgrisDesert_EventScript_Trainer05_Text_0:
# 859 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "There's less sand in this valley-\n"
	.string "pftttt!$"

IgrisDesert_EventScript_Trainer05_Text_1:
# 861 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "False hope...$"

IgrisDesert_EventScript_Trainer05_Text_2:
# 863 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Why did I even come here? This is no\n"
	.string "place for a picnic!$"
