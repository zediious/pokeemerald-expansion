Vulias_Igris_DigDungeonBuffer_MapScripts::
# 2 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgrisDigDungeonBuffer_DecideWarp
	.byte 0


IgrisDigDungeonBuffer_DecideWarp::
# 8 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	checkitem ITEM_TM_DIG, 1
# 9 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IgrisDigDungeonBuffer_DecideWarp_1
# 14 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	setvar VAR_IGRIS_DIGDUNGEON_DOHOP, 1
# 15 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 43, 51
	return

IgrisDigDungeonBuffer_DecideWarp_1:
# 11 "data/maps/Vulias_Igris_DigDungeonBuffer/scripts.pory"
	warp MAP_VULIAS_IGRIS_UNDERGROUND, 9, 15
	return

