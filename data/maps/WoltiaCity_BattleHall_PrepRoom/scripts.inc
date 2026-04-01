WoltiaCity_BattleHall_PrepRoom_MapScripts::
	.byte 0


WoltiaBattleHall_PrepRoom_Healer::
# 4 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	lock
# 5 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 6 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_Healer_Text_0
# 7 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_Healer_Text_1, MSGBOX_YESNO
# 13 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaBattleHall_PrepRoom_Healer_2
# 26 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_Healer_Text_0
# 27 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_Healer_Text_3
WoltiaBattleHall_PrepRoom_Healer_1:
# 29 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	release
	end

WoltiaBattleHall_PrepRoom_Healer_2:
# 14 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 15 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	playfanfare MUS_RG_HEAL
# 16 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	waitfanfare
# 17 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	delay 30
# 18 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	special HealPlayerParty
# 20 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_Healer_Text_0
# 21 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_Healer_Text_2
	goto WoltiaBattleHall_PrepRoom_Healer_1


WoltiaBattleHall_PrepRoom_HealerChansey::
# 34 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	lock
# 35 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 36 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_HealerChansey_Text_0
# 37 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_HealerChansey_Text_1
# 38 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	waitmoncry
# 39 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 40 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	closemessage
# 41 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	release
	return


WoltiaBattleHall_PrepRoom_MatchStarterWoman::
# 45 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	lock
# 46 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 47 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 49 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 1
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_2
# 54 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_3
# 59 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_4
# 64 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_5
# 69 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_6
WoltiaBattleHall_PrepRoom_MatchStarterWoman_1:
# 75 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_12
# 91 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_13
	return

WoltiaBattleHall_PrepRoom_MatchStarterWoman_2:
# 50 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_1, MSGBOX_YESNO
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_1

WoltiaBattleHall_PrepRoom_MatchStarterWoman_3:
# 55 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_2, MSGBOX_YESNO
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_1

WoltiaBattleHall_PrepRoom_MatchStarterWoman_4:
# 60 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_3, MSGBOX_YESNO
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_1

WoltiaBattleHall_PrepRoom_MatchStarterWoman_5:
# 65 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_4, MSGBOX_YESNO
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_1

WoltiaBattleHall_PrepRoom_MatchStarterWoman_6:
# 70 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_5, MSGBOX_YESNO
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_1

WoltiaBattleHall_PrepRoom_MatchStarterWoman_12:
# 76 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 77 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_6
# 78 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 80 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 1
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_17
# 81 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_18
# 82 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_19
# 83 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_20
# 84 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	compare VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto_if_eq WoltiaBattleHall_PrepRoom_MatchStarterWoman_21
WoltiaBattleHall_PrepRoom_MatchStarterWoman_16:
# 86 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	lock
# 87 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	removeobject WOLTIA_TOURNEY_ORGANIZER
# 88 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL, 5, 5
	end

WoltiaBattleHall_PrepRoom_MatchStarterWoman_13:
# 92 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setspeaker WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 93 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	msgbox WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_7
# 94 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 95 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	release
	end

WoltiaBattleHall_PrepRoom_MatchStarterWoman_17:
# 80 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 2
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_16

WoltiaBattleHall_PrepRoom_MatchStarterWoman_18:
# 81 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 3
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_16

WoltiaBattleHall_PrepRoom_MatchStarterWoman_19:
# 82 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 4
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_16

WoltiaBattleHall_PrepRoom_MatchStarterWoman_20:
# 83 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 5
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_16

WoltiaBattleHall_PrepRoom_MatchStarterWoman_21:
# 84 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 6
	goto WoltiaBattleHall_PrepRoom_MatchStarterWoman_16


WoltiaBattleHall_PrepRoom_Healer_Text_0:
# 6 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Nurse$"

WoltiaBattleHall_PrepRoom_Healer_Text_1:
# 8 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Hello, I can restore your tired\n"
	.string "Pokémon to full health.\p"
	.string "Would you like to rest your Pokémon?$"

WoltiaBattleHall_PrepRoom_Healer_Text_2:
# 22 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "All done. Keep safe!$"

WoltiaBattleHall_PrepRoom_Healer_Text_3:
# 27 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Keep safe!$"

WoltiaBattleHall_PrepRoom_HealerChansey_Text_0:
# 36 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Chansey$"

WoltiaBattleHall_PrepRoom_HealerChansey_Text_1:
# 37 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Chans-eee$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_0:
# 47 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Organizer$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_1:
# 50 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your first\n"
	.string "match?$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_2:
# 55 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your second\n"
	.string "match?$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_3:
# 60 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your third\n"
	.string "match?$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_4:
# 65 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your forfth\n"
	.string "match?$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_5:
# 70 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your final\n"
	.string "match against the current\l"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, Candace?$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_6:
# 77 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Let's go!$"

WoltiaBattleHall_PrepRoom_MatchStarterWoman_Text_7:
# 93 "data/maps/WoltiaCity_BattleHall_PrepRoom/scripts.pory"
	.string "Don't dilly dally!$"
