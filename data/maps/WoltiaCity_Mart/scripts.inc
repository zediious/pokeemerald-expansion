WoltiaCity_Mart_MapScripts::
	.byte 0


WoltiaCity_PokeMart_Employee::
# 4 "data/maps/WoltiaCity_Mart/scripts.pory"
	lock
# 5 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaCity_PokeMart_Employee_Text_0
# 7 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/WoltiaCity_Mart/scripts.pory"
	pokemart WoltiaCity_MartItems
# 9 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaCity_PokeMart_Employee_Text_1
# 10 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/WoltiaCity_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/WoltiaCity_Mart/scripts.pory"
WoltiaCity_MartItems:
# 16 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 17 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 23 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 24 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

WoltiaCity_PokeMart_Employee_Text_0:
# 5 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Welcome!\n"
	.string "How may I serve you?$"

WoltiaCity_PokeMart_Employee_Text_1:
# 9 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Please come again!$"
