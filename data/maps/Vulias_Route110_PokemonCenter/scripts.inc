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
# 35 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 36 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 37 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitmessage
# 38 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitbuttonpress
# 39 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	release
	end


Route110PokeCenter_HealerChansey::
# 44 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 46 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	msgbox Route110PokeCenter_HealerChansey_Text_0
# 47 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	waitmessage
# 49 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	closemessage
# 50 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	release
	return


Route110PokeCenter_HealerChansey_Text_0:
# 46 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	.string "Chans-eee$"
