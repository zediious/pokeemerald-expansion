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
# 19 "data/scripts/interview_battlehall.pory"
	case 3, BattleHall_EventScript_InterviewStart_4
BattleHall_EventScript_InterviewStart_1:
# 32 "data/scripts/interview_battlehall.pory"
	waitmessage
# 33 "data/scripts/interview_battlehall.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleHall_EventScript_InterviewStart_6
BattleHall_EventScript_InterviewStart_5:
# 38 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_DeclineInterview
	return

BattleHall_EventScript_InterviewStart_3:
# 10 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_InterviewStart_Text_1, MSGBOX_YESNO
	goto BattleHall_EventScript_InterviewStart_1

BattleHall_EventScript_InterviewStart_4:
# 20 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_InterviewStart_Text_2, MSGBOX_YESNO
	goto BattleHall_EventScript_InterviewStart_1

BattleHall_EventScript_InterviewStart_6:
# 35 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_AcceptInterview
	goto BattleHall_EventScript_InterviewStart_5


BattleHall_EventScript_AcceptInterview::
# 43 "data/scripts/interview_battlehall.pory"
	switch VAR_INTERVIEWS_STORY
# 45 "data/scripts/interview_battlehall.pory"
	case 1, BattleHall_EventScript_AcceptInterview_3
# 98 "data/scripts/interview_battlehall.pory"
	case 3, BattleHall_EventScript_AcceptInterview_4
BattleHall_EventScript_AcceptInterview_1:
# 144 "data/scripts/interview_battlehall.pory"
	waitmessage
# 145 "data/scripts/interview_battlehall.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_HALL_INTERVIEW
# 146 "data/scripts/interview_battlehall.pory"
	copyvar VAR_0x8003, VAR_RESULT
# 147 "data/scripts/interview_battlehall.pory"
	copyvar VAR_0x8005, VAR_0x8009
# 148 "data/scripts/interview_battlehall.pory"
	call Common_ShowEasyChatScreen
# 149 "data/scripts/interview_battlehall.pory"
	lock
# 151 "data/scripts/interview_battlehall.pory"
	switch VAR_RESULT
# 153 "data/scripts/interview_battlehall.pory"
	case 1, BattleHall_EventScript_AcceptInterview_7
# 163 "data/scripts/interview_battlehall.pory"
	case 0, BattleHall_EventScript_AcceptInterview_8
BattleHall_EventScript_AcceptInterview_5:
# 173 "data/scripts/interview_battlehall.pory"
	waitmessage
# 174 "data/scripts/interview_battlehall.pory"
	setvar VAR_0x8005, TVSHOW_VULIAS_BATTLEHALL
# 175 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_EndInterview
	return

BattleHall_EventScript_AcceptInterview_3:
# 46 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_0
# 52 "data/scripts/interview_battlehall.pory"
	waitmessage
# 53 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 54 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_1, 0
# 55 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_2, 1
# 56 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_3, 2
# 57 "data/scripts/interview_battlehall.pory"
	dynmultistack 0, 0, TRUE, 3, FALSE, 1, 0
# 58 "data/scripts/interview_battlehall.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleHall_EventScript_AcceptInterview_10
# 67 "data/scripts/interview_battlehall.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleHall_EventScript_AcceptInterview_11
# 78 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_6
BattleHall_EventScript_AcceptInterview_9:
# 88 "data/scripts/interview_battlehall.pory"
	waitmessage
# 89 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 90 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_7
	goto BattleHall_EventScript_AcceptInterview_1

BattleHall_EventScript_AcceptInterview_4:
# 99 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_8
# 106 "data/scripts/interview_battlehall.pory"
	waitmessage
# 107 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 108 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_9, 0
# 109 "data/scripts/interview_battlehall.pory"
	dynmultipush BattleHall_EventScript_AcceptInterview_Text_10, 1
# 110 "data/scripts/interview_battlehall.pory"
	dynmultistack 0, 0, TRUE, 2, FALSE, 1, 0
# 111 "data/scripts/interview_battlehall.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleHall_EventScript_AcceptInterview_16
# 124 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_12
BattleHall_EventScript_AcceptInterview_15:
# 132 "data/scripts/interview_battlehall.pory"
	waitmessage
# 133 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 134 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_13
	goto BattleHall_EventScript_AcceptInterview_1

BattleHall_EventScript_AcceptInterview_7:
# 154 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 155 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_14
# 160 "data/scripts/interview_battlehall.pory"
	setflag FLAG_TEMP_2
# 161 "data/scripts/interview_battlehall.pory"
	copyvar VAR_0x8004, VAR_0x8008
	goto BattleHall_EventScript_AcceptInterview_5

BattleHall_EventScript_AcceptInterview_8:
# 164 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 165 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_15
	goto BattleHall_EventScript_AcceptInterview_5

BattleHall_EventScript_AcceptInterview_10:
# 60 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_4
	goto BattleHall_EventScript_AcceptInterview_9

BattleHall_EventScript_AcceptInterview_11:
# 69 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_5
	goto BattleHall_EventScript_AcceptInterview_9

BattleHall_EventScript_AcceptInterview_16:
# 113 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_AcceptInterview_Text_11
	goto BattleHall_EventScript_AcceptInterview_15


BattleHall_EventScript_DeclineInterview::
# 180 "data/scripts/interview_battlehall.pory"
	setspeaker BattleHall_EventScript_InterviewStart_Text_0
# 181 "data/scripts/interview_battlehall.pory"
	msgbox BattleHall_EventScript_DeclineInterview_Text_0
# 187 "data/scripts/interview_battlehall.pory"
	waitmessage
# 188 "data/scripts/interview_battlehall.pory"
	goto BattleHall_EventScript_EndInterview
	return


BattleHall_EventScript_EndInterview::
# 193 "data/scripts/interview_battlehall.pory"
	special InterviewAfter
# 194 "data/scripts/interview_battlehall.pory"
	incrementgamestat GAME_STAT_GOT_INTERVIEWED
# 195 "data/scripts/interview_battlehall.pory"
	release
	return


BattleHall_EventScript_InterviewStart_Text_0:
# 6 "data/scripts/interview_battlehall.pory"
	.string "Interviewer$"

BattleHall_EventScript_InterviewStart_Text_1:
# 12 "data/scripts/interview_battlehall.pory"
	.string "Hello! We're with the Vulias Battlers\n"
	.string "Network, congratulations on your\l"
	.string "victory! \p"
	.string "Can we get a few quick words from you\n"
	.string "about the battle?$"

BattleHall_EventScript_InterviewStart_Text_2:
# 22 "data/scripts/interview_battlehall.pory"
	.string "Hello! We're with the Vulias Battlers\n"
	.string "Network, the entire region is in a buzz\l"
	.string "over your victory! Beating two {COLOR RED}Battle\l"
	.string "Aces{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is no small feat!\p"
	.string "Can we get a few quick words from you\n"
	.string "about the battle?$"

BattleHall_EventScript_AcceptInterview_Text_0:
# 48 "data/scripts/interview_battlehall.pory"
	.string "Fantastic, thank you!\n"
	.string "Are you an experienced Pokemon\l"
	.string "Trainer, or are you new to battling?$"

BattleHall_EventScript_AcceptInterview_Text_1:
# 54 "data/scripts/interview_battlehall.pory"
	.string "I'm the best in the world$"

BattleHall_EventScript_AcceptInterview_Text_2:
# 55 "data/scripts/interview_battlehall.pory"
	.string "I know a few things$"

BattleHall_EventScript_AcceptInterview_Text_3:
# 56 "data/scripts/interview_battlehall.pory"
	.string "I'm very new$"

BattleHall_EventScript_AcceptInterview_Text_4:
# 62 "data/scripts/interview_battlehall.pory"
	.string "Amazing! We've got ourselves an\n"
	.string "experienced trainer from...the {COLOR RED}Alola{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "region! How exciting!$"

BattleHall_EventScript_AcceptInterview_Text_5:
# 71 "data/scripts/interview_battlehall.pory"
	.string "They say they know a few things! Those\n"
	.string "few things seemed to be all our trainer\l"
	.string "from...the {COLOR RED}Alola{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} region needed!$"

BattleHall_EventScript_AcceptInterview_Text_6:
# 80 "data/scripts/interview_battlehall.pory"
	.string "Shocking! {PLAYER} says they are new\n"
	.string "Pokemon battling, but they were able\l"
	.string "to defeat {COLOR RED}Julia!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What does that say?\l"
	.string "It seems like the... {COLOR RED}Alola{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} region\l"
	.string "produces top trainers!$"

BattleHall_EventScript_AcceptInterview_Text_7:
# 92 "data/scripts/interview_battlehall.pory"
	.string "One more question, if I may! How would\n"
	.string "you describe your feelings after your\l"
	.string "battle with {COLOR RED}Julia{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, in one statement?$"

BattleHall_EventScript_AcceptInterview_Text_8:
# 101 "data/scripts/interview_battlehall.pory"
	.string "Fantastic, thank you!\n"
	.string "Did you think you might lose in your\l"
	.string "battle against {COLOR RED}Candace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, or were you\l"
	.string "confident you would win from the start?$"

BattleHall_EventScript_AcceptInterview_Text_9:
# 108 "data/scripts/interview_battlehall.pory"
	.string "Confident$"

BattleHall_EventScript_AcceptInterview_Text_10:
# 109 "data/scripts/interview_battlehall.pory"
	.string "It was a challenge$"

BattleHall_EventScript_AcceptInterview_Text_11:
# 115 "data/scripts/interview_battlehall.pory"
	.string "Such confidence! Many people think\n"
	.string "that the {COLOR RED}Battle Aces{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} may not be the\l"
	.string "strongest trainers. You're proving it\l"
	.string "with your actions, and with such a\l"
	.string "strong statement!$"

BattleHall_EventScript_AcceptInterview_Text_12:
# 126 "data/scripts/interview_battlehall.pory"
	.string "No surpise there! There is a good\n"
	.string "reason that the {COLOR RED}Battle Aces{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} are known\l"
	.string "strongest trainers in Vulias! Despite\l"
	.string "that, you managed to defeat two!$"

BattleHall_EventScript_AcceptInterview_Text_13:
# 136 "data/scripts/interview_battlehall.pory"
	.string "One more question, if I may! If you were\n"
	.string "to describe your battle with {COLOR RED}Candace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
	.string "with one statement, what would that\l"
	.string "statement be?$"

BattleHall_EventScript_AcceptInterview_Text_14:
# 157 "data/scripts/interview_battlehall.pory"
	.string "Amazing! That one statement, it sums it\n"
	.string "all up perfectly!$"

BattleHall_EventScript_AcceptInterview_Text_15:
# 167 "data/scripts/interview_battlehall.pory"
	.string "Ahh, the silent type? It pays sometimes\n"
	.string "to keep them guessing!$"

BattleHall_EventScript_DeclineInterview_Text_0:
# 183 "data/scripts/interview_battlehall.pory"
	.string "Oh...apologies for the disturbance! We\n"
	.string "hope to have an interview with you next\l"
	.string "time!$"
