WoltiaCity_BattleHall_MapScripts::
# 2 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WoltiaCity_BattleHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
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


WoltiaBattleHall_Tournament_RemoveAllTrainers::
# 15 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 16 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 17 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 18 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 19 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 22 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER01
# 23 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER02
# 24 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER03
# 25 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER04
# 26 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER05
	return


WoltiaBattleHall_TournamentBattleTrigger::
# 31 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 32 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_2
# 39 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_3
# 46 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_4
# 53 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_5
# 61 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_6
WoltiaBattleHall_TournamentBattleTrigger_1:
# 67 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentBattle
	return

WoltiaBattleHall_TournamentBattleTrigger_2:
# 33 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_PERRY
# 34 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER01
# 35 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 36 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER01
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_3:
# 40 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_TED
# 41 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER02
# 42 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 43 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER02
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_4:
# 47 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WADE
# 48 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER03
# 49 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 50 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER03
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_5:
# 55 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_MAY_ROUTE_110_TREECKO
# 56 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 57 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER04
# 58 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER04
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_6:
# 62 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WINONA_1
# 63 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER05
# 64 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 65 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER05
	goto WoltiaBattleHall_TournamentBattleTrigger_1


WoltiaBattleHall_TournamentBattle::
# 72 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 73 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 74 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_WOLTIA_TOURNAMENT_OPPONENT
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_0
# 81 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 84 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special SpawnCameraObject
# 85 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, WoltiaBattleHall_TournamentBattle_Movement_0
# 89 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 92 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement 0xFF, WoltiaBattleHall_TournamentBattle_Movement_1
# 95 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WoltiaBattleHall_TournamentBattle_Movement_2
# 98 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 99 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 102 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_1
# 111 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_2
# 122 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattle_3
# 131 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattle_4
# 175 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattle_5
	return

WoltiaBattleHall_TournamentBattle_1:
# 103 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_PERRY
# 104 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_PERRY, WoltiaBattleHall_TournamentBattle_Text_1, WoltiaBattleHall_TournamentBattle_Text_2, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_2:
# 112 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_TED
# 113 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_TED, WoltiaBattleHall_TournamentBattle_Text_3, WoltiaBattleHall_TournamentBattle_Text_4, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_3:
# 123 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_WADE
# 124 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WADE, WoltiaBattleHall_TournamentBattle_Text_5, WoltiaBattleHall_TournamentBattle_Text_6, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_4:
# 132 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_7
# 135 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 138 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq WoltiaBattleHall_TournamentBattle_11
# 147 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq WoltiaBattleHall_TournamentBattle_12
# 156 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_13
# 165 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_14
	return

WoltiaBattleHall_TournamentBattle_5:
# 176 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_WINONA_1
# 177 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_11:
# 139 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TORCHIC
# 140 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_12:
# 148 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_110_MUDKIP
# 149 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_13:
# 157 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_119_MUDKIP
# 158 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_14:
# 166 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_110_TREECKO
# 167 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return


WoltiaBattleHall_TournamentBattleAfter::
# 189 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 190 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 193 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleAfter_2
WoltiaBattleHall_TournamentBattleAfter_1:
# 197 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 198 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattleAfter_Text_0
# 204 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 205 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 206 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 207 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 208 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIA_TOURNEY_ORGANIZER, MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM
# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 210 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 6
# 211 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 212 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special RemoveCameraObject
# 213 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end

WoltiaBattleHall_TournamentBattleAfter_2:
# 194 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentPlayerWon
	goto WoltiaBattleHall_TournamentBattleAfter_1


WoltiaBattleHall_TournamentPlayerWon::
# 218 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 219 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_0
# 226 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 227 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 7
# 229 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 230 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement WOLTIATOURNEY_TRAINER05, WoltiaBattleHall_TournamentPlayerWon_Movement_0
# 231 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_1
# 234 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 235 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_2
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_3
# 242 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 244 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_BADGE02_GET
# 245 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 246 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_4, MSGBOX_SIGN
# 247 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 248 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 251 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 252 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_5, MSGBOX_SIGN
# 255 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 256 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 258 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 259 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_6
# 262 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 264 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 265 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 267 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_7
# 273 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 274 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 18
# 275 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 276 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 277 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_VULIAS_WOLTIA_CITY, 11, 15
# 278 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end


# 85 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_0:
# 86 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 86 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 86 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 86 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 87 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_1:
# 93 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 93 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 93 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
	step_end

# 95 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_2:
# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentPlayerWon_Movement_0:
# 230 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 230 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

WoltiaBattleHall_TournamentBattle_Text_0:
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

WoltiaBattleHall_TournamentBattle_Text_1:
# 106 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You won't be able to keep up!$"

WoltiaBattleHall_TournamentBattle_Text_2:
# 107 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I guess we're slower than I thought!$"

WoltiaBattleHall_TournamentBattle_Text_3:
# 115 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I've seen all the scenarios! There's no\n"
	.string "way I could lose!$"

WoltiaBattleHall_TournamentBattle_Text_4:
# 117 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Huh, I guess I didn't learn about that\n"
	.string "one.$"

WoltiaBattleHall_TournamentBattle_Text_5:
# 126 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "No one has better catches than me!$"

WoltiaBattleHall_TournamentBattle_Text_6:
# 127 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Ah, who is no one anyways?$"

WoltiaBattleHall_TournamentBattle_Text_7:
# 132 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! I knew we would \n"
	.string "both make it again! I've got another\l"
	.string "chance to show what I can do!$"

WoltiaBattleHall_TournamentBattle_Text_8:
# 142 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

WoltiaBattleHall_TournamentBattle_Text_9:
# 143 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "What is the secret {PLAYER}!$"

WoltiaBattleHall_TournamentBattle_Text_10:
# 179 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "It's been a long time since someone\n"
	.string "could best me, let's see if you're \l"
	.string "worth your salt.$"

WoltiaBattleHall_TournamentBattle_Text_11:
# 182 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Very salty!$"

WoltiaBattleHall_TournamentBattleAfter_Text_0:
# 198 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_0:
# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Candace!\p"
	.string "They now take the crown! What an upset!$"

WoltiaBattleHall_TournamentPlayerWon_Text_1:
# 231 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That was a great battle!\n"
	.string "I think Kilowattrel wants to have\l"
	.string "another go at you!$"

WoltiaBattleHall_TournamentPlayerWon_Text_2:
# 235 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Caww!$"

WoltiaBattleHall_TournamentPlayerWon_Text_3:
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You're the new Rep Trainer for Woltia\n"
	.string "City! Congratulations! Here is the \l"
	.string "Aerodrome Ribbon, the mark of your\l"
	.string "status.$"

WoltiaBattleHall_TournamentPlayerWon_Text_4:
# 246 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You got the Aerodrome Ribbon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_5:
# 252 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "The level cap has been raised to 30\p"
	.string "You can now use {COLOR RED}Rock Smash!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WoltiaBattleHall_TournamentPlayerWon_Text_6:
# 259 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Also, here's a little\n"
	.string "something extra from me, I think you'll\l"
	.string "find some good use for it.$"

WoltiaBattleHall_TournamentPlayerWon_Text_7:
# 267 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That move can't miss! It\n"
	.string "helps you get out of some sticky\l"
	.string "situations! I didn't help me\l"
	.string "enough against you!\p"
	.string "Thank you for the wonderful battle!$"
