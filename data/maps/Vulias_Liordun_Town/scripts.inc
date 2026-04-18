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
# 89 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 90 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_1
# 91 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_WARNER, LiordunTown_EventScript_PlayerFirstEnterScene_Movement_2
# 93 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 94 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_WARNER
# 95 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_PlayerSpeakBlockingCop::
# 102 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 103 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 104 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0
# 105 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_1
# 108 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 109 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_0
# 110 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_PIN
# 111 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitse
# 112 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 113 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0
# 114 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_2
# 125 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_1
# 127 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2
# 129 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 130 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_BLOCKING_COP, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_3
# 131 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 132 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUN_HECTIC_TALKEDCOP
# 133 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_PlayerStoppedByGrunts
	return


LiordunTown_EventScript_PlayerStoppedByGrunts::
# 139 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 140 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2
# 143 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON01, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 144 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON02, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 145 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON03, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 146 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_MON04, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0
# 147 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 148 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON01
# 149 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON02
# 150 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON03
# 151 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_MON04
# 152 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUN_HECTIC_KOWTOWGRUNTMONS
# 153 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 155 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT01, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_1
# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT02, LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_2
# 157 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 158 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0
# 159 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_PlayerStoppedByGrunts_Text_1
# 161 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 162 "data/maps/Vulias_Liordun_Town/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_AQUA_HIDEOUT_7, LiordunTown_EventScript_PlayerStoppedByGrunts_Text_2, TRAINER_GRUNT_AQUA_HIDEOUT_8, LiordunTown_EventScript_PlayerStoppedByGrunts_Text_3
# 168 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_EventScript_HecticGruntJumpBattleAfter
	return


LiordunTown_EventScript_HecticGruntJumpBattleAfter::
# 173 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_PlayerStoppedByGrunts_Text_0
# 174 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_0
# 177 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 178 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT01, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_0
# 179 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_JUMPGRUNT02, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_1
# 180 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_2
# 183 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 184 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_1
# 185 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_2
# 195 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_KOWTOWADMIN, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_3
# 197 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_4
# 199 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 200 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_4
# 202 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 203 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 204 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setfollowernpc LIORDUN_HECTIC_CALVIN_BATTLE, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, LiordunTownHectit_EventScript_CalvinFollower, PARTNER_CALVIN_LIORDUNHECTIC
# 210 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special ChooseHalfPartyForBattle
# 211 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitstate
# 212 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTownHectic_RawScript_Start2v2
# 213 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return


LiordunTownHectit_EventScript_CalvinFollower::
# 216 "data/maps/Vulias_Liordun_Town/scripts.pory"
	nop
	return


# 221 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 222 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_RawScript_Start2v2::
# 223 "data/maps/Vulias_Liordun_Town/scripts.pory"
    multi_2_vs_2 TRAINER_GRUNT_MT_CHIMNEY_1, LiordunTownHectic_AdminLoss, TRAINER_GRUNT_AQUA_HIDEOUT_6, LiordunTownHectic_Grunt_Loss, PARTNER_CALVIN_LIORDUNHECTIC
# 224 "data/maps/Vulias_Liordun_Town/scripts.pory"
    goto(LiordunTownHectic_RawScript_AfterMultiDirect)
# 225 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 226 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_RawScript_AfterMultiDirect::
# 227 "data/maps/Vulias_Liordun_Town/scripts.pory"
    switch VAR_RESULT
# 228 "data/maps/Vulias_Liordun_Town/scripts.pory"
	case 1, LiordunTown_Hectic_AdminAfterBattle
# 229 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto LiordunTown_Hectic_AdminWhiteout
# 230 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 231 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_AdminLoss:
# 232 "data/maps/Vulias_Liordun_Town/scripts.pory"
    .string "This cannot stand!$"
# 233 "data/maps/Vulias_Liordun_Town/scripts.pory"

# 234 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTownHectic_Grunt_Loss:
# 235 "data/maps/Vulias_Liordun_Town/scripts.pory"
    .string "How could we lose!$"

LiordunTown_Hectic_AdminWhiteout::
# 240 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 241 "data/maps/Vulias_Liordun_Town/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_7
# 242 "data/maps/Vulias_Liordun_Town/scripts.pory"
	cleartrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_8
# 243 "data/maps/Vulias_Liordun_Town/scripts.pory"
	special SetCB2WhiteOut
	return


LiordunTown_Hectic_AdminAfterBattle::
# 248 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 249 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_KOWTOWADMIN, LiordunTown_Hectic_AdminAfterBattle_Movement_0
# 251 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmovement
# 252 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3
# 253 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_Hectic_AdminAfterBattle_Text_0
# 263 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 264 "data/maps/Vulias_Liordun_Town/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 265 "data/maps/Vulias_Liordun_Town/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 266 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_KOWTOW
# 267 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_JUMPGRUNT01
# 268 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_JUMPGRUNT02
# 269 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_KOWTOWADMIN
# 270 "data/maps/Vulias_Liordun_Town/scripts.pory"
	removeobject LIORDUN_HECTIC_CALVINMON
# 271 "data/maps/Vulias_Liordun_Town/scripts.pory"
	delay 60
# 277 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setflag FLAG_LIORDUNHECTIC_DRAWBATTLERS
# 278 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 26
# 279 "data/maps/Vulias_Liordun_Town/scripts.pory"
	warp MAP_VULIAS_LIORDUN_TOWN, 43, 16
# 280 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitstate
	end


LiordunTown_EventScript_AfterKowtowDisappears::
# 287 "data/maps/Vulias_Liordun_Town/scripts.pory"
	applymovement LIORDUN_HECTIC_CALVIN_BATTLE, LiordunTown_EventScript_AfterKowtowDisappears_Movement_0
# 288 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_AfterKowtowDisappears_Text_0
# 289 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_AfterKowtowDisappears_Text_1
# 291 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 292 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	return


LiordunTown_EventScript_HecticGentleman::
# 301 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 302 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 303 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticGentleman_Text_0
# 304 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticGentleman_Text_1
# 308 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 309 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticBrotherCalmingSister::
# 316 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 317 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 318 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_1
# 320 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 321 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 322 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_3
# 324 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 325 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0
# 326 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticBrotherCalmingSister_Text_4
# 327 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 328 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticOldCoupleHelping::
# 335 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 336 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_0
# 337 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_1
# 340 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 341 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticOldCoupleHelping_Text_2
# 342 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticOldCoupleHelping_Text_3
# 343 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 344 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticHexManiacConflicted::
# 351 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 352 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 353 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticHexManiacConflicted_Text_0
# 354 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticHexManiacConflicted_Text_1
# 358 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 359 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticHidingEmployee::
# 366 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 367 "data/maps/Vulias_Liordun_Town/scripts.pory"
	faceplayer
# 368 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticHidingEmployee_Text_0
# 369 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticHidingEmployee_Text_1
# 373 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 374 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_HecticFatherCalmingChildren::
# 381 "data/maps/Vulias_Liordun_Town/scripts.pory"
	lock
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 383 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_1
# 385 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 386 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2
# 387 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_2
# 388 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 389 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_WEST
# 390 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3
# 391 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_4
# 392 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 393 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setspeaker LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0
# 394 "data/maps/Vulias_Liordun_Town/scripts.pory"
	msgbox LiordunTown_EventScript_HecticFatherCalmingChildren_Text_5
# 395 "data/maps/Vulias_Liordun_Town/scripts.pory"
	waitmessage
# 396 "data/maps/Vulias_Liordun_Town/scripts.pory"
	turnvobject 30, DIR_EAST
# 397 "data/maps/Vulias_Liordun_Town/scripts.pory"
	release
	end


LiordunTown_EventScript_CreateCrowd::
# 406 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 40, 31, 3, direction = DIR_NORTH
# 407 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 1, 40, 30, 3, direction = DIR_NORTH
# 408 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 2, 41, 29, 3, direction = DIR_NORTH
# 409 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 3, 42, 29, 3, direction = DIR_NORTH
# 410 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 4, 43, 29, 3, direction = DIR_NORTH
# 411 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 44, 28, 3, direction = DIR_WEST
# 412 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 44, 27, 3, direction = DIR_WEST
# 415 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 7, 41, 30, 3, direction = DIR_NORTH
# 416 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 8, 42, 30, 3, direction = DIR_NORTH
# 417 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 9, 43, 30, 3, direction = DIR_NORTH
# 418 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 10, 44, 29, 3, direction = DIR_NORTH
# 419 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 11, 44, 30, 3, direction = DIR_NORTH
# 420 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 12, 45, 29, 3, direction = DIR_WEST
# 421 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 13, 45, 30, 3, direction = DIR_WEST
# 423 "data/maps/Vulias_Liordun_Town/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 1
	return


LiordunTown_EventScript_CreateBattles::
# 429 "data/maps/Vulias_Liordun_Town/scripts.pory"
	goto_if_unset FLAG_LIORDUNHECTIC_DRAWBATTLERS, LiordunTown_EventScript_CreateBattles_2
LiordunTown_EventScript_CreateBattles_1:
# 438 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 18, 39, 19, 3, direction = DIR_SOUTH
# 439 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 23, 43, 23, 3, direction = DIR_NORTH
	return

LiordunTown_EventScript_CreateBattles_2:
# 431 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 14, 37, 13, 3, direction = DIR_SOUTH
# 432 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( HOUNDOOM ), 15, 37, 14, 3, direction = DIR_SOUTH
# 433 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( PAWNIARD ), 16, 37, 15, 3, direction = DIR_NORTH
# 434 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_AQUA_MEMBER_M, 17, 37, 16, 3, direction = DIR_NORTH
# 435 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_AQUA_MEMBER_F, 24, 40, 16, 3, direction = DIR_EAST
# 436 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_SPECIES ( PAWNIARD ), 25, 41, 16, 3, direction = DIR_EAST
	goto LiordunTown_EventScript_CreateBattles_1


LiordunTown_EventScript_CreateGroups::
# 446 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 26, 25, 21, 3, direction = DIR_EAST
# 447 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 27, 26, 21, 3, direction = DIR_WEST
# 449 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 28, 33, 22, 3, direction = DIR_SOUTH
# 450 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 29, 33, 23, 3, direction = DIR_NORTH
# 452 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_1, 30, 35, 27, 3, direction = DIR_EAST
# 453 "data/maps/Vulias_Liordun_Town/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 31, 34, 27, 3, direction = DIR_EAST
# 454 "data/maps/Vulias_Liordun_Town/scripts.pory"
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

# 90 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_1:
# 90 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 90 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerFirstEnterScene_Movement_2:
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
# 92 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_fast_left
	step_end

# 109 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_0:
# 109 "data/maps/Vulias_Liordun_Town/scripts.pory"
	emote_exclamation_mark
	step_end

# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_1:
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 126 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_2:
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 128 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerSpeakBlockingCop_Movement_3:
# 130 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 130 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_0:
# 143 "data/maps/Vulias_Liordun_Town/scripts.pory"
	enter_pokeball
	step_end

# 155 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_1:
# 155 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_2_right
# 155 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_up
	step_end

# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_PlayerStoppedByGrunts_Movement_2:
# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_2_left
# 156 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_down
	step_end

# 178 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_0:
# 178 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 178 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
# 178 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_right
	step_end

# 179 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_1:
# 179 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 179 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 179 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_left
	step_end

# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_2:
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 182 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_3:
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
# 196 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
	step_end

# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_HecticGruntJumpBattleAfter_Movement_4:
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_right
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_up
# 198 "data/maps/Vulias_Liordun_Town/scripts.pory"
	walk_left
	step_end

# 249 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_Hectic_AdminAfterBattle_Movement_0:
# 250 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
# 250 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_down
# 250 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_down
# 250 "data/maps/Vulias_Liordun_Town/scripts.pory"
	jump_in_place_right
	step_end

# 287 "data/maps/Vulias_Liordun_Town/scripts.pory"
LiordunTown_EventScript_AfterKowtowDisappears_Movement_0:
# 287 "data/maps/Vulias_Liordun_Town/scripts.pory"
	face_up
	step_end

LiordunTown_EventScript_PlayerFirstEnterScene_Text_0:
# 84 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Woman$"

LiordunTown_EventScript_PlayerFirstEnterScene_Text_1:
# 85 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I wouldn't go that way! Some thugs are\n"
	.string "trashing the whole town! I don't want\l"
	.string "any part in that! I came to Vulias for\l"
	.string "tournaments, not this!$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_0:
# 104 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Policeman$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_1:
# 105 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Stay back! We'll have this under control\n"
	.string "soon, please follow the instructions of\l"
	.string "the organiz-$"

LiordunTown_EventScript_PlayerSpeakBlockingCop_Text_2:
# 114 "data/maps/Vulias_Liordun_Town/scripts.pory"
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
# 158 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Kowtow Grunt$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_1:
# 159 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Where do you think you're going?\n"
	.string "Like we would let you past!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_2:
# 164 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "You don't know what you're doing!$"

LiordunTown_EventScript_PlayerStoppedByGrunts_Text_3:
# 166 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Bah! We never get our way!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_0:
# 174 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "If only the boss would let us go wild...\p"
	.string "Get out of my sight!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_1:
# 184 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "???$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_2:
# 185 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wah? You're here to help?\p"
	.string "...\p"
	.string "Ah, the one from the TV! The name is\n"
	.string "{COLOR RED}Calvin!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "Help me out here would you? These rough\n"
	.string "scoundrels think they can get what\l"
	.string "they want by force!$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_3:
# 199 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Kowtow Admin$"

LiordunTown_EventScript_HecticGruntJumpBattleAfter_Text_4:
# 200 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Aghhhh! Needed some help did you\n"
	.string "grandpa! You'll regret this kid!$"

LiordunTown_Hectic_AdminAfterBattle_Text_0:
# 253 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Rahh! Unacceptable! For you of all\n"
	.string "people to succumb to Sinvesta's wishes\l"
	.string "Calvin, it's pathetic!\p"
	.string "You all cheer for these toy crowns while\n"
	.string "Vulias' bones rot beneath our feet!\p"
	.string "You'll regret your choices soon enough.\p"
	.string "...Kowtow, let's move out!$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_0:
# 288 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Calvin$"

LiordunTown_EventScript_AfterKowtowDisappears_Text_1:
# 289 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "They're gone! A shame these fine\n"
	.string "officers couldn't aprehend them...$"

LiordunTown_EventScript_HecticGentleman_Text_0:
# 303 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Gentleman$"

LiordunTown_EventScript_HecticGentleman_Text_1:
# 304 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Monsterous behavior! Just look at the\n"
	.string "state of this place! Those {COLOR RED}Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "goons ought to be ashamed of\l"
	.string "themselves!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_0:
# 317 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Youngster$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_1:
# 318 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Don't worry! Just keep close to me and\n"
	.string "it will be over soon!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_2:
# 321 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Girl$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_3:
# 322 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Wahhh! I'm scared! They hurt that Old\n"
	.string "Man! They're gonna hurt us! Wahhh!$"

LiordunTown_EventScript_HecticBrotherCalmingSister_Text_4:
# 326 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Not while you've got me! Don't worry!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_0:
# 336 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Old Woman$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_1:
# 337 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Stay down dear! That leg of yours needs\n"
	.string "to be looked at, we have to wait for\l"
	.string "this chaos to die down!$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_2:
# 341 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Old Man$"

LiordunTown_EventScript_HecticOldCoupleHelping_Text_3:
# 342 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I'll be fine! Watch thi--ACK!!$"

LiordunTown_EventScript_HecticHexManiacConflicted_Text_0:
# 353 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Hex Maniac$"

LiordunTown_EventScript_HecticHexManiacConflicted_Text_1:
# 354 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Those {COLOR RED}Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} folks make a good\n"
	.string "point, but they take it too far!\p"
	.string "None of this will help anything...$"

LiordunTown_EventScript_HecticHidingEmployee_Text_0:
# 368 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Mart Employee$"

LiordunTown_EventScript_HecticHidingEmployee_Text_1:
# 369 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Not only did they trash the steets, but\n"
	.string "they robbed me of my Pokemon Vitamins!\p"
	.string "Pure scoundrels!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_0:
# 382 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Man$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_1:
# 383 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Settle down you two! Let's let the\n"
	.string "Police do their job!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_2:
# 387 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "But what about the tournament!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_3:
# 390 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "Little Boy$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_4:
# 391 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "I don't want to miss it!$"

LiordunTown_EventScript_HecticFatherCalmingChildren_Text_5:
# 394 "data/maps/Vulias_Liordun_Town/scripts.pory"
	.string "We'll just have to wait and see!$"
