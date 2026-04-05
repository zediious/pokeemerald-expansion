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


GerbonPokemonCenter_CounterOldMan::
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_CounterOldMan_Text_0
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_CounterOldMan_Text_1
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_RichBoyPreTourney::
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_RichBoyPreTourney_Text_0
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_RichBoyPreTourney_Text_1
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_RichBoyPreTourney_Text_2
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_TADBULB, CRY_MODE_NORMAL
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_RichBoyPreTourney_Text_3
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_RichBoyPreTourneyMon::
# 65 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_RichBoyPreTourney_Text_2
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_TADBULB, CRY_MODE_NORMAL
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_RichBoyPreTourney_Text_3
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_ChairCamperPostTourney::
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_ChairCamperPostTourney_Text_0
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_ChairCamperPostTourney_Text_1
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_TablePokefan::
# 96 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefan_Text_0
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefan_Text_1
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CLEFFA, CRY_MODE_NORMAL
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefan_Text_2
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_GERBON_POKEFAN_HEARTSCALE, GerbonPokemonCenter_TablePokefan_2
GerbonPokemonCenter_TablePokefan_1:
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

GerbonPokemonCenter_TablePokefan_2:
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefan_Text_0
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefan_Text_3
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_HEART_SCALE, 1
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GERBON_POKEFAN_HEARTSCALE
	goto GerbonPokemonCenter_TablePokefan_1


GerbonPokemonCenter_TablePokefanLotad::
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefanLotad_Text_0
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefanLotad_Text_1
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_TablePokefanCleffa::
# 132 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefanCleffa_Text_0
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CLEFFA, CRY_MODE_NORMAL
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefanCleffa_Text_1
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_TablePokefanAzurill::
# 144 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefanAzurill_Text_0
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefanAzurill_Text_1
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


Gerbon_HealerChansey_Text_0:
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Chans-eee$"

GerbonPokemonCenter_CounterOldMan_Text_0:
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Old Man$"

GerbonPokemonCenter_CounterOldMan_Text_1:
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokemon Centers will always heal your\n"
	.string "Pokemon to full health, for no charge!\p"
	.string "Never hesitate to use one!$"

GerbonPokemonCenter_RichBoyPreTourney_Text_0:
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rich Boy$"

GerbonPokemonCenter_RichBoyPreTourney_Text_1:
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Let's go train a bit more Tadbulb!\n"
	.string "{COLOR RED}The Tournament{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is going to be tough, we\l"
	.string "need every edge we can get!$"

GerbonPokemonCenter_RichBoyPreTourney_Text_2:
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Tadbulb$"

GerbonPokemonCenter_RichBoyPreTourney_Text_3:
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ie-eio-oo-wea!$"

GerbonPokemonCenter_ChairCamperPostTourney_Text_0:
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Camper$"

GerbonPokemonCenter_ChairCamperPostTourney_Text_1:
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm getting ready to go camping in\n"
	.string "the Sawgrass Forest!\p"
	.string "...\p"
	.string "You don't think it's a good place? My\n"
	.string "friend told me it was! Maybe they were\l"
	.string "pranking me...$"

GerbonPokemonCenter_TablePokefan_Text_0:
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokefan$"

GerbonPokemonCenter_TablePokefan_Text_1:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "My Pokemon are so sweet, I love them so\n"
	.string "dearly!$"

GerbonPokemonCenter_TablePokefan_Text_2:
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The man's Pokemon seem to concur!$"

GerbonPokemonCenter_TablePokefan_Text_3:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I must spread this love! Take this!$"

GerbonPokemonCenter_TablePokefanLotad_Text_0:
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lotad$"

GerbonPokemonCenter_TablePokefanLotad_Text_1:
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ee-e!$"

GerbonPokemonCenter_TablePokefanCleffa_Text_0:
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cleffa$"

GerbonPokemonCenter_TablePokefanCleffa_Text_1:
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ee-aaa-uu!$"

GerbonPokemonCenter_TablePokefanAzurill_Text_0:
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Azurill$"

GerbonPokemonCenter_TablePokefanAzurill_Text_1:
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Iiiii-eiiii!$"
