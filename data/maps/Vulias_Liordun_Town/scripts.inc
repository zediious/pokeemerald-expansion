Vulias_Liordun_Town_MapScripts::
# 8 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LiordunTown_MapScript_OnResume
# 2 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Vulias_Liordun_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 5 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Liordun_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Liordun_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script_2 VAR_TEMP_6, 0, LiordunTown_MapScript_OnWarpCrowd
	.2byte 0

Vulias_Liordun_Town_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 27, LiordunTown_EventScript_AfterKowtowDisappears
	.2byte 0


LiordunTown_MapScript_OnWarpCrowd::
# 13 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_ge LiordunTown_MapScript_OnWarpCrowd_1
	return

LiordunTown_MapScript_OnWarpCrowd_1:
# 15 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateGroups
# 16 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateBattles
# 17 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateCrowd
	return


LiordunTown_MapScript_OnResume::
# 25 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_SetMapState
# 26 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ONRESUME_DRAWCROWD, 1
	goto_if_eq LiordunTown_MapScript_OnResume_2
LiordunTown_MapScript_OnResume_1:
# 34 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 25
	goto_if_ge LiordunTown_MapScript_OnResume_5
	return

LiordunTown_MapScript_OnResume_2:
# 28 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 0
# 29 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateGroups
# 30 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateBattles
# 31 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateCrowd
	goto LiordunTown_MapScript_OnResume_1

LiordunTown_MapScript_OnResume_4:
# 36 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	return

LiordunTown_MapScript_OnResume_5:
# 34 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_MapScript_OnResume_4
	return


LiordunTown_SetMapState::
# 43 "data/maps/Vulias_Liordun_Town/scripts.pory"
	switch VAR_ZED_STORY_TRACKER
# 45 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case ( 28 ), LiordunTown_SetMapState_3
LiordunTown_SetMapState_1:
# 49 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special DrawWholeMapView
	return

LiordunTown_SetMapState_3:
# 46 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setmetatile 44, 27, 0x031, 0
# 47 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setmetatile 44, 28, 0x039, 0
	goto LiordunTown_SetMapState_1


LiordunTown_EventScript_PlayerFirstEnterTrigger01::
# 55 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 27
# 56 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger02::
# 61 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 28
# 62 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger03::
# 67 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 29
# 68 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger04::
# 73 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 30
# 74 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger05::
# 79 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 31
# 80 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterScene::
# 86 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 87 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 25
# 88 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_WARNER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_0
# 90 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerFirstEnterScene_Text_0
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerFirstEnterScene_Text_1
# 96 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 97 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_1
# 98 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_WARNER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_2
# 100 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 101 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_WARNER
# 102 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUNHECTIC_JORDANLATE
# 103 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_JORDANLATE
# 104 "data/maps/Vulias_Liordun_Town/scripts.pory"
	questupdated 0
# 105 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_PlayerSpeakBlockingCop::
# 112 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 113 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 114 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0
# 115 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_1
# 118 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 119 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_0
# 120 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_PIN
# 121 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitse
# 122 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 123 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0
# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_2
# 135 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 136 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_1
# 137 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 138 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2
# 139 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 140 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_3
# 141 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 142 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUN_HECTIC_TALKEDCOP
# 143 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerStoppedByGrunts
	return


LiordunTown_EventScript_PlayerStoppedByGrunts::
# 149 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 150 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2
# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON01, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 154 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON02, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 155 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON03, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON04, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 157 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 158 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON01
# 159 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON02
# 160 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON03
# 161 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON04
# 162 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUN_HECTIC_KOWTOWGRUNTMONS
# 163 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 165 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_BIKE_HOP
# 166 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT01, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_1
# 167 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT02, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_2
# 168 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 169 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0
# 170 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerStoppedByGrunts_Text_1
# 172 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 173 "data/maps/Vulias_Liordun_Town/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_AQUA_HIDEOUT_7, LiordunTown_EventScript_PlayerStoppedByGrunts_Text_2, TRAINER_GRUNT_AQUA_HIDEOUT_8, LiordunTown_EventScript_PlayerStoppedByGrunts_Text_3
# 179 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_HecticGruntJumpBattleAfter
	return


LiordunTown_EventScript_HecticGruntJumpBattleAfter::
# 184 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0
# 185 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_0
# 188 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 189 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT01, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_0
# 190 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT02, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_1
# 191 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_2
# 194 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 195 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_1
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_2
# 199 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 200 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 201 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_4
# 207 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 208 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_KOWTOWADMIN, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_3
# 209 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_4
# 211 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_5
# 212 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_6
# 214 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 215 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 216 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special ChooseHalfPartyForBattle
# 217 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitstate
# 218 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTownHectic_RawScript_Start2v2
# 219 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return


LiordunTownHectit_EventScript_CalvinFollower::
# 222 "data/maps/Vulias_Liordun_Town/scripts.pory"
	nop
	return


# 227 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 228 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_RawScript_Start2v2::
# 229 "data/maps/Vulias_Liordun_Town/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_MT_CHIMNEY_1, LiordunTownHectic_AdminLoss, TRAINER_GRUNT_AQUA_HIDEOUT_6, LiordunTownHectic_Grunt_Loss, PARTNER_CALVIN_LIORDUNHECTIC
# 230 "data/maps/Vulias_Liordun_Town/scripts.pory"
    goto(LiordunTownHectic_RawScript_AfterMultiDirect)
# 231 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 232 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_RawScript_AfterMultiDirect::
# 233 "data/maps/Vulias_Liordun_Town/scripts.pory"
    switch VAR_RESULT
# 234 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 1, LiordunTown_Hectic_AdminAfterBattle
# 235 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_Hectic_AdminWhiteout
# 236 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 237 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_AdminLoss:
# 238 "data/maps/Vulias_Liordun_Town/scripts.pory"
    .string "This cannot stand!$"
# 239 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 240 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_Grunt_Loss:
# 241 "data/maps/Vulias_Liordun_Town/scripts.pory"
    .string "How could we lose!$"

LiordunTown_Hectic_AdminWhiteout::
# 246 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 247 "data/maps/Vulias_Liordun_Town/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_7
# 248 "data/maps/Vulias_Liordun_Town/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_8
# 249 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special SetCB2WhiteOut
	return


LiordunTown_Hectic_AdminAfterBattle::
# 254 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 255 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_KOWTOWADMIN, LiordunTown_Hectic_AdminAfterBattle_Movement_0
# 257 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 258 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_5
# 259 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_Hectic_AdminAfterBattle_Text_0
# 269 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 270 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 271 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 272 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_KOWTOW
# 273 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_BLOCKING_COP
# 274 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_JUMPGRUNT01
# 275 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_JUMPGRUNT02
# 276 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_KOWTOWADMIN
# 277 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_CALVINMON
# 278 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 60
# 284 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_DRAWBATTLERS
# 285 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 26
# 286 "data/maps/Vulias_Liordun_Town/scripts.pory"
	warp MAP_VULIAS_LIORDUN_TOWN, 43, 16
# 287 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 27
# 288 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitstate
	end


LiordunTown_EventScript_AfterKowtowDisappears::
# 295 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 28
# 296 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_SetMapState
# 297 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadedefaultbgm
# 298 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_CALVIN_BATTLE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_0
# 299 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 300 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AfterKowtowDisappears_Text_0
# 326 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 327 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_AfterKowtowDisappears_Movement_1
# 328 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_CALVIN_BATTLE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_1
# 329 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_PIN
# 330 "data/maps/Vulias_Liordun_Town/scripts.pory"
	addobject LIORDUNHECTIC_JORDANLATE
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUNHECTIC_JORDANLATE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_2
# 332 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 333 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_AfterKowtowDisappears_Movement_3
# 334 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_CALVIN_BATTLE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_3
# 335 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_AfterKowtowDisappears_Text_1
# 336 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AfterKowtowDisappears_Text_2
# 339 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 340 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 341 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AfterKowtowDisappears_Text_3
# 346 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_CALVIN_BATTLE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_4
# 348 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 30
# 349 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_AfterKowtowDisappears_Movement_0
# 350 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUNHECTIC_JORDANLATE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_0
# 351 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement LIORDUN_HECTIC_CALVIN_BATTLE
# 352 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_CALVIN_BATTLE
# 353 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_AfterKowtowDisappears_Movement_3
# 354 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUNHECTIC_JORDANLATE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_5
# 355 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 356 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_AfterKowtowDisappears_Text_1
# 357 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AfterKowtowDisappears_Text_4
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUNHECTIC_JORDANLATE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_6
# 383 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 60
# 384 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_AfterKowtowDisappears_Movement_7
# 385 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement LIORDUNHECTIC_JORDANLATE
# 386 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUNHECTIC_JORDANLATE
# 387 "data/maps/Vulias_Liordun_Town/scripts.pory"
	questupdated 0
# 388 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return


LiordunTown_EventScript_HecticGentleman::
# 396 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 397 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 398 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGentleman_Text_0
# 399 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGentleman_Text_1
# 403 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 404 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticBrotherCalmingSister::
# 411 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_EventScript_HecticBrotherCalmingSister_1
# 428 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_ge LiordunTown_EventScript_HecticBrotherCalmingSister_3
	return

LiordunTown_EventScript_HecticBrotherCalmingSister_1:
# 413 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 414 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 415 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_1
# 417 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 418 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 419 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_3
# 421 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 422 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 423 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_4
# 424 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 425 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_HecticBrotherCalmingSister_2:
# 430 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 431 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 432 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_5
# 433 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 434 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 435 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_6
# 436 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 437 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker NULL
# 438 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_7
# 439 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 440 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_HecticBrotherCalmingSister_3:
# 428 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 30
	goto_if_le LiordunTown_EventScript_HecticBrotherCalmingSister_2
	return


LiordunTown_EventScript_HecticOldCoupleHelping::
# 448 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_EventScript_HecticOldCoupleHelping_1
# 462 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_ge LiordunTown_EventScript_HecticOldCoupleHelping_3
	return

LiordunTown_EventScript_HecticOldCoupleHelping_1:
# 450 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 451 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_0
# 452 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_1
# 455 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 456 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_2
# 457 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_3
# 458 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 459 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_HecticOldCoupleHelping_2:
# 464 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 465 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_0
# 466 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_4
# 468 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 469 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_2
# 470 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_5
# 471 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 472 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_HecticOldCoupleHelping_3:
# 462 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 30
	goto_if_le LiordunTown_EventScript_HecticOldCoupleHelping_2
	return


LiordunTown_EventScript_HecticHexManiacConflicted::
# 480 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 481 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 482 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticHexManiacConflicted_Text_0
# 483 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticHexManiacConflicted_Text_1
# 487 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 488 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticHidingEmployee::
# 495 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 496 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 497 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticHidingEmployee_Text_0
# 498 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticHidingEmployee_Text_1
# 502 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 503 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticFatherCalmingChildren::
# 510 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_EventScript_HecticFatherCalmingChildren_1
# 531 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_ge LiordunTown_EventScript_HecticFatherCalmingChildren_3
	return

LiordunTown_EventScript_HecticFatherCalmingChildren_1:
# 512 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 513 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 514 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_1
# 516 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 517 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 518 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_2
# 519 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 520 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_WEST
# 521 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3
# 522 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_4
# 523 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 524 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 525 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_5
# 526 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 527 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_EAST
# 528 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_HecticFatherCalmingChildren_2:
# 533 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 534 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 535 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_6
# 536 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 537 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_WEST
# 538 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3
# 539 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_7
# 540 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 541 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 542 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_8
# 543 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 544 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_9
# 545 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_10
# 546 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_EAST
# 547 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 10
# 548 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_WEST
# 549 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 10
# 550 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_EAST
# 551 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_HecticFatherCalmingChildren_3:
# 531 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 30
	goto_if_le LiordunTown_EventScript_HecticFatherCalmingChildren_2
	return


LiordunTown_EventScript_AngryCrowdInteract::
# 559 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_EventScript_AngryCrowdInteract_1
# 568 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_ge LiordunTown_EventScript_AngryCrowdInteract_3
	return

LiordunTown_EventScript_AngryCrowdInteract_1:
# 561 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 562 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AngryCrowdInteract_Text_0
# 564 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 565 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_AngryCrowdInteract_2:
# 570 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CrowdRandomBark
	return

LiordunTown_EventScript_AngryCrowdInteract_3:
# 568 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 30
	goto_if_le LiordunTown_EventScript_AngryCrowdInteract_2
	return


LiordunTown_EventScript_AngryCrowdInteract_Special01::
# 577 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_EventScript_AngryCrowdInteract_Special01_1
	return

LiordunTown_EventScript_AngryCrowdInteract_Special01_1:
# 579 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 580 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AngryCrowdInteract_Text_0
# 582 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 583 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_AngryCrowdInteract_Special02::
# 590 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_ge LiordunTown_EventScript_AngryCrowdInteract_Special02_2
	return

LiordunTown_EventScript_AngryCrowdInteract_Special02_1:
# 592 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CrowdRandomBark
	return

LiordunTown_EventScript_AngryCrowdInteract_Special02_2:
# 590 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 30
	goto_if_le LiordunTown_EventScript_AngryCrowdInteract_Special02_1
	return


LiordunTown_EventScript_OrganizerAttemptCalmCrowd::
# 599 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 600 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_0
# 601 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt LiordunTown_EventScript_OrganizerAttemptCalmCrowd_2
# 607 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_ge LiordunTown_EventScript_OrganizerAttemptCalmCrowd_4
LiordunTown_EventScript_OrganizerAttemptCalmCrowd_1:
# 613 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 614 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker NULL
# 615 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_3
# 617 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_2:
# 603 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_1
	goto LiordunTown_EventScript_OrganizerAttemptCalmCrowd_1

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_3:
# 609 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_2
	goto LiordunTown_EventScript_OrganizerAttemptCalmCrowd_1

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_4:
# 607 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 30
	goto_if_le LiordunTown_EventScript_OrganizerAttemptCalmCrowd_3
	goto LiordunTown_EventScript_OrganizerAttemptCalmCrowd_1


LiordunTown_EventScript_CrowdRandomBark::
# 624 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 625 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_CrowdRandomBark_Text_0
# 626 "data/maps/Vulias_Liordun_Town/scripts.pory"
	random 6
# 627 "data/maps/Vulias_Liordun_Town/scripts.pory"
	switch VAR_RESULT
# 628 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 0, LiordunTown_EventScript_CrowdRandomBark_3
# 630 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 1, LiordunTown_EventScript_CrowdRandomBark_4
# 632 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 2, LiordunTown_EventScript_CrowdRandomBark_5
# 635 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 3, LiordunTown_EventScript_CrowdRandomBark_6
# 638 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 4, LiordunTown_EventScript_CrowdRandomBark_7
# 640 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 5, LiordunTown_EventScript_CrowdRandomBark_8
# 642 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 6, LiordunTown_EventScript_CrowdRandomBark_9
LiordunTown_EventScript_CrowdRandomBark_1:
# 645 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 646 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return

LiordunTown_EventScript_CrowdRandomBark_3:
# 629 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_1
	goto LiordunTown_EventScript_CrowdRandomBark_1

LiordunTown_EventScript_CrowdRandomBark_4:
# 631 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_2
	goto LiordunTown_EventScript_CrowdRandomBark_1

LiordunTown_EventScript_CrowdRandomBark_5:
# 633 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_3
	goto LiordunTown_EventScript_CrowdRandomBark_1

LiordunTown_EventScript_CrowdRandomBark_6:
# 636 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_4
	goto LiordunTown_EventScript_CrowdRandomBark_1

LiordunTown_EventScript_CrowdRandomBark_7:
# 639 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_5
	goto LiordunTown_EventScript_CrowdRandomBark_1

LiordunTown_EventScript_CrowdRandomBark_8:
# 641 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_6
	goto LiordunTown_EventScript_CrowdRandomBark_1

LiordunTown_EventScript_CrowdRandomBark_9:
# 643 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_CrowdRandomBark_Text_7
	goto LiordunTown_EventScript_CrowdRandomBark_1


LiordunTown_EventScript_CreateCrowd::
# 653 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 40, 31, 3, direction = DIR_NORTH
# 654 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 2, 41, 29, 3, direction = DIR_NORTH
# 655 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 3, 42, 29, 3, direction = DIR_NORTH
# 656 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 4, 43, 29, 3, direction = DIR_NORTH
# 657 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 4, 45, 31, 3, direction = DIR_NORTH
# 660 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 7, 41, 30, 3, direction = DIR_NORTH
# 661 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 8, 42, 30, 3, direction = DIR_NORTH
# 662 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 9, 43, 30, 3, direction = DIR_NORTH
# 663 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 10, 44, 29, 3, direction = DIR_NORTH
# 664 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 11, 44, 30, 3, direction = DIR_NORTH
# 665 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 12, 45, 29, 3, direction = DIR_WEST
# 666 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 13, 45, 30, 3, direction = DIR_WEST
# 669 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto_if_unset FLAG_LIORDUNHECTIC_DRAWBATTLERS, LiordunTown_EventScript_CreateCrowd_2
# 676 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 46, 29, 3, direction = DIR_WEST
# 677 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 47, 29, 3, direction = DIR_WEST
LiordunTown_EventScript_CreateCrowd_1:
# 680 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 1
	return

LiordunTown_EventScript_CreateCrowd_2:
# 671 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 44, 28, 3, direction = DIR_WEST
# 672 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 44, 27, 3, direction = DIR_WEST
	goto LiordunTown_EventScript_CreateCrowd_1


LiordunTown_EventScript_CreateBattles::
# 686 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto_if_unset FLAG_LIORDUNHECTIC_DRAWBATTLERS, LiordunTown_EventScript_CreateBattles_1
	return

LiordunTown_EventScript_CreateBattles_1:
# 688 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 14, 37, 13, 3, direction = DIR_SOUTH
# 689 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( HOUNDOOM ), 15, 37, 14, 3, direction = DIR_SOUTH
# 690 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( PAWNIARD ), 16, 37, 15, 3, direction = DIR_NORTH
# 691 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_AQUA_MEMBER_M, 17, 37, 16, 3, direction = DIR_NORTH
# 692 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_AQUA_MEMBER_F, 24, 40, 16, 3, direction = DIR_EAST
# 693 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( PAWNIARD ), 25, 41, 16, 3, direction = DIR_EAST
# 694 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 18, 39, 19, 3, direction = DIR_SOUTH
# 695 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 23, 43, 23, 3, direction = DIR_NORTH
	return


LiordunTown_EventScript_CreateGroups::
# 703 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 26, 25, 21, 3, direction = DIR_EAST
# 704 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 27, 26, 21, 3, direction = DIR_WEST
# 706 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 28, 33, 22, 3, direction = DIR_SOUTH
# 707 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 29, 33, 23, 3, direction = DIR_NORTH
# 709 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_1, 30, 35, 27, 3, direction = DIR_EAST
# 710 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 31, 34, 27, 3, direction = DIR_EAST
# 711 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 32, 36, 27, 3, direction = DIR_WEST
	return


# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_0:
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
	step_end

# 97 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_1:
# 97 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 97 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_2:
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 99 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
	step_end

# 119 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_0:
# 119 "data/maps/Vulias_Liordun_Town/scripts.pory"
	emote_exclamation_mark
	step_end

# 136 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_1:
# 136 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 136 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 136 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 138 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2:
# 138 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 138 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 138 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_3:
# 140 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 140 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
	step_end

# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0:
# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
	enter_pokeball
	step_end

# 166 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_1:
# 166 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_2_right
# 166 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_up
	step_end

# 167 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_2:
# 167 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_2_left
# 167 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 189 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_0:
# 189 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 189 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 189 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_right
	step_end

# 190 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_1:
# 190 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 190 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 190 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_2:
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_3:
# 208 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
# 208 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
	step_end

# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_4:
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
	step_end

# 255 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_Hectic_AdminAfterBattle_Movement_0:
# 256 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
# 256 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_down
# 256 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_down
# 256 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
	step_end

# 298 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_0:
# 298 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_up
	step_end

# 327 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_1:
# 327 "data/maps/Vulias_Liordun_Town/scripts.pory"
	emote_exclamation_mark
# 327 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_2:
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_up
# 331 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_right
	step_end

# 333 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_3:
# 333 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_4:
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 347 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 354 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_5:
# 354 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_right
	step_end

# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_6:
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
	step_end

# 384 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_7:
# 384 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

LiordunTown_EventScript_PlayerFirstEnterScene_Text_0:
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Woman$"

LiordunTown_EventScript_PlayerFirstEnterScene_Text_1:
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I wouldn't go that way! Some thugs are\n"
	.string "trashing the whole town! I don't want\l"
	.string "any part in that! I came to Vulias for\l"
	.string "tournaments, not this!$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0:
# 114 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Policeman$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_1:
# 115 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Stay back! We'll have this under control\n"
	.string "soon, please follow the instructions of\l"
	.string "the organiz-$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_2:
# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wait! You're that trainer who won the\n"
	.string "Woltia and Gerbon tournaments! That\l"
	.string "ain't happened in a long time, and you're\l"
	.string "all over the news!\p"
	.string "I reckon you can help out here, these\n"
	.string "Kowtow scum trashed the whole town,\l"
	.string "the Liordun Town Battle Ace is battling\l"
	.string "their 'head honcho' up ahead.\p"
	.string "No reason for me to keep you here!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0:
# 169 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Kowtow Grunt$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_1:
# 170 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Where do you think you're going?\n"
	.string "Like we would let you past!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_2:
# 175 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "You don't know what you're doing!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_3:
# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Bah! We never get our way!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_0:
# 185 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "If only the boss would let us go wild...\p"
	.string "Get out of my sight!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_1:
# 195 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "???$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_2:
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wah? You're here to help?\p"
	.string "...$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3:
# 200 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Calvin$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_4:
# 201 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Ah, the one from the TV! The name is\n"
	.string "{COLOR RED}Calvin!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "Help me out here would you? These rough\n"
	.string "scoundrels think they can get what\l"
	.string "they want by force!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_5:
# 211 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Kowtow Admin$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_6:
# 212 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Aghhhh! Needed some help did you\n"
	.string "grandpa! You'll regret this kid!$"

LiordunTown_Hectic_AdminAfterBattle_Text_0:
# 259 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Rahh! Unacceptable! For you of all\n"
	.string "people to succumb to Sinvesta's wishes\l"
	.string "Calvin, it's pathetic!\p"
	.string "You all cheer for these toy crowns while\n"
	.string "Vulias' bones rot beneath our feet!\p"
	.string "You'll regret your choices soon enough.\p"
	.string "...Kowtow, let's move out!$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_0:
# 300 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "They're gone! Looks like the officers\n"
	.string "are chasing after them...I have my\l"
	.string "doubts regarding their success.\p"
	.string "I cannot thank you enough...\n"
	.string "{PLAYER}, was it? I can't say for sure\l"
	.string "I would have made it through that by\l"
	.string "myself.\p"
	.string "That...girl. The leader. There's an\n"
	.string "element of truth to her words. Our\l"
	.string "Battle Hall is ancient, and has stood\l"
	.string "since time lost to history. There are a\l"
	.string "good few folks in our own town, and\l"
	.string "elsewhere, that lament me allowing\l"
	.string "{COLOR RED}Sinvesta{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to use it for their\l"
	.string "tournaments.\p"
	.string "Bahh...they don't realize that without\n"
	.string "the money, the Hall would have fallen\l"
	.string "into disarray years ago! It doesn't feel\l"
	.string "right, but what else can we do?\p"
	.string "Wow! Look at me go! You're very kind for\n"
	.string "indulging me a moment there. Thank you\l"
	.string "for your assistance here.$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_1:
# 335 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Jordan$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_2:
# 336 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "{PLAYER}! I should have known you\n"
	.string "would be helping here! Looks like\l"
	.string "I'm a little late to the party...$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_3:
# 341 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Hoho, you didn't miss much don't worry!\n"
	.string "You two must be friends?\p"
	.string "Well, I have to attend some business in\n"
	.string "the Hall, I hope I'll see you again soon!$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_4:
# 357 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "That's Calvin! Did you battle with him?\n"
	.string "Awesome! Those Kowtow goons got what\l"
	.string "was coming to them then!\p"
	.string "...\p"
	.string "Really? People are saying that? I guess\n"
	.string "I can see why some people don't like\l"
	.string "the tournaments, but it's all just good\l"
	.string "fun, right? Besides, doing all of...\l"
	.string "this, to prove that point is just wrong!\p"
	.string "...something to think about I guess.\p"
	.string "Anyways! It looks like they're going to\n"
	.string "delay the tournament because of this,\l"
	.string "so I say we go check out the {COLOR RED}Mine{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} back\l"
	.string "on Route 104!\p"
	.string "They allow visitors to the safe areas, I\n"
	.string "hear there are tons of cool things down\l"
	.string "there, and Pokemon!\p"
	.string "I'll meet you there, definitely rest up\n"
	.string "if you need too! See you soon!$"

LiordunTown_EventScript_HecticGentleman_Text_0:
# 398 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Gentleman$"

LiordunTown_EventScript_HecticGentleman_Text_1:
# 399 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Monsterous behavior! Just look at the\n"
	.string "state of this place! Those {COLOR RED}Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "goons ought to be ashamed of\l"
	.string "themselves!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0:
# 414 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Youngster$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_1:
# 415 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Don't worry! Just keep close to me and\n"
	.string "it will be over soon!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2:
# 418 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Girl$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_3:
# 419 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wahhh! I'm scared! They hurt that Old\n"
	.string "Man! They're gonna hurt us! Wahhh!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_4:
# 423 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Not while you've got me! Don't worry!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_5:
# 432 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "See! Everything's alright now!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_6:
# 435 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Sniff, thank you big brother!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_7:
# 438 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "The sight touches your heart.$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_0:
# 451 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Old Woman$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_1:
# 452 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Stay down dear! That leg of yours needs\n"
	.string "to be looked at, we have to wait for\l"
	.string "this chaos to die down!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_2:
# 456 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Old Man$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_3:
# 457 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I'll be fine! Watch thi--ACK!!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_4:
# 466 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Now we need to wait for the Ambulance\n"
	.string "dear, don't you dare try to get up yet!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_5:
# 470 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "No! That will cost so mu--ACK!!$"

LiordunTown_EventScript_HecticHexManiacConflicted_Text_0:
# 482 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Hex Maniac$"

LiordunTown_EventScript_HecticHexManiacConflicted_Text_1:
# 483 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Those {COLOR RED}Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} folks make a good\n"
	.string "point, but they take it too far!\p"
	.string "None of this will help anything...$"

LiordunTown_EventScript_HecticHidingEmployee_Text_0:
# 497 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Mart Employee$"

LiordunTown_EventScript_HecticHidingEmployee_Text_1:
# 498 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Not only did they trash the steets, but\n"
	.string "they robbed me of my Pokemon Vitamins!\p"
	.string "Pure scoundrels!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0:
# 513 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Man$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_1:
# 514 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Settle down you two! Let's let the\n"
	.string "Police do their job!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_2:
# 518 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "But what about the tournament!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3:
# 521 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Boy$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_4:
# 522 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I don't want to miss it!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_5:
# 525 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "We'll just have to wait and see!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_6:
# 535 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "So do we get to see the tournament!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_7:
# 539 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Let's go daddy let's go!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_8:
# 542 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Pipe it down! It may be delayed!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_9:
# 544 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Boy and Girl$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_10:
# 545 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wahhh!$"

LiordunTown_EventScript_AngryCrowdInteract_Text_0:
# 562 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "The crowd does not budge to your\n"
	.string "pushing.$"

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_0:
# 600 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Organizer$"

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_1:
# 603 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Please everyone, stay calm while the\n"
	.string "police sort this out!$"

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_2:
# 609 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I'm sorry everyone, but the tournament\n"
	.string "will be delayed until tomorrow!$"

LiordunTown_EventScript_OrganizerAttemptCalmCrowd_Text_3:
# 615 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "The crowd does not appear to be happy\n"
	.string "to hear this.$"

LiordunTown_EventScript_CrowdRandomBark_Text_0:
# 625 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Crowd$"

LiordunTown_EventScript_CrowdRandomBark_Text_1:
# 629 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "So we have to wait until tomorrow?$"

LiordunTown_EventScript_CrowdRandomBark_Text_2:
# 631 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I paid good money to be here!$"

LiordunTown_EventScript_CrowdRandomBark_Text_3:
# 633 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Why can't we just go in! Those goons are\n"
	.string "gone now!$"

LiordunTown_EventScript_CrowdRandomBark_Text_4:
# 636 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Let me out of here! I'm getting\n"
	.string "squeezed!$"

LiordunTown_EventScript_CrowdRandomBark_Text_5:
# 639 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I want my money back now!$"

LiordunTown_EventScript_CrowdRandomBark_Text_6:
# 641 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "We can wait one day people!$"

LiordunTown_EventScript_CrowdRandomBark_Text_7:
# 643 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I think I'll just go home...$"
