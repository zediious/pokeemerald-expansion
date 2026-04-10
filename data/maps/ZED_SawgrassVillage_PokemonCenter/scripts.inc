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
# 12 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	end


SawgrassVillage_HealerChansey::
# 21 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	lock
# 22 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 23 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setspeaker SawgrassVillage_HealerChansey_Text_0
# 24 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	msgbox SawgrassVillage_HealerChansey_Text_1
# 25 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmoncry
# 26 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 27 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	closemessage
# 28 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	return


SawgrassPokemonCenter_BookshelfKid::
# 35 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	lock
# 36 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	faceplayer
# 37 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setspeaker SawgrassPokemonCenter_BookshelfKid_Text_0
# 38 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	msgbox SawgrassPokemonCenter_BookshelfKid_Text_1
# 40 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 41 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	end


SawgrassPokemonCenter_TableGirl::
# 47 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	lock
# 48 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	faceplayer
# 49 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setspeaker SawgrassPokemonCenter_TableGirl_Text_0
# 50 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	msgbox SawgrassPokemonCenter_TableGirl_Text_1
# 53 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 54 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	end


SawgrassPokemonCenter_ChairDude::
# 60 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	lock
# 61 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	faceplayer
# 62 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	setspeaker SawgrassPokemonCenter_ChairDude_Text_0
# 63 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	msgbox SawgrassPokemonCenter_ChairDude_Text_1
# 66 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	waitmessage
# 67 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	release
	end


SawgrassVillage_HealerChansey_Text_0:
# 23 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Chansey$"

SawgrassVillage_HealerChansey_Text_1:
# 24 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Chans-eee$"

SawgrassPokemonCenter_BookshelfKid_Text_0:
# 37 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Kid$"

SawgrassPokemonCenter_BookshelfKid_Text_1:
# 38 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "They always have new books here!\n"
	.string "Pokemon Centers are the best!$"

SawgrassPokemonCenter_TableGirl_Text_0:
# 49 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Girl$"

SawgrassPokemonCenter_TableGirl_Text_1:
# 50 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "If you use that PC over there, you\n"
	.string "can store your Pokemon on a virtual\l"
	.string "network! Technology is crazy!$"

SawgrassPokemonCenter_ChairDude_Text_0:
# 62 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Tired Man$"

SawgrassPokemonCenter_ChairDude_Text_1:
# 63 "data/maps/ZED_SawgrassVillage_PokemonCenter/scripts.pory"
	.string "Whew! I spent all day walking. I'm glad\n"
	.string "the Pokemon Centers let you relax for\l"
	.string "as long as you need!$"
