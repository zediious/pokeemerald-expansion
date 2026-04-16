Vulias_Route104_MapScripts::
	.byte 0


Route104_EventScript_Trainer01::
# 7 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_DEZ_AND_LUKE, Route104_EventScript_Trainer01_Text_0, Route104_EventScript_Trainer01_Text_1
# 13 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 15 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer02::
# 21 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route104_EventScript_Trainer02_Text_0, Route104_EventScript_Trainer02_Text_1
# 26 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 31 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer03::
# 37 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route104_EventScript_Trainer03_Text_0, Route104_EventScript_Trainer03_Text_1
# 42 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 44 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer04::
# 50 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route104_EventScript_Trainer04_Text_0, Route104_EventScript_Trainer04_Text_1
# 55 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer05::
# 67 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Route104_EventScript_Trainer05_Text_0, Route104_EventScript_Trainer05_Text_1
# 72 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_Trainer06::
# 79 "data/maps/Vulias_Route104/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route104_EventScript_Trainer06_Text_0, Route104_EventScript_Trainer06_Text_1
# 85 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_Trainer06_Text_2, MSGBOX_AUTOCLOSE
# 86 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
	end


Route104_EventScript_HikerTired::
# 94 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 95 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 96 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_HikerTired_Text_0
# 97 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_HikerTired_Text_1
# 100 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 101 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


Route104_EventScript_BlockingMiner::
# 107 "data/maps/Vulias_Route104/scripts.pory"
	lock
# 108 "data/maps/Vulias_Route104/scripts.pory"
	faceplayer
# 109 "data/maps/Vulias_Route104/scripts.pory"
	setspeaker Route104_EventScript_BlockingMiner_Text_0
# 110 "data/maps/Vulias_Route104/scripts.pory"
	msgbox Route104_EventScript_BlockingMiner_Text_1
# 114 "data/maps/Vulias_Route104/scripts.pory"
	waitmessage
# 115 "data/maps/Vulias_Route104/scripts.pory"
	release
	end


Route104_EventScript_Trainer01_Text_0:
# 9 "data/maps/Vulias_Route104/scripts.pory"
	.string "We love to spend time on this bridge.\n"
	.string "Our Pokemon love it too!$"

Route104_EventScript_Trainer01_Text_1:
# 11 "data/maps/Vulias_Route104/scripts.pory"
	.string "Ack! Time to head home then?$"

Route104_EventScript_Trainer01_Text_2:
# 13 "data/maps/Vulias_Route104/scripts.pory"
	.string "No, we can't let a lost battle sour our\n"
	.string "mood!.$"

Route104_EventScript_Trainer02_Text_0:
# 23 "data/maps/Vulias_Route104/scripts.pory"
	.string "I'll stop you!$"

Route104_EventScript_Trainer02_Text_1:
# 24 "data/maps/Vulias_Route104/scripts.pory"
	.string "Oh, you're not one of them?$"

Route104_EventScript_Trainer02_Text_2:
# 26 "data/maps/Vulias_Route104/scripts.pory"
	.string "Those mean {COLOR RED}Team Kowtow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} thugs came\n"
	.string "through here earlier! I thought you\l"
	.string "were one of them.\p"
	.string "They're never doing anything good...$"

Route104_EventScript_Trainer03_Text_0:
# 39 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hey! You're ruining my training regimen!$"

Route104_EventScript_Trainer03_Text_1:
# 40 "data/maps/Vulias_Route104/scripts.pory"
	.string "Ah well, that as a good workout!$"

Route104_EventScript_Trainer03_Text_2:
# 42 "data/maps/Vulias_Route104/scripts.pory"
	.string "I can't break for too long! Got to keep\n"
	.string "up my pace!$"

Route104_EventScript_Trainer04_Text_0:
# 52 "data/maps/Vulias_Route104/scripts.pory"
	.string "Gah! There aren't any bugs here at all!$"

Route104_EventScript_Trainer04_Text_1:
# 53 "data/maps/Vulias_Route104/scripts.pory"
	.string "Where are the bugs!$"

Route104_EventScript_Trainer04_Text_2:
# 55 "data/maps/Vulias_Route104/scripts.pory"
	.string "I caught all of the bugs in Sawgrass\n"
	.string "Forest, now I need more!\p"
	.string "...\p"
	.string "Do I have a problem?$"

Route104_EventScript_Trainer05_Text_0:
# 69 "data/maps/Vulias_Route104/scripts.pory"
	.string "Huah! Show me what you can do!$"

Route104_EventScript_Trainer05_Text_1:
# 70 "data/maps/Vulias_Route104/scripts.pory"
	.string "I am thoroughly impressed!$"

Route104_EventScript_Trainer05_Text_2:
# 72 "data/maps/Vulias_Route104/scripts.pory"
	.string "I have much more training to do!$"

Route104_EventScript_Trainer06_Text_0:
# 81 "data/maps/Vulias_Route104/scripts.pory"
	.string "I'm having a hard time fishing from this\n"
	.string "cliff!$"

Route104_EventScript_Trainer06_Text_1:
# 83 "data/maps/Vulias_Route104/scripts.pory"
	.string "I need a stronger cast!$"

Route104_EventScript_Trainer06_Text_2:
# 85 "data/maps/Vulias_Route104/scripts.pory"
	.string "Maybe I should find a different spot...$"

Route104_EventScript_HikerTired_Text_0:
# 96 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hiker$"

Route104_EventScript_HikerTired_Text_1:
# 97 "data/maps/Vulias_Route104/scripts.pory"
	.string "What a hike! I was hoping to see a\n"
	.string "Pokemon Center here, but it looks\l"
	.string "like I've got a ways to go still!$"

Route104_EventScript_BlockingMiner_Text_0:
# 109 "data/maps/Vulias_Route104/scripts.pory"
	.string "Miner$"

Route104_EventScript_BlockingMiner_Text_1:
# 110 "data/maps/Vulias_Route104/scripts.pory"
	.string "Hold! There's been an accident in the\n"
	.string "mines, visitors are not allowed in\l"
	.string "for now. Apologies! Come back another\l"
	.string "time!$"
