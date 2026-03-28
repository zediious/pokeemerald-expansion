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


IgrisDesert2_OldManSpeak::
# 29 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	lock
# 30 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	faceplayer
# 31 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_IGRIS_OLDMAN_STATE, 0
	goto_if_eq IgrisDesert2_OldManSpeak_1
# 84 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_IGRIS_OLDMAN_STATE, 1
	goto_if_eq IgrisDesert2_OldManSpeak_2
# 95 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_IGRIS_OLDMAN_STATE, 2
	goto_if_eq IgrisDesert2_OldManSpeak_3
# 159 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_IGRIS_OLDMAN_STATE, 3
	goto_if_eq IgrisDesert2_OldManSpeak_4
# 178 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_14
# 180 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 181 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_3
# 185 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 186 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	playmoncry SPECIES_SKELEDIRGE, CRY_MODE_NORMAL
# 187 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_10
# 188 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmoncry
# 189 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 190 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_2
# 191 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 192 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end

IgrisDesert2_OldManSpeak_1:
# 33 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 35 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_0
# 38 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 40 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 41 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	case 1, IgrisDesert2_OldManSpeak_11
# 47 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	case 2, IgrisDesert2_OldManSpeak_12
# 52 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	case 3, IgrisDesert2_OldManSpeak_13
# 59 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	case 4, IgrisDesert2_OldManSpeak_14
# 64 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	case 5, IgrisDesert2_OldManSpeak_15
# 70 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	case 6, IgrisDesert2_OldManSpeak_16
# 77 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_7
# 79 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 80 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_LeaveBadFriendship
	return

IgrisDesert2_OldManSpeak_2:
# 86 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_8
# 90 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMAN_INHOME, IgrisDesert2_OldManSpeak_Movement_0
# 91 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 92 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end

IgrisDesert2_OldManSpeak_3:
# 97 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_9
# 112 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 115 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_1
# 119 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 120 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	playmoncry SPECIES_SKELEDIRGE, CRY_MODE_NORMAL
# 121 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_10
# 122 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmoncry
# 123 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 124 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_2
# 125 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 127 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_11
# 130 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	giveitem ITEM_TERA_ORB, 1
# 131 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_12
# 150 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setvar VAR_IGRIS_OLDMAN_STATE, 3
# 151 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	checkitem ITEM_TM_DIG, 1
# 152 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	completequest 3
# 153 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IgrisDesert2_OldManSpeak_19
IgrisDesert2_OldManSpeak_18:
# 156 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end

IgrisDesert2_OldManSpeak_4:
# 161 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	checkitem ITEM_TM_DIG, 1
# 162 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IgrisDesert2_OldManSpeak_21
# 165 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_13
# 171 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 172 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end

IgrisDesert2_OldManSpeak_11:
# 43 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_1
# 45 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 46 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_LeaveBadFriendship
	return

IgrisDesert2_OldManSpeak_12:
# 48 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_2
# 50 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 51 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_LeaveBadFriendship
	return

IgrisDesert2_OldManSpeak_13:
# 53 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_3
# 56 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 57 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 58 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_GoodFriendship
	return

IgrisDesert2_OldManSpeak_14:
# 60 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_4
# 62 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 63 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_GoodFriendship
	return

IgrisDesert2_OldManSpeak_15:
# 65 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_5
# 68 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 69 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_GoodFriendship
	return

IgrisDesert2_OldManSpeak_16:
# 71 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_6
# 74 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 75 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_GoodFriendship
	return

IgrisDesert2_OldManSpeak_19:
# 154 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_TeachDigBetter
	goto IgrisDesert2_OldManSpeak_18

IgrisDesert2_OldManSpeak_21:
# 163 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	goto IgrisDesert2_OldManSpeak_TeachDigBetter
	return


IgrisDesert2_OldManSpeak_LeaveBadFriendship::
# 199 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_LeaveBadFriendship_Text_0
# 202 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMAN_INHOME, IgrisDesert2_OldManSpeak_Movement_0
# 203 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 204 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end


IgrisDesert2_OldManSpeak_GoodFriendship::
# 210 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_GoodFriendship_Text_0
# 212 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 213 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_3
# 217 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 218 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	playmoncry SPECIES_SKELEDIRGE, CRY_MODE_NORMAL
# 219 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_10
# 220 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMAN_INHOME, IgrisDesert2_OldManSpeak_GoodFriendship_Movement_0
# 221 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmoncry
# 222 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 223 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_2
# 224 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 225 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	faceplayer
# 226 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_GoodFriendship_Text_1, MSGBOX_YESNO
# 232 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq IgrisDesert2_OldManSpeak_GoodFriendship_1
# 282 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_GoodFriendship_Text_4
# 286 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 287 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMAN_INHOME, IgrisDesert2_OldManSpeak_Movement_0
# 288 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 289 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end

IgrisDesert2_OldManSpeak_GoodFriendship_1:
# 233 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_GoodFriendship_Text_2
# 255 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 258 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_3
# 262 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 263 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	playmoncry SPECIES_SKELEDIRGE, CRY_MODE_NORMAL
# 264 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_Text_10
# 265 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmoncry
# 266 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 267 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMANMON_INHOME, IgrisDesert2_OldManSpeak_Movement_2
# 268 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmovement
# 269 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_GoodFriendship_Text_3
# 276 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 277 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setvar VAR_IGRIS_OLDMAN_STATE, 1
# 278 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	startquest 3
# 279 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	release
	end


IgrisDesert2_OldManSpeak_TeachDigBetter::
# 296 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_TeachDigBetter_Text_0
# 308 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 309 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setflag FLAG_IGRISUNDER_PLAYERISDIGGER
# 310 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 311 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	closemessage
# 312 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	delay 60
# 313 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 314 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_TeachDigBetter_Text_1
# 315 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 316 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 317 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_TeachDigBetter_Text_2, MSGBOX_SIGN
# 320 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitse
# 321 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 322 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	msgbox IgrisDesert2_OldManSpeak_TeachDigBetter_Text_3
# 329 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	waitmessage
# 330 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	applymovement IGRIS_OLDMAN_INHOME, IgrisDesert2_OldManSpeak_Movement_0
# 331 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	setvar VAR_IGRIS_OLDMAN_STATE, 4
# 332 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
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

# 90 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
IgrisDesert2_OldManSpeak_Movement_0:
# 90 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	face_right
	step_end

# 115 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
IgrisDesert2_OldManSpeak_Movement_1:
# 116 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	face_down
# 117 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	jump_in_place_down
# 117 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	jump_in_place_down
# 117 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	jump_in_place_down
	step_end

# 124 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
IgrisDesert2_OldManSpeak_Movement_2:
# 124 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	face_left
	step_end

# 181 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
IgrisDesert2_OldManSpeak_Movement_3:
# 182 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	face_down
# 183 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	jump_in_place_down
	step_end

# 220 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
IgrisDesert2_OldManSpeak_GoodFriendship_Movement_0:
# 220 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	face_up
	step_end

IgrisDesert2_SandHoleSpitOutOnEntry_Text_0:
# 19 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "You were thrown out back into the\n"
	.string "Desert!$"

IgrisDesert2_OldManSpeak_Text_0:
# 35 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ah hello!\p"
	.string "...your {STR_VAR_1}...$"

IgrisDesert2_OldManSpeak_Text_1:
# 43 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "They seem to have spent a little time\n"
	.string "with you, but don't fully trust you.$"

IgrisDesert2_OldManSpeak_Text_2:
# 48 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "There is a friendship here, but there is\n"
	.string "still something missing...$"

IgrisDesert2_OldManSpeak_Text_3:
# 53 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "They appear to like you quite a lot!\n"
	.string "You must have some understanding of\l"
	.string "what it means to be a Pokemon trainer!$"

IgrisDesert2_OldManSpeak_Text_4:
# 60 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "It's clear they trust you deeply, the\n"
	.string "look in their eyes says it all.$"

IgrisDesert2_OldManSpeak_Text_5:
# 65 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Why, it simply adores you! It's rare that\n"
	.string "I see such a strong bond between a\l"
	.string "trainer and Pokemon.$"

IgrisDesert2_OldManSpeak_Text_6:
# 71 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "The bond you two share...it is palpable.\n"
	.string "I daresay you two could take on the\l"
	.string "world together.$"

IgrisDesert2_OldManSpeak_Text_7:
# 77 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Why, they don't seem to like you very\n"
	.string "very much at all!$"

IgrisDesert2_OldManSpeak_Text_8:
# 86 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "The tunnel is found through the {COLOR RED}ladder\n"
	.string "on the cliff that is behind my home{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Make sure you prepare your Pokemon!$"

IgrisDesert2_OldManSpeak_Text_9:
# 97 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "You show the old man the dusty journal\p"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Without a doubt, that's my\n"
	.string "journal! I cannot thank you enough for\l"
	.string "retreiving it!\p"
	.string "As well...if you were able to make it\n"
	.string "past the trainers down there, you\l"
	.string "have an undoubtedly strong bond\l"
	.string "with with your Pokemon.\p"
	.string "...\p"
	.string "What do you think Skeledirge? Are\n"
	.string "they ready for such a thing?$"

IgrisDesert2_OldManSpeak_Text_10:
# 121 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Wohhhhhhhhh$"

IgrisDesert2_OldManSpeak_Text_11:
# 127 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}No room to argue with that!\n"
	.string "Here, take this {COLOR RED}Tera Orb{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.$"

IgrisDesert2_OldManSpeak_Text_12:
# 131 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}The {COLOR RED}Tera Orb{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is a very special\n"
	.string "object. It allows you and your Pokemon\l"
	.string "to draw on 'Terestal' energy that is\l"
	.string "found in the environment.\p"
	.string "That energy is not quite as strong here\n"
	.string "as my home region of {COLOR RED}Paldea{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, but\l"
	.string "it exists! There is something here that\l"
	.string "is giving off that energy.\p"
	.string "Anyways, if you use your orb while in\n"
	.string "battle, your Pokemon will Terastallize!\l"
	.string "It will take on a gemstone-like look,\l"
	.string "and you'll find that it hits harder\l"
	.string "with different typed attacks!\p"
	.string "There is a lot more to learn, but I think\n"
	.string "it's best if you get out there and \l"
	.string "give it a try.$"

IgrisDesert2_OldManSpeak_Text_13:
# 165 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hello! If you ever come across\n"
	.string "the {COLOR RED}Dig TM{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, I can teach you something\l"
	.string "about traveling in the Igris Desert!\p"
	.string "You ought to be able to find it\n"
	.string "around here somewhere...$"

IgrisDesert2_OldManSpeak_Text_14:
# 178 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Enjoy your journey! You're only\n"
	.string "young for so long!$"

IgrisDesert2_OldManSpeak_LeaveBadFriendship_Text_0:
# 199 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "This won't do. Come back when your {COLOR RED}lead\n"
	.string "Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} shows it\l"
	.string "trusts you.$"

IgrisDesert2_OldManSpeak_GoodFriendship_Text_0:
# 210 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "I think you're the person I've been\n"
	.string "looking for.$"

IgrisDesert2_OldManSpeak_GoodFriendship_Text_1:
# 226 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Hoho, Skeledirge agrees as well it would\n"
	.string "seem!\p"
	.string "Now then, if you would hear an old man\n"
	.string "out, I would like to ask something of\l"
	.string "you.$"

IgrisDesert2_OldManSpeak_GoodFriendship_Text_2:
# 233 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Good, thank you!\p"
	.string "There is an old tunnel, which can be\n"
	.string "found through the {COLOR RED}ladder on\l"
	.string "the cliff that is behind my home{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. A few\l"
	.string "years past, I made a trek there with my\l"
	.string "dear Skeledirge.\p"
	.string "Much of the tunnels there are collapsed\n"
	.string "however it was a worthwhile trip.\p"
	.string "However, my old bones ache, and I could\n"
	.string "barely muster the strength to leave!\p"
	.string "Upon my return, exhausted, I found I\n"
	.string "left my journal behind! I recalled\l"
	.string "setting it down to write, I must have\l"
	.string "left it right there. Rather quickly,\l"
	.string "I began to deteriorate further. There\l"
	.string "is no chance I could retrieve it on my\l"
	.string "own, even with Skeledirge. They've\l"
	.string "gotten old too!$"

IgrisDesert2_OldManSpeak_GoodFriendship_Text_3:
# 269 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "That journal is important to me, I have\n"
	.string "kept it since I was a young lad. I would\l"
	.string "appreciate it if you could retrieve it\l"
	.string "for me from the {COLOR RED}Mountain Tunnel.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\p"
	.string "Surely, I'll have something for you in\n"
	.string "return!$"

IgrisDesert2_OldManSpeak_GoodFriendship_Text_4:
# 282 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Ah, I understand. Places to be, I'm sure!\p"
	.string "Keep this old man in your mind the next\n"
	.string "time you're in the Igris Desert!$"

IgrisDesert2_OldManSpeak_TeachDigBetter_Text_0:
# 296 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "Hmm, I see you also have the\n"
	.string "{COLOR RED}Dig TM{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "I can teach you how use that move to\n"
	.string "get around the Igris Desert easier.\l"
	.string "There are tunnels underground that you\l"
	.string "can access with Dig, but you need to\l"
	.string "know the proper technique\p"
	.string "Settle down a moment, allow me to\n"
	.string "show you. You should easily be able\l"
	.string "to teach this to any Pokemon as well.$"

IgrisDesert2_OldManSpeak_TeachDigBetter_Text_1:
# 314 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "And never open your eyes!$"

IgrisDesert2_OldManSpeak_TeachDigBetter_Text_2:
# 317 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "You can now enter the Igris\n"
	.string "Underground from the swirling sand\l"
	.string "pits in the desert.$"

IgrisDesert2_OldManSpeak_TeachDigBetter_Text_3:
# 322 "data/maps/Vulias_Igris_Desert_2/scripts.pory"
	.string "{COLOR GREEN}Old Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's all there is to it! Be\n"
	.string "sure that at least one of your Pokemon\l"
	.string "can learn Dig, otherwise you'll get\l"
	.string "spat back out into the Desert!\p"
	.string "Good luck out there, though I'm\n"
	.string "not sure you'll need it!$"
