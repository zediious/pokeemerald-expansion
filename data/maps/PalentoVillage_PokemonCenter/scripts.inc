PalentoVillage_PokemonCenter_MapScripts::
# 2 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalentoVillage_PokemonCenter_OnTransition
# 3 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PalentoVillage_PokemonCenter_OnTransition::
# 7 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
	end


PalentoVillage_Pokecenter_Nurse::
# 12 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 2
# 13 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	release
	end


PalentoVillage_HealerChansey::
# 21 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	lock
# 22 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 23 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	msgbox PalentoVillage_HealerChansey_Text_0
# 24 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitmoncry
# 25 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitmessage
# 26 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	closemessage
# 27 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	release
	return


PalentoVillage_PokeMart_Employee::
# 32 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	lock
# 33 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	msgbox PalentoVillage_PokeMart_Employee_Text_0
# 35 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitmessage
# 36 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	pokemart PalentoVillage_MartItems
# 37 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	msgbox PalentoVillage_PokeMart_Employee_Text_1
# 38 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitmessage
# 39 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 43 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
PalentoVillage_MartItems:
# 44 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 45 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 46 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 47 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 48 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 49 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 50 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 51 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 52 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_REPEL
# 53 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

PalentoVillagePokeCenter_JordanResting::
# 58 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	lock
# 59 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	faceplayer
# 60 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	msgbox PalentoVillagePokeCenter_JordanResting_Text_0
# 66 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	waitmessage
# 67 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	release
	end


PalentoVillage_HealerChansey_Text_0:
# 23 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.string "Chans-eee$"

PalentoVillage_PokeMart_Employee_Text_0:
# 33 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.string "Welcome!\n"
	.string "How may I serve you?$"

PalentoVillage_PokeMart_Employee_Text_1:
# 37 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.string "Please come again!$"

PalentoVillagePokeCenter_JordanResting_Text_0:
# 60 "data/maps/PalentoVillage_PokemonCenter/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hi {PLAYER}!\n"
	.string "This Pokemon Center is pretty cool\l"
	.string "right? Both the mart and the nurse\l"
	.string "all in one place\p"
	.string "I wish all of them were like that...$"
