Vulias_Igris_Underground_MapScripts::
# 2 "data/maps/Vulias_Igris_Underground/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgrisDesertUnder1_OnTransition_SetState
# 3 "data/maps/Vulias_Igris_Underground/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Underground_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Underground_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Vulias_Igris_Underground/scripts.pory"
	map_script_2 VAR_IGRIS_UNDER_DOHOPLEFT, 1, IgrisUnder_SandHoleSpitOutOnEntryLeft
	.2byte 0


IgrisDesertUnder1_OnTransition_SetState::
# 9 "data/maps/Vulias_Igris_Underground/scripts.pory"
	setvar VAR_IGRIS_DIGBUFFER_DOTELE, 0
	return


IgrisUnder_SandHoleSpitOutOnEntryLeft::
# 13 "data/maps/Vulias_Igris_Underground/scripts.pory"
	setvar VAR_IGRIS_UNDER_DOHOPLEFT, 0
# 14 "data/maps/Vulias_Igris_Underground/scripts.pory"
	lock
# 15 "data/maps/Vulias_Igris_Underground/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisUnder_SandHoleSpitOutOnEntryLeft_Movement_0
# 16 "data/maps/Vulias_Igris_Underground/scripts.pory"
	waitmovement
# 17 "data/maps/Vulias_Igris_Underground/scripts.pory"
	msgbox IgrisUnder_SandHoleSpitOutOnEntryLeft_Text_0, MSGBOX_SIGN
# 19 "data/maps/Vulias_Igris_Underground/scripts.pory"
	waitmessage
# 20 "data/maps/Vulias_Igris_Underground/scripts.pory"
	release
	end


IgrisUnder_WarpOutSouth::
# 25 "data/maps/Vulias_Igris_Underground/scripts.pory"
	lock
# 26 "data/maps/Vulias_Igris_Underground/scripts.pory"
	setflag FLAG_LEAVING_IGRIS_UNDER_SOUTH
# 27 "data/maps/Vulias_Igris_Underground/scripts.pory"
	warp MAP_VULIAS_IGRIS_DIG_DUNGEON_BUFFER, 1, 2
# 28 "data/maps/Vulias_Igris_Underground/scripts.pory"
	release
	return


IgrisUnder_WarpOutNorth::
# 32 "data/maps/Vulias_Igris_Underground/scripts.pory"
	lock
# 33 "data/maps/Vulias_Igris_Underground/scripts.pory"
	setflag FLAG_LEAVING_IGRIS_UNDER_NORTH
# 34 "data/maps/Vulias_Igris_Underground/scripts.pory"
	warp MAP_VULIAS_IGRIS_DIG_DUNGEON_BUFFER, 1, 2
# 35 "data/maps/Vulias_Igris_Underground/scripts.pory"
	release
	return


# 15 "data/maps/Vulias_Igris_Underground/scripts.pory"
IgrisUnder_SandHoleSpitOutOnEntryLeft_Movement_0:
# 15 "data/maps/Vulias_Igris_Underground/scripts.pory"
	jump_2_left
# 15 "data/maps/Vulias_Igris_Underground/scripts.pory"
	jump_left
# 15 "data/maps/Vulias_Igris_Underground/scripts.pory"
	face_right
	step_end

IgrisUnder_SandHoleSpitOutOnEntryLeft_Text_0:
# 17 "data/maps/Vulias_Igris_Underground/scripts.pory"
	.string "Thanks to your Dig, you were able to\n"
	.string "navigate into an underground cave!$"
