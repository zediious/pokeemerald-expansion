Vulias_Woltia_City_MapScripts::
# 2 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Woltia_City_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Woltia_City_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 16, Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney
# 4 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 18, WoltiaCity_JordanGoToIgris
# 5 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_WOLTIA_DISABLETRAINERS_TRIGGER, 0, Vulias_Woltia_City_MapScript_OnFrameDisableTourneyTrainers
	.2byte 0


Vulias_Woltia_City_MapScript_OnFrameDisableTourneyTrainers::
# 10 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_DISABLETRAINERS_TRIGGER, 1
# 11 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 12 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 13 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 14 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 15 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
	end


Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney::
# 20 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 17
# 21 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_JORDAN_TRIGGERTOURNEY
# 22 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIATOURNEY_ENABLED
	end


WoltiaCity_EventScript_AerodromeBlockers::
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_AerodromeBlockers_Text_0
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_AerodromeBlockers_Text_1
# 34 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 35 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter::
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0
# 43 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 20
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1
# 45 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 46 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_EventScript_JordanTriggerOldRuinVisit
	return


WoltiaCity_EventScript_JordanTriggerOldRuinVisit::
# 52 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 53 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 17
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1
# 85 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 86 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 87 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_4
# 99 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 101 "data/maps/Vulias_Woltia_City/scripts.pory"
	setfollowernpc WOLTIA_JORDAN_TRIGGERTOURNEY, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, WoltiaCity_EventScript_JordanFollowerKeeganEncounter, PARTNER_JORDAN_PANSEAR_03
# 107 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 15
# 108 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 109 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1:
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 55 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1, MSGBOX_YESNO
# 58 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 59 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4
# 77 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 78 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_3
# 80 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4:
# 60 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 61 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 62 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 63 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 64 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 65 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 66 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2
# 70 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 71 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 1
# 72 "data/maps/Vulias_Woltia_City/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 5
# 73 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitstate
# 74 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanFollowerKeeganEncounter::
# 117 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 118 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 119 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 120 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0
# 123 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 124 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_NoLeaveWhileFollower::
# 130 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 131 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollower_2
WoltiaCity_EventScript_NoLeaveWhileFollower_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollower_2:
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 133 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 134 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 139 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 140 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0
# 141 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 142 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollower_1


WoltiaCity_EventScript_NoLeaveWhileFollowerSouth::
# 149 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 150 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2:
# 151 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 152 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 153 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 158 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 159 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 160 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 161 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1


WoltiaCity_JordanGoToIgris::
# 168 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 169 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 170 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_0
# 171 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_JordanGoToIgris_Movement_1
# 172 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 173 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_JordanGoToIgris_Text_0
# 181 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 182 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_SinvestaTalkToPlayer
# 183 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 184 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_JordanGoToIgris_Text_1
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_2
# 213 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 214 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 30
# 215 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_JORDAN_OUTSIDETOURNEY
# 216 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_JORDAN_TRIGGERTOURNEY
# 217 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 218 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_SinvestaTalkToPlayer::
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_SINVESTA_EMPLOYEE
# 225 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_SinvestaTalkToPlayer_Movement_0
# 226 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_0
# 227 "data/maps/Vulias_Woltia_City/scripts.pory"
	playse SE_PIN
# 228 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_1
# 229 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 5
# 230 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 231 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_JordanGoToIgris_Movement_0
# 232 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement WOLTIA_SINVESTA_EMPLOYEE
# 233 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitse
# 234 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_SinvestaTalkToPlayer_Text_0
# 235 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_1
# 237 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 238 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_0
# 239 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_JordanGoToIgris_Movement_1
# 240 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 241 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_2
# 243 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_SinvestaTalkToPlayer_Movement_2
# 245 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 10
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_3
# 247 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement WOLTIA_SINVESTA_EMPLOYEE
# 248 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_4
# 249 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 250 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_SinvestaTalkToPlayer_Text_0
# 251 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_3
# 255 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 256 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_SinvestaTalkToPlayer_Text_4
# 257 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_5
# 270 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 271 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_5
# 272 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 10
# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_SinvestaTalkToPlayer_Movement_6
# 274 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 275 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_7
# 276 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_8
# 278 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_SinvestaTalkToPlayer_Movement_9
# 279 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 280 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_4
# 281 "data/maps/Vulias_Woltia_City/scripts.pory"
	playse SE_DOOR
# 282 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_SINVESTA_EMPLOYEE
# 283 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitse
# 284 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 285 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0:
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1:
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 140 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0:
# 140 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 159 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0:
# 159 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 170 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_0:
# 170 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 171 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_1:
# 171 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_2:
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 212 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_0:
# 225 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_up
# 225 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
	step_end

# 228 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_1:
# 228 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
	step_end

# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_2:
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_down
	step_end

# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_3:
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_up
	step_end

# 248 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_4:
# 248 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 248 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_down
	step_end

# 271 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_5:
# 271 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 271 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_up
	step_end

# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_6:
# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
	step_end

# 275 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_7:
# 275 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 275 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_8:
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 277 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 278 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_9:
# 278 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 278 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

WoltiaCity_EventScript_AerodromeBlockers_Text_0:
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Guard$"

WoltiaCity_EventScript_AerodromeBlockers_Text_1:
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Not allowed in when there's no match\n"
	.string "going on.\p"
	.string "Come back another time.$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0:
# 52 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Jordan$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1:
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ready to go? They are letting in\n"
	.string "tournament entrants now!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2:
# 66 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Nice! I'm excited about this!\p"
	.string "You bet we'll see each other at the end!\n"
	.string "I won't let you get me this time!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_3:
# 78 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Got it! You should definitely hurry, I\n"
	.string "don't want you to miss it!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_4:
# 87 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{PLAYER}! The tournament is still not\n"
	.string "set to start for a little bit, we have\l"
	.string "some time to kill.\p"
	.string "Let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, right\n"
	.string "there next to {COLOR RED}The Aerodrome{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Oh, by the way, that's the name of the\n"
	.string "{COLOR RED}Battle Hall{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} here in Woltia City, pretty\l"
	.string "cool huh?\p"
	.string "Lead the way! It's just up ahead!$"

WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0:
# 120 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Let's go to the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}! It's just to\n"
	.string "the right of the giant building right\l"
	.string "there!$"

WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0:
# 134 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Where you going? It won't take long,\n"
	.string "let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "It's just to right of the giant building\n"
	.string "on the north side of the city!$"

WoltiaCity_JordanGoToIgris_Text_0:
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "You did it again {PLAYER}!\n"
	.string "I've just got to keep getting stronger\l"
	.string "so I can beat you one day! Your\l"
	.string "Pokemon really love you, it shows.\p"
	.string "You're probably going to make the\n"
	.string "news, it's very rare tha-$"

WoltiaCity_JordanGoToIgris_Text_1:
# 184 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "So, what did they say!\p"
	.string "...\p"
	.string "Oh man! That's amazing news! If they've\n"
	.string "got their eye on you, they're probably\l"
	.string "considering you as a Battle Ace!\p"
	.string "Like I was saying, it's incredibly rare\n"
	.string "for someone to beat two Battle Aces! I\l"
	.string "think only four people have ever done\l"
	.string "that besides you! I guess we've got to\l"
	.string "see how far you can take it!\p"
	.string "Oh but don't you worry, I'm going to end\n"
	.string "up stopping you short! My Pokemon and I\l"
	.string "are going to get so strong, you won't\l"
	.string "believe it!\p"
	.string "Anyways, let's not waste any more time!\n"
	.string "The next Battle Hall is in Liordun\l"
	.string "Town, which is a litle bit past\l"
	.string "the Igris Desert. The desert is pretty\l"
	.string "big though, it might take us some time!\p"
	.string "I'm going to go ahead of you, but we'll\n"
	.string "probably see each other there! Catch\l"
	.string "you later!$"

WoltiaCity_SinvestaTalkToPlayer_Text_0:
# 234 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "???$"

WoltiaCity_SinvestaTalkToPlayer_Text_1:
# 235 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{PLAYER}, if I could have a moment of\n"
	.string "your time, please.$"

WoltiaCity_SinvestaTalkToPlayer_Text_2:
# 241 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ooo, look at you! You're really making\n"
	.string "waves! I'll wait here!$"

WoltiaCity_SinvestaTalkToPlayer_Text_3:
# 251 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ahem, thank you for your time. I am a\n"
	.string "representative of {COLOR RED}Sinvesta, the\l"
	.string "organization behind the tournament you\l"
	.string "have just participated in.$"

WoltiaCity_SinvestaTalkToPlayer_Text_4:
# 256 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Sinvesta Representative$"

WoltiaCity_SinvestaTalkToPlayer_Text_5:
# 257 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Seeing as you have now won both the\n"
	.string "Palladium and Aerodrome tournaments, I\l"
	.string "wanted to congratulate you personally.\p"
	.string "This is a rare achievement, only a...\n"
	.string "select few, have ever made such a mark.\p"
	.string "It is our understanding that you wish\n"
	.string "to participate in further tournaments\l"
	.string "in other locations, as well. We'll be\l"
	.string "watching you with great interest.\p"
	.string "Have a good day, {PLAYER}.$"
