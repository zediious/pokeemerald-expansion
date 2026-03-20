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
	msgbox WoltiaBattleHall_TournamentBattle_Text_0
# 63 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 66 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, WoltiaBattleHall_TournamentBattle_Movement_0
# 71 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 74 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement 0xFF, WoltiaBattleHall_TournamentBattle_Movement_1
# 77 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL, WoltiaBattleHall_TournamentBattle_Movement_2
# 80 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmovement
# 81 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 84 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_1
# 92 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_2
# 100 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_TournamentBattle_3
# 108 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_TournamentBattle_4
# 147 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattle_5
	return

WoltiaBattleHall_TournamentBattle_1:
# 85 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_PERRY, WoltiaBattleHall_TournamentBattle_Text_1, WoltiaBattleHall_TournamentBattle_Text_2, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_2:
# 93 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_TED, WoltiaBattleHall_TournamentBattle_Text_3, WoltiaBattleHall_TournamentBattle_Text_4, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_3:
# 101 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WADE, WoltiaBattleHall_TournamentBattle_Text_5, WoltiaBattleHall_TournamentBattle_Text_6, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_4:
# 109 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattle_Text_7
# 111 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 114 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq WoltiaBattleHall_TournamentBattle_11
# 122 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq WoltiaBattleHall_TournamentBattle_12
# 130 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq WoltiaBattleHall_TournamentBattle_13
# 138 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq WoltiaBattleHall_TournamentBattle_14
	return

WoltiaBattleHall_TournamentBattle_5:
# 148 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, WoltiaBattleHall_TournamentBattle_Text_10, WoltiaBattleHall_TournamentBattle_Text_11, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_11:
# 115 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_12:
# 123 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_13:
# 131 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return

WoltiaBattleHall_TournamentBattle_14:
# 139 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, WoltiaBattleHall_TournamentBattle_Text_8, WoltiaBattleHall_TournamentBattle_Text_9, event_script = WoltiaBattleHall_TournamentBattleAfter
	return


WoltiaBattleHall_Tournament_RemoveAllTrainers::
# 161 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	removeobject VAR_WOLTIA_TOURNAMENT_OPPONENT_LOCAL
# 164 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 165 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 166 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 167 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 168 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
	return


WoltiaBattleHall_TournamentBattleAfter::
# 172 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	lock
# 173 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 60
# 176 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto_if_eq WoltiaBattleHall_TournamentBattleAfter_2
WoltiaBattleHall_TournamentBattleAfter_1:
# 180 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentBattleAfter_Text_0
# 186 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 187 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 188 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitse
# 189 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 190 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 191 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 6
# 192 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	call WoltiaBattleHall_Tournament_RemoveAllTrainers
# 193 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	special RemoveCameraObject
# 194 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end

WoltiaBattleHall_TournamentBattleAfter_2:
# 177 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	goto WoltiaBattleHall_TournamentPlayerWon
	goto WoltiaBattleHall_TournamentBattleAfter_1


WoltiaBattleHall_TournamentPlayerWon::
# 199 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_0
# 205 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 206 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 207 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 7
# 208 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	applymovement WOLTIATOURNEY_TRAINER05, WoltiaBattleHall_TournamentPlayerWon_Movement_0
# 210 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_1
# 219 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 221 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_BADGE02_GET
# 222 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 223 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_2, MSGBOX_SIGN
# 224 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 225 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 228 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 229 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_3, MSGBOX_SIGN
# 232 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitfanfare
# 233 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 235 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_4
# 239 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 241 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 242 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 244 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	msgbox WoltiaBattleHall_TournamentPlayerWon_Text_5
# 250 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	waitmessage
# 251 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 18
# 252 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	delay 30
# 253 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 254 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	warp MAP_VULIAS_WOLTIA_CITY, 11, 17
# 255 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	release
	end


# 67 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_0:
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 68 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 69 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_down
	step_end

# 74 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_1:
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
# 75 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentBattle_Movement_2:
# 78 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 78 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 78 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
WoltiaBattleHall_TournamentPlayerWon_Movement_0:
# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
# 209 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	walk_left
	step_end

WoltiaBattleHall_TournamentBattle_Text_0:
# 58 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

WoltiaBattleHall_TournamentBattle_Text_1:
# 87 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "We're gonna have a rockin time!$"

WoltiaBattleHall_TournamentBattle_Text_2:
# 88 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "I've been rocked!$"

WoltiaBattleHall_TournamentBattle_Text_3:
# 95 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "My Pokemon and I are unstoppable!$"

WoltiaBattleHall_TournamentBattle_Text_4:
# 96 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Immovable object, you know how it goes.$"

WoltiaBattleHall_TournamentBattle_Text_5:
# 103 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "The fruits of my labor will show!$"

WoltiaBattleHall_TournamentBattle_Text_6:
# 104 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "My fruits!$"

WoltiaBattleHall_TournamentBattle_Text_7:
# 109 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! We both made it to\n"
	.string "the end! It all comes down to this!$"

WoltiaBattleHall_TournamentBattle_Text_8:
# 117 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

WoltiaBattleHall_TournamentBattle_Text_9:
# 118 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You just keep blowing me away!$"

WoltiaBattleHall_TournamentBattle_Text_10:
# 150 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Congratulations on making it this far!\n"
	.string "Unfortunately, I'm going to have to\l"
	.string "your train here!$"

WoltiaBattleHall_TournamentBattle_Text_11:
# 153 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "Shows what I know!$"

WoltiaBattleHall_TournamentBattleAfter_Text_0:
# 180 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_0:
# 199 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Candace!\p"
	.string "They now take the crown! What an upset!$"

WoltiaBattleHall_TournamentPlayerWon_Text_1:
# 210 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I had so much fun! That was an\n"
	.string "amazing battle! I'm sure most would be\l"
	.string "unhappy in my shoes, but I can't stop\l"
	.string "smiling!\p"
	.string "You're the new Rep Trainer for Woltia\n"
	.string "City! Congratulations! Here is the \l"
	.string "Aerodrome Ribbon, the mark of your\l"
	.string "status.$"

WoltiaBattleHall_TournamentPlayerWon_Text_2:
# 223 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "You got the Aerodrome Ribbon!$"

WoltiaBattleHall_TournamentPlayerWon_Text_3:
# 229 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "The level cap has been raised to 30\p"
	.string "You can now use {COLOR RED}Rock Smash!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

WoltiaBattleHall_TournamentPlayerWon_Text_4:
# 236 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Also, here's a little\n"
	.string "something extra from me, I think you'll\l"
	.string "find some good use for it.$"

WoltiaBattleHall_TournamentPlayerWon_Text_5:
# 244 "data/maps/WoltiaCity_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That move can't miss! It\n"
	.string "helps you get out of some sticky\l"
	.string "situations! I didn't help me\l"
	.string "enough against you!\p"
	.string "Thank you for the wonderful battle!$"
