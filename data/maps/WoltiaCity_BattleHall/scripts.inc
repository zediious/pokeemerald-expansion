WoltiaCity_BattleHall_MapScripts::
# 2 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WoltiaCity_BattleHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, WoltiaCity_BattleHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

WoltiaCity_BattleHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script_2 VAR_WOLTIA_TOURNAMENT_STATE, 2, WoltiaBattleHall_TournamentBattleTrigger
# 4 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script_2 VAR_WOLTIA_TOURNAMENT_STATE, 3, WoltiaBattleHall_TournamentBattleTrigger
# 5 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script_2 VAR_WOLTIA_TOURNAMENT_STATE, 4, WoltiaBattleHall_TournamentBattleTrigger
# 6 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script_2 VAR_WOLTIA_TOURNAMENT_STATE, 5, WoltiaBattleHall_TournamentBattleTrigger
# 7 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script_2 VAR_WOLTIA_TOURNAMENT_STATE, 6, WoltiaBattleHall_TournamentBattleTrigger
	.2byte 0

WoltiaCity_BattleHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, WoltiaBattleHall_CreateCrowdSprites
	.2byte 0


WoltiaBattleHall_Tournament_RemoveAllTrainers::
# 18 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 19 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 20 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 21 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 22 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 25 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER01
# 26 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER02
# 27 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER03
# 28 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER04
# 29 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER05
	return


WoltiaBattleHall_TournamentBattleTrigger::
# 34 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 35 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_2
# 42 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_3
# 49 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_4
# 56 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_5
# 64 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_6
WoltiaBattleHall_TournamentBattleTrigger_1:
# 70 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentBattle
	return

WoltiaBattleHall_TournamentBattleTrigger_2:
# 36 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_PERRY
# 37 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER01
# 38 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 39 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER01
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_3:
# 43 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_TED
# 44 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER02
# 45 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 46 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER02
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_4:
# 50 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WADE
# 51 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER03
# 52 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 53 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER03
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_5:
# 58 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_MAY_ROUTE_110_TREECKO
# 59 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 60 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER04
# 61 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER04
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_6:
# 65 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WINONA_1
# 66 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER05
# 67 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER05
	goto WoltiaBattleHall_TournamentBattleTrigger_1


WoltiaBattleHall_TournamentBattle::
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 77 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_WOLTIA_TOURNAMENT_OPPONENT
# 78 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 79 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_0
# 80 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_1
# 85 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 88 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special SpawnCameraObject
# 89 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, WoltiaBattleHall_TournamentBattle_Movement_0
# 93 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaBattleHall_TournamentBattle_Movement_1
# 99 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WoltiaBattleHall_TournamentBattle_Movement_2
# 102 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 103 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 106 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_1
# 115 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_2
# 126 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattle_3
# 135 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattle_4
# 180 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattle_5
	return

WoltiaBattleHall_TournamentBattle_1:
# 107 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_PERRY
# 108 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_PERRY, WoltiaBattleHall_TournamentBattle_Text_2, WoltiaBattleHall_TournamentBattle_Text_3, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_2:
# 116 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_TED
# 117 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_TED, WoltiaBattleHall_TournamentBattle_Text_4, WoltiaBattleHall_TournamentBattle_Text_5, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_3:
# 127 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_WADE
# 128 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WADE, WoltiaBattleHall_TournamentBattle_Text_6, WoltiaBattleHall_TournamentBattle_Text_7, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_4:
# 136 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_8
# 137 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_9
# 140 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 143 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq WoltiaBattleHall_TournamentBattle_11
# 152 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq WoltiaBattleHall_TournamentBattle_12
# 161 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_13
# 170 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_14
	return

WoltiaBattleHall_TournamentBattle_5:
# 181 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_WINONA_1
# 182 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, WoltiaBattleHall_TournamentBattle_Text_12, WoltiaBattleHall_TournamentBattle_Text_13, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_11:
# 144 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TORCHIC
# 145 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_12:
# 153 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_110_MUDKIP
# 154 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_13:
# 162 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_119_MUDKIP
# 163 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_14:
# 171 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_110_TREECKO
# 172 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return


WoltiaBattleHall_TournamentBattleAfter::
# 194 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 195 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 198 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleAfter_2
WoltiaBattleHall_TournamentBattleAfter_1:
# 202 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 203 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_0
# 204 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattleAfter_Text_0
# 210 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 211 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 212 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 213 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 214 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIA_TOURNEY_ORGANIZER, MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM
# 215 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 216 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 6
# 217 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 218 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special RemoveCameraObject
# 219 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end

WoltiaBattleHall_TournamentBattleAfter_2:
# 199 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentPlayerWon
	goto WoltiaBattleHall_TournamentBattleAfter_1


WoltiaBattleHall_TournamentPlayerWon::
# 224 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 225 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 226 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 227 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_0
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_0
# 234 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 235 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 7
# 237 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement WOLTIATOURNEY_TRAINER05, WoltiaBattleHall_TournamentPlayerWon_Movement_0
# 239 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 240 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_2
# 243 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 245 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 246 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_3
# 250 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 252 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_BADGE02_GET
# 253 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 254 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_4, MSGBOX_SIGN
# 255 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 256 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 259 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 260 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_5, MSGBOX_SIGN
# 263 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 264 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 266 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 267 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 268 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_6
# 271 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 273 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 274 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 276 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 277 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_7
# 282 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 283 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 18
# 284 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIA_AERODROME_BLOCKER
# 285 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_GERBON_RUVELMOMKID
# 286 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIATOURNEY_DISABLED
# 287 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIATOURNEY_ENABLED
# 288 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 289 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 290 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_VULIAS_WOLTIA_CITY, 11, 15
# 291 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end


WoltiaBattleHall_CreateCrowdSprites::
# 296 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_TEMP_5, 1
# 299 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 1, 17, 3, direction = DIR_NORTH
# 300 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 0, 2, 17, 3, direction = DIR_NORTH
# 301 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 0, 3, 17, 3, direction = DIR_NORTH
# 302 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 0, 1, 15, 3, direction = DIR_NORTH
# 303 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 0, 3, 15, 3, direction = DIR_NORTH
# 304 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 0, 1, 13, 3, direction = DIR_NORTH
# 305 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 0, 3, 11, 3, direction = DIR_NORTH
# 306 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BUG_CATCHER, 0, 1, 9, 3, direction = DIR_NORTH
# 307 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 0, 2, 9, 3, direction = DIR_NORTH
# 308 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 0, 5, 17, 3, direction = DIR_NORTH
# 309 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 0, 6, 17, 3, direction = DIR_NORTH
# 310 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 0, 7, 17, 3, direction = DIR_NORTH
# 311 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 0, 6, 15, 3, direction = DIR_NORTH
# 312 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 0, 5, 13, 3, direction = DIR_NORTH
# 313 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 0, 7, 13, 3, direction = DIR_NORTH
# 314 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NURSE, 0, 5, 11, 3, direction = DIR_NORTH
# 315 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 0, 6, 9, 3, direction = DIR_NORTH
# 318 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 0, 12, 9, 3, direction = DIR_NORTH
# 319 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 0, 14, 9, 3, direction = DIR_NORTH
# 320 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 0, 16, 9, 3, direction = DIR_NORTH
# 321 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 0, 17, 9, 3, direction = DIR_NORTH
# 322 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 12, 11, 3, direction = DIR_NORTH
# 323 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 0, 12, 13, 3, direction = DIR_NORTH
# 324 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 0, 17, 13, 3, direction = DIR_NORTH
	return


# 89 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_0:
# 90 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 90 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 90 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 90 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 91 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_down
	step_end

# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_1:
# 97 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 97 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 97 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
	step_end

# 99 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_2:
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentPlayerWon_Movement_0:
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

WoltiaBattleHall_TournamentBattle_Text_0:
# 79 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Announcer$"

WoltiaBattleHall_TournamentBattle_Text_1:
# 80 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

WoltiaBattleHall_TournamentBattle_Text_2:
# 110 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You won't be able to keep up!$"

WoltiaBattleHall_TournamentBattle_Text_3:
# 111 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I guess we're slower than I thought!$"

WoltiaBattleHall_TournamentBattle_Text_4:
# 119 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I've seen all the scenarios! There's no\n"
	.string "way I could lose!$"

WoltiaBattleHall_TournamentBattle_Text_5:
# 121 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Huh, I guess I didn't learn about that\n"
	.string "one.$"

WoltiaBattleHall_TournamentBattle_Text_6:
# 130 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "No one has better catches than me!$"

WoltiaBattleHall_TournamentBattle_Text_7:
# 131 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Ah, who is no one anyways?$"

WoltiaBattleHall_TournamentBattle_Text_8:
# 136 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Jordan$"

WoltiaBattleHall_TournamentBattle_Text_9:
# 137 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{PLAYER}! I knew we would both make\n"
	.string "it again! I've got another chance to\l"
	.string "show you what I can do!$"

WoltiaBattleHall_TournamentBattle_Text_10:
# 147 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

WoltiaBattleHall_TournamentBattle_Text_11:
# 148 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "What is the secret {PLAYER}!$"

WoltiaBattleHall_TournamentBattle_Text_12:
# 184 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "It's been a long time since someone\n"
	.string "could best me, let's see if you're \l"
	.string "worth your salt.$"

WoltiaBattleHall_TournamentBattle_Text_13:
# 187 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Very salty!$"

WoltiaBattleHall_TournamentBattleAfter_Text_0:
# 204 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_0:
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Candace!\p"
	.string "They now take the crown! What an upset!$"

WoltiaBattleHall_TournamentPlayerWon_Text_1:
# 239 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Candace$"

WoltiaBattleHall_TournamentPlayerWon_Text_2:
# 240 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "That was a great battle! I think\n"
	.string "Kilowattrel wants to have another go at\l"
	.string "you!$"

WoltiaBattleHall_TournamentPlayerWon_Text_3:
# 246 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You're the new Rep Trainer for Woltia\n"
	.string "City! Congratulations! Here is the \l"
	.string "Aerodrome Ribbon, the mark of your\l"
	.string "status.$"

WoltiaBattleHall_TournamentPlayerWon_Text_4:
# 254 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You got the Aerodrome Ribbon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_5:
# 260 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "The level cap has been raised to 34\p"
	.string "You can now use {COLOR RED}Rock Smash!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WoltiaBattleHall_TournamentPlayerWon_Text_6:
# 268 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Also, here's a little something extra\n"
	.string "from me, I think you'll find some good\l"
	.string "use for it.$"

WoltiaBattleHall_TournamentPlayerWon_Text_7:
# 277 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "That move can't miss! It helps you get\n"
	.string "out of some sticky situations! It\l"
	.string "didn't help me enough against you!\p"
	.string "Thank you for the wonderful battle!$"
