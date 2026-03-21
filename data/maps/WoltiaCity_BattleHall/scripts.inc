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


WoltiaBattleHall_TournamentBattleTrigger::
# 15 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_2
# 22 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_3
# 29 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_4
# 36 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_5
# 44 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleTrigger_6
WoltiaBattleHall_TournamentBattleTrigger_1:
# 50 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentBattle
	return

WoltiaBattleHall_TournamentBattleTrigger_2:
# 16 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_PERRY
# 17 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER01
# 18 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 19 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER01
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_3:
# 23 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_TED
# 24 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER02
# 25 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 26 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER02
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_4:
# 30 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WADE
# 31 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER03
# 32 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 33 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER03
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_5:
# 38 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_MAY_ROUTE_110_TREECKO
# 39 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 40 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER04
# 41 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER04
	goto WoltiaBattleHall_TournamentBattleTrigger_1

WoltiaBattleHall_TournamentBattleTrigger_6:
# 45 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT, TRAINER_WINONA_1
# 46 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WOLTIATOURNEY_TRAINER05
# 47 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	clearflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 48 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	addobject WOLTIATOURNEY_TRAINER05
	goto WoltiaBattleHall_TournamentBattleTrigger_1


WoltiaBattleHall_TournamentBattle::
# 55 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 56 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 57 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_WOLTIA_TOURNAMENT_OPPONENT
# 58 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 59 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_0
# 64 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 67 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special SpawnCameraObject
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, WoltiaBattleHall_TournamentBattle_Movement_0
# 72 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement 0xFF, WoltiaBattleHall_TournamentBattle_Movement_1
# 78 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WoltiaBattleHall_TournamentBattle_Movement_2
# 81 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 82 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 85 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_1
# 93 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_2
# 103 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattle_3
# 111 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattle_4
# 151 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattle_5
	return

WoltiaBattleHall_TournamentBattle_1:
# 86 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_PERRY, WoltiaBattleHall_TournamentBattle_Text_1, WoltiaBattleHall_TournamentBattle_Text_2, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_2:
# 94 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_TED, WoltiaBattleHall_TournamentBattle_Text_3, WoltiaBattleHall_TournamentBattle_Text_4, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_3:
# 104 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WADE, WoltiaBattleHall_TournamentBattle_Text_5, WoltiaBattleHall_TournamentBattle_Text_6, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_4:
# 112 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_7
# 115 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 118 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq WoltiaBattleHall_TournamentBattle_11
# 126 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq WoltiaBattleHall_TournamentBattle_12
# 134 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_13
# 142 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_14
	return

WoltiaBattleHall_TournamentBattle_5:
# 152 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_11:
# 119 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_12:
# 127 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_13:
# 135 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_14:
# 143 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return


WoltiaBattleHall_Tournament_RemoveAllTrainers::
# 165 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER01
# 166 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER02
# 167 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER03
# 168 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER04
# 169 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject WOLTIATOURNEY_TRAINER05
# 172 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 173 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 174 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 175 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 176 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
	return


WoltiaBattleHall_TournamentBattleAfter::
# 180 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 181 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 184 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleAfter_2
WoltiaBattleHall_TournamentBattleAfter_1:
# 188 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 189 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattleAfter_Text_0
# 195 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 196 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 197 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 198 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 200 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 6
# 201 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 202 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end

WoltiaBattleHall_TournamentBattleAfter_2:
# 185 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentPlayerWon
	goto WoltiaBattleHall_TournamentBattleAfter_1


WoltiaBattleHall_TournamentPlayerWon::
# 208 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 210 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_0
# 216 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 217 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 218 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 7
# 219 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement WOLTIATOURNEY_TRAINER05, WoltiaBattleHall_TournamentPlayerWon_Movement_0
# 221 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_1
# 224 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 225 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_2
# 226 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_3
# 232 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 234 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_BADGE02_GET
# 235 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_4, MSGBOX_SIGN
# 237 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 238 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 241 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 242 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_5, MSGBOX_SIGN
# 245 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 246 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 248 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 249 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_6
# 252 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 254 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 255 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 257 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_7
# 263 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 264 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 18
# 265 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 266 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 267 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_VULIAS_WOLTIA_CITY, 11, 15
# 268 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end


# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_0:
# 69 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 69 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 69 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 69 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 70 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_1:
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 76 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
	step_end

# 78 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_2:
# 79 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 79 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 79 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentPlayerWon_Movement_0:
# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 220 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

WoltiaBattleHall_TournamentBattle_Text_0:
# 59 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

WoltiaBattleHall_TournamentBattle_Text_1:
# 88 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You won't be able to keep up!$"

WoltiaBattleHall_TournamentBattle_Text_2:
# 89 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I guess we're slower than I thought!$"

WoltiaBattleHall_TournamentBattle_Text_3:
# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I've seen all the scenarios! There's no\n"
	.string "way I could lose!$"

WoltiaBattleHall_TournamentBattle_Text_4:
# 98 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Huh, I guess I didn't learn about that\n"
	.string "one.$"

WoltiaBattleHall_TournamentBattle_Text_5:
# 106 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "No one has better catches than me!$"

WoltiaBattleHall_TournamentBattle_Text_6:
# 107 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Ah, who is no one anyways?$"

WoltiaBattleHall_TournamentBattle_Text_7:
# 112 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! I knew we would \n"
	.string "both make it again! I've got another\l"
	.string "chance to show what I can do!$"

WoltiaBattleHall_TournamentBattle_Text_8:
# 121 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

WoltiaBattleHall_TournamentBattle_Text_9:
# 122 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "What is the secret {PLAYER}!$"

WoltiaBattleHall_TournamentBattle_Text_10:
# 154 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "It's been a long time since someone\n"
	.string "could best me, let's see if you're \l"
	.string "worth your salt.$"

WoltiaBattleHall_TournamentBattle_Text_11:
# 157 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Very salty!$"

WoltiaBattleHall_TournamentBattleAfter_Text_0:
# 189 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_0:
# 210 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Candace!\p"
	.string "They now take the crown! What an upset!$"

WoltiaBattleHall_TournamentPlayerWon_Text_1:
# 221 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That was a great battle!\n"
	.string "I think Kilowattrel wants to have\l"
	.string "another go at you!$"

WoltiaBattleHall_TournamentPlayerWon_Text_2:
# 225 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Caww!$"

WoltiaBattleHall_TournamentPlayerWon_Text_3:
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You're the new Rep Trainer for Woltia\n"
	.string "City! Congratulations! Here is the \l"
	.string "Aerodrome Ribbon, the mark of your\l"
	.string "status.$"

WoltiaBattleHall_TournamentPlayerWon_Text_4:
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You got the Aerodrome Ribbon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_5:
# 242 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "The level cap has been raised to 30\p"
	.string "You can now use {COLOR RED}Rock Smash!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WoltiaBattleHall_TournamentPlayerWon_Text_6:
# 249 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Also, here's a little\n"
	.string "something extra from me, I think you'll\l"
	.string "find some good use for it.$"

WoltiaBattleHall_TournamentPlayerWon_Text_7:
# 257 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That move can't miss! It\n"
	.string "helps you get out of some sticky\l"
	.string "situations! I didn't help me\l"
	.string "enough against you!\p"
	.string "Thank you for the wonderful battle!$"
