ZED_DEBUG_ROOM_MapScripts::
	.byte 0


GoToDebugRoom::
# 4 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 5 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox GoToDebugRoom_Text_0, MSGBOX_YESNO
# 6 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GoToDebugRoom_2
GoToDebugRoom_1:
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

GoToDebugRoom_2:
# 7 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_ZED_DEBUG_ROOM, 17, 9
	goto GoToDebugRoom_1


JumpToPreWoltiaTourney::
# 14 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 15 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreWoltiaTourney_Text_0, MSGBOX_YESNO
# 16 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreWoltiaTourney_2
JumpToPreWoltiaTourney_1:
# 54 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreWoltiaTourney_2:
# 17 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
# 18 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 19 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 21 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 22 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 23 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 25 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 26 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 27 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 28 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 29 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 31 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 33 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 34 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 36 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 37 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_MAX_REPEL, 20
# 38 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 39 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 40 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 42 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 22
# 43 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 22
# 44 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 22
# 45 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 22
# 46 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 22
# 48 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 50 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 51 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE103, 50, 17
	goto JumpToPreWoltiaTourney_1


JumpToRuvelPyramid::
# 59 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 60 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRuvelPyramid_Text_0, MSGBOX_YESNO
# 61 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRuvelPyramid_2
JumpToRuvelPyramid_1:
# 108 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRuvelPyramid_2:
# 62 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 63 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 64 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 65 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 66 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 67 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 68 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 69 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 70 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 72 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 73 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 74 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 75 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 76 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 77 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 78 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 79 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 80 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 81 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 83 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 84 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 86 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 87 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 88 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 90 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 91 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_MAX_REPEL, 20
# 92 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 93 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 94 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 96 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 97 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 98 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 99 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 100 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 102 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 104 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
# 105 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 19, 52
	goto JumpToRuvelPyramid_1


GoToDebugRoom_Text_0:
# 5 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Want debug room?$"

JumpToPreWoltiaTourney_Text_0:
# 15 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-woltia tourney?$"

JumpToRuvelPyramid_Text_0:
# 60 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-woltia tourney?$"
