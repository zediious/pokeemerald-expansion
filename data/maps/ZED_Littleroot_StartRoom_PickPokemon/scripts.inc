ZED_Littleroot_StartRoom_PickPokemon_MapScripts::
# 2 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZED_Littleroot_StartRoom_PickPokemon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZED_Littleroot_StartRoom_PickPokemon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 0, LittlerootTown_StartGame_PlayMusic
	.2byte 0


LittlerootTown_StartGame_PlayMusic::
# 8 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playbgm MUS_CAVE_OF_ORIGIN, 0
# 9 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
	return


LittlerootTown_StartGame_PokemonChoice1::
# 13 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 14 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice1_2
# 20 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_SIMISEAR, 10, 3
# 21 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_SIMISEAR, CRY_MODE_NORMAL
# 22 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 23 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_1, MSGBOX_YESNO
# 24 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice1_4
# 37 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 38 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_3
# 39 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 40 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice1_2:
# 15 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 17 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice1_4:
# 25 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_SIMISEAR, 1
# 26 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 27 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 28 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_2
# 29 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 30 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_01
# 31 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 32 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 33 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 34 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice2::
# 45 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 46 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice2_2
# 52 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_SIMISAGE, 10, 3
# 53 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_SIMISAGE, CRY_MODE_NORMAL
# 54 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 55 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice2_Text_0, MSGBOX_YESNO
# 56 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice2_4
# 69 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 70 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice2_Text_2
# 71 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 72 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice2_2:
# 47 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 49 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice2_4:
# 57 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_SIMISAGE, 1
# 58 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 59 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 60 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice2_Text_1
# 61 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 62 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_02
# 63 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 64 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 65 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 66 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice3::
# 77 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 78 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice3_2
# 84 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_SIMIPOUR, 10, 3
# 85 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_SIMIPOUR, CRY_MODE_NORMAL
# 86 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 87 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice3_Text_0, MSGBOX_YESNO
# 88 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice3_4
# 101 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 102 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice3_Text_2
# 103 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 104 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice3_2:
# 79 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 81 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice3_4:
# 89 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_SIMIPOUR, 1
# 90 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 91 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 92 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice3_Text_1
# 93 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 94 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_03
# 95 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 96 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 97 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 98 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice4::
# 109 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 110 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice4_2
# 116 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_PASSIMIAN, 10, 3
# 117 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_PASSIMIAN, CRY_MODE_NORMAL
# 118 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 119 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice4_Text_0, MSGBOX_YESNO
# 120 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice4_4
# 133 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 134 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice4_Text_2
# 135 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 136 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice4_2:
# 111 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 113 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice4_4:
# 121 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_PASSIMIAN, 1
# 122 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 123 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 124 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice4_Text_1
# 125 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 126 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_04
# 127 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 128 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 129 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 130 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_PokemonChoice5::
# 141 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 142 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_UNUSED_0x025, LittlerootTown_StartGame_PokemonChoice5_2
# 148 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic SPECIES_ORANGURU, 10, 3
# 149 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry SPECIES_ORANGURU, CRY_MODE_NORMAL
# 150 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 151 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice5_Text_0, MSGBOX_YESNO
# 152 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_PokemonChoice5_4
# 165 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 166 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice5_Text_2
# 167 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 168 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_PokemonChoice5_2:
# 143 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice1_Text_0
# 145 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_PokemonChoice5_4:
# 153 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon SPECIES_ORANGURU, 1
# 154 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 155 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 156 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_PokemonChoice5_Text_1
# 157 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 158 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_05
# 159 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 160 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 4
# 161 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 162 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_StartGame_NicknamePartyMon::
# 173 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 174 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 176 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_NicknamePartyMon_1
	return

LittlerootTown_StartGame_NicknamePartyMon_1:
# 177 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 178 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


LittlerootTown_StartGame_WarpAfterPickMon::
# 183 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_WarpAfterPickMon_Text_0
# 185 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 187 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 188 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	special SetUnlockedPokedexFlags
# 189 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 190 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 192 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 193 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 194 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	warp MAP_ZED_LITTLEROOT_TOWN_TEST01_1F, 2, 4
# 195 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return


LittlerootTown_StartGame_PokemonChoice1_Text_0:
# 15 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You are certain you did not choose\n"
	.string "two Pokémon.$"

LittlerootTown_StartGame_PokemonChoice1_Text_1:
# 23 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Simisear?$"

LittlerootTown_StartGame_PokemonChoice1_Text_2:
# 28 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Simisear!$"

LittlerootTown_StartGame_PokemonChoice1_Text_3:
# 38 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Simisear.$"

LittlerootTown_StartGame_PokemonChoice2_Text_0:
# 55 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Simisage?$"

LittlerootTown_StartGame_PokemonChoice2_Text_1:
# 60 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Simisage!$"

LittlerootTown_StartGame_PokemonChoice2_Text_2:
# 70 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Simisage.$"

LittlerootTown_StartGame_PokemonChoice3_Text_0:
# 87 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Simipour?$"

LittlerootTown_StartGame_PokemonChoice3_Text_1:
# 92 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Simipour!$"

LittlerootTown_StartGame_PokemonChoice3_Text_2:
# 102 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Simipour.$"

LittlerootTown_StartGame_PokemonChoice4_Text_0:
# 119 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Passimian?$"

LittlerootTown_StartGame_PokemonChoice4_Text_1:
# 124 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Passimian!$"

LittlerootTown_StartGame_PokemonChoice4_Text_2:
# 134 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Passimian.$"

LittlerootTown_StartGame_PokemonChoice5_Text_0:
# 151 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose Oranguru?$"

LittlerootTown_StartGame_PokemonChoice5_Text_1:
# 156 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received Oranguru!$"

LittlerootTown_StartGame_PokemonChoice5_Text_2:
# 166 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose Oranguru.$"

LittlerootTown_StartGame_NicknamePartyMon_Text_0:
# 174 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to give your Pokémon\n"
	.string "a nickname?$"

LittlerootTown_StartGame_WarpAfterPickMon_Text_0:
# 183 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You feel as though you are beginning\n"
	.string "to wake up.$"
