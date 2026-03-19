Vulias_Igris_Desert_MapScripts::
	.byte 0


IgrisDesert_EventScript_AngryKrokorok::
# 5 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 6 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 7 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 9 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 10 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 12 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 14 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 18 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 7 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting the eggs!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"
