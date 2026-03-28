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
# 49 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 1
# 50 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 43, 51
IgrisDigDungeonBuffer_DecideWarp_7:
# 52 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	release
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
# 43 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_UNDER_DOHOPLEFT, 1
# 44 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
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
# 58 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_0
# 59 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 60 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
# 61 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_1
# 62 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 63 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
# 64 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_2
# 65 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 66 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
# 67 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SpinPlayer360_Movement_3
# 68 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	playse SE_M_DIG
# 69 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	waitmovement
	return


# 58 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_0:
# 58 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_left
# 58 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_up
	step_end

# 61 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_1:
# 61 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_up
# 61 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_right
	step_end

# 64 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_2:
# 64 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_right
# 64 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_down
	step_end

# 67 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
SpinPlayer360_Movement_3:
# 67 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	face_down
# 67 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	slide_left
	step_end
