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
# 26 "data/maps/WoltiaCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

WoltiaMart_VendingScientist::
# 34 "data/maps/WoltiaCity_Mart/scripts.pory"
	lock
# 35 "data/maps/WoltiaCity_Mart/scripts.pory"
	faceplayer
# 36 "data/maps/WoltiaCity_Mart/scripts.pory"
	setspeaker WoltiaMart_VendingScientist_Text_0
# 37 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_VendingScientist_Text_1
# 39 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 40 "data/maps/WoltiaCity_Mart/scripts.pory"
	setspeaker WoltiaMart_VendingScientist_Text_0
# 41 "data/maps/WoltiaCity_Mart/scripts.pory"
	goto_if_unset FLAG_MINT_VENDING_USED, WoltiaMart_VendingScientist_2
# 55 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_VendingScientist_Text_3
WoltiaMart_VendingScientist_1:
# 59 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 60 "data/maps/WoltiaCity_Mart/scripts.pory"
	release
	end

WoltiaMart_VendingScientist_2:
# 43 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_VendingScientist_Text_2
	goto WoltiaMart_VendingScientist_1


WoltiaMart_LamentingFisherman::
# 66 "data/maps/WoltiaCity_Mart/scripts.pory"
	lock
# 67 "data/maps/WoltiaCity_Mart/scripts.pory"
	faceplayer
# 68 "data/maps/WoltiaCity_Mart/scripts.pory"
	setspeaker WoltiaMart_LamentingFisherman_Text_0
# 69 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_LamentingFisherman_Text_1
# 75 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 76 "data/maps/WoltiaCity_Mart/scripts.pory"
	release
	end


WoltiaMart_ColdHiker::
# 82 "data/maps/WoltiaCity_Mart/scripts.pory"
	lock
# 83 "data/maps/WoltiaCity_Mart/scripts.pory"
	faceplayer
# 84 "data/maps/WoltiaCity_Mart/scripts.pory"
	setspeaker WoltiaMart_ColdHiker_Text_0
# 85 "data/maps/WoltiaCity_Mart/scripts.pory"
	goto_if_unset FLAG_WOLTIA_HIKER_AVALANCE, WoltiaMart_ColdHiker_2
# 103 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_ColdHiker_Text_5
WoltiaMart_ColdHiker_1:
# 106 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 107 "data/maps/WoltiaCity_Mart/scripts.pory"
	release
	end

WoltiaMart_ColdHiker_2:
# 86 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_ColdHiker_Text_1
# 91 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 92 "data/maps/WoltiaCity_Mart/scripts.pory"
	setspeaker WoltiaMart_ColdHiker_Text_2
# 93 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_ColdHiker_Text_3
# 95 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 96 "data/maps/WoltiaCity_Mart/scripts.pory"
	giveitem ITEM_TM_AVALANCHE, 1
# 97 "data/maps/WoltiaCity_Mart/scripts.pory"
	setflag FLAG_WOLTIA_HIKER_AVALANCE
# 98 "data/maps/WoltiaCity_Mart/scripts.pory"
	waitmessage
# 99 "data/maps/WoltiaCity_Mart/scripts.pory"
	setspeaker WoltiaMart_ColdHiker_Text_0
# 100 "data/maps/WoltiaCity_Mart/scripts.pory"
	msgbox WoltiaMart_ColdHiker_Text_4
	goto WoltiaMart_ColdHiker_1


WoltiaCity_PokeMart_Employee_Text_0:
# 5 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Welcome!\n"
	.string "How may I serve you?$"

WoltiaCity_PokeMart_Employee_Text_1:
# 9 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Please come again!$"

WoltiaMart_VendingScientist_Text_0:
# 36 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Scientist$"

WoltiaMart_VendingScientist_Text_1:
# 37 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Ah hello! I hope you've been enjoying\n"
	.string "our Mint Vending Machines!$"

WoltiaMart_VendingScientist_Text_2:
# 43 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "...\p"
	.string "What! You have not tried using one?\n"
	.string "A travesty for a trainer such as\l"
	.string "yourself! Your Pokemon can perform\l"
	.string "much better, if you give them the\l"
	.string "right mint!\p"
	.string "Go on, use that vending machine there!$"

WoltiaMart_VendingScientist_Text_3:
# 55 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Be sure to check our stock often! You'll\n"
	.string "find higher-quality mints, the higher\l"
	.string "quality of a trainer you are!$"

WoltiaMart_LamentingFisherman_Text_0:
# 68 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Fisherman$"

WoltiaMart_LamentingFisherman_Text_1:
# 69 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "The marts don't sell fishing bait, no\n"
	.string "matter how esteemed you are!\p"
	.string "...\p"
	.string "You don't need bait to fish? Nonsense!$"

WoltiaMart_ColdHiker_Text_0:
# 84 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Cold Hiker$"

WoltiaMart_ColdHiker_Text_1:
# 86 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Brr!! It's been a whole day since I left\n"
	.string "the {COLOR RED}Mjor Tundra{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, but I still\l"
	.string "can't stop shivering!\p"
	.string "I'm going to sneeze! Aaa-CHOO!$"

WoltiaMart_ColdHiker_Text_2:
# 92 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "$"

WoltiaMart_ColdHiker_Text_3:
# 93 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Something flew out of the hiker's\n"
	.string "backpack, and landed in your hands!$"

WoltiaMart_ColdHiker_Text_4:
# 100 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Oh, did that fall off my backpack? You\n"
	.string "can have it, much too cold for me!$"

WoltiaMart_ColdHiker_Text_5:
# 103 "data/maps/WoltiaCity_Mart/scripts.pory"
	.string "Aaa-CHO! I can't stop! I guess I need\n"
	.string "to go further south...$"
