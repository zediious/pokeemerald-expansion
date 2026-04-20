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
# 64 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 65 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreGerbonTourney_2:
# 22 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 7
# 23 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_DISABLES_TRIGGER, 1
# 24 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_JULIA
# 25 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_CANDACE
# 26 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_FIRSTSHOW_GOLEM
# 27 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 28 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CANDACE01_MON2
# 29 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 30 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 31 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 32 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 33 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 34 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1
# 35 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2
# 36 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 37 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 38 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 39 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 40 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 41 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 43 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 45 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 47 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 48 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 49 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 50 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 52 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 18
# 53 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 18
# 54 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 18
# 55 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 18
# 56 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 18
# 58 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 60 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 61 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_OLDALE_TOWN, 22, 14
	goto JumpToPreGerbonTourney_1


JumpToPreIgrisKowtow::
# 70 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreIgrisKowtow_Text_0, MSGBOX_YESNO
# 72 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreIgrisKowtow_2
JumpToPreIgrisKowtow_1:
# 112 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 113 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreIgrisKowtow_2:
# 73 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
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
# 87 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 88 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 90 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 91 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 93 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 95 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 96 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 97 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 98 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 100 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 25
# 101 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 25
# 102 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 25
# 103 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 25
# 104 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 25
# 106 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 108 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 109 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE103, 50, 17
	goto JumpToPreIgrisKowtow_1


JumpToPreWoltiaTourney::
# 119 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 120 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToPreWoltiaTourney_Text_0, MSGBOX_YESNO
# 121 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToPreWoltiaTourney_2
JumpToPreWoltiaTourney_1:
# 169 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 170 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToPreWoltiaTourney_2:
# 122 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 123 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 124 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 125 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 126 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 127 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 128 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 129 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 130 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 131 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 132 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 133 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 134 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 135 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 136 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 137 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 138 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 139 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag ROUTE103_DISTRESSED_BEAUTY
# 141 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 142 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 144 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 145 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 147 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 148 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 150 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 151 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 152 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 153 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 155 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 25
# 156 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 25
# 157 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 25
# 158 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 25
# 159 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 25
# 161 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	completequest 1
# 163 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 165 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 166 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_WOLTIA_CITY, 17, 43
	goto JumpToPreWoltiaTourney_1


JumpToRuvelPyramid::
# 175 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 176 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRuvelPyramid_Text_0, MSGBOX_YESNO
# 177 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRuvelPyramid_2
JumpToRuvelPyramid_1:
# 227 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 228 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRuvelPyramid_2:
# 178 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 179 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 180 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 181 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 182 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 183 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 184 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 185 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 186 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 187 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 188 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 189 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 190 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 191 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 192 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 193 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 194 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 195 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 196 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 197 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 199 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 200 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 201 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 203 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 204 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 206 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 207 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 208 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 210 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 211 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 212 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 213 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 215 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 216 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 217 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 218 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 219 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 221 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 223 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_WOLTIA_CITY
# 224 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 19, 52
	goto JumpToRuvelPyramid_1


JumpToIgrisPart2::
# 233 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 234 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToIgrisPart2_Text_0, MSGBOX_YESNO
# 235 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToIgrisPart2_2
JumpToIgrisPart2_1:
# 298 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 299 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToIgrisPart2_2:
# 236 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 237 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 238 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 239 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 240 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 241 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 242 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 243 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 244 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 245 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 246 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 247 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 248 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 249 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 250 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 251 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 252 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 253 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 254 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 255 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 256 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 257 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 258 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 259 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 260 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 261 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 262 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 263 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 264 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 265 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 266 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 267 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 268 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 270 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 271 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 272 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 274 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 275 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 277 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 278 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 279 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 281 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 282 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 283 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 284 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 286 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISEAR, 30
# 287 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMISAGE, 30
# 288 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_SIMIPOUR, 30
# 289 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 30
# 290 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 30
# 292 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 294 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 295 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 47, 10
	goto JumpToIgrisPart2_1


JumpToRoute104::
# 304 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	lock
# 305 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	msgbox JumpToRoute104_Text_0, MSGBOX_YESNO
# 306 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq JumpToRoute104_2
JumpToRoute104_1:
# 372 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	waitstate
# 373 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	release
	end

JumpToRoute104_2:
# 307 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 24
# 308 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_SAVED_TOGEPI
# 309 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 310 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 311 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 312 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 313 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 314 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE102_STAIRBLOCKERS
# 315 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_KOWTOW
# 316 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_MUGGEDWOMAN
# 317 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 318 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_JORDANINHOME
# 319 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 320 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 321 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 322 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANNOTRIGGER
# 323 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 324 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBON_CRASH_KID
# 325 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 326 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_ANGRY_KROKOROK_01
# 327 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 328 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 329 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 330 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_GOTHORITA01
# 331 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMID_LOSTKID01
# 332 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_GENTLEMAN
# 333 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 334 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM
# 335 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 336 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 337 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 338 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 339 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	clearflag FLAG_PALENTOPOKECENTER_JORDAN01
# 341 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_CAP_BEFORE_FIRSTRIVAL
# 342 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE01_GET
# 343 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_BADGE02_GET
# 344 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setflag FLAG_IGRISDESERT_PASSED
# 346 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 347 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_ULTRA_REPEL, 1
# 348 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 350 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 351 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 352 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 353 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE, 1
# 355 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 20
# 356 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_GREAT_BALL, 20
# 357 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_SUPER_POTION, 20
# 358 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	giveitem ITEM_FULL_HEAL, 20
# 360 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_MANDRASEAR, 37
# 361 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_BONOSAGE, 37
# 362 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_PONGAPOUR, 37
# 363 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_INNAPE, 36
# 364 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	givemon SPECIES_FLAMIGO, 37
# 366 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	delay 30
# 368 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	setrespawn HEAL_LOCATION_VULIAS_PALENTO_VILLAGE
# 369 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	warp MAP_VULIAS_ROUTE104, 26, 56
	goto JumpToRoute104_1


GoToDebugRoom_Text_0:
# 9 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Want debug room?$"

JumpToPreGerbonTourney_Text_0:
# 20 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-gerbon tourney?$"

JumpToPreIgrisKowtow_Text_0:
# 71 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-igris kowtow encounter?$"

JumpToPreWoltiaTourney_Text_0:
# 120 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to pre-woltia tourney?$"

JumpToRuvelPyramid_Text_0:
# 176 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-woltia tourney?$"

JumpToIgrisPart2_Text_0:
# 234 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to post-ruvel pyramid?$"

JumpToRoute104_Text_0:
# 305 "data/maps/ZED_DEBUG_ROOM/scripts.pory"
	.string "Jump to Route 104?$"
