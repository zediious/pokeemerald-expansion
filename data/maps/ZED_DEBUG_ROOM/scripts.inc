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
	waitstate
# 14 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

GoToDebugRoom_2:
# 11 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_ZED_DEBUG_ROOM, 17, 9
	goto GoToDebugRoom_1


JumpToPreWoltiaTourney::
# 19 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreWoltiaTourney_Text_0, MSGBOX_YESNO
# 21 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreWoltiaTourney_2
JumpToPreWoltiaTourney_1:
# 60 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 61 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreWoltiaTourney_2:
# 22 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
# 23 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 25 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 26 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 27 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 28 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 29 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 30 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 31 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 32 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 33 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 34 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 36 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 38 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 39 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 41 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 43 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 44 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 45 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 46 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 48 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 22
# 49 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 22
# 50 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 22
# 51 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 22
# 52 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 22
# 54 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 56 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 57 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE103, 50, 17
	goto JumpToPreWoltiaTourney_1


JumpToRuvelPyramid::
# 66 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 67 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRuvelPyramid_Text_0, MSGBOX_YESNO
# 68 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRuvelPyramid_2
JumpToRuvelPyramid_1:
# 117 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 118 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRuvelPyramid_2:
# 69 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 70 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 72 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 73 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 74 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 75 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 76 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 77 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 78 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 79 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 80 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 81 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 82 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 83 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 84 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 85 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 86 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 87 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 88 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 90 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 91 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 93 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 94 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 96 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 97 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 98 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 100 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 101 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 102 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 103 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 105 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 106 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 107 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 108 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 109 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 111 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 113 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
# 114 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 19, 52
	goto JumpToRuvelPyramid_1


JumpToIgrisPart2::
# 123 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 124 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToIgrisPart2_Text_0, MSGBOX_YESNO
# 125 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToIgrisPart2_2
JumpToIgrisPart2_1:
# 187 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 188 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToIgrisPart2_2:
# 126 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 127 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 128 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 129 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 130 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 131 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 132 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 133 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 134 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 135 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 136 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 137 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 138 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 139 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 140 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 141 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 142 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 143 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 144 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 145 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 146 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 147 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 148 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 149 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 150 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 151 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 152 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 153 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 154 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 155 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 156 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 157 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 158 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 160 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 161 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 163 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 164 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 166 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 167 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 168 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 170 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 171 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 172 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 173 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 175 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 176 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 177 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 178 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 179 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 181 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 183 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 184 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 47, 10
	goto JumpToIgrisPart2_1


JumpToRoute104::
# 193 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 194 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRoute104_Text_0, MSGBOX_YESNO
# 195 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRoute104_2
JumpToRoute104_1:
# 260 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 261 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRoute104_2:
# 196 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 197 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 198 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 199 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 200 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 201 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 202 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 203 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 204 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 205 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 206 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 207 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 208 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 209 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 210 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 211 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 212 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 213 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 214 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 215 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 216 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 217 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 218 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 219 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 220 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 221 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 222 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 223 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 224 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 225 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 226 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 227 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 228 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 230 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 231 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 232 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_PASSED
# 234 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 235 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 236 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 238 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 239 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 240 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 241 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 243 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 244 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 245 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 246 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 248 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_MANDRASEAR, 37
# 249 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_BONOSAGE, 37
# 250 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_PONGAPOUR, 37
# 251 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 36
# 252 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 37
# 254 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 256 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 257 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE104, 26, 56
	goto JumpToRoute104_1


GoToDebugRoom_Text_0:
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Want debug room?$"

JumpToPreWoltiaTourney_Text_0:
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-woltia tourney?$"

JumpToRuvelPyramid_Text_0:
# 67 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-woltia tourney?$"

JumpToIgrisPart2_Text_0:
# 124 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-ruvel pyramid?$"

JumpToRoute104_Text_0:
# 194 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to Route 104?$"
