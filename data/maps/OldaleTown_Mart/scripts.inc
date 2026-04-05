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
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

	.align 2
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
GerbonTown_PostRoute110__MartItems:
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

GerbonMart_SuperPotionSchoolKid::
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	setspeaker GerbonMart_SuperPotionSchoolKid_Text_0
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonMart_SuperPotionSchoolKid_Text_1
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 6
	goto_if_ge GerbonMart_SuperPotionSchoolKid_2
GerbonMart_SuperPotionSchoolKid_1:
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	applymovement GERBON_SUPERPOTION_KID, GerbonMart_SuperPotionSchoolKid_Movement_0
	end

GerbonMart_SuperPotionSchoolKid_2:
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	setspeaker GerbonMart_SuperPotionSchoolKid_Text_0
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonMart_SuperPotionSchoolKid_Text_2
	goto GerbonMart_SuperPotionSchoolKid_1


GerbonMart_RightShelfOldMan::
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	setspeaker GerbonMart_RightShelfOldMan_Text_0
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox GerbonMart_RightShelfOldMan_Text_1
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end


# 69 "data/maps/OldaleTown_Mart/scripts.pory"
GerbonMart_SuperPotionSchoolKid_Movement_0:
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
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
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "School Kid$"

GerbonMart_SuperPotionSchoolKid_Text_1:
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I really need some {COLOR RED}Super Potions{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, but\n"
	.string "they won't sell me any! Just take my\l"
	.string "money!$"

GerbonMart_SuperPotionSchoolKid_Text_2:
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "...\p"
	.string "What! They sell them to you! What's so\n"
	.string "special about you!$"

GerbonMart_RightShelfOldMan_Text_0:
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Old Man$"

GerbonMart_RightShelfOldMan_Text_1:
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If you don't want to encounter\n"
	.string "any Pokemon, buy a Repel!\p"
	.string "The Repels around here are better than\n"
	.string "in other regions. Our basic Repel lasts\l"
	.string "for 500 steps, and are a great value!$"
