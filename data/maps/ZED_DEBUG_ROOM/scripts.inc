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


JumpToPreGerbonTourney::
# 19 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreGerbonTourney_Text_0, MSGBOX_YESNO
# 21 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreGerbonTourney_2
JumpToPreGerbonTourney_1:
# 58 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 59 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreGerbonTourney_2:
# 22 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 7
# 23 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 25 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 26 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 27 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 28 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1
# 29 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2
# 30 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 31 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 32 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 33 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 34 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 35 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 37 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 39 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 41 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 42 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 43 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 44 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 46 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 18
# 47 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 18
# 48 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 18
# 49 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 18
# 50 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 18
# 52 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 54 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 55 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_OLDALE_TOWN, 22, 14
	goto JumpToPreGerbonTourney_1


JumpToPreWoltiaTourney::
# 64 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 65 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreWoltiaTourney_Text_0, MSGBOX_YESNO
# 66 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreWoltiaTourney_2
JumpToPreWoltiaTourney_1:
# 106 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 107 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreWoltiaTourney_2:
# 67 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
# 68 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 69 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 70 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 72 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 73 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 74 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 75 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 76 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 77 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 78 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 79 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 81 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 82 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 84 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 85 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 87 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 89 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 90 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 91 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 92 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 94 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 22
# 95 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 22
# 96 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 22
# 97 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 22
# 98 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 22
# 100 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 102 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 103 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE103, 50, 17
	goto JumpToPreWoltiaTourney_1


JumpToRuvelPyramid::
# 112 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 113 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRuvelPyramid_Text_0, MSGBOX_YESNO
# 114 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRuvelPyramid_2
JumpToRuvelPyramid_1:
# 164 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 165 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRuvelPyramid_2:
# 115 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 116 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 117 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 118 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 119 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 120 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 121 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 122 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 123 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 124 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 125 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 126 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 127 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 128 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 129 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 130 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 131 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 132 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 133 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 134 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 136 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 137 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 138 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 140 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 141 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 143 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 144 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 145 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 147 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 148 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 149 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 150 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 152 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 153 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 154 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 155 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 156 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 158 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 160 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
# 161 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 19, 52
	goto JumpToRuvelPyramid_1


JumpToIgrisPart2::
# 170 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 171 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToIgrisPart2_Text_0, MSGBOX_YESNO
# 172 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToIgrisPart2_2
JumpToIgrisPart2_1:
# 235 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 236 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToIgrisPart2_2:
# 173 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 174 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 175 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 176 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 177 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 178 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 179 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 180 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 181 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 182 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 183 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 184 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 185 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 186 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 187 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 188 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 189 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 190 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 191 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 192 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 193 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 194 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 195 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 196 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 197 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 198 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 199 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 200 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 201 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 202 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 203 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 204 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 205 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 207 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 208 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 209 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 211 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 212 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 214 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 215 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 216 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 218 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 219 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 220 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 221 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 223 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 224 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 225 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 226 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 227 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 229 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 231 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 232 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 47, 10
	goto JumpToIgrisPart2_1


JumpToRoute104::
# 241 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 242 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRoute104_Text_0, MSGBOX_YESNO
# 243 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRoute104_2
JumpToRoute104_1:
# 309 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 310 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRoute104_2:
# 244 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 245 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 246 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 247 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 248 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 249 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 250 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 251 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 252 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 253 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 254 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 255 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 256 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 257 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 258 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 259 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 260 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 261 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 262 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 263 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 264 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 265 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 266 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 267 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 268 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 269 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 270 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 271 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 272 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 273 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 274 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 275 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 276 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 278 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 279 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 280 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 281 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_PASSED
# 283 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 284 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 285 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 287 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 288 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 289 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 290 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 292 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 293 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 294 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 295 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 297 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_MANDRASEAR, 37
# 298 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_BONOSAGE, 37
# 299 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_PONGAPOUR, 37
# 300 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 36
# 301 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 37
# 303 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 305 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 306 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE104, 26, 56
	goto JumpToRoute104_1


GoToDebugRoom_Text_0:
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Want debug room?$"

JumpToPreGerbonTourney_Text_0:
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-gerbon tourney?$"

JumpToPreWoltiaTourney_Text_0:
# 65 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-woltia tourney?$"

JumpToRuvelPyramid_Text_0:
# 113 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-woltia tourney?$"

JumpToIgrisPart2_Text_0:
# 171 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-ruvel pyramid?$"

JumpToRoute104_Text_0:
# 242 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to Route 104?$"
