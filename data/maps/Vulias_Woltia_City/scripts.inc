Vulias_Woltia_City_MapScripts::
# 2 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Vulias_Woltia_City_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Vulias_Woltia_City_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_ZED_STORY_TRACKER, 16, Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney
# 4 "data/maps/Vulias_Woltia_City/scripts.pory"
	map_script_2 VAR_WOLTIA_DISABLETRAINERS_TRIGGER, 0, Vulias_Woltia_City_MapScript_OnFrameDisableTourneyTrainers
	.2byte 0


Vulias_Woltia_City_MapScript_OnFrameDisableTourneyTrainers::
# 9 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_DISABLETRAINERS_TRIGGER, 1
# 10 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 11 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 12 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 13 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 14 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
	end


Vulias_Woltia_City_MapScript_OnFrameEnableJordanTourney::
# 19 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 17
# 20 "data/maps/Vulias_Woltia_City/scripts.pory"
	addobject WOLTIA_JORDAN_TRIGGERTOURNEY
	end


WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter::
# 26 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 27 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement WOLTIA_JORDAN_TRIGGERTOURNEY, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0
# 28 "data/maps/Vulias_Woltia_City/scripts.pory"
	delay 20
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1
# 30 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 31 "data/maps/Vulias_Woltia_City/scripts.pory"
	goto WoltiaCity_EventScript_JordanTriggerOldRuinVisit
	return


WoltiaCity_EventScript_JordanTriggerOldRuinVisit::
# 37 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_ZED_STORY_TRACKER, 17
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1
# 61 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 62 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 63 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2
# 75 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 77 "data/maps/Vulias_Woltia_City/scripts.pory"
	setfollowernpc WOLTIA_JORDAN_TRIGGERTOURNEY, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, WoltiaCity_EventScript_JordanFollowerKeeganEncounter, PARTNER_JORDAN_PANSEAR_03
# 83 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 15
# 84 "data/maps/Vulias_Woltia_City/scripts.pory"
	questupdated 0
# 85 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_1:
# 38 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 39 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 40 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0, MSGBOX_YESNO
# 42 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 43 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4
	return

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_4:
# 44 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER01
# 45 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER02
# 46 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER03
# 47 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER04
# 48 "data/maps/Vulias_Woltia_City/scripts.pory"
	setflag FLAG_WOLTIA_TOURNEY_TRAINER05
# 49 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1
# 53 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 54 "data/maps/Vulias_Woltia_City/scripts.pory"
	setvar VAR_WOLTIA_TOURNAMENT_STATE, 1
# 55 "data/maps/Vulias_Woltia_City/scripts.pory"
	warp MAP_WOLTIA_CITY_BATTLE_HALL_PREP_ROOM, 4, 5
# 56 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_JordanFollowerKeeganEncounter::
# 93 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 94 "data/maps/Vulias_Woltia_City/scripts.pory"
	faceplayer
# 95 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_JordanFollowerKeeganEncounter_Text_0
# 98 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 99 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	end


WoltiaCity_EventScript_NoLeaveWhileFollower::
# 105 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 106 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollower_2
WoltiaCity_EventScript_NoLeaveWhileFollower_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollower_2:
# 107 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 108 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 113 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 114 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0
# 115 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 116 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollower_1


WoltiaCity_EventScript_NoLeaveWhileFollowerSouth::
# 123 "data/maps/Vulias_Woltia_City/scripts.pory"
	checkfollowernpc
# 124 "data/maps/Vulias_Woltia_City/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1:
	end

WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_2:
# 125 "data/maps/Vulias_Woltia_City/scripts.pory"
	lock
# 126 "data/maps/Vulias_Woltia_City/scripts.pory"
	msgbox WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0
# 131 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmessage
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	applymovement 0xFF, WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0
# 133 "data/maps/Vulias_Woltia_City/scripts.pory"
	waitmovement
# 134 "data/maps/Vulias_Woltia_City/scripts.pory"
	release
	goto WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_1


# 27 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_0:
# 27 "data/maps/Vulias_Woltia_City/scripts.pory"
	emote_exclamation_mark
# 27 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_right
	step_end

# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_JordanTriggerOldRuinVisit_TriggerIfEnter_Movement_1:
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
# 29 "data/maps/Vulias_Woltia_City/scripts.pory"
	face_left
	step_end

# 114 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollower_Movement_0:
# 114 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
WoltiaCity_EventScript_NoLeaveWhileFollowerSouth_Movement_0:
# 132 "data/maps/Vulias_Woltia_City/scripts.pory"
	walk_down
	step_end

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_0:
# 40 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Ready to go? They are letting\n"
	.string "in tournament entrants now!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_1:
# 49 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nice! I'm excited about this!\p"
	.string "You bet we'll see each other at the end!\n"
	.string "I won't let you get me this time!$"

WoltiaCity_EventScript_JordanTriggerOldRuinVisit_Text_2:
# 63 "data/maps/Vulias_Woltia_City/scripts.pory"
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
# 95 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Let's go to the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\n"
	.string "It's just to right of the giant building\l"
	.string "right there!$"

WoltiaCity_EventScript_NoLeaveWhileFollower_Text_0:
# 108 "data/maps/Vulias_Woltia_City/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Where you going? It won't take\n"
	.string "long, let's go check out the {COLOR RED}Old Ruin{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "It's just to right of the giant building\n"
	.string "on the north side of the city!$"
