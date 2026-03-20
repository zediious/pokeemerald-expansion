Vulias_Woltia_City_MapScripts::
# 2 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Woltia_City_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Woltia_City_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 16, Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney
# 4 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 14, Vulias_Woltia_City_MapScript_OnFrameDisableTourneyTrainers
	.2byte 0


Vulias_Woltia_City_MapScript_OnFrameDisableTourneyTrainers::
# 9 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 10 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 11 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 12 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 13 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
	end


Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney::
# 18 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 17
# 19 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_JORDAN_TRIGGERTOURNEY
	end


WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter::
# 25 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 26 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0
# 27 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 20
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_EventScript_JordanTriggerOldRuinVisit
	return


WoltiaCity_EventScript_JordanTriggerOldRuinVisit::
# 36 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 17
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1
# 60 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 61 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 62 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2
# 74 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 76 "data/maps/Vulias_Woltia_City/scripts.pory"
	setfollowernpc WOLTIA_JORDAN_TRIGGERTOURNEY, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, WoltiaCity_EventScript_JordanFollowerKeeganEncounter, PARTNER_JORDAN_PANSEAR_03
# 82 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 15
# 83 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 84 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1:
# 37 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 38 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 39 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0, MSGBOX_YESNO
# 41 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4
	return

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4:
# 43 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 45 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 46 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 47 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 48 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1
# 52 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 53 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 1
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 5
# 55 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanFollowerKeeganEncounter::
# 92 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 93 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 94 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0
# 97 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 98 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_NoLeaveWhileFollower::
# 104 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 105 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollower_2
WoltiaCity_EventScript_NoLeaveWhileFollower_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollower_2:
# 106 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 107 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 112 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 113 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0
# 114 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 115 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollower_1


WoltiaCity_EventScript_NoLeaveWhileFollowerSouth::
# 122 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 123 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2:
# 124 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 125 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 130 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 131 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 133 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1


# 26 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0:
# 26 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
# 26 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1:
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 113 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0:
# 113 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0:
# 131 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0:
# 39 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ready to go? They are letting\n"
	.string "in tournament entrants now!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1:
# 48 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nice! I'm excited about this!\p"
	.string "You bet we'll see each other at the end!\n"
	.string "I won't let you get me this time!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2:
# 62 "data/maps/Vulias_Woltia_City/scripts.pory"
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
# 94 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Let's go to the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\n"
	.string "It's just to right of the giant building\l"
	.string "right there!$"

WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0:
# 107 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Where you going? It won't take\n"
	.string "long, let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "It's just to right of the giant building\n"
	.string "on the north side of the city!$"
