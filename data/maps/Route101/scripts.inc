Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_MapScript_CatchTrainerDisable
	.byte 0


Route101_MapScript_CatchTrainerDisable::
# 7 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101_TRAINER_PRE_DISABLE, 0
	goto_if_eq Route101_MapScript_CatchTrainerDisable_1
	return

Route101_MapScript_CatchTrainerDisable_1:
# 8 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PROGRESS, 1
	goto_if_eq Route101_MapScript_CatchTrainerDisable_3
# 13 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PROGRESS, 0
	goto_if_eq Route101_MapScript_CatchTrainerDisable_4
	return

Route101_MapScript_CatchTrainerDisable_3:
# 9 "data/maps/Route101/scripts.pory"
	clearflag FLAG_ROUTE101_TEACHER
# 10 "data/maps/Route101/scripts.pory"
	addobject ZED_Route101_CatchTeacher
# 11 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_TRAINER_PRE_DISABLE, 1
	return

Route101_MapScript_CatchTrainerDisable_4:
# 14 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_TEACHER
# 15 "data/maps/Route101/scripts.pory"
	removeobject ZED_Route101_CatchTeacher
	return


Route101_EventScript_TrainerTeachCatch02::
# 22 "data/maps/Route101/scripts.pory"
	lock
# 23 "data/maps/Route101/scripts.pory"
	faceplayer
# 24 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_0
# 29 "data/maps/Route101/scripts.pory"
	waitmessage
# 30 "data/maps/Route101/scripts.pory"
	getpartysize
# 31 "data/maps/Route101/scripts.pory"
	copyvar VAR_ROUTE101CATCH_PARTYSIZE, VAR_RESULT
# 32 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PARTYSIZE, 1
	goto_if_gt Route101_EventScript_TrainerTeachCatch02_1
# 51 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_4
# 53 "data/maps/Route101/scripts.pory"
	waitmessage
# 54 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachLesson
	return

Route101_EventScript_TrainerTeachCatch02_1:
# 33 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_1, MSGBOX_YESNO
# 37 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_TrainerTeachCatch02_4
# 43 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_3
# 45 "data/maps/Route101/scripts.pory"
	waitmessage
# 46 "data/maps/Route101/scripts.pory"
	release
	end

Route101_EventScript_TrainerTeachCatch02_4:
# 38 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_2
# 39 "data/maps/Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 40 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachLesson
	return


Route101_EventScript_TrainerTeachLesson::
# 59 "data/maps/Route101/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 60 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PLAYERPOSITION, 0
	goto_if_eq Route101_EventScript_TrainerTeachLesson_2
# 66 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101CATCH_PLAYERPOSITION, 1
	goto_if_eq Route101_EventScript_TrainerTeachLesson_3
# 73 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnRightOrDown
# 74 "data/maps/Route101/scripts.pory"
	delay 60
# 75 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovePlayerOnRight
# 76 "data/maps/Route101/scripts.pory"
	waitmovement
Route101_EventScript_TrainerTeachLesson_1:
# 79 "data/maps/Route101/scripts.pory"
	faceplayer
# 80 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_0
# 82 "data/maps/Route101/scripts.pory"
	waitmessage
# 83 "data/maps/Route101/scripts.pory"
	closemessage
# 84 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMoveInCircles
# 85 "data/maps/Route101/scripts.pory"
	waitmovement
# 86 "data/maps/Route101/scripts.pory"
	faceplayer
# 87 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_1
# 88 "data/maps/Route101/scripts.pory"
	waitmessage
# 89 "data/maps/Route101/scripts.pory"
	closemessage
# 90 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, Route101_EventScript_TrainerTeachLesson_Movement_0
# 91 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveInCircles
# 92 "data/maps/Route101/scripts.pory"
	waitmovement
# 93 "data/maps/Route101/scripts.pory"
	setwildbattle SPECIES_WURMPLE, 2
# 94 "data/maps/Route101/scripts.pory"
	dowildbattle
# 95 "data/maps/Route101/scripts.pory"
	lock
# 96 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMoveToPlayer
# 97 "data/maps/Route101/scripts.pory"
	waitmovement
# 98 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_TrainerTeachLesson_Movement_1
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
	waitmessage
# 115 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachEnd
	return

Route101_EventScript_TrainerTeachLesson_2:
# 61 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnLeft
# 62 "data/maps/Route101/scripts.pory"
	delay 60
# 63 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovePlayerOnLeft
# 64 "data/maps/Route101/scripts.pory"
	waitmovement
	goto Route101_EventScript_TrainerTeachLesson_1

Route101_EventScript_TrainerTeachLesson_3:
# 67 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnRightOrDown
# 68 "data/maps/Route101/scripts.pory"
	delay 60
# 69 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovePlayerOnBottom
# 70 "data/maps/Route101/scripts.pory"
	waitmovement
	goto Route101_EventScript_TrainerTeachLesson_1

Route101_EventScript_TrainerTeachLesson_8:
# 101 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_2
	goto Route101_EventScript_TrainerTeachLesson_7


Route101_EventScript_TrainerTeachEnd::
# 119 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 120 "data/maps/Route101/scripts.pory"
	removeobject ZED_Route101_CatchTeacher
# 121 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 2
# 122 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_TEACHER
# 123 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 124 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 125 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_TrainerTeachTriggerSwitchLeft::
# 131 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 0
	return


Route101_EventScript_TrainerTeachTriggerSwitchBottom::
# 135 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 1
	return


Route101_EventScript_TrainerTeachTriggerSwitchRight::
# 139 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 2
	return


# 143 "data/maps/Route101/scripts.pory"
TrainerMovePlayerOnLeft:
# 144 "data/maps/Route101/scripts.pory"
	walk_down
# 145 "data/maps/Route101/scripts.pory"
	walk_left
# 145 "data/maps/Route101/scripts.pory"
	walk_left
# 145 "data/maps/Route101/scripts.pory"
	walk_left
# 146 "data/maps/Route101/scripts.pory"
	walk_up
# 146 "data/maps/Route101/scripts.pory"
	walk_up
# 146 "data/maps/Route101/scripts.pory"
	walk_up
# 146 "data/maps/Route101/scripts.pory"
	walk_up
# 147 "data/maps/Route101/scripts.pory"
	walk_left
# 147 "data/maps/Route101/scripts.pory"
	walk_left
# 147 "data/maps/Route101/scripts.pory"
	walk_left
# 148 "data/maps/Route101/scripts.pory"
	walk_up
# 148 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 151 "data/maps/Route101/scripts.pory"
TrainerMovePlayerOnRightOrDown:
# 152 "data/maps/Route101/scripts.pory"
	walk_left
# 152 "data/maps/Route101/scripts.pory"
	walk_left
# 152 "data/maps/Route101/scripts.pory"
	walk_left
# 153 "data/maps/Route101/scripts.pory"
	walk_up
# 153 "data/maps/Route101/scripts.pory"
	walk_up
# 153 "data/maps/Route101/scripts.pory"
	walk_up
# 153 "data/maps/Route101/scripts.pory"
	walk_up
# 153 "data/maps/Route101/scripts.pory"
	walk_up
# 154 "data/maps/Route101/scripts.pory"
	walk_left
# 154 "data/maps/Route101/scripts.pory"
	walk_left
# 154 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnLeft:
# 158 "data/maps/Route101/scripts.pory"
	walk_left
# 158 "data/maps/Route101/scripts.pory"
	walk_left
# 159 "data/maps/Route101/scripts.pory"
	walk_up
# 159 "data/maps/Route101/scripts.pory"
	walk_up
# 159 "data/maps/Route101/scripts.pory"
	walk_up
# 159 "data/maps/Route101/scripts.pory"
	walk_up
# 159 "data/maps/Route101/scripts.pory"
	walk_up
# 160 "data/maps/Route101/scripts.pory"
	walk_left
# 160 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 163 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnBottom:
# 164 "data/maps/Route101/scripts.pory"
	walk_left
# 164 "data/maps/Route101/scripts.pory"
	walk_left
# 164 "data/maps/Route101/scripts.pory"
	walk_left
# 165 "data/maps/Route101/scripts.pory"
	walk_up
# 165 "data/maps/Route101/scripts.pory"
	walk_up
# 165 "data/maps/Route101/scripts.pory"
	walk_up
# 165 "data/maps/Route101/scripts.pory"
	walk_up
# 165 "data/maps/Route101/scripts.pory"
	walk_up
# 165 "data/maps/Route101/scripts.pory"
	walk_up
# 166 "data/maps/Route101/scripts.pory"
	walk_left
# 166 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 169 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnRight:
# 170 "data/maps/Route101/scripts.pory"
	walk_left
# 170 "data/maps/Route101/scripts.pory"
	walk_left
# 170 "data/maps/Route101/scripts.pory"
	walk_left
# 170 "data/maps/Route101/scripts.pory"
	walk_left
# 171 "data/maps/Route101/scripts.pory"
	walk_up
# 171 "data/maps/Route101/scripts.pory"
	walk_up
# 171 "data/maps/Route101/scripts.pory"
	walk_up
# 171 "data/maps/Route101/scripts.pory"
	walk_up
# 171 "data/maps/Route101/scripts.pory"
	walk_up
# 172 "data/maps/Route101/scripts.pory"
	walk_left
# 172 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 175 "data/maps/Route101/scripts.pory"
TrainerMoveInCircles:
# 176 "data/maps/Route101/scripts.pory"
	walk_up
# 176 "data/maps/Route101/scripts.pory"
	walk_up
# 177 "data/maps/Route101/scripts.pory"
	walk_right
# 178 "data/maps/Route101/scripts.pory"
	walk_down
# 179 "data/maps/Route101/scripts.pory"
	walk_left
# 180 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 183 "data/maps/Route101/scripts.pory"
PlayerMoveInCircles:
# 184 "data/maps/Route101/scripts.pory"
	walk_up
# 184 "data/maps/Route101/scripts.pory"
	walk_up
# 185 "data/maps/Route101/scripts.pory"
	walk_right
# 186 "data/maps/Route101/scripts.pory"
	walk_down
# 187 "data/maps/Route101/scripts.pory"
	walk_left
# 188 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/Route101/scripts.pory"
TrainerMoveToPlayer:
# 192 "data/maps/Route101/scripts.pory"
	walk_up
# 192 "data/maps/Route101/scripts.pory"
	walk_up
# 193 "data/maps/Route101/scripts.pory"
	face_right
	step_end

Route101_EventScript_Trainer01::
# 198 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAGNUS, Route101_EventScript_Trainer01_Text_0, Route101_EventScript_Trainer01_Text_1
# 203 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 205 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer02::
# 210 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route101_EventScript_Trainer02_Text_0, Route101_EventScript_Trainer02_Text_1
# 215 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer03::
# 222 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route101_EventScript_Trainer03_Text_0, Route101_EventScript_Trainer03_Text_1
# 229 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 231 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_ScaredTrainer::
# 236 "data/maps/Route101/scripts.pory"
	lock
# 237 "data/maps/Route101/scripts.pory"
	faceplayer
# 238 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_ScaredTrainer_Text_0
# 244 "data/maps/Route101/scripts.pory"
	release
	end


# 90 "data/maps/Route101/scripts.pory"
Route101_EventScript_TrainerTeachLesson_Movement_0:
# 90 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 98 "data/maps/Route101/scripts.pory"
Route101_EventScript_TrainerTeachLesson_Movement_1:
# 98 "data/maps/Route101/scripts.pory"
	face_left
	step_end

Route101_EventScript_TrainerTeachCatch02_Text_0:
# 24 "data/maps/Route101/scripts.pory"
	.string "{COLOR GREEN}Trainer:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You finally made it. Did you\n"
	.string "manage to catch anything with that\l"
	.string "Poke Ball I gave you?\p"
	.string "Checks bag...$"

Route101_EventScript_TrainerTeachCatch02_Text_1:
# 33 "data/maps/Route101/scripts.pory"
	.string "That's great, it looks like you did catch\n"
	.string "a Pokemon! Do you still want a lesson?\p"
	.string "It's always good to learn more.$"

Route101_EventScript_TrainerTeachCatch02_Text_2:
# 38 "data/maps/Route101/scripts.pory"
	.string "Great, here's another Poke Ball.$"

Route101_EventScript_TrainerTeachCatch02_Text_3:
# 43 "data/maps/Route101/scripts.pory"
	.string "A mistake. I'll be here when you change\n"
	.string "your mind$"

Route101_EventScript_TrainerTeachCatch02_Text_4:
# 51 "data/maps/Route101/scripts.pory"
	.string "Not yet it seems. Let's get started with\n"
	.string "your lesson.$"

Route101_EventScript_TrainerTeachLesson_Text_0:
# 80 "data/maps/Route101/scripts.pory"
	.string "To find wild Pokemon, run around in the\n"
	.string "grass, like this.$"

Route101_EventScript_TrainerTeachLesson_Text_1:
# 87 "data/maps/Route101/scripts.pory"
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
# 200 "data/maps/Route101/scripts.pory"
	.string "I like a good battle now and again!$"

Route101_EventScript_Trainer01_Text_1:
# 201 "data/maps/Route101/scripts.pory"
	.string "That's how they usually go, fun!$"

Route101_EventScript_Trainer01_Text_2:
# 203 "data/maps/Route101/scripts.pory"
	.string "It's healthy for the old bones to have a\n"
	.string "battle now and again.$"

Route101_EventScript_Trainer02_Text_0:
# 212 "data/maps/Route101/scripts.pory"
	.string "This place is so cool, I can't contain it!$"

Route101_EventScript_Trainer02_Text_1:
# 213 "data/maps/Route101/scripts.pory"
	.string "I have been contained.$"

Route101_EventScript_Trainer02_Text_2:
# 215 "data/maps/Route101/scripts.pory"
	.string "I wonder what I'll find under all of\n"
	.string "these ashes.$"

Route101_EventScript_Trainer03_Text_0:
# 224 "data/maps/Route101/scripts.pory"
	.string "Surpise! Did I get you?\p"
	.string "Check out this Pokemon I caught!$"

Route101_EventScript_Trainer03_Text_1:
# 227 "data/maps/Route101/scripts.pory"
	.string "It's still cool!$"

Route101_EventScript_Trainer03_Text_2:
# 229 "data/maps/Route101/scripts.pory"
	.string "Maybe you can find one too if you look\n"
	.string "hard enough.$"

Route101_EventScript_ScaredTrainer_Text_0:
# 238 "data/maps/Route101/scripts.pory"
	.string "The southern side of a Route is usually\n"
	.string "free of trainers, but you'll be forced\l"
	.string "to contend with wild Pokemon.\p"
	.string "That sure beats dealing with all those\n"
	.string "tough trainers!$"
