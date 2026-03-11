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
	setvar VAR_STARTER_SPECIES, SPECIES_PANSEAR
# 14 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice2::
# 18 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_PANSAGE
# 19 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice3::
# 23 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_PANPOUR
# 24 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_PokemonChoice4::
# 28 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_INNAPE
# 29 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto LittlerootTown_StartGame_ChooseMon
	return


LittlerootTown_StartGame_ChooseMon::
# 33 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	lockall
# 34 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	goto_if_set FLAG_STARTER_CHOSEN, LittlerootTown_StartGame_ChooseMon_2
# 40 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_SPECIES
# 41 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	showmonpic VAR_STARTER_SPECIES, 10, 3
# 42 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playmoncry VAR_STARTER_SPECIES, CRY_MODE_NORMAL
# 43 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmoncry
# 44 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_1, MSGBOX_YESNO
# 45 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_ChooseMon_4
# 58 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 59 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_3
# 60 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 61 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return

LittlerootTown_StartGame_ChooseMon_2:
# 35 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_0
# 37 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	releaseall
	return

LittlerootTown_StartGame_ChooseMon_4:
# 46 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	givemon VAR_STARTER_SPECIES, 20
# 47 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 48 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitfanfare
# 49 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_ChooseMon_Text_2
# 51 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	waitmessage
# 52 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setvar VAR_STARTER_MON, 4
# 53 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_EventScript_RemoveBalls
# 54 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_NicknamePartyMon
# 55 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call LittlerootTown_StartGame_WarpAfterPickMon
	return


LittlerootTown_EventScript_RemoveBalls::
# 66 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_Pansear
# 67 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_Pansage
# 68 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_Panpour
# 69 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	removeobject ZED_Starter_Innape
	return


LittlerootTown_StartGame_NicknamePartyMon::
# 73 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	hidemonpic
# 74 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	msgbox LittlerootTown_StartGame_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 75 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_StartGame_NicknamePartyMon_1
	return

LittlerootTown_StartGame_NicknamePartyMon_1:
# 76 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 77 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


LittlerootTown_StartGame_WarpAfterPickMon::
# 83 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 84 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	special SetUnlockedPokedexFlags
# 85 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 87 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 88 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	special EnableNationalPokedex
# 90 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 92 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 93 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 94 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	warp MAP_ZED_LITTLEROOT_TOWN_TEST01_1F, 2, 4
# 95 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	release
	return


LittlerootTown_StartGame_ChooseMon_Text_0:
# 35 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "I'm certain I did not have\n"
	.string "two Pokémon.$"

LittlerootTown_StartGame_ChooseMon_Text_1:
# 44 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Was {COLOR RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} my Pokemon?$"

LittlerootTown_StartGame_ChooseMon_Text_2:
# 49 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "That's right, {COLOR RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} was\n"
	.string "my Pokemon!$"

LittlerootTown_StartGame_ChooseMon_Text_3:
# 59 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "No, {COLOR RED}{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} was not my Pokemon.$"

LittlerootTown_StartGame_NicknamePartyMon_Text_0:
# 74 "data/maps/ZED_Littleroot_StartRoom_PickPokemon/scripts.pory"
	.string "Hmm, Did my Pokemon have a nickname?$"
