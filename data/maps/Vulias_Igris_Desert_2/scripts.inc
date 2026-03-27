Vulias_Igris_Desert_2_MapScripts::
# 2 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IgrisDesert2_OnTransition_SetState
# 3 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Desert_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Desert_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	map_script_2 VAR_IGRIS_DIGDUNGEON_DOHOP, 1, IgrisDesert2_SandHoleSpitOutOnEntry
	.2byte 0


IgrisDesert2_OnTransition_SetState::
# 9 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setvar VAR_IGRIS_DIGBUFFER_DOTELE, 0
# 10 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setflag FLAG_ENTERING_IGRISUNDER_NORTH
	return


IgrisDesert2_SandHoleSpitOutOnEntry::
# 15 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 0
# 16 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	lock
# 17 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IgrisDesert2_SandHoleSpitOutOnEntry_Movement_0
# 18 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 19 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_SandHoleSpitOutOnEntry_Text_0, MSGBOX_SIGN
# 21 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	clearflag FLAG_LEAVING_IGRIS_UNDER_NORTH
# 22 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 23 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end


# 17 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
IgrisDesert2_SandHoleSpitOutOnEntry_Movement_0:
# 17 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	jump_2_up
# 17 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	jump_up
# 17 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	face_down
	step_end

IgrisDesert2_SandHoleSpitOutOnEntry_Text_0:
# 19 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "You were thrown out back into the\n"
	.string "Desert!$"
