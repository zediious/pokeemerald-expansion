Vulias_MullenCave_MapScripts::
# 2 "data/maps/Vulias_MullenCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_MullenCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_MullenCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Vulias_MullenCave/scripts.pory"
	map_script_2 VAR_MULLEN_CAVE_MANIAC_PATH_TRIGGER, 1, VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger
	.2byte 0


VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger::
# 9 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_MULLEN_CAVE_MANIAC_PATH_TRIGGER, 0
# 10 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLEN_HEXMANIAC, VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger_Movement_0
# 14 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 15 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLEN_HEXMANIAC, VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger_Movement_0
# 19 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLEN_HEXMANIAC, VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger_Movement_1
# 23 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 24 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_MULLEN_CAVE_MANIAC_PATH_TRIGGER, 1
	return


VuliasMullenCave_EventScript_QuickBall::
# 31 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 32 "data/maps/Vulias_MullenCave/scripts.pory"
	giveitem ITEM_QUICK_BALL, 1
# 33 "data/maps/Vulias_MullenCave/scripts.pory"
	removeobject MULLED_QUICK_BALL
# 34 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_QUICK_BALL
# 35 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


VuliasMullenCave_EventScript_Trainer01::
# 41 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_LEAH, VuliasMullenCave_EventScript_Trainer01_Text_0, VuliasMullenCave_EventScript_Trainer01_Text_1
# 46 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 47 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer02::
# 52 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_HUEY, VuliasMullenCave_EventScript_Trainer02_Text_0, VuliasMullenCave_EventScript_Trainer02_Text_1
# 58 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 59 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer03::
# 64 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_MAKAYLA, VuliasMullenCave_EventScript_Trainer03_Text_0, VuliasMullenCave_EventScript_Trainer03_Text_1
# 70 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 72 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer04::
# 77 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_ED, VuliasMullenCave_EventScript_Trainer04_Text_0, VuliasMullenCave_EventScript_Trainer04_Text_1
# 84 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 86 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


# 10 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger_Movement_0:
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_right
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_right
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_right
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 12 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_right
# 12 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_right
# 12 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_right
# 12 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 12 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
# 12 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
	step_end

# 19 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_MapScript_HexManiacTrainerPathingTrigger_Movement_1:
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_down
	step_end

VuliasMullenCave_EventScript_Trainer01_Text_0:
# 43 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Madness upon thee!$"

VuliasMullenCave_EventScript_Trainer01_Text_1:
# 44 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Upon me you say?.$"

VuliasMullenCave_EventScript_Trainer01_Text_2:
# 46 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Not a bad read kid.$"

VuliasMullenCave_EventScript_Trainer02_Text_0:
# 54 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I was looking for the Woltia City Docks,\n"
	.string "but I think I lost my way!$"

VuliasMullenCave_EventScript_Trainer02_Text_1:
# 56 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Ah, then I definitely lost my way.$"

VuliasMullenCave_EventScript_Trainer02_Text_2:
# 58 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Don't be like me, read signs!$"

VuliasMullenCave_EventScript_Trainer03_Text_0:
# 66 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "This cave houses an ancient power. Me!$"

VuliasMullenCave_EventScript_Trainer03_Text_1:
# 67 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Ah well, it really does house an ancient\n"
	.string "power!$"

VuliasMullenCave_EventScript_Trainer03_Text_2:
# 70 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "There are many legends of the horrors\n"
	.string "deep within Mulled Cave.$"

VuliasMullenCave_EventScript_Trainer04_Text_0:
# 79 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I'm trying to find the deeper sections\n"
	.string "of Mulled Cave, but it's nowhere to be\l"
	.string "found!$"

VuliasMullenCave_EventScript_Trainer04_Text_1:
# 82 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Maybe if we bring in some power tools...$"

VuliasMullenCave_EventScript_Trainer04_Text_2:
# 84 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I'm sure there are tons of rare Pokemon\n"
	.string "deeper in the cave!$"
