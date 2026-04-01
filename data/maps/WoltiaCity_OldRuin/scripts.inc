WoltiaCity_OldRuin_MapScripts::
	.byte 0


WoltiaOldRuin_EventScript_TriggerKeeganEncounter::
# 4 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	lock
# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_0
# 6 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_1
# 7 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 8 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setspeaker WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_0
# 9 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_1
# 12 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 13 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setspeaker WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_2
# 14 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_3
# 16 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 17 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 30
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_2
# 19 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_2
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement WOLTIA_RUIN_KEEGAN, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_3
# 21 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 22 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_4
# 23 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 24 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setspeaker WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_2
# 25 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_4
# 31 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 32 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 60
# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement WOLTIA_RUIN_KEEGAN, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_5
# 34 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 35 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_6
# 36 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_5
# 38 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setspeaker WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_2
# 39 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_6
# 48 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 49 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 60
# 50 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement WOLTIA_RUIN_KEEGAN, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_7
# 51 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 52 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setflag FLAG_WOLTIA_RUIN_KEEGAN
# 53 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	removeobject WOLTIA_RUIN_KEEGAN
# 54 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	playse SE_EXIT
# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_8
# 56 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 57 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setspeaker WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_0
# 58 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_7
# 68 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 69 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_7
# 70 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 71 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	destroyfollowernpc
# 72 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	playse SE_EXIT
# 73 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 16
# 74 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitse
# 75 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 30
# 76 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	clearflag FLAG_WOLTIA_JORDAN_OUTSIDETOURNEY
# 77 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	questupdated 0
# 78 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	release
	end


# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_0:
# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_up
# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_up
# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_left
# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_up
	step_end

# 6 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_1:
# 6 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_right
# 6 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_up
	step_end

# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_2:
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	emote_exclamation_mark
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_up
	step_end

# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_3:
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_left
	step_end

# 22 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_4:
# 22 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_right
	step_end

# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_5:
# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_right
	step_end

# 35 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_6:
# 35 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_left
	step_end

# 50 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_7:
# 50 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
	step_end

# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_8:
# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_right
# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_right
	step_end

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_0:
# 8 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "Jordan$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_1:
# 9 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "Wow, the carvings here are\n"
	.string "so cool! I wonder when all of this\l"
	.string "was created?$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_2:
# 13 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "???$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_3:
# 14 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "A very long time ago, when power meant...\n"
	.string "something more.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_4:
# 25 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "The legends of Vulias carry much\n"
	.string "weight. They may be an avenue to one's\l"
	.string "greatest desires.\p"
	.string "If they are willing to do what is\n"
	.string "necessary.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_5:
# 36 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "The mysterious man sizes you up\n"
	.string "from head to toe.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_6:
# 39 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "You're the new {COLOR RED}Rep Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} of Gerbon\n"
	.string "Town, are you not? I saw your 'battle'.\l"
	.string "Pathetic.\p"
	.string "They sit in the stands, they cheer, and\n"
	.string "they clap. And you all call it battle.\p"
	.string "This world has forgotten what that\n"
	.string "word truly means.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_7:
# 58 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "That was...weird, to say the least.\n"
	.string "How can he call your battle pathetic?\l"
	.string "Who does he think he is?\p"
	.string "Anyways, I guess we'll come look around\n"
	.string "more another time, the tournament must\l"
	.string "be starting soon! Don't let that sour\l"
	.string "your mood!\p"
	.string "See you at {COLOR RED}The Aerodrome!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
