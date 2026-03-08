ZED_SawgrassVillage_PokemonCenter_MapScripts::
# 2 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Sawgrass_PokemonCenter_OnTransition
# 3 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Sawgrass_PokemonCenter_OnTransition::
# 7 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end


SawgrassVillage_Pokecenter_Nurse::
# 35 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 36 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 37 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 38 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitbuttonpress
# 39 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	end

