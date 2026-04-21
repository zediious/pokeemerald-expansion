Vulias_Woltia_City_MapScripts::
# 7 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WoltiaCity_DisableReportersBeforeValid
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
# 11 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_DISABLETRAINERS_TRIGGER, 1
# 12 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 13 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 14 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 15 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 16 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
	end


Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney::
# 21 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 17
# 22 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_JORDAN_TRIGGERTOURNEY
# 23 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIATOURNEY_ENABLED
	end


WoltiaCity_DisableReportersBeforeValid::
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 19
	goto_if_lt WoltiaCity_DisableReportersBeforeValid_1
	return

WoltiaCity_DisableReportersBeforeValid_1:
# 31 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_INTERVIEW01_INTERVIEWCREW
# 32 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_SINVESTAEMP_OUTSIDE
# 33 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_INTERVIEW01_INTERVIEWER
# 34 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_INTERVIEW01_CAMERAMAN
	return


WoltiaCity_EventScript_AerodromeBlockers::
# 40 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_AerodromeBlockers_Text_0
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_AerodromeBlockers_Text_1
# 46 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 47 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter::
# 53 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0
# 55 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 20
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1
# 57 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 58 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_EventScript_JordanTriggerOldRuinVisit
	return


WoltiaCity_EventScript_JordanTriggerOldRuinVisit::
# 64 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 65 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 17
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1
# 97 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 98 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 99 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_4
# 111 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 113 "data/maps/Vulias_Woltia_City/scripts.pory"
	setfollowernpc WOLTIA_JORDAN_TRIGGERTOURNEY, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, WoltiaCity_EventScript_JordanFollowerKeeganEncounter, PARTNER_JORDAN_PANSEAR_03
# 119 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 15
# 120 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 121 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1:
# 66 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 67 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 68 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1, MSGBOX_YESNO
# 70 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 71 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4
# 89 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 90 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_3
# 92 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4:
# 72 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 73 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 74 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 75 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 76 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 77 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 78 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2
# 82 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 83 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 1
# 84 "data/maps/Vulias_Woltia_City/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 5
# 85 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitstate
# 86 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanFollowerKeeganEncounter::
# 129 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 130 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 131 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0
# 135 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 136 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_NoLeaveWhileFollower::
# 142 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 143 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollower_2
WoltiaCity_EventScript_NoLeaveWhileFollower_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollower_2:
# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 145 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 146 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 151 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 152 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0
# 153 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 154 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollower_1


WoltiaCity_EventScript_NoLeaveWhileFollowerSouth::
# 161 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2:
# 163 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 164 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 165 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 170 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 171 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 172 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 173 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1


WoltiaCity_JordanGoToIgris::
# 180 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 181 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 182 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_0
# 183 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_JordanGoToIgris_Movement_1
# 184 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 185 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 186 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_JordanGoToIgris_Text_0
# 193 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 194 "data/maps/Vulias_Woltia_City/scripts.pory"
	call WoltiaCity_SinvestaTalkToPlayer
# 195 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 196 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_JordanGoToIgris_Text_1
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_2
# 225 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 226 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 30
# 227 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_INTERVIEWS_STORY, 3
# 228 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_JORDAN_OUTSIDETOURNEY
# 229 "data/maps/Vulias_Woltia_City/scripts.pory"
	clearflag FLAG_WOLTIA_INTERVIEW01_INTERVIEWCREW
# 230 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_INTERVIEW01_INTERVIEWER
# 231 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_INTERVIEW01_CAMERAMAN
# 232 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_JORDAN_TRIGGERTOURNEY
# 233 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 234 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_SinvestaTalkToPlayer::
# 240 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_SINVESTA_EMPLOYEE
# 241 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_SinvestaTalkToPlayer_Movement_0
# 242 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_0
# 243 "data/maps/Vulias_Woltia_City/scripts.pory"
	playse SE_PIN
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_1
# 245 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 20
# 246 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 247 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement WOLTIA_AERODROME_BLOCKER
# 248 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_JordanGoToIgris_Movement_0
# 249 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement WOLTIA_SINVESTA_EMPLOYEE
# 250 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitse
# 251 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_SinvestaTalkToPlayer_Text_0
# 252 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_1
# 254 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 255 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_0
# 256 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_JordanGoToIgris_Movement_1
# 257 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 258 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_2
# 260 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_SinvestaTalkToPlayer_Movement_2
# 262 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 10
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_3
# 264 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement WOLTIA_SINVESTA_EMPLOYEE
# 265 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_4
# 266 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 267 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_SinvestaTalkToPlayer_Text_0
# 268 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_3
# 272 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_SinvestaTalkToPlayer_Text_4
# 274 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_SinvestaTalkToPlayer_Text_5
# 287 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 288 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_5
# 289 "data/maps/Vulias_Woltia_City/scripts.pory"
	closemessage
# 290 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 10
# 291 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_SinvestaTalkToPlayer_Movement_6
# 292 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 293 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_7
# 294 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_SinvestaTalkToPlayer_Movement_8
# 296 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_SINVESTA_EMPLOYEE, WoltiaCity_SinvestaTalkToPlayer_Movement_9
# 297 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 298 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_AERODROME_BLOCKER, WoltiaCity_SinvestaTalkToPlayer_Movement_4
# 299 "data/maps/Vulias_Woltia_City/scripts.pory"
	playse SE_DOOR
# 300 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_SINVESTA_EMPLOYEE
# 301 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitse
# 302 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 303 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


WoltiaCity_InterviewAfterWoltiaWin_Trigger01::
# 308 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 309 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Trigger01_Movement_0
# 310 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_InterviewAfterWoltiaWin
	return


WoltiaCity_InterviewAfterWoltiaWin_Trigger02::
# 315 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 316 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Trigger02_Movement_0
# 317 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_InterviewAfterWoltiaWin
	return


WoltiaCity_InterviewAfterWoltiaWin_Trigger03::
# 322 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 323 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Trigger03_Movement_0
# 324 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_InterviewAfterWoltiaWin
	return


WoltiaCity_InterviewAfterWoltiaWin_Trigger04::
# 329 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Trigger04_Movement_0
# 331 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_InterviewAfterWoltiaWin
	return


WoltiaCity_InterviewAfterWoltiaWin_Trigger05::
# 336 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Trigger05_Movement_0
# 338 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_InterviewAfterWoltiaWin
	return


WoltiaCity_InterviewAfterWoltiaWin::
# 343 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_INTERVIEW01_INTERVIEWER, WoltiaCity_InterviewAfterWoltiaWin_Movement_0
# 344 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_INTERVIEW01_CAMERAMAN, WoltiaCity_InterviewAfterWoltiaWin_Movement_0
# 345 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 346 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Movement_1
# 347 "data/maps/Vulias_Woltia_City/scripts.pory"
	playse SE_PIN
# 348 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitse
# 349 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_InterviewAfterWoltiaWin_Text_0
# 350 "data/maps/Vulias_Woltia_City/scripts.pory"
	call BattleHall_EventScript_InterviewStart
# 351 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 352 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_InterviewAfterWoltiaWin_Text_0
# 353 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_InterviewAfterWoltiaWin_Text_1
# 355 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 356 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_InterviewAfterWoltiaWin_Movement_2
# 357 "data/maps/Vulias_Woltia_City/scripts.pory"
	closemessage
# 358 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_INTERVIEW01_INTERVIEWER, WoltiaCity_InterviewAfterWoltiaWin_Movement_3
# 360 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 30
# 361 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_INTERVIEW01_CAMERAMAN, WoltiaCity_InterviewAfterWoltiaWin_Movement_3
# 362 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement WOLTIA_INTERVIEW01_CAMERAMAN
# 363 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_INTERVIEW01_CAMERAMAN
# 364 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_INTERVIEW01_INTERVIEWER
# 365 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_INTERVIEWS_STORY, 4
# 366 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	return


# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0:
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1:
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 152 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0:
# 152 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 171 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0:
# 171 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 182 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_0:
# 182 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 183 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_1:
# 183 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_2:
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 224 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 241 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_0:
# 241 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_up
# 241 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
	step_end

# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_1:
# 244 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
	step_end

# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_2:
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 261 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_down
	step_end

# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_3:
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 263 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_up
	step_end

# 265 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_4:
# 265 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 265 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_down
	step_end

# 288 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_5:
# 288 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 288 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_up
	step_end

# 291 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_6:
# 291 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 291 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 291 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
	step_end

# 293 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_7:
# 293 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 293 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_8:
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 295 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 296 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_SinvestaTalkToPlayer_Movement_9:
# 296 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 296 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 296 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 309 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Trigger01_Movement_0:
# 309 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 309 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 309 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Trigger02_Movement_0:
# 316 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 316 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 323 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Trigger03_Movement_0:
# 323 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 323 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 323 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Trigger04_Movement_0:
# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 330 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Trigger05_Movement_0:
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_left
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 337 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 343 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Movement_0:
# 343 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
	step_end

# 346 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Movement_1:
# 346 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
# 346 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 356 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Movement_2:
# 356 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
# 356 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_down
	step_end

# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_InterviewAfterWoltiaWin_Movement_3:
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_right
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 359 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

WoltiaCity_EventScript_AerodromeBlockers_Text_0:
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Guard$"

WoltiaCity_EventScript_AerodromeBlockers_Text_1:
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Not allowed in when there's no match\n"
	.string "going on.\p"
	.string "Come back another time.$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0:
# 64 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Jordan$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1:
# 68 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ready to go? They are letting in\n"
	.string "tournament entrants now!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2:
# 78 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Nice! I'm excited about this!\p"
	.string "You bet we'll see each other at the end!\n"
	.string "I won't let you get me this time!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_3:
# 90 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Got it! You should definitely hurry, I\n"
	.string "don't want you to miss it!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_4:
# 99 "data/maps/Vulias_Woltia_City/scripts.pory"
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
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Let's go to the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}! It's just to\n"
	.string "the right of the giant building right\l"
	.string "there!$"

WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0:
# 146 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Where you going? It won't take long,\n"
	.string "let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "It's just to right of the giant building\n"
	.string "on the north side of the city!$"

WoltiaCity_JordanGoToIgris_Text_0:
# 186 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "You did it again {PLAYER}!\n"
	.string "I've just got to keep getting stronger\l"
	.string "so I can beat you one day! Your\l"
	.string "Pokemon really love you, it shows.\p"
	.string "You're probably going to make the\n"
	.string "news, it's very rare tha-$"

WoltiaCity_JordanGoToIgris_Text_1:
# 196 "data/maps/Vulias_Woltia_City/scripts.pory"
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
# 251 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "???$"

WoltiaCity_SinvestaTalkToPlayer_Text_1:
# 252 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{PLAYER}, if I could have a moment of\n"
	.string "your time, please.$"

WoltiaCity_SinvestaTalkToPlayer_Text_2:
# 258 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ooo, look at you! You're really making\n"
	.string "waves! I'll wait here!$"

WoltiaCity_SinvestaTalkToPlayer_Text_3:
# 268 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ahem, thank you for your time. I am a\n"
	.string "representative of {COLOR RED}Sinvesta, the\l"
	.string "organization behind the tournament you\l"
	.string "have just participated in.$"

WoltiaCity_SinvestaTalkToPlayer_Text_4:
# 273 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Sinvesta Representative$"

WoltiaCity_SinvestaTalkToPlayer_Text_5:
# 274 "data/maps/Vulias_Woltia_City/scripts.pory"
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

WoltiaCity_InterviewAfterWoltiaWin_Text_0:
# 349 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Interviewer$"

WoltiaCity_InterviewAfterWoltiaWin_Text_1:
# 353 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Thank you for your time! We hope to see\n"
	.string "you again soon!$"
