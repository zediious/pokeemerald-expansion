GerbonTown_BattleHall_PrepRoom_MapScripts::
	.byte 0


GerbonBattleHall_PrepRoom_Healer::
# 4 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 5 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 6 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_0, MSGBOX_YESNO
# 12 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonBattleHall_PrepRoom_Healer_2
# 20 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_2
GerbonBattleHall_PrepRoom_Healer_1:
# 22 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	end

GerbonBattleHall_PrepRoom_Healer_2:
# 13 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 14 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	special HealPlayerParty
# 15 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_Healer_Text_1
	goto GerbonBattleHall_PrepRoom_Healer_1


GerbonBattleHall_PrepRoom_HealerChansey::
# 27 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 28 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 29 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_HealerChansey_Text_0
# 30 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmoncry
# 31 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 32 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	closemessage
# 33 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	return


GerbonBattleHall_PrepRoom_MatchStarterWoman::
# 37 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	lock
# 38 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	faceplayer
# 40 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 1
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_2
# 45 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_3
# 50 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_4
# 55 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_5
# 60 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_6
GerbonBattleHall_PrepRoom_MatchStarterWoman_1:
# 66 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_12
# 80 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_13
	return

GerbonBattleHall_PrepRoom_MatchStarterWoman_2:
# 41 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_3:
# 46 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_1, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_4:
# 51 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_2, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_5:
# 56 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_3, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_6:
# 61 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_4, MSGBOX_YESNO
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_1

GerbonBattleHall_PrepRoom_MatchStarterWoman_12:
# 67 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_5
# 68 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 70 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 1
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_17
# 71 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_18
# 72 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_19
# 73 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_20
# 74 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_PrepRoom_MatchStarterWoman_21
GerbonBattleHall_PrepRoom_MatchStarterWoman_16:
# 76 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL, 5, 3
# 77 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	end

GerbonBattleHall_PrepRoom_MatchStarterWoman_13:
# 81 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	msgbox GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_6
# 82 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	waitmessage
# 83 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	release
	end

GerbonBattleHall_PrepRoom_MatchStarterWoman_17:
# 70 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 2
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_18:
# 71 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 3
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_19:
# 72 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 4
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_20:
# 73 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 5
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16

GerbonBattleHall_PrepRoom_MatchStarterWoman_21:
# 74 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 6
	goto GerbonBattleHall_PrepRoom_MatchStarterWoman_16


GerbonBattleHall_PrepRoom_Healer_Text_0:
# 7 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Hello, I can restore your tired\n"
	.string "Pokémon to full health.\p"
	.string "Would you like to rest your Pokémon?$"

GerbonBattleHall_PrepRoom_Healer_Text_1:
# 16 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "All done. Keep safe!$"

GerbonBattleHall_PrepRoom_Healer_Text_2:
# 20 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Keep safe!$"

GerbonBattleHall_PrepRoom_HealerChansey_Text_0:
# 29 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "Chans-eee$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_0:
# 41 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Are you ready to start\n"
	.string "your first match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_1:
# 46 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Are you ready to start\n"
	.string "your second match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_2:
# 51 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Are you ready to start\n"
	.string "your third match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_3:
# 56 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Are you ready to start\n"
	.string "your fourth match?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_4:
# 61 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Are you ready to start\n"
	.string "your final match against the current\l"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}?$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_5:
# 67 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Let's go!$"

GerbonBattleHall_PrepRoom_MatchStarterWoman_Text_6:
# 81 "data/maps/GerbonTown_BattleHall_PrepRoom/scripts.pory"
	.string "{COLOR GREEN}Organizer: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Don't dilly dally!$"
