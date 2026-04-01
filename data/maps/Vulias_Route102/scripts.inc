Vulias_Route102_MapScripts::
	.byte 0


VuliasRoute102_EventScript_MulledCaveSign::
# 7 "data/maps/Vulias_Route102/scripts.pory"
	lockall
# 8 "data/maps/Vulias_Route102/scripts.pory"
	msgbox VuliasRoute102_EventScript_MulledCaveSign_Text_0
# 9 "data/maps/Vulias_Route102/scripts.pory"
	releaseall
	return


VuliasRoute102_EventScript_CrossroadSign::
# 14 "data/maps/Vulias_Route102/scripts.pory"
	lockall
# 15 "data/maps/Vulias_Route102/scripts.pory"
	msgbox VuliasRoute102_EventScript_CrossroadSign_Text_0
# 17 "data/maps/Vulias_Route102/scripts.pory"
	releaseall
	return


VuliasRoute102_EventScript_HiddenItemBall::
# 22 "data/maps/Vulias_Route102/scripts.pory"
	lock
# 23 "data/maps/Vulias_Route102/scripts.pory"
	giveitem ITEM_EXPERT_BELT, 1
# 24 "data/maps/Vulias_Route102/scripts.pory"
	removeobject ROUTE102_EXPERT_BELT
# 25 "data/maps/Vulias_Route102/scripts.pory"
	setflag FLAG_ROUTE102_EXPERT_BELT
# 26 "data/maps/Vulias_Route102/scripts.pory"
	release
	end


VuliasRoute102_EventScript_BrokenBridgeMan::
# 34 "data/maps/Vulias_Route102/scripts.pory"
	lock
# 35 "data/maps/Vulias_Route102/scripts.pory"
	faceplayer
# 36 "data/maps/Vulias_Route102/scripts.pory"
	setspeaker VuliasRoute102_EventScript_BrokenBridgeMan_Text_0
# 37 "data/maps/Vulias_Route102/scripts.pory"
	msgbox VuliasRoute102_EventScript_BrokenBridgeMan_Text_1
# 47 "data/maps/Vulias_Route102/scripts.pory"
	waitmessage
# 48 "data/maps/Vulias_Route102/scripts.pory"
	release
	end


Route102_EventScript_Trainer01::
# 54 "data/maps/Vulias_Route102/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route102_EventScript_Trainer01_Text_0, Route102_EventScript_Trainer01_Text_1
# 60 "data/maps/Vulias_Route102/scripts.pory"
	msgbox Route102_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/Vulias_Route102/scripts.pory"
	waitmessage
	end


Route102_EventScript_Trainer02::
# 66 "data/maps/Vulias_Route102/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, Route102_EventScript_Trainer02_Text_0, Route102_EventScript_Trainer02_Text_1
# 72 "data/maps/Vulias_Route102/scripts.pory"
	msgbox Route102_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 73 "data/maps/Vulias_Route102/scripts.pory"
	waitmessage
	end


Route102_EventScript_Trainer03::
# 78 "data/maps/Vulias_Route102/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route102_EventScript_Trainer03_Text_0, Route102_EventScript_Trainer03_Text_1
# 84 "data/maps/Vulias_Route102/scripts.pory"
	msgbox Route102_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 86 "data/maps/Vulias_Route102/scripts.pory"
	waitmessage
	end


VuliasRoute102_EventScript_MulledCaveSign_Text_0:
# 8 "data/maps/Vulias_Route102/scripts.pory"
	.string "Mullen Cave$"

VuliasRoute102_EventScript_CrossroadSign_Text_0:
# 15 "data/maps/Vulias_Route102/scripts.pory"
	.string "{RIGHT_ARROW} Cian Heights to Morien Town\n"
	.string "{LEFT_ARROW} Mulled Cave to Woltia City$"

VuliasRoute102_EventScript_BrokenBridgeMan_Text_0:
# 36 "data/maps/Vulias_Route102/scripts.pory"
	.string "Concerned Hiker$"

VuliasRoute102_EventScript_BrokenBridgeMan_Text_1:
# 37 "data/maps/Vulias_Route102/scripts.pory"
	.string "Bah! And I prepared all night for this\n"
	.string "trip! The {COLOR RED}bridge{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has collapsed!\p"
	.string "I called the service men, but I know\n"
	.string "they take a long time to fix these\l"
	.string "things. I suppose my only detour\l"
	.string "will be through {COLOR RED}Mulled Cave{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, but that\l"
	.string "will require me to travel so far!\p"
	.string "I think I'll just stay home.$"

Route102_EventScript_Trainer01_Text_0:
# 56 "data/maps/Vulias_Route102/scripts.pory"
	.string "I have too much energy!$"

Route102_EventScript_Trainer01_Text_1:
# 57 "data/maps/Vulias_Route102/scripts.pory"
	.string "That's enough energy!$"

Route102_EventScript_Trainer01_Text_2:
# 60 "data/maps/Vulias_Route102/scripts.pory"
	.string "Pick on someone your own size!.$"

Route102_EventScript_Trainer02_Text_0:
# 68 "data/maps/Vulias_Route102/scripts.pory"
	.string "I just got here, but I'll battle!$"

Route102_EventScript_Trainer02_Text_1:
# 69 "data/maps/Vulias_Route102/scripts.pory"
	.string "A great way to start a picnick!$"

Route102_EventScript_Trainer02_Text_2:
# 72 "data/maps/Vulias_Route102/scripts.pory"
	.string "I love spending time on this path.$"

Route102_EventScript_Trainer03_Text_0:
# 80 "data/maps/Vulias_Route102/scripts.pory"
	.string "My Pokemon sensed you, they want\n"
	.string "to battle!$"

Route102_EventScript_Trainer03_Text_1:
# 82 "data/maps/Vulias_Route102/scripts.pory"
	.string "Hmm, maybe they were just hungry?$"

Route102_EventScript_Trainer03_Text_2:
# 84 "data/maps/Vulias_Route102/scripts.pory"
	.string "Hold on Meditite, I think I've got a few\n"
	.string "berries in here somewhere...$"
