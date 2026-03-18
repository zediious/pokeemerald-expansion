Vulias_Route110_OldRodHouse_MapScripts::
	.byte 0


VuliasRoute110_EventScript_FishermanGiveOldRod::
# 5 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	lock
# 6 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	faceplayer
# 8 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	goto_if_set FLAG_ROUTE110_GOTOLDROD, VuliasRoute110_EventScript_FishermanGiveOldRod_2
# 16 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_1, MSGBOX_YESNO
# 19 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VuliasRoute110_EventScript_FishermanGiveOldRod_4
# 34 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_4
# 36 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 37 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	release
	end

VuliasRoute110_EventScript_FishermanGiveOldRod_2:
# 9 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0
# 11 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 12 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	release
	end

VuliasRoute110_EventScript_FishermanGiveOldRod_4:
# 20 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_2
# 22 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	giveitem ITEM_OLD_ROD, 1
# 23 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setflag FLAG_ROUTE110_GOTOLDROD
# 24 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 25 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_3
# 30 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 31 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	release
	end


VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0:
# 9 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "{COLOR GREEN}Fisherman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Have you caught anything\n"
	.string "with that {COLOR RED}Old Rod{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} yet? Give it a try!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_1:
# 16 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "{COLOR GREEN}Fisherman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You! Are you a fan of\n"
	.string "fishing? It's only the greatest thing in\l"
	.string "the world!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_2:
# 20 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "{COLOR GREEN}Fisherman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Jolly good stuff! I know!\n"
	.string "You'll make good use of this!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_3:
# 25 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "{COLOR GREEN}Fisherman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Walk up to some water, and\n"
	.string "use the {COLOR RED}Old Rod{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to pull up a Water\l"
	.string "Pokemon!\p"
	.string "Catch some big ones for me!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_4:
# 34 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "{COLOR GREEN}Fisherman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ah, well, I suppose fishing\n"
	.string "isn't for everyone!$"
