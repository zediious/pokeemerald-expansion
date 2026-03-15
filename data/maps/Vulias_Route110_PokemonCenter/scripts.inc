Vulias_Route110_PokemonCenter_MapScripts::
# 2 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Sawgrass_PokemonCenter_OnTransition
# 3 "data/maps/Vulias_Route110_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Sawgrass_PokemonCenter_OnTransition::
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

