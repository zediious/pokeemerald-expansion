Vulias_Route110_PokemonCenter_MapScripts::
# 2 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VuliasRoute110_PokemonCenter_OnTransition
# 3 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


VuliasRoute110_PokemonCenter_OnTransition::
# 7 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_ROUTE110
	end


Route110_Pokecenter_Nurse::
# 12 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	release
	end


Route110PokeCenter_HealerChansey::
# 21 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	lock
# 22 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 23 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	setspeaker Route110PokeCenter_HealerChansey_Text_0
# 24 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	msgbox Route110PokeCenter_HealerChansey_Text_1
# 25 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitmoncry
# 26 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitmessage
# 27 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	closemessage
# 28 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	release
	return


Route110PokeCenter_HealerChansey_Text_0:
# 23 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	.string "Chansey$"

Route110PokeCenter_HealerChansey_Text_1:
# 24 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	.string "Chans-eee$"
