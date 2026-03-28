Vulias_Route103_MapScripts::
	.byte 0


VuliasRoute103_EventScript_LostMonQuestTrigger::
# 5 "data/maps/Vulias_Route103/scripts.pory"
	lock
# 6 "data/maps/Vulias_Route103/scripts.pory"
	applymovement ROUTE103_DISTRESSED_BEAUTY, VuliasRoute103_EventScript_LostMonQuestTrigger_Movement_0
# 7 "data/maps/Vulias_Route103/scripts.pory"
	waitmovement
# 8 "data/maps/Vulias_Route103/scripts.pory"
	playse SE_PIN
# 9 "data/maps/Vulias_Route103/scripts.pory"
	waitse
# 10 "data/maps/Vulias_Route103/scripts.pory"
	applymovement ROUTE103_DISTRESSED_BEAUTY, VuliasRoute103_EventScript_LostMonQuestTrigger_Movement_1
# 11 "data/maps/Vulias_Route103/scripts.pory"
	waitmovement
# 12 "data/maps/Vulias_Route103/scripts.pory"
	msgbox VuliasRoute103_EventScript_LostMonQuestTrigger_Text_0
# 20 "data/maps/Vulias_Route103/scripts.pory"
	waitmessage
# 21 "data/maps/Vulias_Route103/scripts.pory"
	closemessage
# 22 "data/maps/Vulias_Route103/scripts.pory"
	applymovement ROUTE103_DISTRESSED_BEAUTY, VuliasRoute103_EventScript_LostMonQuestTrigger_Movement_2
# 23 "data/maps/Vulias_Route103/scripts.pory"
	waitmovement
# 24 "data/maps/Vulias_Route103/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 13
# 25 "data/maps/Vulias_Route103/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 26 "data/maps/Vulias_Route103/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 27 "data/maps/Vulias_Route103/scripts.pory"
	startquest 1
# 28 "data/maps/Vulias_Route103/scripts.pory"
	waitmessage
# 29 "data/maps/Vulias_Route103/scripts.pory"
	release
	end


VuliasRoute103_EventScript_LostMonWomanSpeak::
# 35 "data/maps/Vulias_Route103/scripts.pory"
	goto_if_set FLAG_ROUTE103_SAVED_TOGEPI, VuliasRoute103_EventScript_LostMonWomanSpeak_1
# 38 "data/maps/Vulias_Route103/scripts.pory"
	lock
# 39 "data/maps/Vulias_Route103/scripts.pory"
	faceplayer
# 40 "data/maps/Vulias_Route103/scripts.pory"
	msgbox VuliasRoute103_EventScript_LostMonWomanSpeak_Text_0
# 48 "data/maps/Vulias_Route103/scripts.pory"
	waitmessage
# 49 "data/maps/Vulias_Route103/scripts.pory"
	release
	end

VuliasRoute103_EventScript_LostMonWomanSpeak_1:
# 36 "data/maps/Vulias_Route103/scripts.pory"
	nop
	return


VuliasRoute103_EventScript_Trainer01::
# 57 "data/maps/Vulias_Route103/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, VuliasRoute103_EventScript_Trainer01_Text_0, VuliasRoute103_EventScript_Trainer01_Text_1
# 62 "data/maps/Vulias_Route103/scripts.pory"
	msgbox VuliasRoute103_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 63 "data/maps/Vulias_Route103/scripts.pory"
	waitmessage
	end


VuliasRoute103_EventScript_Trainer02::
# 68 "data/maps/Vulias_Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_5, VuliasRoute103_EventScript_Trainer02_Text_0, VuliasRoute103_EventScript_Trainer02_Text_1
# 73 "data/maps/Vulias_Route103/scripts.pory"
	msgbox VuliasRoute103_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/Vulias_Route103/scripts.pory"
	waitmessage
	end


VuliasRoute103_EventScript_Trainer03::
# 80 "data/maps/Vulias_Route103/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, VuliasRoute103_EventScript_Trainer03_Text_0, VuliasRoute103_EventScript_Trainer03_Text_1
# 86 "data/maps/Vulias_Route103/scripts.pory"
	msgbox VuliasRoute103_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 89 "data/maps/Vulias_Route103/scripts.pory"
	waitmessage
	end


# 6 "data/maps/Vulias_Route103/scripts.pory"
VuliasRoute103_EventScript_LostMonQuestTrigger_Movement_0:
# 6 "data/maps/Vulias_Route103/scripts.pory"
	face_right
# 6 "data/maps/Vulias_Route103/scripts.pory"
	emote_exclamation_mark
	step_end

# 10 "data/maps/Vulias_Route103/scripts.pory"
VuliasRoute103_EventScript_LostMonQuestTrigger_Movement_1:
# 10 "data/maps/Vulias_Route103/scripts.pory"
	walk_fast_right
# 10 "data/maps/Vulias_Route103/scripts.pory"
	walk_fast_right
# 10 "data/maps/Vulias_Route103/scripts.pory"
	walk_fast_right
# 10 "data/maps/Vulias_Route103/scripts.pory"
	walk_fast_right
	step_end

# 22 "data/maps/Vulias_Route103/scripts.pory"
VuliasRoute103_EventScript_LostMonQuestTrigger_Movement_2:
# 22 "data/maps/Vulias_Route103/scripts.pory"
	walk_down
# 22 "data/maps/Vulias_Route103/scripts.pory"
	face_up
	step_end

VuliasRoute103_EventScript_LostMonQuestTrigger_Text_0:
# 12 "data/maps/Vulias_Route103/scripts.pory"
	.string "{COLOR GREEN}Distressed Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please help! You look\n"
	.string "like a Pokemon Trainer! Some mean\l"
	.string "people in black outfits stole my\l"
	.string "{COLOR RED}Togepi{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}! They ran off into the\l"
	.string "{COLOR RED}Igris Desert{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} to the north!\p"
	.string "Oh, you must chase them, please! I can't\n"
	.string "lose my Togepi!$"

VuliasRoute103_EventScript_LostMonWomanSpeak_Text_0:
# 40 "data/maps/Vulias_Route103/scripts.pory"
	.string "{COLOR GREEN}Distressed Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please, save my\n"
	.string "Togepi! I don't know how I could go on\l"
	.string "without her!\p"
	.string "If you do, I might be able to help\n"
	.string "you {COLOR RED}cut down{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} trees!\p"
	.string "Some way that's worth more than gold!$"

VuliasRoute103_EventScript_Trainer01_Text_0:
# 59 "data/maps/Vulias_Route103/scripts.pory"
	.string "The flowers are so lovely!$"

VuliasRoute103_EventScript_Trainer01_Text_1:
# 60 "data/maps/Vulias_Route103/scripts.pory"
	.string "Awh man! Pick me a flower!.$"

VuliasRoute103_EventScript_Trainer01_Text_2:
# 62 "data/maps/Vulias_Route103/scripts.pory"
	.string "There's plenty around, choose one!$"

VuliasRoute103_EventScript_Trainer02_Text_0:
# 70 "data/maps/Vulias_Route103/scripts.pory"
	.string "My Pokemon love it out here!$"

VuliasRoute103_EventScript_Trainer02_Text_1:
# 71 "data/maps/Vulias_Route103/scripts.pory"
	.string "It seems yours do to!.$"

VuliasRoute103_EventScript_Trainer02_Text_2:
# 73 "data/maps/Vulias_Route103/scripts.pory"
	.string "Always be sure to let your Pokemon\n"
	.string "enjoy their time!$"

VuliasRoute103_EventScript_Trainer03_Text_0:
# 82 "data/maps/Vulias_Route103/scripts.pory"
	.string "Careful, coming through!$"

VuliasRoute103_EventScript_Trainer03_Text_1:
# 83 "data/maps/Vulias_Route103/scripts.pory"
	.string "What, there is no bike path\n"
	.string "around here!$"

VuliasRoute103_EventScript_Trainer03_Text_2:
# 86 "data/maps/Vulias_Route103/scripts.pory"
	.string "I wish there was a bike path...I have\n"
	.string "to go all the way to the other side of\l"
	.string "Vulias to go to the {COLOR RED}Eastern Highway{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"
