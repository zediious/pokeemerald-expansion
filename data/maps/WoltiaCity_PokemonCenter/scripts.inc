WoltiaCity_PokemonCenter_MapScripts::
# 2 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Woltia_PokemonCenter_OnTransition
# 3 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Woltia_PokemonCenter_OnTransition::
# 7 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
	end


WoltiaCity_Pokecenter_Nurse::
# 12 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	release
	end


WoltiaPokeCenter_HealerChansey::
# 21 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	lock
# 22 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 23 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokeCenter_HealerChansey_Text_0
# 24 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmoncry
# 25 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 26 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	closemessage
# 27 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	release
	return


WoltiaPokeCenter_HealerChansey_Text_0:
# 23 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Chans-eee$"
