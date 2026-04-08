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
# 152 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_MULLEN_CAVE_SENSEI_PROGRESS, 3
	goto_if_eq VuliasMullenCave_EventScript_Trainer08_2
# 158 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 159 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 160 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 161 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer08_Text_4
# 164 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 165 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_Trainer08_1:
# 127 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 128 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, MULLEN_CAVE_SENSEI, TRAINER_KOJI_1, VuliasMullenCave_EventScript_Trainer08_Text_1, VuliasMullenCave_EventScript_Trainer08_Text_2, ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 149 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_Trainer08_2:
# 153 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 154 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer08_Text_3, MSGBOX_AUTOCLOSE
# 155 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive::
# 172 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 173 "data/maps/Vulias_MullenCave/scripts.pory"
	goto_if_set FLAG_MULLEN_SENSEI_DEFEATED, ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_1
# 177 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_Trainer08_Text_0
# 178 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_Text_0
# 180 "data/maps/Vulias_MullenCave/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 181 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLEN_SENSEI_DEFEATED
# 182 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_MULLEN_CAVE_SENSEI_PROGRESS, 3
# 183 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 184 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_1:
# 174 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


VuliasMullenCave_EventScript_Trainer09::
# 192 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, VuliasMullenCave_EventScript_Trainer09_Text_0, VuliasMullenCave_EventScript_Trainer09_Text_1
# 197 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer09_Text_2, MSGBOX_AUTOCLOSE
# 198 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_Trainer10::
# 203 "data/maps/Vulias_MullenCave/scripts.pory"
	trainerbattle_single TRAINER_MELINA, VuliasMullenCave_EventScript_Trainer10_Text_0, VuliasMullenCave_EventScript_Trainer10_Text_1
# 208 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_Trainer10_Text_2, MSGBOX_AUTOCLOSE
# 210 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
	end


VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking::
# 218 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 219 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 60
# 220 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 221 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLED_CAVE_JORDAN_01, VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_0
# 225 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 226 "data/maps/Vulias_MullenCave/scripts.pory"
	playse SE_PIN
# 228 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 229 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_1, MSGBOX_YESNO
# 242 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 243 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_1
# 258 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_4
# 263 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 264 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 60
# 265 "data/maps/Vulias_MullenCave/scripts.pory"
	closemessage
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement MULLED_CAVE_JORDAN_01, VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_1
# 267 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 268 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 269 "data/maps/Vulias_MullenCave/scripts.pory"
	removeobject MULLED_CAVE_JORDAN_01
# 270 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 11
# 271 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_1:
# 244 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_2
# 247 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 248 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 30
# 249 "data/maps/Vulias_MullenCave/scripts.pory"
	playse MUS_RG_OBTAIN_KEY_ITEM
# 250 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_3
# 251 "data/maps/Vulias_MullenCave/scripts.pory"
	waitse
# 252 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 253 "data/maps/Vulias_MullenCave/scripts.pory"
	call MulledCave_DetermineJordanTeam
# 254 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 11
# 255 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


MulledCave_DetermineJordanTeam::
# 277 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq MulledCave_DetermineJordanTeam_1
# 285 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MulledCave_DetermineJordanTeam_2
# 293 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MulledCave_DetermineJordanTeam_3
# 301 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MulledCave_DetermineJordanTeam_4
	return

MulledCave_DetermineJordanTeam_1:
# 278 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANPOUR_02
	return

MulledCave_DetermineJordanTeam_2:
# 286 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANSEAR_02
	return

MulledCave_DetermineJordanTeam_3:
# 294 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_PANSAGE_02
	return

MulledCave_DetermineJordanTeam_4:
# 302 "data/maps/Vulias_MullenCave/scripts.pory"
	setfollowernpc MULLED_CAVE_JORDAN_01, FOLLOWER_NPC_FLAG_CAN_LEAVE_ROUTE, MullenCave_EventScript_JordanFollower, PARTNER_JORDAN_INNAPE_02
	return


MullenCave_EventScript_JordanFollower::
# 313 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 314 "data/maps/Vulias_MullenCave/scripts.pory"
	faceplayer
# 315 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 316 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_JordanFollower_Text_0
# 319 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 320 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


MullenCave_EventScript_NoLeaveWhileFollower::
# 326 "data/maps/Vulias_MullenCave/scripts.pory"
	checkfollowernpc
# 327 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MullenCave_EventScript_NoLeaveWhileFollower_2
MullenCave_EventScript_NoLeaveWhileFollower_1:
	end

MullenCave_EventScript_NoLeaveWhileFollower_2:
# 328 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 329 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 330 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_NoLeaveWhileFollower_Text_0
# 332 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 333 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MullenCave_EventScript_NoLeaveWhileFollower_Movement_0
# 334 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 335 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	goto MullenCave_EventScript_NoLeaveWhileFollower_1


MullenCave_EventScript_JordanLeaveAtEnd::
# 342 "data/maps/Vulias_MullenCave/scripts.pory"
	checkfollowernpc
# 343 "data/maps/Vulias_MullenCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MullenCave_EventScript_JordanLeaveAtEnd_1
# 372 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end

MullenCave_EventScript_JordanLeaveAtEnd_1:
# 344 "data/maps/Vulias_MullenCave/scripts.pory"
	lock
# 345 "data/maps/Vulias_MullenCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MullenCave_EventScript_JordanLeaveAtEnd_Movement_0
# 346 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmovement
# 347 "data/maps/Vulias_MullenCave/scripts.pory"
	setspeaker VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0
# 348 "data/maps/Vulias_MullenCave/scripts.pory"
	msgbox MullenCave_EventScript_JordanLeaveAtEnd_Text_0
# 359 "data/maps/Vulias_MullenCave/scripts.pory"
	waitmessage
# 360 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 20
# 361 "data/maps/Vulias_MullenCave/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 362 "data/maps/Vulias_MullenCave/scripts.pory"
	destroyfollowernpc
# 363 "data/maps/Vulias_MullenCave/scripts.pory"
	setflag FLAG_MULLED_CAVE_JORDAN_01
# 364 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 60
# 365 "data/maps/Vulias_MullenCave/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 366 "data/maps/Vulias_MullenCave/scripts.pory"
	delay 30
# 367 "data/maps/Vulias_MullenCave/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 12
# 368 "data/maps/Vulias_MullenCave/scripts.pory"
	questupdated 0
# 369 "data/maps/Vulias_MullenCave/scripts.pory"
	release
	end


# 221 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_0:
# 222 "data/maps/Vulias_MullenCave/scripts.pory"
	emote_exclamation_mark
# 223 "data/maps/Vulias_MullenCave/scripts.pory"
	face_right
	step_end

# 266 "data/maps/Vulias_MullenCave/scripts.pory"
VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Movement_1:
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
# 266 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_left
	step_end

# 333 "data/maps/Vulias_MullenCave/scripts.pory"
MullenCave_EventScript_NoLeaveWhileFollower_Movement_0:
# 333 "data/maps/Vulias_MullenCave/scripts.pory"
	walk_up
	step_end

# 345 "data/maps/Vulias_MullenCave/scripts.pory"
MullenCave_EventScript_JordanLeaveAtEnd_Movement_0:
# 345 "data/maps/Vulias_MullenCave/scripts.pory"
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
# 132 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "So, you have defeated my\n"
	.string "students? Let us see how you fare\l"
	.string "against me!$"

VuliasMullenCave_EventScript_Trainer08_Text_2:
# 135 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Hoho! Very impressive!$"

VuliasMullenCave_EventScript_Trainer08_Text_3:
# 154 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Go forth and practice your skills!$"

VuliasMullenCave_EventScript_Trainer08_Text_4:
# 161 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "You think you can face me? Prove\n"
	.string "yourself, by defeating my {COLOR RED}two\l"
	.string "students{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} first!$"

ViluasMullenCave_EventScript_Trainer08_RockSmashGiveGive_Text_0:
# 178 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "You are a true warrior, this {COLOR RED}HM{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} shall\n"
	.string "serve you well!$"

VuliasMullenCave_EventScript_Trainer09_Text_0:
# 194 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Watch your step!$"

VuliasMullenCave_EventScript_Trainer09_Text_1:
# 195 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Ah, I've tripped!$"

VuliasMullenCave_EventScript_Trainer09_Text_2:
# 197 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I suppose I should watch my step too!$"

VuliasMullenCave_EventScript_Trainer10_Text_0:
# 205 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Out of the way, I'm running here!$"

VuliasMullenCave_EventScript_Trainer10_Text_1:
# 206 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "I suppose I did want to battle...$"

VuliasMullenCave_EventScript_Trainer10_Text_2:
# 208 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Either way, you should watch where you\n"
	.string "are going!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_0:
# 228 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Jordan$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_1:
# 229 "data/maps/Vulias_MullenCave/scripts.pory"
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
# 244 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Great! Let's get moving! The exit to \n"
	.string "{COLOR RED}Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} shouldn't be too far\l"
	.string "far, {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} won't be far then!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_3:
# 250 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Jordan is now your follower!$"

VuliasMullenCave_EventScript_SpeakJordanAtBridgeBlocking_Text_4:
# 258 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "That's all good! We can travel together\n"
	.string "another time, yeah?\p"
	.string "I'll see you at exit to {COLOR RED}Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}. We'll\n"
	.string "be close to {COLOR RED}Woltia City{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} then!$"

MullenCave_EventScript_JordanFollower_Text_0:
# 316 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "There are plenty of local legends about\n"
	.string "this cave, but no one has been able to\l"
	.string "find the caverns that are spoken of.$"

MullenCave_EventScript_NoLeaveWhileFollower_Text_0:
# 330 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Hey, let's try to make it to the\n"
	.string "exit! No use going back now!$"

MullenCave_EventScript_JordanLeaveAtEnd_Text_0:
# 348 "data/maps/Vulias_MullenCave/scripts.pory"
	.string "Looks like this is the end! Sure was a\n"
	.string "bit more difficult than the {COLOR RED}Ferry\l"
	.string "Fearow{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} we took to get to my house\l"
	.string "from Woltia, but a bit more fun I would\l"
	.string "say!\p"
	.string "I'll go on ahead, and meet you at Woltia\n"
	.string "City! Just {COLOR RED}go west through Route 103{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "and you'll get there.\p"
	.string "See you soon!$"
