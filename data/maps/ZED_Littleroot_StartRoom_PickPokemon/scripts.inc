ZED_Littleroot_StartRoom_PickPokemon_MapScripts::
	.byte 0


LittlerootTown_StartGame_PokemonChoice1::
# 4 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 5 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice1_2
# 11 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_SIMISEAR, 10, 3
# 12 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_SIMISEAR, CRY_MODE_NORMAL
# 13 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 14 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_1, MSGBOX_YESNO
# 15 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice1_4
# 26 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 27 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_3
# 28 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 29 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice1_2:
# 6 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 8 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice1_4:
# 16 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_SIMISEAR, 1
# 17 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 18 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_2
# 19 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_01
# 20 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 21 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 22 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 23 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice2::
# 34 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 35 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice2_2
# 41 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_SIMISAGE, 10, 3
# 42 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_SIMISAGE, CRY_MODE_NORMAL
# 43 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 44 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice2_Text_0, MSGBOX_YESNO
# 45 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice2_4
# 56 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 57 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice2_Text_2
# 58 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 59 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice2_2:
# 36 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 38 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice2_4:
# 46 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_SIMISAGE, 1
# 47 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 48 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice2_Text_1
# 49 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_02
# 50 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 51 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 52 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 53 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice3::
# 64 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 65 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice3_2
# 71 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_SIMIPOUR, 10, 3
# 72 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_SIMIPOUR, CRY_MODE_NORMAL
# 73 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 74 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice3_Text_0, MSGBOX_YESNO
# 75 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice3_4
# 86 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 87 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice3_Text_2
# 88 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 89 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice3_2:
# 66 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 68 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice3_4:
# 76 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_SIMIPOUR, 1
# 77 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 78 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice3_Text_1
# 79 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_03
# 80 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 81 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 82 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 83 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice4::
# 94 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 95 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice4_2
# 101 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_PASSIMIAN, 10, 3
# 102 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_PASSIMIAN, CRY_MODE_NORMAL
# 103 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 104 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice4_Text_0, MSGBOX_YESNO
# 105 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice4_4
# 116 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 117 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice4_Text_2
# 118 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 119 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice4_2:
# 96 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 98 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice4_4:
# 106 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_PASSIMIAN, 1
# 107 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 108 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice4_Text_1
# 109 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_04
# 110 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 111 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 112 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 113 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice5::
# 124 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 125 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice5_2
# 131 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_ORANGURU, 10, 3
# 132 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 133 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 134 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice5_Text_0, MSGBOX_YESNO
# 135 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice5_4
# 146 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 147 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice5_Text_2
# 148 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 149 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice5_2:
# 126 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 128 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice5_4:
# 136 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_ORANGURU, 1
# 137 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 138 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice5_Text_1
# 139 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_05
# 140 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 141 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 4
# 142 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 143 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_NicknamePartyMon::
# 154 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 155 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 157 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_NicknamePartyMon_1
	return

LittlerootTown_StartGame_NicknamePartyMon_1:
# 158 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 159 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


LittlerootTown_StartGame_WarpAfterPickMon::
# 164 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_WarpAfterPickMon_Text_0
# 166 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 167 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 168 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 169 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 170 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	warp MAP_ZED_LITTLEROOT_TOWN_TEST01_1F, 2, 4
# 171 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return


LittlerootTown_StartGame_PokemonChoice1_Text_0:
# 6 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You are certain you did not choose\n"
	.string "two Pokémon.$"

LittlerootTown_StartGame_PokemonChoice1_Text_1:
# 14 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Simisear?$"

LittlerootTown_StartGame_PokemonChoice1_Text_2:
# 18 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Simisear!$"

LittlerootTown_StartGame_PokemonChoice1_Text_3:
# 27 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Simisear.$"

LittlerootTown_StartGame_PokemonChoice2_Text_0:
# 44 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Simisage?$"

LittlerootTown_StartGame_PokemonChoice2_Text_1:
# 48 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Simisage!$"

LittlerootTown_StartGame_PokemonChoice2_Text_2:
# 57 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Simisage.$"

LittlerootTown_StartGame_PokemonChoice3_Text_0:
# 74 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Simipour?$"

LittlerootTown_StartGame_PokemonChoice3_Text_1:
# 78 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Simipour!$"

LittlerootTown_StartGame_PokemonChoice3_Text_2:
# 87 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Simipour.$"

LittlerootTown_StartGame_PokemonChoice4_Text_0:
# 104 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Passimian?$"

LittlerootTown_StartGame_PokemonChoice4_Text_1:
# 108 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Passimian!$"

LittlerootTown_StartGame_PokemonChoice4_Text_2:
# 117 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Passimian.$"

LittlerootTown_StartGame_PokemonChoice5_Text_0:
# 134 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Oranguru?$"

LittlerootTown_StartGame_PokemonChoice5_Text_1:
# 138 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Oranguru!$"

LittlerootTown_StartGame_PokemonChoice5_Text_2:
# 147 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Oranguru.$"

LittlerootTown_StartGame_NicknamePartyMon_Text_0:
# 155 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to give your Pokémon\n"
	.string "a nickname?$"

LittlerootTown_StartGame_WarpAfterPickMon_Text_0:
# 164 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You feel as though you are beginning\n"
	.string "to wake up.$"
