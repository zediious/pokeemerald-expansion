ZED_Littleroot_StartRoom_PickPokemon_MapScripts::
# 2 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ZED_Littleroot_StartRoom_PickPokemon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ZED_Littleroot_StartRoom_PickPokemon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	map_script_2 VAR_DREAM_ENTERED, 0, LittlerootTown_StartGame_PlayMusic
	.2byte 0


LittlerootTown_StartGame_PlayMusic::
# 8 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playbgm MUS_CAVE_OF_ORIGIN, 0
# 9 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_DREAM_ENTERED, 1
	return


LittlerootTown_StartGame_PokemonChoice1::
# 13 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, 514
# 14 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice2::
# 18 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, 512
# 19 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice3::
# 23 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, 516
# 24 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice4::
# 28 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, 766
# 29 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice5::
# 33 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, 765
# 34 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_ChooseMon::
# 38 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 39 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_STARTER_CHOSEN, LittlerootTown_StartGame_ChooseMon_2
# 45 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_SPECIES
# 46 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic VAR_STARTER_SPECIES, 10, 3
# 47 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry VAR_STARTER_SPECIES, CRY_MODE_NORMAL
# 48 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 49 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_1, MSGBOX_YESNO
# 50 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_ChooseMon_4
# 62 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 63 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_3
# 64 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 65 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_ChooseMon_2:
# 40 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_0
# 42 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_ChooseMon_4:
# 51 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon VAR_STARTER_SPECIES, 20
# 52 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 53 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 54 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_2
# 55 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 56 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 4
# 57 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_EventScript_RemoveBalls
# 58 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 59 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_EventScript_RemoveBalls::
# 70 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_01
# 71 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_02
# 72 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_03
# 73 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_04
# 74 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_05
	return


LittlerootTown_StartGame_NicknamePartyMon::
# 78 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 79 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 81 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_NicknamePartyMon_1
	return

LittlerootTown_StartGame_NicknamePartyMon_1:
# 82 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 83 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


LittlerootTown_StartGame_WarpAfterPickMon::
# 88 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_WarpAfterPickMon_Text_0
# 90 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 92 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 93 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	special SetUnlockedPokedexFlags
# 94 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 96 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 97 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	special EnableNationalPokedex
# 99 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 101 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 102 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 103 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	warp MAP_ZED_LITTLEROOT_TOWN_TEST01_1F, 2, 4
# 104 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return


LittlerootTown_StartGame_ChooseMon_Text_0:
# 40 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You are certain you did not choose\n"
	.string "two Pokémon.$"

LittlerootTown_StartGame_ChooseMon_Text_1:
# 49 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to choose {COLOR RED}{STR_VAR_1}?$"

LittlerootTown_StartGame_ChooseMon_Text_2:
# 54 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You received {COLOR RED}{STR_VAR_1}!$"

LittlerootTown_StartGame_ChooseMon_Text_3:
# 63 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You did not choose {COLOR RED}{STR_VAR_1}.$"

LittlerootTown_StartGame_NicknamePartyMon_Text_0:
# 79 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Do you want to give your Pokémon\n"
	.string "a nickname?$"

LittlerootTown_StartGame_WarpAfterPickMon_Text_0:
# 88 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "You feel as though you are beginning\n"
	.string "to wake up.$"
