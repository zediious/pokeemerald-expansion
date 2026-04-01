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


VuliasMullenCave_EventScript_Trainer05::
# 77 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, VuliasMullenCave_EventScript_Trainer05_Text_0, VuliasMullenCave_EventScript_Trainer05_Text_1
# 83 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer05_Text_2, MSGBOX_AUTOCLOSE
# 85 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer06::
# 94 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, VuliasMullenCave_EventScript_Trainer06_Text_0, VuliasMullenCave_EventScript_Trainer06_Text_1, VuliasMullenCave_StudentEnd
# 100 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer06_Text_2, MSGBOX_AUTOCLOSE
# 102 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer07::
# 108 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_BILLY, VuliasMullenCave_EventScript_Trainer07_Text_0, VuliasMullenCave_EventScript_Trainer07_Text_1, VuliasMullenCave_StudentEnd
# 114 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer07_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_StudentEnd::
# 120 "data/maps/Vulias_MullenCave/scripts.pory"
	addvar VAR_MULLEN_CAVE_SENSEI_PROGRESS, 1
	end


VuliasMullenCave_EventScript_Trainer08::
# 126 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_MULLEN_CAVE_SENSEI_PROGRESS, 2
	goto_if_eq VuliasMullenCave_EventScript_Trainer08_1
# 139 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_MULLEN_CAVE_SENSEI_PROGRESS, 3
	goto_if_eq VuliasMullenCave_EventScript_Trainer08_2
# 145 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 146 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 147 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 148 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer08_Text_4
# 151 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 152 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_Trainer08_1:
# 127 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 128 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, VuliasMullenCave_EventScript_Trainer08_Text_1, VuliasMullenCave_EventScript_Trainer08_Text_2, ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive
# 136 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_Trainer08_2:
# 140 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 141 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer08_Text_3, MSGBOX_AUTOCLOSE
# 142 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive::
# 159 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 160 "data/maps/Vulias_MullenCave/scripts.pory"
	goto_if_set FLAG_MULLEN_SENSEI_DEFEATED, ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_1
# 164 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 165 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_Text_0
# 167 "data/maps/Vulias_MullenCave/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 168 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLEN_SENSEI_DEFEATED
# 169 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_MULLEN_CAVE_SENSEI_PROGRESS, 3
# 170 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 171 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_1:
# 161 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


VuliasMullenCave_EventScript_Trainer09::
# 179 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, VuliasMullenCave_EventScript_Trainer09_Text_0, VuliasMullenCave_EventScript_Trainer09_Text_1
# 184 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer09_Text_2, MSGBOX_AUTOCLOSE
# 185 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer10::
# 190 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_MELINA, VuliasMullenCave_EventScript_Trainer10_Text_0, VuliasMullenCave_EventScript_Trainer10_Text_1
# 195 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer10_Text_2, MSGBOX_AUTOCLOSE
# 197 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking::
# 205 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 206 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 60
# 207 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 208 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLED_CAVE_JORDAN_01, VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_0
# 212 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 213 "data/maps/Vulias_MullenCave/scripts.pory"
	playse SE_PIN
# 215 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 216 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_1, MSGBOX_YESNO
# 229 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 230 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_1
# 245 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_4
# 250 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 251 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 60
# 252 "data/maps/Vulias_MullenCave/scripts.pory"
	closemessage
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLED_CAVE_JORDAN_01, VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_1
# 254 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 255 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 256 "data/maps/Vulias_MullenCave/scripts.pory"
	removeobject MULLED_CAVE_JORDAN_01
# 257 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 11
# 258 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_1:
# 231 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_2
# 234 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 235 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 30
# 236 "data/maps/Vulias_MullenCave/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 237 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_3
# 238 "data/maps/Vulias_MullenCave/scripts.pory"
	waitse
# 239 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 240 "data/maps/Vulias_MullenCave/scripts.pory"
	call MulledCave_DetermineJordanTeam
# 241 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 11
# 242 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


MulledCave_DetermineJordanTeam::
# 264 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq MulledCave_DetermineJordanTeam_1
# 272 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MulledCave_DetermineJordanTeam_2
# 280 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MulledCave_DetermineJordanTeam_3
# 288 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MulledCave_DetermineJordanTeam_4
	return

MulledCave_DetermineJordanTeam_1:
# 265 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANPOUR_02
	return

MulledCave_DetermineJordanTeam_2:
# 273 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANSEAR_02
	return

MulledCave_DetermineJordanTeam_3:
# 281 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANSAGE_02
	return

MulledCave_DetermineJordanTeam_4:
# 289 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_INNAPE_02
	return


MullenCave_EventScript_JordanFollower::
# 300 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 301 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 302 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 303 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_JordanFollower_Text_0
# 306 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 307 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


MullenCave_EventScript_NoLeaveWhileFollower::
# 313 "data/maps/Vulias_MullenCave/scripts.pory"
	checkfollowernpc
# 314 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MullenCave_EventScript_NoLeaveWhileFollower_2
MullenCave_EventScript_NoLeaveWhileFollower_1:
	end

MullenCave_EventScript_NoLeaveWhileFollower_2:
# 315 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 316 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 317 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_NoLeaveWhileFollower_Text_0
# 319 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 320 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MullenCave_EventScript_NoLeaveWhileFollower_Movement_0
# 321 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 322 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	goto MullenCave_EventScript_NoLeaveWhileFollower_1


MullenCave_EventScript_JordanLeaveAtEnd::
# 329 "data/maps/Vulias_MullenCave/scripts.pory"
	checkfollowernpc
# 330 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MullenCave_EventScript_JordanLeaveAtEnd_1
# 359 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

MullenCave_EventScript_JordanLeaveAtEnd_1:
# 331 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 332 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MullenCave_EventScript_JordanLeaveAtEnd_Movement_0
# 333 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 334 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 335 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_JordanLeaveAtEnd_Text_0
# 346 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 347 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 20
# 348 "data/maps/Vulias_MullenCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 349 "data/maps/Vulias_MullenCave/scripts.pory"
	destroyfollowernpc
# 350 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 351 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 60
# 352 "data/maps/Vulias_MullenCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 353 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 30
# 354 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
# 355 "data/maps/Vulias_MullenCave/scripts.pory"
	questupdated 0
# 356 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


# 208 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_0:
# 209 "data/maps/Vulias_MullenCave/scripts.pory"
	emote_exclamation_mark
# 210 "data/maps/Vulias_MullenCave/scripts.pory"
	face_right
	step_end

# 253 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_1:
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
	step_end

# 320 "data/maps/Vulias_MullenCave/scripts.pory"
MullenCave_EventScript_NoLeaveWhileFollower_Movement_0:
# 320 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
	step_end

# 332 "data/maps/Vulias_MullenCave/scripts.pory"
MullenCave_EventScript_JordanLeaveAtEnd_Movement_0:
# 332 "data/maps/Vulias_MullenCave/scripts.pory"
	face_up
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

VuliasMullenCave_EventScript_Trainer05_Text_0:
# 79 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "There's something important across\n"
	.string "this water, I just know it!$"

VuliasMullenCave_EventScript_Trainer05_Text_1:
# 81 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I can't swim!$"

VuliasMullenCave_EventScript_Trainer05_Text_2:
# 83 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Surely I can find some way to just {COLOR RED}Surf{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "across this water...$"

VuliasMullenCave_EventScript_Trainer06_Text_0:
# 96 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I will crush the rock before my rival!$"

VuliasMullenCave_EventScript_Trainer06_Text_1:
# 97 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Quit distracting me!$"

VuliasMullenCave_EventScript_Trainer06_Text_2:
# 100 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "MY sensei is the best {COLOR RED}Rock Smasher{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "around!$"

VuliasMullenCave_EventScript_Trainer07_Text_0:
# 110 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Bah! Are you here to userp me? Never!$"

VuliasMullenCave_EventScript_Trainer07_Text_1:
# 111 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Maybe I'm not cut out for this...$"

VuliasMullenCave_EventScript_Trainer07_Text_2:
# 114 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Go ahead then, up the stairs you go!$"

VuliasMullenCave_EventScript_Trainer08_Text_0:
# 127 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Sensei$"

VuliasMullenCave_EventScript_Trainer08_Text_1:
# 130 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "So, you have defeated my\n"
	.string "students? Let us see how you fare\l"
	.string "against me!$"

VuliasMullenCave_EventScript_Trainer08_Text_2:
# 133 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Hoho! Very impressive!$"

VuliasMullenCave_EventScript_Trainer08_Text_3:
# 141 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Go forth and practice your skills!$"

VuliasMullenCave_EventScript_Trainer08_Text_4:
# 148 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "You think you can face me? Prove\n"
	.string "yourself, by defeating my {COLOR RED}two\l"
	.string "students{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} first!$"

ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_Text_0:
# 165 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "You are a true warrior, this {COLOR RED}HM{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} shall\n"
	.string "serve you well!$"

VuliasMullenCave_EventScript_Trainer09_Text_0:
# 181 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Watch your step!$"

VuliasMullenCave_EventScript_Trainer09_Text_1:
# 182 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Ah, I've tripped!$"

VuliasMullenCave_EventScript_Trainer09_Text_2:
# 184 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I suppose I should watch my step too!$"

VuliasMullenCave_EventScript_Trainer10_Text_0:
# 192 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Out of the way, I'm running here!$"

VuliasMullenCave_EventScript_Trainer10_Text_1:
# 193 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I suppose I did want to battle...$"

VuliasMullenCave_EventScript_Trainer10_Text_2:
# 195 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Either way, you should watch where you\n"
	.string "are going!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0:
# 215 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Jordan$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_1:
# 216 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Who's the-\p"
	.string "{PLAYER}! Wow, you got me this time, I\n"
	.string "nearly jumped out of my socks! I was a\l"
	.string "bit mesmerized by the water here, this\l"
	.string "cave is surpisingly serene.\p"
	.string "Anyways, want to tag along through the\n"
	.string "rest of Mullen Cave?\p"
	.string "I'll keep your party healthy. You'll be\n"
	.string "able to catch Pokemon still, too!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_2:
# 231 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Great! Let's get moving! The exit to \n"
	.string "{COLOR RED}Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} shouldn't be too far\l"
	.string "far, {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} won't be far then!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_3:
# 237 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Jordan is now your follower!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_4:
# 245 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "That's all good! We can travel together\n"
	.string "another time, yeah?\p"
	.string "I'll see you at exit to {COLOR RED}Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. We'll\n"
	.string "be close to {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} then!$"

MullenCave_EventScript_JordanFollower_Text_0:
# 303 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "There are plenty of local legends about\n"
	.string "this cave, but no one has been able to\l"
	.string "find the caverns that are spoken of.$"

MullenCave_EventScript_NoLeaveWhileFollower_Text_0:
# 317 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Hey, let's try to make it to the\n"
	.string "exit! No use going back now!$"

MullenCave_EventScript_JordanLeaveAtEnd_Text_0:
# 335 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Looks like this is the end! Sure was a\n"
	.string "bit more difficult than the {COLOR RED}Ferry\l"
	.string "Fearow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} we took to get to my house\l"
	.string "from Woltia, but a bit more fun I would\l"
	.string "say!\p"
	.string "I'll go on ahead, and meet you at Woltia\n"
	.string "City! Just {COLOR RED}go west through Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "and you'll get there.\p"
	.string "See you soon!$"
