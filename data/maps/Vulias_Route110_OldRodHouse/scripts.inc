Vulias_Route110_OldRodHouse_MapScripts::
	.byte 0


VuliasRoute110_EventScript_FishermanGiveOldRod::
# 5 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	lock
# 6 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	faceplayer
# 8 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	goto_if_set FLAG_ROUTE110_GOTOLDROD, VuliasRoute110_EventScript_FishermanGiveOldRod_2
# 17 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setspeaker VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0
# 18 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_2, MSGBOX_YESNO
# 20 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VuliasRoute110_EventScript_FishermanGiveOldRod_4
# 37 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setspeaker VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0
# 38 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_5
# 40 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 41 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	release
	end

VuliasRoute110_EventScript_FishermanGiveOldRod_2:
# 9 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setspeaker VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0
# 10 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_1
# 12 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 13 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	release
	end

VuliasRoute110_EventScript_FishermanGiveOldRod_4:
# 21 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setspeaker VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0
# 22 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_3
# 24 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	giveitem ITEM_OLD_ROD, 1
# 25 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setflag FLAG_ROUTE110_GOTOLDROD
# 26 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 27 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	setspeaker VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0
# 28 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	msgbox VuliasRoute110_EventScript_FishermanGiveOldRod_Text_4
# 33 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	waitmessage
# 34 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	release
	end


VuliasRoute110_EventScript_FishermanGiveOldRod_Text_0:
# 9 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "Fisherman$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_1:
# 10 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "Have you caught anything with that\n"
	.string "{COLOR RED}Old Rod{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} yet? Give it a try!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_2:
# 18 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "You! Are you a fan of fishing? It's only\n"
	.string "the greatest thing in the world!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_3:
# 22 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "Jolly good stuff! I know! You'll make\n"
	.string "good use of this!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_4:
# 28 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "Walk up to some water, and use the\n"
	.string "{COLOR RED}Old Rod{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to pull up a Water\l"
	.string "Pokemon!\p"
	.string "Catch some big ones for me!$"

VuliasRoute110_EventScript_FishermanGiveOldRod_Text_5:
# 38 "data/maps/Vulias_Route110_OldRodHouse/scripts.pory"
	.string "Ah, well, I suppose fishing isn't for\n"
	.string "everyone!$"
