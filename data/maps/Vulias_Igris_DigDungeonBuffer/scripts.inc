Vulias_Igris_DigDungeonBuffer_MapScripts::
# 2 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_DigDungeonBuffer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_DigDungeonBuffer_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	map_script_2 VAR_IGRIS_DIGBUFFER_DOTELE, 0, IgrisDigDungeonBuffer_DecideWarp
	.2byte 0


IgrisDigDungeonBuffer_DecideWarp::
# 10 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_DIGBUFFER_DOTELE, 1
# 13 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	lock
# 14 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	call SpinPlayer360
# 15 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	call SpinPlayer360
# 16 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	call SpinPlayer360
# 17 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	call SpinPlayer360
# 18 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	call SpinPlayer360
# 19 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	call SpinPlayer360
# 22 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	goto_if_set FLAG_LEAVING_IGRIS_UNDER_SOUTH, IgrisDigDungeonBuffer_DecideWarp_2
# 28 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	goto_if_set FLAG_LEAVING_IGRIS_UNDER_NORTH, IgrisDigDungeonBuffer_DecideWarp_5
# 34 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	checkfieldmove FIELD_MOVE_DIG, FALSE
# 35 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_ne IgrisDigDungeonBuffer_DecideWarp_10
IgrisDigDungeonBuffer_DecideWarp_9:
# 50 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 1
# 51 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 43, 51
IgrisDigDungeonBuffer_DecideWarp_7:
# 53 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	release
# 54 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitstate
	end

IgrisDigDungeonBuffer_DecideWarp_2:
# 23 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 1
# 24 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 43, 51
	end

IgrisDigDungeonBuffer_DecideWarp_5:
# 29 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 1
# 30 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT_2, 15, 75
	end

IgrisDigDungeonBuffer_DecideWarp_8:
# 36 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	goto_if_set FLAG_ENTERING_IGRISUNDER_NORTH, IgrisDigDungeonBuffer_DecideWarp_13
# 44 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_UNDER_DOHOPLEFT, 1
# 45 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_UNDERGROUND, 15, 22
	goto IgrisDigDungeonBuffer_DecideWarp_7

IgrisDigDungeonBuffer_DecideWarp_10:
# 35 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	goto_if_set FLAG_IGRISUNDER_PLAYERISDIGGER, IgrisDigDungeonBuffer_DecideWarp_8
	goto IgrisDigDungeonBuffer_DecideWarp_9

IgrisDigDungeonBuffer_DecideWarp_13:
# 38 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_UNDER_DOHOPLEFT, 1
# 39 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	clearflag FLAG_ENTERING_IGRISUNDER_NORTH
# 40 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_UNDERGROUND_2, 15, 3
	goto IgrisDigDungeonBuffer_DecideWarp_7


SpinPlayer360::
# 60 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_0
# 61 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 62 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
# 63 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_1
# 64 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 65 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
# 66 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_2
# 67 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 68 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
# 69 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_3
# 70 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 71 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
	return


# 60 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_0:
# 60 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_left
# 60 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_up
	step_end

# 63 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_1:
# 63 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_up
# 63 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_right
	step_end

# 66 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_2:
# 66 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_right
# 66 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_down
	step_end

# 69 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_3:
# 69 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_down
# 69 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_left
	step_end
