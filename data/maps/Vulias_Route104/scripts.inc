Vulias_Route104_MapScripts::
# 5 "data/maps/Vulias_Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MapScript_SetState
# 2 "data/maps/Vulias_Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Vulias_Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Vulias_Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Vulias_Route104/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, Route104_MapScript_ResetLiordunCrowd
	.2byte 0


Route104_MapScript_ResetLiordunCrowd::
# 10 "data/maps/Vulias_Route104/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 0
# 11 "data/maps/Vulias_Route104/scripts.pory"
	goto_if_unset FLAG_IGRISDESERT_PASSED, Route104_MapScript_ResetLiordunCrowd_1
	return

Route104_MapScript_ResetLiordunCrowd_1:
# 13 "data/maps/Vulias_Route104/scripts.pory"
	setflag FLAG_IGRISDESERT_PASSED
	return


Route104_MapScript_SetState::
# 19 "data/maps/Vulias_Route104/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt Route104_MapScript_SetState_1
# 26 "data/maps/Vulias_Route104/scripts.pory"
	setflag FLAG_ROUTE104_WORKERBLOCKER
# 27 "data/maps/Vulias_Route104/scripts.pory"
	clearflag FLAG_ROUTE104_WORKER
	return

Route104_MapScript_SetState_1:
# 21 "data/maps/Vulias_Route104/scripts.pory"
	setflag FLAG_ROUTE104_WORKER
# 22 "data/maps/Vulias_Route104/scripts.pory"
	clearflag FLAG_ROUTE104_WORKERBLOCKER
	return


Route104_EventScript_Trainer01::
# 36 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_DEZ_AND_LUKE, Route104_EventScript_Trainer01_Text_0, Route104_EventScript_Trainer01_Text_1
# 42 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 44 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer02::
# 50 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route104_EventScript_Trainer02_Text_0, Route104_EventScript_Trainer02_Text_1
# 55 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 60 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer03::
# 66 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route104_EventScript_Trainer03_Text_0, Route104_EventScript_Trainer03_Text_1
# 71 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer04::
# 79 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route104_EventScript_Trainer04_Text_0, Route104_EventScript_Trainer04_Text_1
# 84 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 90 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer05::
# 96 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Route104_EventScript_Trainer05_Text_0, Route104_EventScript_Trainer05_Text_1
# 101 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 102 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer06::
# 108 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route104_EventScript_Trainer06_Text_0, Route104_EventScript_Trainer06_Text_1
# 114 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer06_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_HikerTired::
# 123 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 124 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 125 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_HikerTired_Text_0
# 126 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_HikerTired_Text_1
# 129 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 130 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


Route104_EventScript_MinerTrigger::
# 136 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 137 "data/maps/Vulias_Route104/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 28
	goto_if_lt Route104_EventScript_MinerTrigger_1
# 144 "data/maps/Vulias_Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_EventScript_MinerTrigger_Movement_1
# 145 "data/maps/Vulias_Route104/scripts.pory"
	goto Route104_EventScript_WelcomingMiner
	return

Route104_EventScript_MinerTrigger_1:
# 139 "data/maps/Vulias_Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_EventScript_MinerTrigger_Movement_0
# 140 "data/maps/Vulias_Route104/scripts.pory"
	goto Route104_EventScript_BlockingMiner
	return


Route104_EventScript_BlockingMiner::
# 151 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 152 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 153 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_BlockingMiner_Text_0
# 154 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_BlockingMiner_Text_1
# 158 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 159 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


Route104_EventScript_WelcomingMiner::
# 165 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 166 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 167 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_BlockingMiner_Text_0
# 168 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_WelcomingMiner_Text_0
# 173 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 174 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


# 139 "data/maps/Vulias_Route104/scripts.pory"
Route104_EventScript_MinerTrigger_Movement_0:
# 139 "data/maps/Vulias_Route104/scripts.pory"
	face_up
	step_end

# 144 "data/maps/Vulias_Route104/scripts.pory"
Route104_EventScript_MinerTrigger_Movement_1:
# 144 "data/maps/Vulias_Route104/scripts.pory"
	face_left
	step_end

Route104_EventScript_Trainer01_Text_0:
# 38 "data/maps/Vulias_Route104/scripts.pory"
	.string "We love to spend time on this bridge.\n"
	.string "Our Pokemon love it too!$"

Route104_EventScript_Trainer01_Text_1:
# 40 "data/maps/Vulias_Route104/scripts.pory"
	.string "Ack! Time to head home then?$"

Route104_EventScript_Trainer01_Text_2:
# 42 "data/maps/Vulias_Route104/scripts.pory"
	.string "No, we can't let a lost battle sour our\n"
	.string "mood!.$"

Route104_EventScript_Trainer02_Text_0:
# 52 "data/maps/Vulias_Route104/scripts.pory"
	.string "I'll stop you!$"

Route104_EventScript_Trainer02_Text_1:
# 53 "data/maps/Vulias_Route104/scripts.pory"
	.string "Oh, you're not one of them?$"

Route104_EventScript_Trainer02_Text_2:
# 55 "data/maps/Vulias_Route104/scripts.pory"
	.string "Those mean {COLOR RED}Team Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} thugs came\n"
	.string "through here earlier! I thought you\l"
	.string "were one of them.\p"
	.string "They're never doing anything good...$"

Route104_EventScript_Trainer03_Text_0:
# 68 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hey! You're ruining my training regimen!$"

Route104_EventScript_Trainer03_Text_1:
# 69 "data/maps/Vulias_Route104/scripts.pory"
	.string "Ah well, that as a good workout!$"

Route104_EventScript_Trainer03_Text_2:
# 71 "data/maps/Vulias_Route104/scripts.pory"
	.string "I can't break for too long! Got to keep\n"
	.string "up my pace!$"

Route104_EventScript_Trainer04_Text_0:
# 81 "data/maps/Vulias_Route104/scripts.pory"
	.string "Gah! There aren't any bugs here at all!$"

Route104_EventScript_Trainer04_Text_1:
# 82 "data/maps/Vulias_Route104/scripts.pory"
	.string "Where are the bugs!$"

Route104_EventScript_Trainer04_Text_2:
# 84 "data/maps/Vulias_Route104/scripts.pory"
	.string "I caught all of the bugs in Sawgrass\n"
	.string "Forest, now I need more!\p"
	.string "...\p"
	.string "Do I have a problem?$"

Route104_EventScript_Trainer05_Text_0:
# 98 "data/maps/Vulias_Route104/scripts.pory"
	.string "Huah! Show me what you can do!$"

Route104_EventScript_Trainer05_Text_1:
# 99 "data/maps/Vulias_Route104/scripts.pory"
	.string "I am thoroughly impressed!$"

Route104_EventScript_Trainer05_Text_2:
# 101 "data/maps/Vulias_Route104/scripts.pory"
	.string "I have much more training to do!$"

Route104_EventScript_Trainer06_Text_0:
# 110 "data/maps/Vulias_Route104/scripts.pory"
	.string "I'm having a hard time fishing from this\n"
	.string "cliff!$"

Route104_EventScript_Trainer06_Text_1:
# 112 "data/maps/Vulias_Route104/scripts.pory"
	.string "I need a stronger cast!$"

Route104_EventScript_Trainer06_Text_2:
# 114 "data/maps/Vulias_Route104/scripts.pory"
	.string "Maybe I should find a different spot...$"

Route104_EventScript_HikerTired_Text_0:
# 125 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hiker$"

Route104_EventScript_HikerTired_Text_1:
# 126 "data/maps/Vulias_Route104/scripts.pory"
	.string "What a hike! I was hoping to see a\n"
	.string "Pokemon Center here, but it looks\l"
	.string "like I've got a ways to go still!$"

Route104_EventScript_BlockingMiner_Text_0:
# 153 "data/maps/Vulias_Route104/scripts.pory"
	.string "Miner$"

Route104_EventScript_BlockingMiner_Text_1:
# 154 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hold! There's been an accident in the\n"
	.string "mines, visitors are not allowed in\l"
	.string "for now. Apologies! Come back another\l"
	.string "time!$"

Route104_EventScript_WelcomingMiner_Text_0:
# 168 "data/maps/Vulias_Route104/scripts.pory"
	.string "Welcome! I hope you enjoy the Mines!\n"
	.string "Be sure to stay out of the blocked-off\l"
	.string "areas, there are some very dangerous\l"
	.string "parts of the mines you must stay away\l"
	.string "from!$"
