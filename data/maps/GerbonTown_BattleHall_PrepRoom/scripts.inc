GerbonTown_BattleHall_PrepRoom_MapScripts::
	.byte 0


GerbonBattleHall_PrepRoom_Healer::
# 4 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 5 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 6 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_Healer_Text_0
# 7 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_1, MSGBOX_YESNO
# 13 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonBattleHall_PrepRoom_Healer_2
# 26 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_Healer_Text_0
# 27 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_3
GerbonBattleHall_PrepRoom_Healer_1:
# 29 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	end

GerbonBattleHall_PrepRoom_Healer_2:
# 14 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 15 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	playfanfare MUS_RG_HEAL
# 16 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitfanfare
# 17 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	delay 30
# 18 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 19 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	special HealPlayerParty
# 20 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_Healer_Text_0
# 21 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_2
	goto GerbonBattleHall_PrepRoom_Healer_1


GerbonBattleHall_PrepRoom_HealerChansey::
# 34 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 35 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 36 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_HealerChansey_Text_0
# 37 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_HealerChansey_Text_1
# 38 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmoncry
# 39 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 40 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	closemessage
# 41 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	return


GerbonBattleHall_PrepRoom_MatchStarterWoman::
# 45 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 46 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 47 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 49 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 1
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_2
# 54 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_3
# 59 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_4
# 64 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_5
# 69 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_6
GerbonBattleHall_PrepRoom_MatchStarterWoman_1:
# 75 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_12
# 91 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_13
	return

GerbonBattleHall_PrepRoom_MatchStarterWoman_2:
# 50 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_1, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_3:
# 55 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_2, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_4:
# 60 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_3, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_5:
# 65 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_4, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_6:
# 70 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_5, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_12:
# 76 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 77 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_6
# 78 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 80 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 1
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_17
# 81 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_18
# 82 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_19
# 83 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_20
# 84 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_21
GerbonBattleHall_PrepRoom_MatchStarterWoman_16:
# 86 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 87 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	removeobject GERBON_TOURNEY_ORGANIZER
# 88 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL, 5, 3
	end

GerbonBattleHall_PrepRoom_MatchStarterWoman_13:
# 92 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 93 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_7
# 94 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 95 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	end

GerbonBattleHall_PrepRoom_MatchStarterWoman_17:
# 80 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 2
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_18:
# 81 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 3
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_19:
# 82 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 4
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_20:
# 83 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 5
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_21:
# 84 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 6
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16


GerbonBattleHall_PrepRoom_Healer_Text_0:
# 6 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Nurse$"

GerbonBattleHall_PrepRoom_Healer_Text_1:
# 8 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Hello, I can restore your tired\n"
	.string "Pokémon to full health.\p"
	.string "Would you like to rest your Pokémon?$"

GerbonBattleHall_PrepRoom_Healer_Text_2:
# 22 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "All done. Keep safe!$"

GerbonBattleHall_PrepRoom_Healer_Text_3:
# 27 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Keep safe!$"

GerbonBattleHall_PrepRoom_HealerChansey_Text_0:
# 36 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Chansey$"

GerbonBattleHall_PrepRoom_HealerChansey_Text_1:
# 37 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Chans-eee$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0:
# 47 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Organizer$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_1:
# 50 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your first\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_2:
# 55 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your second\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_3:
# 60 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your third\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_4:
# 65 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your fourth\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_5:
# 70 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your final\n"
	.string "match against the current\l"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_6:
# 77 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Let's go!$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_7:
# 93 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Don't dilly dally!$"
