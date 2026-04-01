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
	end


WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter::
# 27 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 20
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1
# 31 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 32 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_EventScript_JordanTriggerOldRuinVisit
	return


WoltiaCity_EventScript_JordanTriggerOldRuinVisit::
# 38 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 39 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 17
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1
# 70 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 71 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 72 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_4
# 84 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 86 "data/maps/Vulias_Woltia_City/scripts.pory"
	setfollowernpc WOLTIA_JORDAN_TRIGGERTOURNEY, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, WoltiaCity_EventScript_JordanFollowerKeeganEncounter, PARTNER_JORDAN_PANSEAR_03
# 92 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 15
# 93 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 94 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1:
# 40 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1, MSGBOX_YESNO
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 45 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4
# 62 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 63 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_3
# 65 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4:
# 46 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 47 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 48 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 49 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 50 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 51 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 52 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 57 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 1
# 58 "data/maps/Vulias_Woltia_City/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 5
# 59 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanFollowerKeeganEncounter::
# 102 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 103 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 104 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 105 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0
# 108 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 109 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_NoLeaveWhileFollower::
# 115 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 116 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollower_2
WoltiaCity_EventScript_NoLeaveWhileFollower_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollower_2:
# 117 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 118 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 119 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 124 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 125 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0
# 126 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 127 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollower_1


WoltiaCity_EventScript_NoLeaveWhileFollowerSouth::
# 134 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 135 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2:
# 136 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 137 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 138 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 143 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 145 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 146 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1


WoltiaCity_JordanGoToIgris::
# 153 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 154 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 155 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_0
# 156 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaCity_JordanGoToIgris_Movement_1
# 157 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 158 "data/maps/Vulias_Woltia_City/scripts.pory"
	setspeaker WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0
# 159 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_JordanGoToIgris_Text_0
# 173 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_2
# 175 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 176 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 30
# 177 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_JORDAN_OUTSIDETOURNEY
# 178 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_JORDAN_TRIGGERTOURNEY
# 179 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 180 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0:
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1:
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 125 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0:
# 125 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0:
# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 155 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_0:
# 155 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 156 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_1:
# 156 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_2:
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0:
# 38 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Jordan$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1:
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Ready to go? They are letting in\n"
	.string "tournament entrants now!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2:
# 52 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Nice! I'm excited about this!\p"
	.string "You bet we'll see each other at the end!\n"
	.string "I won't let you get me this time!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_3:
# 63 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Got it! You should definitly hurry, I\n"
	.string "don't want you to miss it!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_4:
# 72 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Heya! The tournament is still not set to\n"
	.string "start for a little bit, we have some time\l"
	.string "to kill.\p"
	.string "Let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, right\n"
	.string "there next to {COLOR RED}The Aerodrome{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Oh, by the way, that's the name of the\n"
	.string "{COLOR RED}Battle Hall{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} here in Woltia City, pretty\l"
	.string "cool huh?\p"
	.string "Lead the way! It's just up ahead!$"

WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0:
# 105 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Let's go to the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}! It's just to\n"
	.string "the right of the giant building right\l"
	.string "there!$"

WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0:
# 119 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "Where you going? It won't take long,\n"
	.string "let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "It's just to right of the giant building\n"
	.string "on the north side of the city!$"

WoltiaCity_JordanGoToIgris_Text_0:
# 159 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "You did it again {PLAYER}!\n"
	.string "I've just got to keep getting stronger\l"
	.string "so I can beat you one day! Your\l"
	.string "Pokemon really love you, it shows.\p"
	.string "Anyways, let's not waste any more time!\n"
	.string "The next Battle Hall is in Liordun\l"
	.string "Town, which is a litle bit past\l"
	.string "the Igris Desert. The desert is pretty\l"
	.string "big though, it might take us some time!\p"
	.string "I'm going to go ahead of you, but we'll\n"
	.string "probably see each other there! Catch\l"
	.string "you later!$"
