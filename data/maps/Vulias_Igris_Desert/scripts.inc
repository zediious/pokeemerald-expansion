Vulias_Igris_Desert_MapScripts::
# 2 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Igris_Desert_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Vulias_Igris_Desert/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 19, IgrisDesert_RemoveKrokorokEggs01
	.2byte 0


IgrisDesert_RemoveKrokorokEggs01::
# 9 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 20
# 10 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setmetatile 19, 51, 0x000, 0
# 11 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setmetatile 20, 51, 0x000, 0
	end


IgrisDesert_EventScript_AngryKrokorok::
# 17 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 18 "data/maps/Vulias_Igris_Desert/scripts.pory"
	faceplayer
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_0
# 21 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 22 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_KROKOROK, CRY_MODE_NORMAL
# 23 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_1
# 24 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmoncry
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_AngryKrokorok_Movement_0
# 26 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_BIKE_HOP
# 27 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_AngryKrokorok_Text_2
# 31 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 32 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_EventScript_KowtowEnc01Trainer01::
# 40 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1
# 45 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 46 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer02::
# 52 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer03::
# 63 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowEnc01Trainer04::
# 75 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0, IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1
# 80 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
	end


IgrisDesert_EventScript_KowtowAdminTopTileMove::
# 90 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 92 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 93 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
# 94 "data/maps/Vulias_Igris_Desert/scripts.pory"
	goto IgrisDesert_EventScript_KowtowAdmin
	return


IgrisDesert_EventScript_KowtowAdmin::
# 98 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_0
# 101 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_1
# 108 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_2
# 110 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRISDESERT_JORDAN_01
# 111 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject IGRIS_JORDAN_01
# 112 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_JORDAN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_1
# 114 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 115 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 116 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 60
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_2
# 119 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 120 "data/maps/Vulias_Igris_Desert/scripts.pory"
	call IgrisDesert_DetermineJordanTeam01
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_3
# 124 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 126 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_KOWTOWADMIN_01, IgrisDesert_EventScript_KowtowAdmin_Movement_4
# 128 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 129 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_EventScript_KowtowAdmin_Text_4
# 131 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 132 "data/maps/Vulias_Igris_Desert/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, IgrisDesert_EventScript_KowtowAdmin_Text_5, IgrisDesert_EventScript_KowtowAdmin_Text_6, IgrisDesert_KowtowAdmin_AfterBattle
	return


IgrisDesert_KowtowAdmin_AfterBattle::
# 142 "data/maps/Vulias_Igris_Desert/scripts.pory"
	lock
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_0
# 147 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 150 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_M_DOUBLE_TEAM
# 151 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_KOWTOW_01
# 153 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOWADMIN_01
# 154 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_01
# 155 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_02
# 156 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_03
# 157 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_KOWTOW_01_04
# 158 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 159 "data/maps/Vulias_Igris_Desert/scripts.pory"
	delay 120
# 160 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 162 "data/maps/Vulias_Igris_Desert/scripts.pory"
	clearflag FLAG_IGRIS_BEAUTY
# 163 "data/maps/Vulias_Igris_Desert/scripts.pory"
	addobject TOGEPI_BEAUTY_DESERT
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_0
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_1
# 167 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_1
# 180 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 181 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 183 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_EventScript_KowtowAdmin_Movement_0
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_2
# 185 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_2
# 188 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 189 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_KowtowAdmin_AfterBattle_Movement_3
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_KowtowAdmin_AfterBattle_Movement_4
# 192 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement IGRIS_TOGEPI, IgrisDesert_KowtowAdmin_AfterBattle_Movement_5
# 194 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 195 "data/maps/Vulias_Igris_Desert/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 196 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitse
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_3
# 200 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement TOGEPI_BEAUTY_DESERT, IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0
# 201 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_4
# 205 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 206 "data/maps/Vulias_Igris_Desert/scripts.pory"
	giveitem ITEM_HM_CUT, 1
# 207 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 208 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_5
# 213 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmessage
# 214 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_TO_BLACK
# 215 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_BEAUTY
# 216 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRIS_TOGEPI
# 217 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_ROUTE103_BEAUTY
# 218 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject TOGEPI_BEAUTY_DESERT
# 219 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_TOGEPI
# 220 "data/maps/Vulias_Igris_Desert/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 221 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement 0xFF, IgrisDesert_EventScript_KowtowAdmin_Movement_3
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_6
# 223 "data/maps/Vulias_Igris_Desert/scripts.pory"
	msgbox IgrisDesert_KowtowAdmin_AfterBattle_Text_6
# 242 "data/maps/Vulias_Igris_Desert/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, IgrisDesert_KowtowAdmin_AfterBattle_Movement_7
# 245 "data/maps/Vulias_Igris_Desert/scripts.pory"
	waitmovement
# 246 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setflag FLAG_IGRISDESERT_JORDAN_01
# 247 "data/maps/Vulias_Igris_Desert/scripts.pory"
	destroyfollowernpc
# 248 "data/maps/Vulias_Igris_Desert/scripts.pory"
	removeobject IGRIS_JORDAN_01
# 249 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 14
# 250 "data/maps/Vulias_Igris_Desert/scripts.pory"
	completequest 1
# 251 "data/maps/Vulias_Igris_Desert/scripts.pory"
	release
	end


IgrisDesert_DetermineJordanTeam01::
# 256 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq IgrisDesert_DetermineJordanTeam01_1
# 264 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq IgrisDesert_DetermineJordanTeam01_2
# 272 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq IgrisDesert_DetermineJordanTeam01_3
# 280 "data/maps/Vulias_Igris_Desert/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq IgrisDesert_DetermineJordanTeam01_4
	return

IgrisDesert_DetermineJordanTeam01_1:
# 257 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANPOUR_03
	return

IgrisDesert_DetermineJordanTeam01_2:
# 265 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSEAR_03
	return

IgrisDesert_DetermineJordanTeam01_3:
# 273 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_PANSAGE_03
	return

IgrisDesert_DetermineJordanTeam01_4:
# 281 "data/maps/Vulias_Igris_Desert/scripts.pory"
	setfollowernpc IGRIS_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, IgrisDesert_EventScript_JordanFollower01, PARTNER_JORDAN_INNAPE_03
	return


IgrisDesert_EventScript_JordanFollower01::
# 292 "data/maps/Vulias_Igris_Desert/scripts.pory"
	nop
	return


# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_AngryKrokorok_Movement_0:
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_down
# 25 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdminTopTileMove_Movement_0:
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 91 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_0:
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_1:
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_2:
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 117 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_3:
# 125 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_EventScript_KowtowAdmin_Movement_4:
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
# 127 "data/maps/Vulias_Igris_Desert/scripts.pory"
	jump_in_place_right
	step_end

# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_0:
# 164 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_down
	step_end

# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_1:
# 165 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_2:
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_up
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
# 184 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_fast_left
	step_end

# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_3:
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_faster_right
# 190 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_left
	step_end

# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_4:
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 191 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_up
	step_end

# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_5:
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 193 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
	step_end

# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_6:
# 222 "data/maps/Vulias_Igris_Desert/scripts.pory"
	face_right
	step_end

# 242 "data/maps/Vulias_Igris_Desert/scripts.pory"
IgrisDesert_KowtowAdmin_AfterBattle_Movement_7:
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_up
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_right
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
# 243 "data/maps/Vulias_Igris_Desert/scripts.pory"
	walk_down
	step_end

IgrisDesert_EventScript_AngryKrokorok_Text_0:
# 19 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "The Krokorok looks extremely angry, it\n"
	.string "seems to be protecting the eggs!$"

IgrisDesert_EventScript_AngryKrokorok_Text_1:
# 23 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "V-V Vruuu$"

IgrisDesert_EventScript_AngryKrokorok_Text_2:
# 28 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You barely jump out of the way of a Bite\n"
	.string "attack! Better steer clear!$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_0:
# 42 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Here to save the Togepi eh?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_1:
# 43 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "All for a little egg?$"

IgrisDesert_EventScript_KowtowEnc01Trainer01_Text_2:
# 45 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Go, not like I can do anything.$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_0:
# 54 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Wasting your time!$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_1:
# 55 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I'm wasting my time?$"

IgrisDesert_EventScript_KowtowEnc01Trainer02_Text_2:
# 57 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Don't twist my words!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_0:
# 65 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Not so sneaky!$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_1:
# 66 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "What, you were not trying to be\n"
	.string "sneaky?$"

IgrisDesert_EventScript_KowtowEnc01Trainer03_Text_2:
# 69 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Well, I still caught you!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_0:
# 77 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Stay away from the boss!$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_1:
# 78 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Or, don't I suppose.$"

IgrisDesert_EventScript_KowtowEnc01Trainer04_Text_2:
# 80 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Jeez, these Pawniard need to toughen\n"
	.string "up.$"

IgrisDesert_EventScript_KowtowAdmin_Text_0:
# 99 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}For the last time, stand on guard\n"
	.string "while I-$"

IgrisDesert_EventScript_KowtowAdmin_Text_1:
# 103 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You're not my team!\p"
	.string "What, here to serve some Justice? That\n"
	.string "won't be served so easily!$"

IgrisDesert_EventScript_KowtowAdmin_Text_2:
# 109 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Distant Voice: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}...wait!$"

IgrisDesert_EventScript_KowtowAdmin_Text_3:
# 121 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I'm glad I caught up\n"
	.string "with you! Can't let you boot these scum\l"
	.string "down without me eh?$"

IgrisDesert_EventScript_KowtowAdmin_Text_4:
# 129 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Kowtow Admin: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, you're a big talker\n"
	.string "huh!$"

IgrisDesert_EventScript_KowtowAdmin_Text_5:
# 134 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "You won't be able to talk after this!$"

IgrisDesert_EventScript_KowtowAdmin_Text_6:
# 135 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "I can't believe that! Now I can't\n"
	.string "talk!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_0:
# 143 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "Have not had to use one of these for\n"
	.string "quite some time...\p"
	.string "Smokescreen!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_1:
# 168 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
# 186 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}My Togepi! thank goodness\n"
	.string "you are safe!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_3:
# 197 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh I am so glad to see you!\n"
	.string "You are never leaving my arms again\l"
	.string "my precious!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_4:
# 202 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I can hardly thank you\n"
	.string "enough for what you've done! I hope\l"
	.string "that this will suffice!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_5:
# 208 "data/maps/Vulias_Igris_Desert/scripts.pory"
	.string "{COLOR GREEN}Happy Woman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You'll be able to cut down\n"
	.string "many small trees you find with that!\p"
	.string "Thank you again, maybe I'll see you in\n"
	.string "Woltia City!$"

IgrisDesert_KowtowAdmin_AfterBattle_Text_6:
# 224 "data/maps/Vulias_Igris_Desert/scripts.pory"
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
