Vulias_Liordun_Town_MapScripts::
# 6 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LiordunTown_MapScript_OnResume
# 2 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Vulias_Liordun_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Vulias_Liordun_Town_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script_2 VAR_TEMP_6, 0, LiordunTown_MapScript_OnWarpCrowd
# 4 "data/maps/Vulias_Liordun_Town/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 26, LiordunTown_MapScript_OnWarpEndKowtowRaid
	.2byte 0


LiordunTown_MapScript_OnWarpCrowd::
# 14 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 24
	goto_if_ge LiordunTown_MapScript_OnWarpCrowd_1
	return

LiordunTown_MapScript_OnWarpCrowd_1:
# 16 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateGroups
# 17 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateBattles
# 18 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateCrowd
	return


LiordunTown_MapScript_OnWarpEndKowtowRaid::
# 25 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_AfterKowtowDisappears
	return


LiordunTown_MapScript_OnResume::
# 31 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ONRESUME_DRAWCROWD, 1
	goto_if_eq LiordunTown_MapScript_OnResume_2
LiordunTown_MapScript_OnResume_1:
# 39 "data/maps/Vulias_Liordun_Town/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 25
	goto_if_ge LiordunTown_MapScript_OnResume_4
	return

LiordunTown_MapScript_OnResume_2:
# 33 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 0
# 34 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateGroups
# 35 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateBattles
# 36 "data/maps/Vulias_Liordun_Town/scripts.pory"
	call LiordunTown_EventScript_CreateCrowd
	goto LiordunTown_MapScript_OnResume_1

LiordunTown_MapScript_OnResume_4:
# 41 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger01::
# 48 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 27
# 49 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger02::
# 54 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 28
# 55 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger03::
# 60 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 29
# 61 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger04::
# 66 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 30
# 67 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterTrigger05::
# 72 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setobjectxy LIORDUN_HECTIC_WARNER, 25, 31
# 73 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerFirstEnterScene
	return


LiordunTown_EventScript_PlayerFirstEnterScene::
# 79 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 80 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 25
# 81 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_WARNER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_0
# 83 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 84 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerFirstEnterScene_Text_0
# 85 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerFirstEnterScene_Text_1
# 88 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_1
# 90 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_WARNER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_2
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 93 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_WARNER
# 94 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_PlayerSpeakBlockingCop::
# 101 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 102 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 103 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0
# 104 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_1
# 107 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 108 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_0
# 109 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_PIN
# 110 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitse
# 111 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 112 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0
# 113 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_2
# 123 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_1
# 125 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2
# 127 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_3
# 129 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 130 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUN_HECTIC_TALKEDCOP
# 131 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerStoppedByGrunts
	return


LiordunTown_EventScript_PlayerStoppedByGrunts::
# 137 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 138 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2
# 141 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON01, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 142 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON02, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 143 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON03, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 144 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON04, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 145 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 146 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON01
# 147 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON02
# 148 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON03
# 149 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON04
# 150 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUN_HECTIC_KOWTOWGRUNTMONS
# 151 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT01, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_1
# 154 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT02, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_2
# 155 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0
# 157 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerStoppedByGrunts_Text_1
# 159 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 160 "data/maps/Vulias_Liordun_Town/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_AQUA_HIDEOUT_7, LiordunTown_EventScript_PlayerStoppedByGrunts_Text_2, TRAINER_GRUNT_AQUA_HIDEOUT_8, LiordunTown_EventScript_PlayerStoppedByGrunts_Text_3
# 166 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_HecticGruntJumpBattleAfter
	return


LiordunTown_EventScript_HecticGruntJumpBattleAfter::
# 171 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0
# 172 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_0
# 175 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 176 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT01, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_0
# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT02, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_1
# 178 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_2
# 181 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_1
# 183 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_2
# 193 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 194 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_KOWTOWADMIN, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_3
# 195 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_4
# 197 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_4
# 200 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 201 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 202 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setfollowernpc LIORDUN_HECTIC_CALVIN_BATTLE, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, LiordunTownHectit_EventScript_CalvinFollower, PARTNER_CALVIN_LIORDUNHECTIC
# 208 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special ChooseHalfPartyForBattle
# 209 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitstate
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTownHectic_RawScript_Start2v2
# 211 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return


LiordunTownHectit_EventScript_CalvinFollower::
# 214 "data/maps/Vulias_Liordun_Town/scripts.pory"
	nop
	return


# 219 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 220 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_RawScript_Start2v2::
# 221 "data/maps/Vulias_Liordun_Town/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_MT_CHIMNEY_1, LiordunTownHectic_AdminLoss, TRAINER_GRUNT_AQUA_HIDEOUT_6, LiordunTownHectic_Grunt_Loss, PARTNER_CALVIN_LIORDUNHECTIC
# 222 "data/maps/Vulias_Liordun_Town/scripts.pory"
    goto(LiordunTownHectic_RawScript_AfterMultiDirect)
# 223 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 224 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_RawScript_AfterMultiDirect::
# 225 "data/maps/Vulias_Liordun_Town/scripts.pory"
    switch VAR_RESULT
# 226 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 1, LiordunTown_Hectic_AdminAfterBattle
# 227 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_Hectic_AdminWhiteout
# 228 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 229 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_AdminLoss:
# 230 "data/maps/Vulias_Liordun_Town/scripts.pory"
    .string "This cannot stand!$"
# 231 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 232 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_Grunt_Loss:
# 233 "data/maps/Vulias_Liordun_Town/scripts.pory"
    .string "How could we lose!$"

LiordunTown_Hectic_AdminWhiteout::
# 238 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 239 "data/maps/Vulias_Liordun_Town/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_7
# 240 "data/maps/Vulias_Liordun_Town/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_8
# 241 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special SetCB2WhiteOut
	return


LiordunTown_Hectic_AdminAfterBattle::
# 246 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 247 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_KOWTOWADMIN, LiordunTown_Hectic_AdminAfterBattle_Movement_0
# 249 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 250 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 251 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_Hectic_AdminAfterBattle_Text_0
# 261 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 262 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 263 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 264 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_KOWTOW
# 265 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_JUMPGRUNT01
# 266 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_JUMPGRUNT02
# 267 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_KOWTOWADMIN
# 268 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_CALVINMON
# 269 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 60
# 275 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_DRAWBATTLERS
# 276 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 26
# 277 "data/maps/Vulias_Liordun_Town/scripts.pory"
	warp MAP_VULIAS_LIORDUN_TOWN, 43, 16
# 278 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitstate
	end


LiordunTown_EventScript_AfterKowtowDisappears::
# 285 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_CALVIN_BATTLE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_0
# 286 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_AfterKowtowDisappears_Text_0
# 287 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AfterKowtowDisappears_Text_1
# 289 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 290 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return


LiordunTown_EventScript_HecticGentleman::
# 299 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 300 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 301 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGentleman_Text_0
# 302 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGentleman_Text_1
# 306 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 307 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticBrotherCalmingSister::
# 314 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 315 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 316 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_1
# 318 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 319 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 320 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_3
# 322 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 323 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 324 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_4
# 325 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 326 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticOldCoupleHelping::
# 333 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 334 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_0
# 335 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_1
# 338 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 339 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_2
# 340 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_3
# 341 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 342 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticHexManiacConflicted::
# 349 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 350 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 351 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticHexManiacConflicted_Text_0
# 352 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticHexManiacConflicted_Text_1
# 356 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 357 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticHidingEmployee::
# 364 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 365 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 366 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticHidingEmployee_Text_0
# 367 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticHidingEmployee_Text_1
# 371 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 372 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticFatherCalmingChildren::
# 379 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 380 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 381 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_1
# 383 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 384 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 385 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_2
# 386 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 387 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_WEST
# 388 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3
# 389 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_4
# 390 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 391 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 392 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_5
# 393 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 394 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_EAST
# 395 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_CreateCrowd::
# 404 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 40, 31, 3, direction = DIR_NORTH
# 405 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 1, 40, 30, 3, direction = DIR_NORTH
# 406 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 2, 41, 29, 3, direction = DIR_NORTH
# 407 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 3, 42, 29, 3, direction = DIR_NORTH
# 408 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 4, 43, 29, 3, direction = DIR_NORTH
# 409 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 44, 28, 3, direction = DIR_WEST
# 410 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 44, 27, 3, direction = DIR_WEST
# 413 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 7, 41, 30, 3, direction = DIR_NORTH
# 414 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 8, 42, 30, 3, direction = DIR_NORTH
# 415 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 9, 43, 30, 3, direction = DIR_NORTH
# 416 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 10, 44, 29, 3, direction = DIR_NORTH
# 417 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 11, 44, 30, 3, direction = DIR_NORTH
# 418 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 12, 45, 29, 3, direction = DIR_WEST
# 419 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 13, 45, 30, 3, direction = DIR_WEST
# 421 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 1
	return


LiordunTown_EventScript_CreateBattles::
# 427 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto_if_unset FLAG_LIORDUNHECTIC_DRAWBATTLERS, LiordunTown_EventScript_CreateBattles_2
LiordunTown_EventScript_CreateBattles_1:
# 436 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 18, 39, 19, 3, direction = DIR_SOUTH
# 437 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 23, 43, 23, 3, direction = DIR_NORTH
	return

LiordunTown_EventScript_CreateBattles_2:
# 429 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 14, 37, 13, 3, direction = DIR_SOUTH
# 430 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( HOUNDOOM ), 15, 37, 14, 3, direction = DIR_SOUTH
# 431 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( PAWNIARD ), 16, 37, 15, 3, direction = DIR_NORTH
# 432 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_AQUA_MEMBER_M, 17, 37, 16, 3, direction = DIR_NORTH
# 433 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_AQUA_MEMBER_F, 24, 40, 16, 3, direction = DIR_EAST
# 434 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( PAWNIARD ), 25, 41, 16, 3, direction = DIR_EAST
	goto LiordunTown_EventScript_CreateBattles_1


LiordunTown_EventScript_CreateGroups::
# 444 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 26, 25, 21, 3, direction = DIR_EAST
# 445 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 27, 26, 21, 3, direction = DIR_WEST
# 447 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 28, 33, 22, 3, direction = DIR_SOUTH
# 448 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 29, 33, 23, 3, direction = DIR_NORTH
# 450 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_1, 30, 35, 27, 3, direction = DIR_EAST
# 451 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 31, 34, 27, 3, direction = DIR_EAST
# 452 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 32, 36, 27, 3, direction = DIR_WEST
	return


# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_0:
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 82 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
	step_end

# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_1:
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_2:
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
	step_end

# 108 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_0:
# 108 "data/maps/Vulias_Liordun_Town/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_1:
# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 124 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2:
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_3:
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
	step_end

# 141 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0:
# 141 "data/maps/Vulias_Liordun_Town/scripts.pory"
	enter_pokeball
	step_end

# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_1:
# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_2_right
# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_up
	step_end

# 154 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_2:
# 154 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_2_left
# 154 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 176 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_0:
# 176 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 176 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 176 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_right
	step_end

# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_1:
# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_2:
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_3:
# 194 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
# 194 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
	step_end

# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_4:
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
	step_end

# 247 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_Hectic_AdminAfterBattle_Movement_0:
# 248 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
# 248 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_down
# 248 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_down
# 248 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
	step_end

# 285 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_0:
# 285 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_up
	step_end

LiordunTown_EventScript_PlayerFirstEnterScene_Text_0:
# 84 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Woman$"

LiordunTown_EventScript_PlayerFirstEnterScene_Text_1:
# 85 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I wouldn't go that way! Some thugs are\n"
	.string "trashing the whole town! I don't want\l"
	.string "any part in that!$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0:
# 103 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Policeman$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_1:
# 104 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Stay back! We'll have this under control\n"
	.string "soon, please follow the instructions of\l"
	.string "the organiz-$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_2:
# 113 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wait! You're the Rep Trainer from Woltia\n"
	.string "and Gerbon Town! That ain't happened\l"
	.string "before and you're all over the news!\p"
	.string "I reckon you can help out here, these\n"
	.string "Kowtow scum trashed the whole town,\l"
	.string "the Liordun Town Rep Trainer is\l"
	.string "battling their 'head honcho' up ahead.\p"
	.string "No reason for me to keep you here!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0:
# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Kowtow Grunt$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_1:
# 157 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Where do you think you're going?\n"
	.string "Like we would let you past!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_2:
# 162 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "You don't know what you're doing!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_3:
# 164 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Bah! We never get our way!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_0:
# 172 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "If only the boss would let us go wild...\p"
	.string "Get out of my sight!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_1:
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "???$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_2:
# 183 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wah? You're here to help?\p"
	.string "...\p"
	.string "Ah, the one from the TV! The name is\n"
	.string "{COLOR RED}Calvin!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "Help me out here would you? These rough\n"
	.string "scoundrels think they can get what\l"
	.string "they want by force!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3:
# 197 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Kowtow Admin$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_4:
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Aghhhh! Needed some help did you\n"
	.string "grandpa! You'll regret this kid!$"

LiordunTown_Hectic_AdminAfterBattle_Text_0:
# 251 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Rahh! Unacceptable! For you of all\n"
	.string "people to succumb to Sinvesta's wishes\l"
	.string "Calvin, it's pathetic!\p"
	.string "You all cheer for these toy crowns while\n"
	.string "Vulias' bones rot beneath our feet!\p"
	.string "You'll regret your choices soon enough.\p"
	.string "...Kowtow, let's move out!$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_0:
# 286 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Calvin$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_1:
# 287 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "They're gone! A shame these fine\n"
	.string "officers couldn't aprehend them...$"

LiordunTown_EventScript_HecticGentleman_Text_0:
# 301 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Gentleman$"

LiordunTown_EventScript_HecticGentleman_Text_1:
# 302 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Monsterous behavior! Just look at the\n"
	.string "state of this place! Those {COLOR RED}Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "goons ought to be ashamed of\l"
	.string "themselves!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0:
# 315 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Youngster$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_1:
# 316 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Don't worry! Just keep close to me and\n"
	.string "it will be over soon!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2:
# 319 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Girl$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_3:
# 320 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wahhh! I'm scared! They hurt that Old\n"
	.string "Man! They're gonna hurt us! Wahhh!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_4:
# 324 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Not while you've got me! Don't worry!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_0:
# 334 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Old Woman$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_1:
# 335 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Stay down dear! That leg of yours needs\n"
	.string "to be looked at, we have to wait for\l"
	.string "this chaos to die down!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_2:
# 339 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Old Man$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_3:
# 340 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I'll be fine! Watch thi--ACK!!$"

LiordunTown_EventScript_HecticHexManiacConflicted_Text_0:
# 351 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Hex Maniac$"

LiordunTown_EventScript_HecticHexManiacConflicted_Text_1:
# 352 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Those {COLOR RED}Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} folks make a good\n"
	.string "point, but they take it too far!\p"
	.string "None of this will help anything...$"

LiordunTown_EventScript_HecticHidingEmployee_Text_0:
# 366 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Mart Employee$"

LiordunTown_EventScript_HecticHidingEmployee_Text_1:
# 367 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Not only did they trash the steets, but\n"
	.string "they robbed me of my Pokemon Vitamins!\p"
	.string "Pure scoundrels!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0:
# 380 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Man$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_1:
# 381 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Settle down you two! Let's let the\n"
	.string "Police do their job!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_2:
# 385 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "But what about the tournament!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3:
# 388 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Boy$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_4:
# 389 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I don't want to miss it!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_5:
# 392 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "We'll just have to wait and see!$"
