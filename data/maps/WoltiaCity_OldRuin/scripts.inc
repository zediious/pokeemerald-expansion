WoltiaCity_OldRuin_MapScripts::
	.byte 0


WoltiaOldRuin_EventScript_TriggerKeeganEncounter::
# 4 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	lock
# 5 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_0
# 6 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement 0xFF, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_1
# 7 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 8 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_0
# 11 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 12 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_1
# 14 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 15 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 30
# 16 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_2
# 17 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement 0xFF, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_2
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement WOLTIA_RUIN_KEEGAN, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_3
# 19 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_4
# 21 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 22 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_2
# 28 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 29 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 60
# 30 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement WOLTIA_RUIN_KEEGAN, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_5
# 31 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 32 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement 0xFF, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_6
# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_3
# 35 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_4
# 37 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 38 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 60
# 39 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement WOLTIA_RUIN_KEEGAN, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_7
# 40 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 41 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setflag FLAG_WOLTIA_RUIN_KEEGAN
# 42 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	removeobject WOLTIA_RUIN_KEEGAN
# 43 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	playse SE_EXIT
# 44 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_8
# 45 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 46 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	msgbox WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_5
# 55 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmessage
# 56 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_7
# 57 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitmovement
# 58 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	destroyfollowernpc
# 59 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	playse SE_EXIT
# 60 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 16
# 61 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	waitse
# 62 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	delay 30
# 63 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	clearflag FLAG_WOLTIA_JORDAN_OUTSIDETOURNEY
# 64 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	questupdated 0
# 65 "data/maps/WoltiaCity_OldRuin/scripts.pory"
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

# 16 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_2:
# 16 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	emote_exclamation_mark
# 16 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_up
	step_end

# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_3:
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 18 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_left
	step_end

# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_4:
# 20 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_right
	step_end

# 30 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_5:
# 30 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 30 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 30 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_right
	step_end

# 32 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_6:
# 32 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_left
	step_end

# 39 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_7:
# 39 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
	step_end

# 44 "data/maps/WoltiaCity_OldRuin/scripts.pory"
WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Movement_8:
# 44 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 44 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_right
# 44 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	walk_down
# 44 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	face_right
	step_end

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_0:
# 8 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wow, the carvings here are\n"
	.string "so cool! I wonder when all of this\l"
	.string "was created?$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_1:
# 12 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}A very long time ago, when power\n"
	.string "meant...something more.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_2:
# 22 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}The legends of Vulias carry much\n"
	.string "weight. They may be an avenue to one's\l"
	.string "greatest desires.\p"
	.string "If they are willing to do what is\n"
	.string "necessary.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_3:
# 33 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "The mysterious man sizes you up\n"
	.string "from head to toe.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_4:
# 35 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hmm. As well, it helps when others\n"
	.string "don't stand in your way.$"

WoltiaOldRuin_EventScript_TriggerKeeganEncounter_Text_5:
# 46 "data/maps/WoltiaCity_OldRuin/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That was...weird, to say the\n"
	.string "least. Do you know what he was going on\l"
	.string "about? I sure don't.\p"
	.string "Anyways, I guess we'll come look around\n"
	.string "more another time, the tournament must\l"
	.string "be starting soon!\p"
	.string "See you at {COLOR RED}The Aerodrome!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
