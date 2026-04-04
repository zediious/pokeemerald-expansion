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
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_9, IgrisDesert_EventScript_KowtowAdmin_Text_10, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_2
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 203 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 208 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 212 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 239 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 241 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 242 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 244 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 255 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 263 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 265 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 266 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 267 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 268 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 269 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 270 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 271 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 274 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_7
# 293 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 296 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 297 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 298 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 299 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 300 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 301 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 302 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 307 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 315 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 323 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 331 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 308 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 316 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 324 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 332 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 343 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


IgrisDesert_SandPitWarningTrigger_01::
# 350 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_01_1
	return

IgrisDesert_SandPitWarningTrigger_01_1:
# 351 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 352 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 353 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 354 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 355 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_1
# 357 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 3
# 358 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_02::
# 363 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_02_1
	return

IgrisDesert_SandPitWarningTrigger_02_1:
# 364 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 365 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 366 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 367 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 368 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_02_Movement_0
# 370 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 2
# 371 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_03::
# 376 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_03_1
	return

IgrisDesert_SandPitWarningTrigger_03_1:
# 377 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 378 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 379 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 380 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 381 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_03_Movement_0
# 383 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 1
# 384 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarningTrigger_04::
# 389 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_unset FLAG_IGRIS_WARNEDSANDPIT, IgrisDesert_SandPitWarningTrigger_04_1
	return

IgrisDesert_SandPitWarningTrigger_04_1:
# 390 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 391 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarningTrigger_01_Movement_0
# 392 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 10
# 393 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 394 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 395 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 0
# 396 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_SandPitWarning
	return


IgrisDesert_SandPitWarning::
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_Text_1
# 411 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 413 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq IgrisDesert_SandPitWarning_2
# 416 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq IgrisDesert_SandPitWarning_3
# 419 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq IgrisDesert_SandPitWarning_4
IgrisDesert_SandPitWarning_1:
# 422 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 424 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_TEMP_F, 0
# 425 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_WARNEDSANDPIT
# 426 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandPitWarning_2:
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_0
	goto IgrisDesert_SandPitWarning_1

IgrisDesert_SandPitWarning_3:
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_1
	goto IgrisDesert_SandPitWarning_1

IgrisDesert_SandPitWarning_4:
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_WARNSAND_KID, IgrisDesert_SandPitWarning_Movement_2
	goto IgrisDesert_SandPitWarning_1


IgrisDesert_SandPitWarning_TalkAfter::
# 432 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 433 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 434 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_TalkAfter_Text_0
# 438 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto_if_set FLAG_IGRISUNDER_PLAYERISDIGGER, IgrisDesert_SandPitWarning_TalkAfter_2
IgrisDesert_SandPitWarning_TalkAfter_1:
# 445 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 446 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_SandPitWarning_TalkAfter_2:
# 439 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 440 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_SandPitWarning_Text_0
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_SandPitWarning_TalkAfter_Text_1
	goto IgrisDesert_SandPitWarning_TalkAfter_1


IgrisDesert_DetermineJordanTeam02::
# 451 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam02_1
# 459 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam02_2
# 467 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam02_3
# 476 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_INNAPE_04
	return

IgrisDesert_DetermineJordanTeam02_1:
# 452 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANPOUR_04
	return

IgrisDesert_DetermineJordanTeam02_2:
# 460 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSEAR_04
	return

IgrisDesert_DetermineJordanTeam02_3:
# 468 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc JORDAN_IGRIS_02, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower02, PARTNER_JORDAN_PANSAGE_04
	return


IgrisDesert_EventScript_JordanFollower02::
# 488 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 489 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 490 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 491 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 21
	goto_if_ge IgrisDesert_EventScript_JordanFollower02_4
IgrisDesert_EventScript_JordanFollower02_3:
# 496 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_1
IgrisDesert_EventScript_JordanFollower02_1:
# 505 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 506 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_JordanFollower02_2:
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02_Text_0
	goto IgrisDesert_EventScript_JordanFollower02_1

IgrisDesert_EventScript_JordanFollower02_4:
# 491 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 23
	goto_if_le IgrisDesert_EventScript_JordanFollower02_2
	goto IgrisDesert_EventScript_JordanFollower02_3


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01::
# 512 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 514 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 0
# 515 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger02::
# 519 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 520 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0
# 521 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 1
# 522 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03::
# 526 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 527 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 528 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 2
# 529 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger04::
# 533 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 534 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 535 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 3
# 536 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger05::
# 540 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 541 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 542 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 4
# 543 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger06::
# 547 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 548 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 549 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_IGRIS_JORDAN02_PLAYERPOS, 5
# 550 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger
	return


IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger::
# 555 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 557 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 560 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 0
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2
# 562 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 1
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3
# 564 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 2
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4
# 566 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 3
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5
# 568 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 4
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6
# 570 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_IGRIS_JORDAN02_PLAYERPOS, 5
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1:
# 574 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 575 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollower02
	return

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_2:
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_3:
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_4:
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_5:
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_6:
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1

IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_7:
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement JORDAN_IGRIS_02, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6
	goto IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_1


IgrisDesert_EventScript_SpeakJordanBecomeFollower02::
# 580 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 581 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 582 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0, MSGBOX_YESNO
# 592 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 593 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 594 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1
# 609 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3
# 612 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 613 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_1:
# 595 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1
# 598 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 599 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 600 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2
# 602 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 603 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 604 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam02
# 605 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 606 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveNorth::
# 620 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 621 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 626 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 627 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0
# 628 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 629 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSouth::
# 634 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 635 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 636 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0
# 640 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 642 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 643 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit::
# 649 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 650 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 651 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 652 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0
# 660 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 661 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 662 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 663 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_PyramidGentleman01::
# 669 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 670 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 671 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 672 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PyramidGentleman01_Text_1
# 675 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 676 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft::
# 683 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 685 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 686 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 687 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerCenter::
# 691 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 692 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 693 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0
# 694 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 695 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight::
# 699 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 700 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 701 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0
# 702 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 703 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_MotherRunningOutPyramid
	return


IgrisDesert_EventScript_MotherRunningOutPyramid::
# 708 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 709 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 710 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 711 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 712 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 713 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0
# 715 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 716 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0
# 717 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 719 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1
# 722 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 723 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 724 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 20
# 725 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1
# 726 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 727 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setobjectxy RUVELPYRAMIDEXT_GENTLEMAN, 13, 20
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2
# 729 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 730 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_PyramidGentleman01_Text_0
# 731 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2
# 734 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement RUVELPYRAMIDEXT_GENTLEMAN, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3
# 736 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 737 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject RUVELPYRAMIDEXT_GENTLEMAN
# 738 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4
# 739 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 740 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3
# 747 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM, IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5
# 749 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 750 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM
# 751 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_LOSTCHILD_MOM_2
# 752 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 753 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 754 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 755 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_MotherRunningOutPyramid_Text_4
# 761 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 762 "data/maps/Vulias_Igris_Desert/scripts.pory"
	startquest 2
# 763 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 764 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadedefaultbgm
# 765 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_DistressedMomWaiting::
# 771 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 772 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 773 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0
# 774 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_DistressedMomWaiting_Text_0
# 782 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 783 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_FoundChildWarpedOutside::
# 789 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 790 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 791 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 792 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_1
# 795 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 796 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_2
# 797 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_3
# 800 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 801 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 802 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 803 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 804 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_4
# 807 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 808 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_NUGGET, 1
# 809 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 810 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0
# 811 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 812 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_5, MSGBOX_SIGN
# 816 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitfanfare
# 817 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 818 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_0
# 820 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_0
# 821 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_6
# 822 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 823 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_FoundChildWarpedOutside_Text_2
# 824 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_7
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTCHILD_MOM_3, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 826 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_LOSTKID_FOUND, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 827 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 828 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTKID_FOUND
# 829 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_LOSTCHILD_MOM_3
# 830 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 831 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 832 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setspeaker IgrisDesert_EventScript_KowtowAdmin_Text_6
# 833 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_FoundChildWarpedOutside_Text_8
# 848 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 849 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_AFTERKIDSAVED, IgrisDesert_FoundChildWarpedOutside_Movement_1
# 850 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 851 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 852 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 853 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 854 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 855 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_AFTERKIDSAVED
# 856 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 2
# 857 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_Trainer01::
# 863 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_FLINT, IgrisDesert_EventScript_Trainer01_Text_0, IgrisDesert_EventScript_Trainer01_Text_1
# 868 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 869 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer02::
# 874 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_JONAH, IgrisDesert_EventScript_Trainer02_Text_0, IgrisDesert_EventScript_Trainer02_Text_1
# 880 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 882 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer03::
# 888 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, IgrisDesert_EventScript_Trainer03_Text_0, IgrisDesert_EventScript_Trainer03_Text_1
# 893 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 895 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer04::
# 900 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, IgrisDesert_EventScript_Trainer04_Text_0, IgrisDesert_EventScript_Trainer04_Text_1
# 905 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 906 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_Trainer05::
# 912 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, IgrisDesert_EventScript_Trainer05_Text_0, IgrisDesert_EventScript_Trainer05_Text_1
# 918 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 920 "data/maps/Vulias_Igris_Desert/scripts.pory"
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

# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 293 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 294 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 352 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_01_Movement_0:
# 352 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 352 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_01_Movement_1:
# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 356 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_02_Movement_0:
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 369 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarningTrigger_03_Movement_0:
# 382 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_0:
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 414 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_1:
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 417 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_SandPitWarning_Movement_2:
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 420 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger01_Movement_0:
# 513 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 527 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerTrigger03_Movement_0:
# 527 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_0:
# 556 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
	step_end

# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_1:
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 561 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_2:
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 563 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
	step_end

# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_3:
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 565 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_4:
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 567 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_5:
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 569 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_SpeakJordanBecomeFollowerCommonTrigger_Movement_6:
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 571 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_JordanFollower02NoLeaveSouth_Movement_0:
# 641 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
	step_end

# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerLeft_Movement_0:
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 684 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 700 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_TriggerRight_Movement_0:
# 700 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 700 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_0:
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 714 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_in_place_fast_down
	step_end

# 723 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_1:
# 723 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 723 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_2:
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 728 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
	step_end

# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_3:
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
# 735 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_down
	step_end

# 738 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_4:
# 738 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 738 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_MotherRunningOutPyramid_Movement_5:
# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 748 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_0:
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 819 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_FoundChildWarpedOutside_Movement_1:
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 825 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
	.string "???$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Kowtow Admin$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

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
	.string "Oh, you're a big talker huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_9:
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_10:
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 232 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Happy Woman$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "My Togepi! thank goodness you are\n"
	.string "safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh I am so glad to see you! You are\n"
	.string "never leaving my arms again my\l"
	.string "precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can hardly thank you enough for what\n"
	.string "you've done! I hope this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You'll be able to cut down many small\n"
	.string "trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_7:
# 275 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 401 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "School Kid$"

IgrisDesert_SandPitWarning_Text_1:
# 402 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wait! Be careful if you go that way!\n"
	.string "The sand pit over there will suck you\l"
	.string "up!\p"
	.string "You have to be very skilled, and know\n"
	.string "the right techniques to properly\l"
	.string "navigate through one of those.\p"
	.string "I would steer cleer!$"

IgrisDesert_SandPitWarning_TalkAfter_Text_0:
# 435 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Me? Hehe, of course I can dig in there!\n"
	.string "I just...am waiting here to warn people\l"
	.string "like you who can't!$"

IgrisDesert_SandPitWarning_TalkAfter_Text_1:
# 441 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "...\n"
	.string "Oh...you can dig in there? How cool!\l"
	.string "I mean-yeah, cool, whatever!$"

IgrisDesert_EventScript_JordanFollower02_Text_0:
# 492 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "We should get moving! Pokemon are the\n"
	.string "best thing in the world, but some of\l"
	.string "them can be really dangerous!$"

IgrisDesert_EventScript_JordanFollower02_Text_1:
# 496 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "This Pyramid is another one of those\n"
	.string "things I've heard up, but never gone to\l"
	.string "see.\p"
	.string "You being here as given me cause to\n"
	.string "check these things out! Thanks\l"
	.string "{PLAYER}!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_0:
# 583 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{PLAYER}! I've been waiting for you!\n"
	.string "There's this really cool looking\l"
	.string "{COLOR RED}Pyramid{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to the west, past this \l"
	.string "mountain range. Let's check it out\l"
	.string "together!\p"
	.string "Are you ready to go? I'll keep your\n"
	.string "team healthy, and you'll be able to\l"
	.string "catch Pokemon!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_1:
# 595 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Great, let's get going! The Pyramid is to\n"
	.string "the west, up those stairs through the\l"
	.string "mountain range.$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_2:
# 601 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan is now your follower!$"

IgrisDesert_EventScript_SpeakJordanBecomeFollower02_Text_3:
# 609 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Alright, come back soon!\n"
	.string "We absolutely must check out the\l"
	.string "Pyramid before we move on!$"

IgrisDesert_EventScript_JordanFollower02NoLeaveNorth_Text_0:
# 622 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hey, let's check out the Pyramid before\n"
	.string "anything else! If you need a Pokemon\l"
	.string "Center or Mart, we can go to {COLOR RED}Palento\l"
	.string "Village{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert_EventScript_JordanFollower02NoLeaveSandpit_Text_0:
# 652 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Woah, watch out! We'll get sucked into\n"
	.string "that sand pit!\p"
	.string "...\p"
	.string "You want to go in? Well, can you do\n"
	.string "that another time? I don't think I'm\l"
	.string "up for that just yet.$"

IgrisDesert_EventScript_PyramidGentleman01_Text_0:
# 671 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Gentleman$"

IgrisDesert_EventScript_PyramidGentleman01_Text_1:
# 672 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What a distinguished landmark this is!\n"
	.string "Why, I simply must spend as much time\l"
	.string "here as I can!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_0:
# 718 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Distressed Mother$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_1:
# 719 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "My little girl! They were taken by a\n"
	.string "{COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} in the Pyramid!\l"
	.string "My goodness, someone please help!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_2:
# 731 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "A lost child you say?\n"
	.string "I shall rush to the Pokemon Center at\l"
	.string "once for more assistance!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_3:
# 741 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Please, try to find my little girl! She\n"
	.string "was taken into the closed off areas of\l"
	.string "the Pyramid by an unknown Pokemon!\p"
	.string "There are all manner of deadly traps\n"
	.string "within...oh my poor child!$"

IgrisDesert_EventScript_MotherRunningOutPyramid_Text_4:
# 756 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, another reason to check out the\n"
	.string "Pyramid! Although, I suppose saving a\l"
	.string "child does come first.\p"
	.string "Let's not waste any time!$"

IgrisDesert_EventScript_DistressedMomWaiting_Text_0:
# 774 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Please don't tarry, who knows what my\n"
	.string "poor child could be going through as we\l"
	.string "speak?\p"
	.string "Oh no...\p"
	.string "The woman breaks down crying. Better\n"
	.string "get a move on!$"

IgrisDesert_FoundChildWarpedOutside_Text_0:
# 791 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Happy Mother$"

IgrisDesert_FoundChildWarpedOutside_Text_1:
# 792 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Oh thank goodness you're okay, my\n"
	.string "sweet! I've been losing my mind over\l"
	.string "you!$"

IgrisDesert_FoundChildWarpedOutside_Text_2:
# 796 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Found Child$"

IgrisDesert_FoundChildWarpedOutside_Text_3:
# 797 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Those nice people saved me! That mean\n"
	.string "Pokemon took me to a dark scary room\l"
	.string "and they saved me!$"

IgrisDesert_FoundChildWarpedOutside_Text_4:
# 804 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could never repay you for what you've\n"
	.string "done for me and my child. The least I\l"
	.string "can do is give you each one of these.$"

IgrisDesert_FoundChildWarpedOutside_Text_5:
# 813 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jordan recieved a Nugget!\p"
	.string "He put it away in his Bag.$"

IgrisDesert_FoundChildWarpedOutside_Text_6:
# 821 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Now, come along, and stay very close!$"

IgrisDesert_FoundChildWarpedOutside_Text_7:
# 824 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Yes mommy!$"

IgrisDesert_FoundChildWarpedOutside_Text_8:
# 833 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 865 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't get the sand out of my eyes!$"

IgrisDesert_EventScript_Trainer01_Text_1:
# 866 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's everywhere!.$"

IgrisDesert_EventScript_Trainer01_Text_2:
# 868 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "It's very irritating too!$"

IgrisDesert_EventScript_Trainer02_Text_0:
# 876 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Such a beautiful desert I could stay\n"
	.string "here for hours!$"

IgrisDesert_EventScript_Trainer02_Text_1:
# 878 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Ah, maybe I'll go rest a bit.$"

IgrisDesert_EventScript_Trainer02_Text_2:
# 880 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Second thought, I can't take my eyes\n"
	.string "off of this place!$"

IgrisDesert_EventScript_Trainer03_Text_0:
# 890 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I could see you coming, but not you I!$"

IgrisDesert_EventScript_Trainer03_Text_1:
# 891 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I still lost!$"

IgrisDesert_EventScript_Trainer03_Text_2:
# 893 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Maybe I'll get the next passerby. You're\n"
	.string "too tough!$"

IgrisDesert_EventScript_Trainer04_Text_0:
# 902 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! You are not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_1:
# 903 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Hah! I was not prepared for this!$"

IgrisDesert_EventScript_Trainer04_Text_2:
# 905 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I thought I was prepared for this...$"

IgrisDesert_EventScript_Trainer05_Text_0:
# 914 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "There's less sand in this valley-\n"
	.string "pftttt!$"

IgrisDesert_EventScript_Trainer05_Text_1:
# 916 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "False hope...$"

IgrisDesert_EventScript_Trainer05_Text_2:
# 918 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Why did I even come here? This is no\n"
	.string "place for a picnic!$"
