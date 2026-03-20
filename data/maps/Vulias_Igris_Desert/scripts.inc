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
	waitmovement
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 18 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 27 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 39 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 44 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 50 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 56 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 62 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 67 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 79 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 80 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 81 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 85 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 88 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 95 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 97 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 100 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 105 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 106 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 137 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 138 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 139 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 140 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 141 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 144 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 146 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 171 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 173 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 174 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 175 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 179 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI_AND_BEAUTY
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 199 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 225 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 226 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 227 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 228 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 30
# 229 "data/maps/Vulias_Igris_Desert/scripts.pory"
	questupdated 0
# 230 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 235 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 259 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 236 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 244 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 252 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 260 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 271 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 13 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 89 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 161 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 169 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_down
# 170 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 172 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 198 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 7 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting the eggs!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 15 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 29 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 30 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 41 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 44 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 53 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 56 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 64 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 65 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 67 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 86 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 96 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}..wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 107 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 118 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 119 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "H ave not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 147 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 176 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 187 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Well that turned out well! You\n"
	.string "got yourself a Cut HM as well!\p"
	.string "...\p"
	.string "Well, I can't get you everything myself\n"
	.string "can I! I only recently got one of those\l"
	.string "myself...\p"
	.string "Anyways, the tournament in Woltia city\n"
	.string "is set to start later today! I came\l"
	.string "looking for you, when I found that lady\l"
	.string "outside.\p"
	.string "We should\n"
	.string "make our way over there! Just head\l"
	.string "south of the desert, and then west!\l"
	.string "I'll see you there!$"
