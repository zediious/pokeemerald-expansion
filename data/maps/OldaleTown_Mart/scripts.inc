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
	.2byte ITEM_NONE

	.align 2
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
GerbonTown_PostRoute110__MartItems:
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

GerbonMart_SuperPotionSchoolKid::
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	setspeaker GerbonMart_SuperPotionSchoolKid_Text_0
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonMart_SuperPotionSchoolKid_Text_1
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 6
	goto_if_ge GerbonMart_SuperPotionSchoolKid_2
GerbonMart_SuperPotionSchoolKid_1:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement GERBON_SUPERPOTION_KID, GerbonMart_SuperPotionSchoolKid_Movement_0
	end

GerbonMart_SuperPotionSchoolKid_2:
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	setspeaker GerbonMart_SuperPotionSchoolKid_Text_0
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonMart_SuperPotionSchoolKid_Text_2
	goto GerbonMart_SuperPotionSchoolKid_1


GerbonMart_RightShelfOldMan::
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	setspeaker GerbonMart_RightShelfOldMan_Text_0
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonMart_RightShelfOldMan_Text_1
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


# 63 "data/maps/OldaleTown_Mart/scripts.pory"
GerbonMart_SuperPotionSchoolKid_Movement_0:
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	face_up
	step_end

GerbonTown_PokeMart_Employee_Text_0:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Welcome!\n"
	.string "How may I serve you?$"

GerbonTown_PokeMart_Employee_Text_1:
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Please come again!$"

GerbonMart_SuperPotionSchoolKid_Text_0:
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "School Kid$"

GerbonMart_SuperPotionSchoolKid_Text_1:
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I really need some {COLOR RED}Super Potions{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, but\n"
	.string "they won't sell me any! Just take my\l"
	.string "money!$"

GerbonMart_SuperPotionSchoolKid_Text_2:
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "...\p"
	.string "What! They sell them to you! What's so\n"
	.string "special about you!$"

GerbonMart_RightShelfOldMan_Text_0:
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Old Man$"

GerbonMart_RightShelfOldMan_Text_1:
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Are you looking for a Repel? They\n"
	.string "stopped selling them here in Vulias\l"
	.string "after the {COLOR RED}Ultra Repel{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} was invented.\p"
	.string "You don't have one? Sorry...neither\n"
	.string "do I!$"
