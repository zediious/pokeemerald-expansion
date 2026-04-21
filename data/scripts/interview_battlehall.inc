BattleHall_EventScript_InterviewStart::
# 3 "data/scripts/interview_battlehall.pory"
	lock
# 4 "data/scripts/interview_battlehall.pory"
	setvar VAR_0x8005, TVSHOW_VULIAS_BATTLEHALL
# 5 "data/scripts/interview_battlehall.pory"
	special InterviewBefore
# 6 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 7 "data/scripts/interview_battlehall.pory"
	switch VAR_INTERVIEWS_STORY
# 9 "data/scripts/interview_battlehall.pory"
	case 1, BattleHall_EventScript_InterviewStart_3
BattleHall_EventScript_InterviewStart_1:
# 22 "data/scripts/interview_battlehall.pory"
	waitmessage
# 23 "data/scripts/interview_battlehall.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleHall_EventScript_InterviewStart_5
BattleHall_EventScript_InterviewStart_4:
# 28 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_DeclineInterview
	return

BattleHall_EventScript_InterviewStart_3:
# 10 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_InterviewStart_Text_1, MSGBOX_YESNO
	goto BattleHall_EventScript_InterviewStart_1

BattleHall_EventScript_InterviewStart_5:
# 25 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_AcceptInterview
	goto BattleHall_EventScript_InterviewStart_4


BattleHall_EventScript_AcceptInterview::
# 33 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_0
# 40 "data/scripts/interview_battlehall.pory"
	waitmessage
# 41 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 42 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_1, 0
# 43 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_2, 1
# 44 "data/scripts/interview_battlehall.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 1, 0
# 45 "data/scripts/interview_battlehall.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleHall_EventScript_AcceptInterview_2
# 58 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_4
BattleHall_EventScript_AcceptInterview_1:
# 66 "data/scripts/interview_battlehall.pory"
	waitmessage
# 67 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 68 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_5
# 74 "data/scripts/interview_battlehall.pory"
	waitmessage
# 75 "data/scripts/interview_battlehall.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_HALL_INTERVIEW
# 76 "data/scripts/interview_battlehall.pory"
	copyvar VAR_RESULT, VAR_0x8003
# 77 "data/scripts/interview_battlehall.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 78 "data/scripts/interview_battlehall.pory"
	call Common_ShowEasyChatScreen
# 79 "data/scripts/interview_battlehall.pory"
	lock
# 81 "data/scripts/interview_battlehall.pory"
	switch VAR_RESULT
# 83 "data/scripts/interview_battlehall.pory"
	case 1, BattleHall_EventScript_AcceptInterview_7
# 92 "data/scripts/interview_battlehall.pory"
	case 0, BattleHall_EventScript_AcceptInterview_8
BattleHall_EventScript_AcceptInterview_5:
# 100 "data/scripts/interview_battlehall.pory"
	waitmessage
# 101 "data/scripts/interview_battlehall.pory"
	setvar VAR_0x8005, TVSHOW_VULIAS_BATTLEHALL
# 102 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_EndInterview
	return

BattleHall_EventScript_AcceptInterview_2:
# 47 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_3
	goto BattleHall_EventScript_AcceptInterview_1

BattleHall_EventScript_AcceptInterview_7:
# 84 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 85 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_6
# 90 "data/scripts/interview_battlehall.pory"
	setflag FLAG_TEMP_2
# 91 "data/scripts/interview_battlehall.pory"
	copyvar VAR_0x8004, VAR_0x8008
	goto BattleHall_EventScript_AcceptInterview_5

BattleHall_EventScript_AcceptInterview_8:
# 93 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 94 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_7
	goto BattleHall_EventScript_AcceptInterview_5


BattleHall_EventScript_DeclineInterview::
# 107 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 108 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_DeclineInterview_Text_0
# 114 "data/scripts/interview_battlehall.pory"
	waitmessage
# 115 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_EndInterview
	return


BattleHall_EventScript_EndInterview::
# 120 "data/scripts/interview_battlehall.pory"
	special InterviewAfter
# 121 "data/scripts/interview_battlehall.pory"
	incrementgamestat GAME_STAT_GOT_INTERVIEWED
# 122 "data/scripts/interview_battlehall.pory"
	release
	return


BattleHall_EventScript_InterviewStart_Text_0:
# 6 "data/scripts/interview_battlehall.pory"
	.string "Interviewer$"

BattleHall_EventScript_InterviewStart_Text_1:
# 12 "data/scripts/interview_battlehall.pory"
	.string "Hello! We're with the Vulias Battlers\n"
	.string "Network, the entire region is in a buzz\l"
	.string "over your victory! Beating two {COLOR RED}Battle\l"
	.string "Aces{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is no small feat!\p"
	.string "Can we get a few quick words from you\n"
	.string "about the battle?$"

BattleHall_EventScript_AcceptInterview_Text_0:
# 35 "data/scripts/interview_battlehall.pory"
	.string "Fantastic, thank you!\n"
	.string "Did you think you might lose in your\l"
	.string "battle against {COLOR RED}Candace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, or were you\l"
	.string "confident you would win from the start?$"

BattleHall_EventScript_AcceptInterview_Text_1:
# 42 "data/scripts/interview_battlehall.pory"
	.string "Confident$"

BattleHall_EventScript_AcceptInterview_Text_2:
# 43 "data/scripts/interview_battlehall.pory"
	.string "It was a challenge$"

BattleHall_EventScript_AcceptInterview_Text_3:
# 49 "data/scripts/interview_battlehall.pory"
	.string "Such confidence! Many people think\n"
	.string "that the {COLOR RED}Battle Aces{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} may not be the\l"
	.string "strongest trainers. You're proving it\l"
	.string "with your actions, and with such a\l"
	.string "strong statement!$"

BattleHall_EventScript_AcceptInterview_Text_4:
# 60 "data/scripts/interview_battlehall.pory"
	.string "No surpise there! There is a good\n"
	.string "reason that the {COLOR RED}Battle Aces{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} are known\l"
	.string "strongest trainers in Vulias! Despite\l"
	.string "that, you managed to defeat two!$"

BattleHall_EventScript_AcceptInterview_Text_5:
# 70 "data/scripts/interview_battlehall.pory"
	.string "One more question, if I may! If you were\n"
	.string "to describe your battle with {COLOR RED}Candace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "with one word, what would that word be?$"

BattleHall_EventScript_AcceptInterview_Text_6:
# 87 "data/scripts/interview_battlehall.pory"
	.string "Amazing! That one statement, it sums it\n"
	.string "all up perfectly!$"

BattleHall_EventScript_AcceptInterview_Text_7:
# 96 "data/scripts/interview_battlehall.pory"
	.string "Ahh, the silent type? It pays sometimes\n"
	.string "to keep them guessing!$"

BattleHall_EventScript_DeclineInterview_Text_0:
# 110 "data/scripts/interview_battlehall.pory"
	.string "Oh...apologies for the disturbance! We\n"
	.string "hope to have an interview with you next\l"
	.string "time!$"
