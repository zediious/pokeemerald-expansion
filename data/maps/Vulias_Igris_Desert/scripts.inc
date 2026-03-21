Vulias_Igris_Desert_MapScripts::
	.byte 0


IgrisDesert_EventScript_AngryKrokorok::
# 5 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 6 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 7 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 9 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 10 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 12 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 14 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 20 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 34 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 45 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 51 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 63 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 68 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 80 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 81 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 82 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 97 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 108 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 119 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 130 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 145 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 147 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 148 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 177 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 182 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 189 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 203 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 204 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 208 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 209 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 211 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 233 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 234 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 237 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 238 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 239 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 244 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 268 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 253 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 261 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 269 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 280 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 178 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 210 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 231 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 7 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting it's young!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 16 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 30 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 31 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 43 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 45 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 53 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 65 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 68 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 87 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 97 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 122 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 123 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 212 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
