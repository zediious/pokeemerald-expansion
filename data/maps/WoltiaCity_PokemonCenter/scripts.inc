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


WoltiaPokemonCenter_ChairFisherman::
# 34 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	lock
# 35 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 36 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_ChairFisherman_Text_0
# 37 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_ChairFisherman_Text_1
# 43 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 44 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	release
	end


WoltiaPokemonCenter_BookshelfManiac::
# 50 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	lock
# 51 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_BookshelfManiac_Text_0
# 52 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_BookshelfManiac_Text_1
# 53 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 54 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	delay 30
# 55 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 56 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_BookshelfManiac_Text_0
# 57 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_BookshelfManiac_Text_2
# 58 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 59 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	release
# 60 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	applymovement WOLTIA_PKMNCENTER_MANIAC, WoltiaPokemonCenter_BookshelfManiac_Movement_0
	end


WoltiaPokemonCenter_TableLass::
# 66 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	lock
# 67 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 68 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_TableLass_Text_0
# 69 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_WOLTIA_LASS_QUICKCLAW, WoltiaPokemonCenter_TableLass_2
# 81 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_TableLass_Text_3
WoltiaPokemonCenter_TableLass_1:
# 86 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 87 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	release
	end

WoltiaPokemonCenter_TableLass_2:
# 70 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_TableLass_Text_1
# 71 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 72 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 73 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setflag FLAG_WOLTIA_LASS_QUICKCLAW
# 74 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 75 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_TableLass_Text_0
# 76 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_TableLass_Text_2
	goto WoltiaPokemonCenter_TableLass_1


WoltiaPokemonCenter_CookBlackBeltPepTalk::
# 93 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	lock
# 94 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_0
# 95 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_1
# 101 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 102 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_2
# 103 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_3
# 105 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 106 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_0
# 107 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_4
# 110 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 111 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	setspeaker WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_5
# 112 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	msgbox WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_6
# 114 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 115 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	release
	end


# 60 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
WoltiaPokemonCenter_BookshelfManiac_Movement_0:
# 60 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	face_up
	step_end

WoltiaPokeCenter_HealerChansey_Text_0:
# 23 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Chans-eee$"

WoltiaPokemonCenter_ChairFisherman_Text_0:
# 36 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Fisherman$"

WoltiaPokemonCenter_ChairFisherman_Text_1:
# 37 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "You wouldn't think it, but the Igris\n"
	.string "River is great for fishing! There are\l"
	.string "some rare Pokemon in those waters!\p"
	.string "I've got enough sand in my eyes though,\n"
	.string "I need to rest up!$"

WoltiaPokemonCenter_BookshelfManiac_Text_0:
# 51 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Maniac$"

WoltiaPokemonCenter_BookshelfManiac_Text_1:
# 52 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Now...where was that volume...$"

WoltiaPokemonCenter_BookshelfManiac_Text_2:
# 57 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Hey! I'm doing important work here!$"

WoltiaPokemonCenter_TableLass_Text_0:
# 68 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Lass$"

WoltiaPokemonCenter_TableLass_Text_1:
# 70 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Think fast!$"

WoltiaPokemonCenter_TableLass_Text_2:
# 76 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "That item will help your Pokemon\n"
	.string "move faster.\p"
	.string "...sometimes. Can't win them all!$"

WoltiaPokemonCenter_TableLass_Text_3:
# 81 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "It's always better to move quicker than\n"
	.string "your opponent\p"
	.string "...most of the time, anyways.$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_0:
# 94 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Black Belt$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_1:
# 95 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "I know it's been a while, but you and\n"
	.string "your Pokemon have got this!\p"
	.string "Never keep your Pokemon out\n"
	.string "if your opponent switches to\l"
	.string "a Pokemon with a type advantage!$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_2:
# 102 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "Cook$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_3:
# 103 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "That makes sense, but what do I do\n"
	.string "instead!$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_4:
# 107 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "If you have a Pokemon who is strong\n"
	.string "against the new type, switch to that\l"
	.string "one!$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_5:
# 111 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "$"

WoltiaPokemonCenter_CookBlackBeltPepTalk_Text_6:
# 112 "data/maps/WoltiaCity_PokemonCenter/scripts.pory"
	.string "The two are engrossed in their\n"
	.string "discussion.$"
