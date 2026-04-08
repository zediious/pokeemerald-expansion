WoltiaCity_BattleHall_MapScripts::
# 12 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WoltiaBattle_OnResume
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
	map_script_2 VAR_TEMP_6, 0, WoltiaBattleHall_CreateCrowdSprites
	.2byte 0


WoltiaBattle_OnResume::
# 16 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_BATTLEHALL_DRAWCROWD, 1
	goto_if_eq WoltiaBattle_OnResume_1
	return

WoltiaBattle_OnResume_1:
# 18 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_BATTLEHALL_DRAWCROWD, 0
# 19 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_CreateCrowdSprites
	return


WoltiaBattleHall_Tournament_RemoveAllTrainers::
# 27 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 28 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 29 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 30 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 31 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 34 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER01
# 35 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER02
# 36 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER03
# 37 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER04
# 38 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER05
	return


WoltiaBattleHall_TournamentBattleTrigger::
# 43 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 44 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_2
# 51 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_3
# 58 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_4
# 65 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_5
# 73 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_6
WoltiaBattleHall_TournamentBattleTrigger_1:
# 79 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentBattle
	return

WoltiaBattleHall_TournamentBattleTrigger_2:
# 45 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_PERRY
# 46 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER01
# 47 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 48 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER01
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_3:
# 52 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_TED
# 53 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER02
# 54 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 55 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER02
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_4:
# 59 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WADE
# 60 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER03
# 61 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 62 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER03
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_5:
# 67 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_MAY_ROUTE_110_TREECKO
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 69 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER04
# 70 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER04
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_6:
# 74 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WINONA_1
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER05
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 77 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER05
	goto WoltiaBattleHall_TournamentBattleTrigger_1


WoltiaBattleHall_TournamentBattle::
# 84 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 85 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 86 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_BATTLEHALL_DRAWCROWD, 1
# 87 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_WOLTIA_TOURNAMENT_OPPONENT
# 88 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 89 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_0
# 90 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_1
# 95 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 98 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, WoltiaBattleHall_TournamentBattle_Movement_0
# 103 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 106 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaBattleHall_TournamentBattle_Movement_1
# 109 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WoltiaBattleHall_TournamentBattle_Movement_2
# 112 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 113 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 116 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_1
# 125 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_2
# 136 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattle_3
# 145 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattle_4
# 190 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattle_5
	return

WoltiaBattleHall_TournamentBattle_1:
# 117 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_PERRY
# 118 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_PERRY, WoltiaBattleHall_TournamentBattle_Text_2, WoltiaBattleHall_TournamentBattle_Text_3, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_2:
# 126 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_TED
# 127 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_TED, WoltiaBattleHall_TournamentBattle_Text_4, WoltiaBattleHall_TournamentBattle_Text_5, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_3:
# 137 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_WADE
# 138 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WADE, WoltiaBattleHall_TournamentBattle_Text_6, WoltiaBattleHall_TournamentBattle_Text_7, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_4:
# 146 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_8
# 147 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_9
# 150 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 153 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq WoltiaBattleHall_TournamentBattle_11
# 162 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq WoltiaBattleHall_TournamentBattle_12
# 171 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_13
# 180 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_14
	return

WoltiaBattleHall_TournamentBattle_5:
# 191 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_WINONA_1
# 192 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, WoltiaBattleHall_TournamentBattle_Text_12, WoltiaBattleHall_TournamentBattle_Text_13, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_11:
# 154 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TORCHIC
# 155 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_12:
# 163 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_110_MUDKIP
# 164 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_13:
# 172 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_119_MUDKIP
# 173 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_14:
# 181 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_110_TREECKO
# 182 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return


WoltiaBattleHall_TournamentBattleAfter::
# 204 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 205 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 208 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleAfter_2
WoltiaBattleHall_TournamentBattleAfter_1:
# 212 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 213 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_0
# 214 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattleAfter_Text_0
# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 221 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 222 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 223 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 224 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIA_TOURNEY_ORGANIZER, MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM
# 225 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 226 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 6
# 227 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special RemoveCameraObject
# 229 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end

WoltiaBattleHall_TournamentBattleAfter_2:
# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentPlayerWon
	goto WoltiaBattleHall_TournamentBattleAfter_1


WoltiaBattleHall_TournamentPlayerWon::
# 234 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 235 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 237 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentBattle_Text_0
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_0
# 244 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 245 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 246 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 7
# 247 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 248 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement WOLTIATOURNEY_TRAINER05, WoltiaBattleHall_TournamentPlayerWon_Movement_0
# 249 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 250 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_2
# 253 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 255 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 256 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_3
# 260 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 262 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_BADGE02_GET
# 263 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 264 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_4, MSGBOX_SIGN
# 265 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 266 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 269 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 270 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_5, MSGBOX_SIGN
# 273 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 274 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 276 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 277 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 278 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_6
# 281 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 283 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 284 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 286 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setspeaker WoltiaBattleHall_TournamentPlayerWon_Text_1
# 287 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_7
# 292 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 293 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 18
# 294 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIA_AERODROME_BLOCKER
# 295 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_GERBON_RUVELMOMKID
# 296 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIATOURNEY_DISABLED
# 297 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIATOURNEY_ENABLED
# 298 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 299 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 300 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_VULIAS_WOLTIA_CITY, 11, 15
# 301 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end


WoltiaBattleHall_CreateCrowdSprites::
# 307 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 1, 17, 3, direction = DIR_NORTH
# 308 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 1, 2, 17, 3, direction = DIR_NORTH
# 309 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 2, 3, 17, 3, direction = DIR_NORTH
# 310 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 3, 1, 15, 3, direction = DIR_NORTH
# 311 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 4, 3, 15, 3, direction = DIR_NORTH
# 312 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 1, 13, 3, direction = DIR_NORTH
# 313 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 3, 11, 3, direction = DIR_NORTH
# 314 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BUG_CATCHER, 7, 1, 9, 3, direction = DIR_NORTH
# 315 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 8, 2, 9, 3, direction = DIR_NORTH
# 316 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 9, 5, 17, 3, direction = DIR_NORTH
# 317 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 10, 6, 17, 3, direction = DIR_NORTH
# 318 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 11, 7, 17, 3, direction = DIR_NORTH
# 319 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NEWPOLICEMAN, 12, 6, 15, 3, direction = DIR_NORTH
# 320 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 13, 5, 13, 3, direction = DIR_NORTH
# 321 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 7, 13, 3, direction = DIR_NORTH
# 322 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NURSE, 15, 5, 11, 3, direction = DIR_NORTH
# 323 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 16, 6, 9, 3, direction = DIR_NORTH
# 326 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 17, 12, 9, 3, direction = DIR_NORTH
# 327 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 18, 14, 9, 3, direction = DIR_NORTH
# 328 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 19, 16, 9, 3, direction = DIR_NORTH
# 329 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 20, 17, 9, 3, direction = DIR_NORTH
# 330 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 21, 12, 11, 3, direction = DIR_NORTH
# 331 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 22, 12, 13, 3, direction = DIR_NORTH
# 332 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 23, 17, 13, 3, direction = DIR_NORTH
	return


# 99 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_0:
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 101 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_down
	step_end

# 106 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_1:
# 107 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 107 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 107 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_2:
# 110 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 110 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 110 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

# 248 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentPlayerWon_Movement_0:
# 248 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 248 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

WoltiaBattleHall_TournamentBattle_Text_0:
# 89 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Announcer$"

WoltiaBattleHall_TournamentBattle_Text_1:
# 90 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

WoltiaBattleHall_TournamentBattle_Text_2:
# 120 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You won't be able to keep up!$"

WoltiaBattleHall_TournamentBattle_Text_3:
# 121 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I guess we're slower than I thought!$"

WoltiaBattleHall_TournamentBattle_Text_4:
# 129 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I've seen all the scenarios! There's no\n"
	.string "way I could lose!$"

WoltiaBattleHall_TournamentBattle_Text_5:
# 131 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Huh, I guess I didn't learn about that\n"
	.string "one.$"

WoltiaBattleHall_TournamentBattle_Text_6:
# 140 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "No one has better catches than me!$"

WoltiaBattleHall_TournamentBattle_Text_7:
# 141 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Ah, who is no one anyways?$"

WoltiaBattleHall_TournamentBattle_Text_8:
# 146 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Jordan$"

WoltiaBattleHall_TournamentBattle_Text_9:
# 147 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{PLAYER}! I knew we would both make\n"
	.string "it again! I've got another chance to\l"
	.string "show you what I can do!$"

WoltiaBattleHall_TournamentBattle_Text_10:
# 157 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

WoltiaBattleHall_TournamentBattle_Text_11:
# 158 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "What is the secret {PLAYER}!$"

WoltiaBattleHall_TournamentBattle_Text_12:
# 194 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "It's been a long time since someone\n"
	.string "could best me, let's see if you're \l"
	.string "worth your salt.$"

WoltiaBattleHall_TournamentBattle_Text_13:
# 197 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Very salty!$"

WoltiaBattleHall_TournamentBattleAfter_Text_0:
# 214 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_0:
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Candace!\p"
	.string "They now take the crown! What an upset!$"

WoltiaBattleHall_TournamentPlayerWon_Text_1:
# 249 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Candace$"

WoltiaBattleHall_TournamentPlayerWon_Text_2:
# 250 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "That was a great battle! I think\n"
	.string "Kilowattrel wants to have another go at\l"
	.string "you!$"

WoltiaBattleHall_TournamentPlayerWon_Text_3:
# 256 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You're the new Rep Trainer for Woltia\n"
	.string "City! Congratulations! Here is the \l"
	.string "Aerodrome Ribbon, the mark of your\l"
	.string "status.$"

WoltiaBattleHall_TournamentPlayerWon_Text_4:
# 264 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You got the Aerodrome Ribbon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_5:
# 270 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "The level cap has been raised to 34\p"
	.string "You can now use {COLOR RED}Rock Smash!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WoltiaBattleHall_TournamentPlayerWon_Text_6:
# 278 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Also, here's a little something extra\n"
	.string "from me, I think you'll find some good\l"
	.string "use for it.$"

WoltiaBattleHall_TournamentPlayerWon_Text_7:
# 287 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "That move can't miss! It helps you get\n"
	.string "out of some sticky situations! It\l"
	.string "didn't help me enough against you!\p"
	.string "Thank you for the wonderful battle!$"
