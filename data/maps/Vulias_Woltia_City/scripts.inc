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
	applymovement 0xFF, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1
# 31 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 32 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_EventScript_JordanTriggerOldRuinVisit
	return


WoltiaCity_EventScript_JordanTriggerOldRuinVisit::
# 38 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 17
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1
# 62 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 63 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 64 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2
# 76 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 78 "data/maps/Vulias_Woltia_City/scripts.pory"
	setfollowernpc WOLTIA_JORDAN_TRIGGERTOURNEY, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, WoltiaCity_EventScript_JordanFollowerKeeganEncounter, PARTNER_JORDAN_PANSEAR_03
# 84 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 15
# 85 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 86 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1:
# 39 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 40 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0, MSGBOX_YESNO
# 43 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4
	return

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4:
# 45 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 46 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 47 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 48 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 49 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 50 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 55 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 1
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 5
# 57 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanFollowerKeeganEncounter::
# 94 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 95 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 96 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0
# 99 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 100 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_NoLeaveWhileFollower::
# 106 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 107 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollower_2
WoltiaCity_EventScript_NoLeaveWhileFollower_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollower_2:
# 108 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 109 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 114 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 115 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0
# 116 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 117 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollower_1


WoltiaCity_EventScript_NoLeaveWhileFollowerSouth::
# 124 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 125 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2:
# 126 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 127 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 133 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 134 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 135 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1


WoltiaCity_JordanGoToIgris::
# 142 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 19
# 143 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_0
# 145 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_JordanGoToIgris_Movement_1
# 146 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 147 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_JordanGoToIgris_Text_0
# 161 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_JordanGoToIgris_Movement_2
# 163 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 164 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 30
# 165 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_JORDAN_OUTSIDETOURNEY
# 166 "data/maps/Vulias_Woltia_City/scripts.pory"
	removeobject WOLTIA_JORDAN_TRIGGERTOURNEY
# 167 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 168 "data/maps/Vulias_Woltia_City/scripts.pory"
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

# 115 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0:
# 115 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0:
# 133 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_0:
# 144 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 145 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_1:
# 145 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_JordanGoToIgris_Movement_2:
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 162 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0:
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ready to go? They are letting\n"
	.string "in tournament entrants now!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1:
# 50 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nice! I'm excited about this!\p"
	.string "You bet we'll see each other at the end!\n"
	.string "I won't let you get me this time!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2:
# 64 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Heya! The tournament is still\n"
	.string "not set to start for a little bit, we\l"
	.string "have some time to kill.\p"
	.string "Let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, right\n"
	.string "there next to {COLOR RED}The Aerodrome{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}.\p"
	.string "Oh, by the way, that's the name of the\n"
	.string "{COLOR RED}Battle Hall{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} here in Woltia City, pretty\l"
	.string "cool huh?\p"
	.string "Lead the way! It's just up ahead!$"

WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0:
# 96 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Let's go to the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\n"
	.string "It's just to right of the giant building\l"
	.string "right there!$"

WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0:
# 109 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Where you going? It won't take\n"
	.string "long, let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "It's just to right of the giant building\n"
	.string "on the north side of the city!$"

WoltiaCity_JordanGoToIgris_Text_0:
# 147 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You did it again {PLAYER}!\n"
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
