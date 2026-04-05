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


SawgrassVillage_HealerChansey::
# 44 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 46 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	msgbox SawgrassVillage_HealerChansey_Text_0
# 47 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 49 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	closemessage
# 50 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	return


SawgrassVillage_HealerChansey_Text_0:
# 46 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Chans-eee$"
