OldaleTown_Mart_MapScripts::
	.byte 0


GerbonTown_PokeMart_Employee::
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonTown_PokeMart_Employee_Text_0
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 6
	goto_if_ge GerbonTown_PokeMart_Employee_2
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart GerbonTown_PreRoute110__MartItems
GerbonTown_PokeMart_Employee_1:
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonTown_PokeMart_Employee_Text_1
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

GerbonTown_PokeMart_Employee_2:
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart GerbonTown_PostRoute110__MartItems
	goto GerbonTown_PokeMart_Employee_1


	.align 2
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
GerbonTown_PreRoute110__MartItems:
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
GerbonTown_PostRoute110__MartItems:
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

GerbonTown_PokeMart_Employee_Text_0:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Welcome!\n"
	.string "How may I serve you?$"

GerbonTown_PokeMart_Employee_Text_1:
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Please come again!$"
