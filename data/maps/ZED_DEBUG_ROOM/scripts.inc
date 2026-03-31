ZED_DEBUG_ROOM_MapScripts::
	.byte 0


GoToDebugRoom::
# 8 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox GoToDebugRoom_Text_0, MSGBOX_YESNO
# 10 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GoToDebugRoom_2
GoToDebugRoom_1:
# 13 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

GoToDebugRoom_2:
# 11 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_ZED_DEBUG_ROOM, 17, 9
	goto GoToDebugRoom_1


JumpToPreWoltiaTourney::
# 18 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 19 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreWoltiaTourney_Text_0, MSGBOX_YESNO
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreWoltiaTourney_2
JumpToPreWoltiaTourney_1:
# 59 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreWoltiaTourney_2:
# 21 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
# 22 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 23 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 25 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 26 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 27 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 28 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 29 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 30 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 31 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 32 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 33 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 35 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 37 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 39 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 41 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 42 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_MAX_REPEL, 20
# 43 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 44 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 45 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 47 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 22
# 48 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 22
# 49 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 22
# 50 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 22
# 51 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 22
# 53 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 55 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 56 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE103, 50, 17
	goto JumpToPreWoltiaTourney_1


JumpToRuvelPyramid::
# 64 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 65 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRuvelPyramid_Text_0, MSGBOX_YESNO
# 66 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRuvelPyramid_2
JumpToRuvelPyramid_1:
# 115 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRuvelPyramid_2:
# 67 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 68 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 69 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 70 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 72 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 73 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 74 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 75 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 76 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 77 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 78 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 79 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 80 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 81 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 82 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 83 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 84 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 85 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 86 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 88 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 89 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 91 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 93 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 94 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 95 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 97 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 98 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_MAX_REPEL, 20
# 99 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 100 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 101 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 103 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 104 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 105 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 106 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 107 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 109 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 111 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
# 112 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 19, 52
	goto JumpToRuvelPyramid_1


JumpToIgrisPart2::
# 120 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 121 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToIgrisPart2_Text_0, MSGBOX_YESNO
# 122 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToIgrisPart2_2
JumpToIgrisPart2_1:
# 184 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToIgrisPart2_2:
# 123 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 124 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 125 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 126 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 127 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 128 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 129 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 130 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 131 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 132 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 133 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 134 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 135 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 136 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 137 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 138 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 139 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 140 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 141 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 142 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 143 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 144 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 145 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 146 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 147 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 148 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 149 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 150 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 151 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 152 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 153 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 154 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 155 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 157 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 158 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 160 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 162 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 163 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 164 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 166 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 167 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_MAX_REPEL, 20
# 168 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 169 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 170 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 172 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 173 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 174 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 175 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 176 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 178 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 180 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 181 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 47, 10
	goto JumpToIgrisPart2_1


GoToDebugRoom_Text_0:
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Want debug room?$"

JumpToPreWoltiaTourney_Text_0:
# 19 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-woltia tourney?$"

JumpToRuvelPyramid_Text_0:
# 65 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-woltia tourney?$"

JumpToIgrisPart2_Text_0:
# 121 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-ruvel pyramid?$"
