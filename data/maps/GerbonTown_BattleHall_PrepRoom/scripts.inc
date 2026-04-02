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
# 27 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_Healer_Text_0
# 28 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_3
GerbonBattleHall_PrepRoom_Healer_1:
# 30 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 31 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
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
	fadescreenswapbuffers FADE_FROM_BLACK
# 19 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 20 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	special HealPlayerParty
# 21 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_Healer_Text_0
# 22 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_2
	goto GerbonBattleHall_PrepRoom_Healer_1


GerbonBattleHall_PrepRoom_HealerChansey::
# 36 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 37 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 38 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_HealerChansey_Text_0
# 39 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_HealerChansey_Text_1
# 40 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmoncry
# 41 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 42 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	closemessage
# 43 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	return


GerbonBattleHall_PrepRoom_MatchStarterWoman::
# 47 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 48 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 49 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 51 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 1
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_2
# 56 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_3
# 61 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_4
# 66 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_5
# 71 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_6
GerbonBattleHall_PrepRoom_MatchStarterWoman_1:
# 77 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_12
# 93 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_13
	return

GerbonBattleHall_PrepRoom_MatchStarterWoman_2:
# 52 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_1, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_3:
# 57 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_2, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_4:
# 62 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_3, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_5:
# 67 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_4, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_6:
# 72 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_5, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_12:
# 78 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 79 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_6
# 80 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 82 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 1
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_17
# 83 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_18
# 84 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_19
# 85 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_20
# 86 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_21
GerbonBattleHall_PrepRoom_MatchStarterWoman_16:
# 88 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 89 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	removeobject GERBON_TOURNEY_ORGANIZER
# 90 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL, 5, 3
	end

GerbonBattleHall_PrepRoom_MatchStarterWoman_13:
# 94 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setspeaker GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0
# 95 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_7
# 96 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 97 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	end

GerbonBattleHall_PrepRoom_MatchStarterWoman_17:
# 82 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 2
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_18:
# 83 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 3
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_19:
# 84 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 4
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_20:
# 85 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 5
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_21:
# 86 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
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
# 23 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "All done. Keep safe!$"

GerbonBattleHall_PrepRoom_Healer_Text_3:
# 28 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Keep safe!$"

GerbonBattleHall_PrepRoom_HealerChansey_Text_0:
# 38 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Chansey$"

GerbonBattleHall_PrepRoom_HealerChansey_Text_1:
# 39 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Chans-eee$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0:
# 49 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Organizer$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_1:
# 52 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your first\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_2:
# 57 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your second\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_3:
# 62 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your third\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_4:
# 67 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your fourth\n"
	.string "match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_5:
# 72 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Are you ready to start your final\n"
	.string "match against the current\l"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_6:
# 79 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Let's go!$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_7:
# 95 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Don't dilly dally!$"
