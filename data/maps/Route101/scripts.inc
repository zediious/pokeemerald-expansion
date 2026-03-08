Route101_MapScripts::
	.byte 0


Route101_EventScript_Trainer01::
# 4 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAGNUS, Route101_EventScript_Trainer01_Text_0, Route101_EventScript_Trainer01_Text_1
	return


Route101_EventScript_Trainer01_Text_0:
# 6 "data/maps/Route101/scripts.pory"
	.string "I like a good battle now and again!$"

Route101_EventScript_Trainer01_Text_1:
# 7 "data/maps/Route101/scripts.pory"
	.string "That's how they usually go, fun!$"
