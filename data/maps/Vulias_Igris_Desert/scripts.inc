Vulias_Igris_Desert_MapScripts::
	.byte 0


IgrisDesert_EventScript_PalentoVillageSign::
# 7 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lockall
# 8 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_PalentoVillageSign_Text_0
# 9 "data/maps/Vulias_Igris_Desert/scripts.pory"
	releaseall
	return


IgrisDesert_EventScript_AngryKrokorok::
# 14 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 18 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 20 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 21 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 23 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 24 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 29 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 37 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 43 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 49 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 60 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 72 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 88 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 95 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 106 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 108 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 118 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 128 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 129 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 147 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 148 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 177 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 182 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 189 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 203 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 212 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 239 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 242 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 244 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 246 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 247 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 269 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 277 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 254 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 262 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 270 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 278 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 289 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 88 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 88 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 88 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 239 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 240 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_EventScript_PalentoVillageSign_Text_0:
# 8 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{RIGHT_ARROW} Palento Village$"

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 20 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 62 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 63 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 74 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 75 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 106 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 118 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}They got away again!\n"
	.string "We need to start preparing for that\l"
	.string "smoke bomb, pack some goggles along\l"
	.string "with us, or something.\p"
	.string "We're sure to come across them again\n"
	.string "with the fact that we've seen them\l"
	.string "twice on our trip so far.\p"
	.string "This Togepi! It must be the one that\n"
	.string "lady was in shambles over! $"

IgrisDesert_KowtowAdmin_AfterBattle_Text_2:
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well that turned out well! You\n"
	.string "got yourself a Cut HM as well!\p"
	.string "...\p"
	.string "Well, I can't get you everything myself\n"
	.string "can I! I only recently got one of those\l"
	.string "myself...\p"
	.string "Anyways, the tournament in Woltia City\n"
	.string "is set to start later today! I came\l"
	.string "looking for you, when I found that lady\l"
	.string "outside.\p"
	.string "We should make our way over there!\n"
	.string "Just head south of the desert, and \l"
	.string "then west! I'll see you there!$"
