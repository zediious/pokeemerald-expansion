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
	setspeaker Gerbon_HealerChansey_Text_0
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox Gerbon_HealerChansey_Text_1
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	return


GerbonPokemonCenter_CounterOldMan::
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_CounterOldMan_Text_0
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_CounterOldMan_Text_1
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_RichBoyPreTourney::
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_RichBoyPreTourney_Text_0
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_RichBoyPreTourney_Text_1
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_RichBoyPreTourney_Text_2
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_TADBULB, CRY_MODE_NORMAL
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_RichBoyPreTourney_Text_3
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_RichBoyPreTourneyMon::
# 66 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 67 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 68 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_RichBoyPreTourney_Text_2
# 69 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_TADBULB, CRY_MODE_NORMAL
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_RichBoyPreTourney_Text_3
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_ChairCamperPostTourney::
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_ChairCamperPostTourney_Text_0
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_ChairCamperPostTourney_Text_1
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_TablePokefan::
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefan_Text_0
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefan_Text_1
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CLEFFA, CRY_MODE_NORMAL
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefan_Text_2
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 108 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_GERBON_POKEFAN_HEARTSCALE, GerbonPokemonCenter_TablePokefan_2
GerbonPokemonCenter_TablePokefan_1:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

GerbonPokemonCenter_TablePokefan_2:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefan_Text_0
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefan_Text_3
# 112 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_HEART_SCALE, 1
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GERBON_POKEFAN_HEARTSCALE
	goto GerbonPokemonCenter_TablePokefan_1


GerbonPokemonCenter_TablePokefanLotad::
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 122 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefanLotad_Text_0
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_LOTAD, CRY_MODE_NORMAL
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefanLotad_Text_1
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_TablePokefanCleffa::
# 133 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefanCleffa_Text_0
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_CLEFFA, CRY_MODE_NORMAL
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefanCleffa_Text_1
# 138 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


GerbonPokemonCenter_TablePokefanAzurill::
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 146 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setspeaker GerbonPokemonCenter_TablePokefanAzurill_Text_0
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox GerbonPokemonCenter_TablePokefanAzurill_Text_1
# 150 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end


Gerbon_HealerChansey_Text_0:
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Chansey$"

Gerbon_HealerChansey_Text_1:
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Chans-eee$"

GerbonPokemonCenter_CounterOldMan_Text_0:
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Old Man$"

GerbonPokemonCenter_CounterOldMan_Text_1:
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokemon Centers will always heal your\n"
	.string "Pokemon to full health, for no charge!\p"
	.string "Never hesitate to use one!$"

GerbonPokemonCenter_RichBoyPreTourney_Text_0:
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rich Boy$"

GerbonPokemonCenter_RichBoyPreTourney_Text_1:
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Let's go train a bit more Tadbulb!\n"
	.string "{COLOR RED}The Tournament{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is going to be tough, we\l"
	.string "need every edge we can get!$"

GerbonPokemonCenter_RichBoyPreTourney_Text_2:
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Tadbulb$"

GerbonPokemonCenter_RichBoyPreTourney_Text_3:
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ie-eio-oo-wea!$"

GerbonPokemonCenter_ChairCamperPostTourney_Text_0:
# 81 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Camper$"

GerbonPokemonCenter_ChairCamperPostTourney_Text_1:
# 82 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I'm getting ready to go camping in\n"
	.string "the Sawgrass Forest!\p"
	.string "...\p"
	.string "You don't think it's a good place? My\n"
	.string "friend told me it was! Maybe they were\l"
	.string "pranking me...$"

GerbonPokemonCenter_TablePokefan_Text_0:
# 99 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokefan$"

GerbonPokemonCenter_TablePokefan_Text_1:
# 100 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "My Pokemon are so sweet, I love them so\n"
	.string "dearly!$"

GerbonPokemonCenter_TablePokefan_Text_2:
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The man's Pokemon seem to concur!$"

GerbonPokemonCenter_TablePokefan_Text_3:
# 111 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I must spread this love! Take this!$"

GerbonPokemonCenter_TablePokefanLotad_Text_0:
# 123 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lotad$"

GerbonPokemonCenter_TablePokefanLotad_Text_1:
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ee-e!$"

GerbonPokemonCenter_TablePokefanCleffa_Text_0:
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cleffa$"

GerbonPokemonCenter_TablePokefanCleffa_Text_1:
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ee-aaa-uu!$"

GerbonPokemonCenter_TablePokefanAzurill_Text_0:
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Azurill$"

GerbonPokemonCenter_TablePokefanAzurill_Text_1:
# 149 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Iiiii-eiiii!$"
