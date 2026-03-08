Route101_MapScripts::
	.byte 0


Route101_EventScript_Trainer01::
# 4 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAGNUS, Route101_EventScript_Trainer01_Text_0, Route101_EventScript_Trainer01_Text_1
# 9 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer01_Text_0:
# 6 "data/maps/Route101/scripts.pory"
	.string "I like a good battle now and again!$"

Route101_EventScript_Trainer01_Text_1:
# 7 "data/maps/Route101/scripts.pory"
	.string "That's how they usually go, fun!$"

Route101_EventScript_Trainer01_Text_2:
# 9 "data/maps/Route101/scripts.pory"
	.string "It's healthy for the old bones to have a\n"
	.string "battle now and again.$"
