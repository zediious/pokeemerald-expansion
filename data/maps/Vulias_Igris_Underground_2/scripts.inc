Vulias_Igris_Underground_2_MapScripts::
# 2 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgrisDesertUnder2_OnTransition_SetState
# 3 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Underground_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Underground_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	map_script_2 VAR_IGRIS_UNDER_DOHOPLEFT, 1, IgrisUnder2_SandHoleSpitOutOnEntryLeft
	.2byte 0


IgrisUnder2_SandHoleSpitOutOnEntryLeft::
# 9 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	setvar VAR_IGRIS_UNDER_DOHOPLEFT, 0
# 10 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	lock
# 11 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisUnder2_SandHoleSpitOutOnEntryLeft_Movement_0
# 12 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	waitmovement
# 13 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	msgbox IgrisUnder2_SandHoleSpitOutOnEntryLeft_Text_0, MSGBOX_SIGN
# 15 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	waitmessage
# 16 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	release
	end


IgrisDesertUnder2_OnTransition_SetState::
# 21 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	setvar VAR_IGRIS_DIGBUFFER_DOTELE, 0
	return


# 11 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
IgrisUnder2_SandHoleSpitOutOnEntryLeft_Movement_0:
# 11 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	jump_2_left
# 11 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	jump_left
# 11 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	face_right
	step_end

IgrisUnder2_SandHoleSpitOutOnEntryLeft_Text_0:
# 13 "data/maps/Vulias_Igris_Underground_2/scripts.pory"
	.string "Thanks to your Dig, you were able to\n"
	.string "navigate into an underground cave!$"
