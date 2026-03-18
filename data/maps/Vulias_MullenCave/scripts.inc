Vulias_MullenCave_MapScripts::
	.byte 0


VuliasMullenCave_EventScript_Charcoal::
# 7 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 8 "data/maps/Vulias_MullenCave/scripts.pory"
	giveitem ITEM_CHARCOAL, 1
# 9 "data/maps/Vulias_MullenCave/scripts.pory"
	removeobject MULLED_CHARCOAL
# 10 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_CHARCOAL
# 11 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


VuliasMullenCave_EventScript_QuickBall::
# 17 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 18 "data/maps/Vulias_MullenCave/scripts.pory"
	giveitem ITEM_QUICK_BALL, 1
# 19 "data/maps/Vulias_MullenCave/scripts.pory"
	removeobject MULLED_QUICK_BALL
# 20 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_QUICK_BALL
# 21 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


VuliasMullenCave_EventScript_Trainer01::
# 27 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_LEAH, VuliasMullenCave_EventScript_Trainer01_Text_0, VuliasMullenCave_EventScript_Trainer01_Text_1
# 32 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer02::
# 38 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_HUEY, VuliasMullenCave_EventScript_Trainer02_Text_0, VuliasMullenCave_EventScript_Trainer02_Text_1
# 44 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer03::
# 50 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_MAKAYLA, VuliasMullenCave_EventScript_Trainer03_Text_0, VuliasMullenCave_EventScript_Trainer03_Text_1
# 56 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 58 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer04::
# 63 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_ED, VuliasMullenCave_EventScript_Trainer04_Text_0, VuliasMullenCave_EventScript_Trainer04_Text_1
# 70 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 72 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking::
# 78 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 79 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 80 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLED_CAVE_JORDAN_01, VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_0
# 84 "data/maps/Vulias_MullenCave/scripts.pory"
	playse SE_PIN
# 85 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 87 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0, MSGBOX_YESNO
# 97 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_1
# 112 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_3
# 117 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLED_CAVE_JORDAN_01, VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_1
# 119 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 120 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 121 "data/maps/Vulias_MullenCave/scripts.pory"
	removeobject MULLED_CAVE_JORDAN_01
# 122 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 11
# 123 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_1:
# 98 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_1
# 101 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 102 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 30
# 103 "data/maps/Vulias_MullenCave/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 104 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_2
# 105 "data/maps/Vulias_MullenCave/scripts.pory"
	waitse
# 106 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 107 "data/maps/Vulias_MullenCave/scripts.pory"
	call MulledCave_DetermineJordanTeam
# 108 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 11
# 109 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


MulledCave_DetermineJordanTeam::
# 129 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq MulledCave_DetermineJordanTeam_1
# 137 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MulledCave_DetermineJordanTeam_2
# 145 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MulledCave_DetermineJordanTeam_3
# 153 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MulledCave_DetermineJordanTeam_4
	return

MulledCave_DetermineJordanTeam_1:
# 130 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANPOUR_02
	return

MulledCave_DetermineJordanTeam_2:
# 138 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANSEAR_02
	return

MulledCave_DetermineJordanTeam_3:
# 146 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANSAGE_02
	return

MulledCave_DetermineJordanTeam_4:
# 154 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_INNAPE_02
	return


MullenCave_EventScript_JordanFollower::
# 165 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 166 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 167 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_JordanFollower_Text_0
# 170 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 171 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


MullenCave_EventScript_NoLeaveWhileFollower::
# 177 "data/maps/Vulias_MullenCave/scripts.pory"
	checkfollowernpc
# 178 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MullenCave_EventScript_NoLeaveWhileFollower_2
MullenCave_EventScript_NoLeaveWhileFollower_1:
	end

MullenCave_EventScript_NoLeaveWhileFollower_2:
# 179 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 180 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_NoLeaveWhileFollower_Text_0
# 182 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 183 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement 0xFF, MullenCave_EventScript_NoLeaveWhileFollower_Movement_0
# 184 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 185 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	goto MullenCave_EventScript_NoLeaveWhileFollower_1


# 80 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_0:
# 81 "data/maps/Vulias_MullenCave/scripts.pory"
	emote_exclamation_mark
# 82 "data/maps/Vulias_MullenCave/scripts.pory"
	face_right
	step_end

# 118 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_1:
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 118 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
	step_end

# 183 "data/maps/Vulias_MullenCave/scripts.pory"
MullenCave_EventScript_NoLeaveWhileFollower_Movement_0:
# 183 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
	step_end

VuliasMullenCave_EventScript_Trainer01_Text_0:
# 29 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Madness upon thee!$"

VuliasMullenCave_EventScript_Trainer01_Text_1:
# 30 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Upon me you say?.$"

VuliasMullenCave_EventScript_Trainer01_Text_2:
# 32 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Not a bad read kid.$"

VuliasMullenCave_EventScript_Trainer02_Text_0:
# 40 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I was looking for the Woltia City Docks,\n"
	.string "but I think I lost my way!$"

VuliasMullenCave_EventScript_Trainer02_Text_1:
# 42 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Ah, then I definitely lost my way.$"

VuliasMullenCave_EventScript_Trainer02_Text_2:
# 44 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Don't be like me, read signs!$"

VuliasMullenCave_EventScript_Trainer03_Text_0:
# 52 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "This cave houses an ancient power. Me!$"

VuliasMullenCave_EventScript_Trainer03_Text_1:
# 53 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Ah well, it really does house an ancient\n"
	.string "power!$"

VuliasMullenCave_EventScript_Trainer03_Text_2:
# 56 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "There are many legends of the horrors\n"
	.string "deep within Mulled Cave.$"

VuliasMullenCave_EventScript_Trainer04_Text_0:
# 65 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I'm trying to find the deeper sections\n"
	.string "of Mulled Cave, but it's nowhere to be\l"
	.string "found!$"

VuliasMullenCave_EventScript_Trainer04_Text_1:
# 68 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Maybe if we bring in some power tools...$"

VuliasMullenCave_EventScript_Trainer04_Text_2:
# 70 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I'm sure there are tons of rare Pokemon\n"
	.string "deeper in the cave!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0:
# 87 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Who's the-\p"
	.string "{PLAYER}! Wow, you got me this time, I\n"
	.string "nearly jumped out of my socks! I was a\l"
	.string "bit mesmerized by the water here, this\l"
	.string "cave is surpisingly serene.\p"
	.string "Anyways, want to tag along through the\n"
	.string "rest of Mullen Cave?$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_1:
# 98 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Great! Let's get moving! The\n"
	.string "exit to {COLOR RED}Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} shouldn't be too far\l"
	.string "far, {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} won't be far then!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_2:
# 104 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Jordan is now your follower!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_3:
# 112 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That's all good! I'm sure you\n"
	.string "want to catch some Pokemon eh?\p"
	.string "I'll see you at exit to {COLOR RED}Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. We'll\n"
	.string "be close to {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} then!$"

MullenCave_EventScript_JordanFollower_Text_0:
# 167 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "There are plenty of local legends about\n"
	.string "this cave, but no one has been able to\l"
	.string "find the caverns that are spoken of.$"

MullenCave_EventScript_NoLeaveWhileFollower_Text_0:
# 180 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, let's try to make it to the\n"
	.string "exit! No use going back now!$"
