Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ZEROED, 0, Route101_MapScript_CatchTrainerDisable
	.2byte 0


Route101_MapScript_CatchTrainerDisable::
# 9 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PROGRESS, 1
	goto_if_eq Route101_MapScript_CatchTrainerDisable_2
# 12 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PROGRESS, 0
	goto_if_eq Route101_MapScript_CatchTrainerDisable_3
# 16 "data/maps/Route101/scripts.pory"
	nop
Route101_MapScript_CatchTrainerDisable_1:
# 18 "data/maps/Route101/scripts.pory"
	setvar VAR_ZEROED, 1
	return

Route101_MapScript_CatchTrainerDisable_2:
# 10 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_TEACHER
	goto Route101_MapScript_CatchTrainerDisable_1

Route101_MapScript_CatchTrainerDisable_3:
# 13 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_TEACHER
	goto Route101_MapScript_CatchTrainerDisable_1


Route101_EventScript_TrainerTeachCatch02::
# 23 "data/maps/Route101/scripts.pory"
	lock
# 24 "data/maps/Route101/scripts.pory"
	faceplayer
# 25 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_0
# 30 "data/maps/Route101/scripts.pory"
	waitmessage
# 31 "data/maps/Route101/scripts.pory"
	getpartysize
# 32 "data/maps/Route101/scripts.pory"
	copyvar VAR_ROUTE101CATCH_PARTYSIZE, VAR_RESULT
# 33 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PARTYSIZE, 1
	goto_if_gt Route101_EventScript_TrainerTeachCatch02_1
# 52 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_4
# 54 "data/maps/Route101/scripts.pory"
	waitmessage
# 55 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachLesson
	return

Route101_EventScript_TrainerTeachCatch02_1:
# 34 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_1, MSGBOX_YESNO
# 38 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_TrainerTeachCatch02_4
# 44 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_3
# 46 "data/maps/Route101/scripts.pory"
	waitmessage
# 47 "data/maps/Route101/scripts.pory"
	release
	end

Route101_EventScript_TrainerTeachCatch02_4:
# 39 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_2
# 40 "data/maps/Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 41 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachLesson
	return


Route101_EventScript_TrainerTeachLesson::
# 60 "data/maps/Route101/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 61 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PLAYERPOSITION, 0
	goto_if_eq Route101_EventScript_TrainerTeachLesson_2
# 67 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PLAYERPOSITION, 1
	goto_if_eq Route101_EventScript_TrainerTeachLesson_3
# 74 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnRightOrDown
# 75 "data/maps/Route101/scripts.pory"
	delay 10
# 76 "data/maps/Route101/scripts.pory"
	applymovement 0xFF, PlayerMovePlayerOnRight
# 77 "data/maps/Route101/scripts.pory"
	waitmovement
Route101_EventScript_TrainerTeachLesson_1:
# 80 "data/maps/Route101/scripts.pory"
	faceplayer
# 81 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_0
# 83 "data/maps/Route101/scripts.pory"
	waitmessage
# 84 "data/maps/Route101/scripts.pory"
	closemessage
# 85 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMoveInCircles
# 86 "data/maps/Route101/scripts.pory"
	waitmovement
# 87 "data/maps/Route101/scripts.pory"
	faceplayer
# 88 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_1
# 89 "data/maps/Route101/scripts.pory"
	waitmessage
# 90 "data/maps/Route101/scripts.pory"
	closemessage
# 91 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, Route101_EventScript_TrainerTeachLesson_Movement_0
# 92 "data/maps/Route101/scripts.pory"
	applymovement 0xFF, PlayerMoveInCircles
# 93 "data/maps/Route101/scripts.pory"
	waitmovement
# 94 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 2
# 95 "data/maps/Route101/scripts.pory"
	dowildbattle
# 96 "data/maps/Route101/scripts.pory"
	lock
# 97 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMoveToPlayer
# 98 "data/maps/Route101/scripts.pory"
	waitmovement
# 99 "data/maps/Route101/scripts.pory"
	getpartysize
# 100 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, VAR_ROUTE101CATCH_PARTYSIZE
	goto_if_gt Route101_EventScript_TrainerTeachLesson_8
# 107 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_3
Route101_EventScript_TrainerTeachLesson_7:
# 112 "data/maps/Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 113 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_4
# 114 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachEnd
	return

Route101_EventScript_TrainerTeachLesson_2:
# 62 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnLeft
# 63 "data/maps/Route101/scripts.pory"
	delay 10
# 64 "data/maps/Route101/scripts.pory"
	applymovement 0xFF, PlayerMovePlayerOnLeft
# 65 "data/maps/Route101/scripts.pory"
	waitmovement
	goto Route101_EventScript_TrainerTeachLesson_1

Route101_EventScript_TrainerTeachLesson_3:
# 68 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnRightOrDown
# 69 "data/maps/Route101/scripts.pory"
	delay 10
# 70 "data/maps/Route101/scripts.pory"
	applymovement 0xFF, PlayerMovePlayerOnBottom
# 71 "data/maps/Route101/scripts.pory"
	waitmovement
	goto Route101_EventScript_TrainerTeachLesson_1

Route101_EventScript_TrainerTeachLesson_8:
# 101 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_2
	goto Route101_EventScript_TrainerTeachLesson_7


Route101_EventScript_TrainerTeachEnd::
# 118 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/Route101/scripts.pory"
	removeobject ZED_Route101_CatchTeacher
# 120 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 2
# 121 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_TEACHER
# 122 "data/maps/Route101/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 123 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 124 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_TrainerTeachTriggerSwitchLeft::
# 130 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 0
	return


Route101_EventScript_TrainerTeachTriggerSwitchBottom::
# 134 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 1
	return


Route101_EventScript_TrainerTeachTriggerSwitchRight::
# 138 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 2
	return


# 142 "data/maps/Route101/scripts.pory"
TrainerMovePlayerOnLeft:
# 143 "data/maps/Route101/scripts.pory"
	walk_down
# 144 "data/maps/Route101/scripts.pory"
	walk_left
# 144 "data/maps/Route101/scripts.pory"
	walk_left
# 144 "data/maps/Route101/scripts.pory"
	walk_left
# 145 "data/maps/Route101/scripts.pory"
	walk_up
# 145 "data/maps/Route101/scripts.pory"
	walk_up
# 145 "data/maps/Route101/scripts.pory"
	walk_up
# 145 "data/maps/Route101/scripts.pory"
	walk_up
# 146 "data/maps/Route101/scripts.pory"
	walk_left
# 146 "data/maps/Route101/scripts.pory"
	walk_left
# 146 "data/maps/Route101/scripts.pory"
	walk_left
# 147 "data/maps/Route101/scripts.pory"
	walk_up
# 147 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/Route101/scripts.pory"
TrainerMovePlayerOnRightOrDown:
# 151 "data/maps/Route101/scripts.pory"
	walk_left
# 151 "data/maps/Route101/scripts.pory"
	walk_left
# 151 "data/maps/Route101/scripts.pory"
	walk_left
# 152 "data/maps/Route101/scripts.pory"
	walk_up
# 152 "data/maps/Route101/scripts.pory"
	walk_up
# 152 "data/maps/Route101/scripts.pory"
	walk_up
# 152 "data/maps/Route101/scripts.pory"
	walk_up
# 152 "data/maps/Route101/scripts.pory"
	walk_up
# 153 "data/maps/Route101/scripts.pory"
	walk_left
# 153 "data/maps/Route101/scripts.pory"
	walk_left
# 153 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 156 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnLeft:
# 157 "data/maps/Route101/scripts.pory"
	walk_left
# 157 "data/maps/Route101/scripts.pory"
	walk_left
# 158 "data/maps/Route101/scripts.pory"
	walk_up
# 158 "data/maps/Route101/scripts.pory"
	walk_up
# 158 "data/maps/Route101/scripts.pory"
	walk_up
# 158 "data/maps/Route101/scripts.pory"
	walk_up
# 158 "data/maps/Route101/scripts.pory"
	walk_up
# 159 "data/maps/Route101/scripts.pory"
	walk_left
# 159 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 162 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnBottom:
# 163 "data/maps/Route101/scripts.pory"
	walk_left
# 163 "data/maps/Route101/scripts.pory"
	walk_left
# 163 "data/maps/Route101/scripts.pory"
	walk_left
# 164 "data/maps/Route101/scripts.pory"
	walk_up
# 164 "data/maps/Route101/scripts.pory"
	walk_up
# 164 "data/maps/Route101/scripts.pory"
	walk_up
# 164 "data/maps/Route101/scripts.pory"
	walk_up
# 164 "data/maps/Route101/scripts.pory"
	walk_up
# 164 "data/maps/Route101/scripts.pory"
	walk_up
# 165 "data/maps/Route101/scripts.pory"
	walk_left
# 165 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 168 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnRight:
# 169 "data/maps/Route101/scripts.pory"
	walk_left
# 169 "data/maps/Route101/scripts.pory"
	walk_left
# 169 "data/maps/Route101/scripts.pory"
	walk_left
# 169 "data/maps/Route101/scripts.pory"
	walk_left
# 170 "data/maps/Route101/scripts.pory"
	walk_up
# 170 "data/maps/Route101/scripts.pory"
	walk_up
# 170 "data/maps/Route101/scripts.pory"
	walk_up
# 170 "data/maps/Route101/scripts.pory"
	walk_up
# 170 "data/maps/Route101/scripts.pory"
	walk_up
# 171 "data/maps/Route101/scripts.pory"
	walk_left
# 171 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/Route101/scripts.pory"
TrainerMoveInCircles:
# 175 "data/maps/Route101/scripts.pory"
	walk_up
# 175 "data/maps/Route101/scripts.pory"
	walk_up
# 176 "data/maps/Route101/scripts.pory"
	walk_right
# 177 "data/maps/Route101/scripts.pory"
	walk_down
# 178 "data/maps/Route101/scripts.pory"
	walk_left
# 179 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 182 "data/maps/Route101/scripts.pory"
PlayerMoveInCircles:
# 183 "data/maps/Route101/scripts.pory"
	walk_up
# 183 "data/maps/Route101/scripts.pory"
	walk_up
# 184 "data/maps/Route101/scripts.pory"
	walk_right
# 185 "data/maps/Route101/scripts.pory"
	walk_down
# 186 "data/maps/Route101/scripts.pory"
	walk_left
# 187 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 190 "data/maps/Route101/scripts.pory"
TrainerMoveToPlayer:
# 191 "data/maps/Route101/scripts.pory"
	walk_up
# 191 "data/maps/Route101/scripts.pory"
	walk_up
# 192 "data/maps/Route101/scripts.pory"
	face_right
	step_end

Route101_EventScript_Trainer01::
# 197 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAGNUS, Route101_EventScript_Trainer01_Text_0, Route101_EventScript_Trainer01_Text_1
# 202 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer02::
# 209 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route101_EventScript_Trainer02_Text_0, Route101_EventScript_Trainer02_Text_1
# 214 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer03::
# 221 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route101_EventScript_Trainer03_Text_0, Route101_EventScript_Trainer03_Text_1
# 228 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route101/scripts.pory"
	waitmessage
	end


# 91 "data/maps/Route101/scripts.pory"
Route101_EventScript_TrainerTeachLesson_Movement_0:
# 91 "data/maps/Route101/scripts.pory"
	face_up
	step_end

Route101_EventScript_TrainerTeachCatch02_Text_0:
# 25 "data/maps/Route101/scripts.pory"
	.string "{COLOR GREEN}Trainer:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You finally made it. Did you\n"
	.string "manage to catch anything with that\l"
	.string "Poke Ball I gave you?\p"
	.string "Checks bag...$"

Route101_EventScript_TrainerTeachCatch02_Text_1:
# 34 "data/maps/Route101/scripts.pory"
	.string "That's great, it looks like you did catch\n"
	.string "a Pokemon! Do you still want a lesson?\p"
	.string "It's always good to learn more.$"

Route101_EventScript_TrainerTeachCatch02_Text_2:
# 39 "data/maps/Route101/scripts.pory"
	.string "Great, here's another Poke Ball.$"

Route101_EventScript_TrainerTeachCatch02_Text_3:
# 44 "data/maps/Route101/scripts.pory"
	.string "A mistake. I'll be here when you change\n"
	.string "your mind$"

Route101_EventScript_TrainerTeachCatch02_Text_4:
# 52 "data/maps/Route101/scripts.pory"
	.string "Not yet it seems. Let's get started with\n"
	.string "your lesson.$"

Route101_EventScript_TrainerTeachLesson_Text_0:
# 81 "data/maps/Route101/scripts.pory"
	.string "To find wild Pokemon, run around in the\n"
	.string "grass, like this.$"

Route101_EventScript_TrainerTeachLesson_Text_1:
# 88 "data/maps/Route101/scripts.pory"
	.string "Now, you give it a try.$"

Route101_EventScript_TrainerTeachLesson_Text_2:
# 101 "data/maps/Route101/scripts.pory"
	.string "Awesome, you caught it! Keep at it, and\n"
	.string "you'll be a master in no time.\p"
	.string "Here, have some more Poke Balls.$"

Route101_EventScript_TrainerTeachLesson_Text_3:
# 107 "data/maps/Route101/scripts.pory"
	.string "That's too bad, you almost had it. Don't\n"
	.string "give up!\p"
	.string "Here, have some more Poke Balls.$"

Route101_EventScript_TrainerTeachLesson_Text_4:
# 113 "data/maps/Route101/scripts.pory"
	.string "Maybe I'll see you another time. Bye!$"

Route101_EventScript_Trainer01_Text_0:
# 199 "data/maps/Route101/scripts.pory"
	.string "I like a good battle now and again!$"

Route101_EventScript_Trainer01_Text_1:
# 200 "data/maps/Route101/scripts.pory"
	.string "That's how they usually go, fun!$"

Route101_EventScript_Trainer01_Text_2:
# 202 "data/maps/Route101/scripts.pory"
	.string "It's healthy for the old bones to have a\n"
	.string "battle now and again.$"

Route101_EventScript_Trainer02_Text_0:
# 211 "data/maps/Route101/scripts.pory"
	.string "This place is so cool, I can't contain it!$"

Route101_EventScript_Trainer02_Text_1:
# 212 "data/maps/Route101/scripts.pory"
	.string "I have been contained.$"

Route101_EventScript_Trainer02_Text_2:
# 214 "data/maps/Route101/scripts.pory"
	.string "I wonder what I'll find under all of\n"
	.string "these ashes.$"

Route101_EventScript_Trainer03_Text_0:
# 223 "data/maps/Route101/scripts.pory"
	.string "Surpise! Did I get you?\p"
	.string "Check out this Pokemon I caught!$"

Route101_EventScript_Trainer03_Text_1:
# 226 "data/maps/Route101/scripts.pory"
	.string "It's still cool!$"

Route101_EventScript_Trainer03_Text_2:
# 228 "data/maps/Route101/scripts.pory"
	.string "Maybe you can find one too if you look\n"
	.string "hard enough.$"
