Vulias_Route104_MapScripts::
# 2 "data/maps/Vulias_Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Vulias_Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Vulias_Route104_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Vulias_Route104/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, Route104_MapScript_ResetLiordunCrowd
	.2byte 0


Route104_MapScript_ResetLiordunCrowd::
# 9 "data/maps/Vulias_Route104/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 0
	return


Route104_EventScript_Trainer01::
# 16 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_DEZ_AND_LUKE, Route104_EventScript_Trainer01_Text_0, Route104_EventScript_Trainer01_Text_1
# 22 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 24 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer02::
# 30 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route104_EventScript_Trainer02_Text_0, Route104_EventScript_Trainer02_Text_1
# 35 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer03::
# 46 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route104_EventScript_Trainer03_Text_0, Route104_EventScript_Trainer03_Text_1
# 51 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 53 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer04::
# 59 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route104_EventScript_Trainer04_Text_0, Route104_EventScript_Trainer04_Text_1
# 64 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer05::
# 76 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Route104_EventScript_Trainer05_Text_0, Route104_EventScript_Trainer05_Text_1
# 81 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer06::
# 88 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route104_EventScript_Trainer06_Text_0, Route104_EventScript_Trainer06_Text_1
# 94 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer06_Text_2, MSGBOX_AUTOCLOSE
# 95 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_HikerTired::
# 103 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 104 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 105 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_HikerTired_Text_0
# 106 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_HikerTired_Text_1
# 109 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 110 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


Route104_EventScript_BlockingMiner::
# 116 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 117 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 118 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_BlockingMiner_Text_0
# 119 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_BlockingMiner_Text_1
# 123 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 124 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


Route104_EventScript_Trainer01_Text_0:
# 18 "data/maps/Vulias_Route104/scripts.pory"
	.string "We love to spend time on this bridge.\n"
	.string "Our Pokemon love it too!$"

Route104_EventScript_Trainer01_Text_1:
# 20 "data/maps/Vulias_Route104/scripts.pory"
	.string "Ack! Time to head home then?$"

Route104_EventScript_Trainer01_Text_2:
# 22 "data/maps/Vulias_Route104/scripts.pory"
	.string "No, we can't let a lost battle sour our\n"
	.string "mood!.$"

Route104_EventScript_Trainer02_Text_0:
# 32 "data/maps/Vulias_Route104/scripts.pory"
	.string "I'll stop you!$"

Route104_EventScript_Trainer02_Text_1:
# 33 "data/maps/Vulias_Route104/scripts.pory"
	.string "Oh, you're not one of them?$"

Route104_EventScript_Trainer02_Text_2:
# 35 "data/maps/Vulias_Route104/scripts.pory"
	.string "Those mean {COLOR RED}Team Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} thugs came\n"
	.string "through here earlier! I thought you\l"
	.string "were one of them.\p"
	.string "They're never doing anything good...$"

Route104_EventScript_Trainer03_Text_0:
# 48 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hey! You're ruining my training regimen!$"

Route104_EventScript_Trainer03_Text_1:
# 49 "data/maps/Vulias_Route104/scripts.pory"
	.string "Ah well, that as a good workout!$"

Route104_EventScript_Trainer03_Text_2:
# 51 "data/maps/Vulias_Route104/scripts.pory"
	.string "I can't break for too long! Got to keep\n"
	.string "up my pace!$"

Route104_EventScript_Trainer04_Text_0:
# 61 "data/maps/Vulias_Route104/scripts.pory"
	.string "Gah! There aren't any bugs here at all!$"

Route104_EventScript_Trainer04_Text_1:
# 62 "data/maps/Vulias_Route104/scripts.pory"
	.string "Where are the bugs!$"

Route104_EventScript_Trainer04_Text_2:
# 64 "data/maps/Vulias_Route104/scripts.pory"
	.string "I caught all of the bugs in Sawgrass\n"
	.string "Forest, now I need more!\p"
	.string "...\p"
	.string "Do I have a problem?$"

Route104_EventScript_Trainer05_Text_0:
# 78 "data/maps/Vulias_Route104/scripts.pory"
	.string "Huah! Show me what you can do!$"

Route104_EventScript_Trainer05_Text_1:
# 79 "data/maps/Vulias_Route104/scripts.pory"
	.string "I am thoroughly impressed!$"

Route104_EventScript_Trainer05_Text_2:
# 81 "data/maps/Vulias_Route104/scripts.pory"
	.string "I have much more training to do!$"

Route104_EventScript_Trainer06_Text_0:
# 90 "data/maps/Vulias_Route104/scripts.pory"
	.string "I'm having a hard time fishing from this\n"
	.string "cliff!$"

Route104_EventScript_Trainer06_Text_1:
# 92 "data/maps/Vulias_Route104/scripts.pory"
	.string "I need a stronger cast!$"

Route104_EventScript_Trainer06_Text_2:
# 94 "data/maps/Vulias_Route104/scripts.pory"
	.string "Maybe I should find a different spot...$"

Route104_EventScript_HikerTired_Text_0:
# 105 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hiker$"

Route104_EventScript_HikerTired_Text_1:
# 106 "data/maps/Vulias_Route104/scripts.pory"
	.string "What a hike! I was hoping to see a\n"
	.string "Pokemon Center here, but it looks\l"
	.string "like I've got a ways to go still!$"

Route104_EventScript_BlockingMiner_Text_0:
# 118 "data/maps/Vulias_Route104/scripts.pory"
	.string "Miner$"

Route104_EventScript_BlockingMiner_Text_1:
# 119 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hold! There's been an accident in the\n"
	.string "mines, visitors are not allowed in\l"
	.string "for now. Apologies! Come back another\l"
	.string "time!$"
