OldaleTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Gerbon_PokemonCenter_OnTransition
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Gerbon_PokemonCenter_OnTransition::
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	end


Gerbon_Pokecenter_Nurse::
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


Gerbon_HealerChansey::
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Gerbon_HealerChansey_Text_0
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


Gerbon_HealerChansey_Text_0:
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Chans-eee$"
