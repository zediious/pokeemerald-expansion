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
# 61 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 62 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
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
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 37 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 39 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 40 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 42 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 44 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 45 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 46 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 47 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 49 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 22
# 50 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 22
# 51 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 22
# 52 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 22
# 53 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 22
# 55 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 57 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 58 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE103, 50, 17
	goto JumpToPreWoltiaTourney_1


JumpToRuvelPyramid::
# 67 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 68 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRuvelPyramid_Text_0, MSGBOX_YESNO
# 69 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRuvelPyramid_2
JumpToRuvelPyramid_1:
# 119 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 120 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRuvelPyramid_2:
# 70 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 72 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 73 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 74 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 75 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 76 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 77 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 78 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 79 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 80 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 81 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 82 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 83 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 84 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 85 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 86 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 87 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 88 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 89 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 91 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 92 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 93 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 95 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 96 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 98 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 99 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 100 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 102 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 103 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 104 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 105 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 107 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 108 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 109 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 110 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 111 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 113 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 115 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
# 116 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 19, 52
	goto JumpToRuvelPyramid_1


JumpToIgrisPart2::
# 125 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 126 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToIgrisPart2_Text_0, MSGBOX_YESNO
# 127 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToIgrisPart2_2
JumpToIgrisPart2_1:
# 190 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 191 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToIgrisPart2_2:
# 128 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 129 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 130 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 131 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 132 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 133 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 134 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 135 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 136 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 137 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 138 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 139 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 140 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 141 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 142 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 143 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 144 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 145 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 146 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 147 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 148 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 149 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 150 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 151 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 152 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 153 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 154 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 155 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 156 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 157 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 158 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 159 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 160 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 162 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 163 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 164 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 166 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 167 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 169 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 170 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 171 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 173 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 174 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 175 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 176 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 178 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 179 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 180 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 181 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 182 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 184 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 186 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 187 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 47, 10
	goto JumpToIgrisPart2_1


JumpToRoute104::
# 196 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 197 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRoute104_Text_0, MSGBOX_YESNO
# 198 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRoute104_2
JumpToRoute104_1:
# 264 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 265 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRoute104_2:
# 199 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 200 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 201 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 202 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 203 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 204 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 205 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 206 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 207 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 208 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 209 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 210 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 211 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 212 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 213 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 214 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 215 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 216 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 217 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 218 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 219 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 220 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 221 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 222 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 223 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 224 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 225 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 226 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 227 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 228 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 229 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 230 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 231 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 233 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 234 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 235 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 236 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_PASSED
# 238 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 239 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 240 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 242 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 243 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 244 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 245 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 247 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 248 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 249 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 250 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 252 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_MANDRASEAR, 37
# 253 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_BONOSAGE, 37
# 254 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_PONGAPOUR, 37
# 255 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 36
# 256 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 37
# 258 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 260 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 261 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE104, 26, 56
	goto JumpToRoute104_1


GoToDebugRoom_Text_0:
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Want debug room?$"

JumpToPreWoltiaTourney_Text_0:
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-woltia tourney?$"

JumpToRuvelPyramid_Text_0:
# 68 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-woltia tourney?$"

JumpToIgrisPart2_Text_0:
# 126 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-ruvel pyramid?$"

JumpToRoute104_Text_0:
# 197 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to Route 104?$"
