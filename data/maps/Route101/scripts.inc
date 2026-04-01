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
	setspeaker Route101_EventScript_TrainerTeachCatch02_Text_0
# 25 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_1
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
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_5
# 54 "data/maps/Route101/scripts.pory"
	waitmessage
# 55 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachLesson
	return

Route101_EventScript_TrainerTeachCatch02_1:
# 34 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_2, MSGBOX_YESNO
# 38 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route101_EventScript_TrainerTeachCatch02_4
# 44 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_4
# 46 "data/maps/Route101/scripts.pory"
	waitmessage
# 47 "data/maps/Route101/scripts.pory"
	release
	end

Route101_EventScript_TrainerTeachCatch02_4:
# 39 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachCatch02_Text_3
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
	delay 60
# 76 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovePlayerOnRight
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
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveInCircles
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
	applymovement OBJ_EVENT_ID_PLAYER, Route101_EventScript_TrainerTeachLesson_Movement_1
# 100 "data/maps/Route101/scripts.pory"
	getpartysize
# 101 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, VAR_ROUTE101CATCH_PARTYSIZE
	goto_if_gt Route101_EventScript_TrainerTeachLesson_8
# 108 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_3
Route101_EventScript_TrainerTeachLesson_7:
# 113 "data/maps/Route101/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 114 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_4
# 115 "data/maps/Route101/scripts.pory"
	waitmessage
# 116 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_TrainerTeachEnd
	return

Route101_EventScript_TrainerTeachLesson_2:
# 62 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnLeft
# 63 "data/maps/Route101/scripts.pory"
	delay 60
# 64 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovePlayerOnLeft
# 65 "data/maps/Route101/scripts.pory"
	waitmovement
	goto Route101_EventScript_TrainerTeachLesson_1

Route101_EventScript_TrainerTeachLesson_3:
# 68 "data/maps/Route101/scripts.pory"
	applymovement ZED_Route101_CatchTeacher, TrainerMovePlayerOnRightOrDown
# 69 "data/maps/Route101/scripts.pory"
	delay 60
# 70 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovePlayerOnBottom
# 71 "data/maps/Route101/scripts.pory"
	waitmovement
	goto Route101_EventScript_TrainerTeachLesson_1

Route101_EventScript_TrainerTeachLesson_8:
# 102 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_TrainerTeachLesson_Text_2
	goto Route101_EventScript_TrainerTeachLesson_7


Route101_EventScript_TrainerTeachEnd::
# 120 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 121 "data/maps/Route101/scripts.pory"
	removeobject ZED_Route101_CatchTeacher
# 122 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PROGRESS, 2
# 123 "data/maps/Route101/scripts.pory"
	setflag FLAG_ROUTE101_TEACHER
# 124 "data/maps/Route101/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 125 "data/maps/Route101/scripts.pory"
	fadedefaultbgm
# 126 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_TrainerTeachTriggerSwitchLeft::
# 132 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 0
	return


Route101_EventScript_TrainerTeachTriggerSwitchBottom::
# 136 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 1
	return


Route101_EventScript_TrainerTeachTriggerSwitchRight::
# 140 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101CATCH_PLAYERPOSITION, 2
	return


# 144 "data/maps/Route101/scripts.pory"
TrainerMovePlayerOnLeft:
# 145 "data/maps/Route101/scripts.pory"
	walk_down
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
# 147 "data/maps/Route101/scripts.pory"
	walk_up
# 147 "data/maps/Route101/scripts.pory"
	walk_up
# 148 "data/maps/Route101/scripts.pory"
	walk_left
# 148 "data/maps/Route101/scripts.pory"
	walk_left
# 148 "data/maps/Route101/scripts.pory"
	walk_left
# 149 "data/maps/Route101/scripts.pory"
	walk_up
# 149 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/Route101/scripts.pory"
TrainerMovePlayerOnRightOrDown:
# 153 "data/maps/Route101/scripts.pory"
	walk_left
# 153 "data/maps/Route101/scripts.pory"
	walk_left
# 153 "data/maps/Route101/scripts.pory"
	walk_left
# 154 "data/maps/Route101/scripts.pory"
	walk_up
# 154 "data/maps/Route101/scripts.pory"
	walk_up
# 154 "data/maps/Route101/scripts.pory"
	walk_up
# 154 "data/maps/Route101/scripts.pory"
	walk_up
# 154 "data/maps/Route101/scripts.pory"
	walk_up
# 155 "data/maps/Route101/scripts.pory"
	walk_left
# 155 "data/maps/Route101/scripts.pory"
	walk_left
# 155 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnLeft:
# 159 "data/maps/Route101/scripts.pory"
	walk_left
# 159 "data/maps/Route101/scripts.pory"
	walk_left
# 160 "data/maps/Route101/scripts.pory"
	walk_up
# 160 "data/maps/Route101/scripts.pory"
	walk_up
# 160 "data/maps/Route101/scripts.pory"
	walk_up
# 160 "data/maps/Route101/scripts.pory"
	walk_up
# 160 "data/maps/Route101/scripts.pory"
	walk_up
# 161 "data/maps/Route101/scripts.pory"
	walk_left
# 161 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 164 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnBottom:
# 165 "data/maps/Route101/scripts.pory"
	walk_left
# 165 "data/maps/Route101/scripts.pory"
	walk_left
# 165 "data/maps/Route101/scripts.pory"
	walk_left
# 166 "data/maps/Route101/scripts.pory"
	walk_up
# 166 "data/maps/Route101/scripts.pory"
	walk_up
# 166 "data/maps/Route101/scripts.pory"
	walk_up
# 166 "data/maps/Route101/scripts.pory"
	walk_up
# 166 "data/maps/Route101/scripts.pory"
	walk_up
# 166 "data/maps/Route101/scripts.pory"
	walk_up
# 167 "data/maps/Route101/scripts.pory"
	walk_left
# 167 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 170 "data/maps/Route101/scripts.pory"
PlayerMovePlayerOnRight:
# 171 "data/maps/Route101/scripts.pory"
	walk_left
# 171 "data/maps/Route101/scripts.pory"
	walk_left
# 171 "data/maps/Route101/scripts.pory"
	walk_left
# 171 "data/maps/Route101/scripts.pory"
	walk_left
# 172 "data/maps/Route101/scripts.pory"
	walk_up
# 172 "data/maps/Route101/scripts.pory"
	walk_up
# 172 "data/maps/Route101/scripts.pory"
	walk_up
# 172 "data/maps/Route101/scripts.pory"
	walk_up
# 172 "data/maps/Route101/scripts.pory"
	walk_up
# 173 "data/maps/Route101/scripts.pory"
	walk_left
# 173 "data/maps/Route101/scripts.pory"
	walk_left
	step_end

# 176 "data/maps/Route101/scripts.pory"
TrainerMoveInCircles:
# 177 "data/maps/Route101/scripts.pory"
	walk_up
# 177 "data/maps/Route101/scripts.pory"
	walk_up
# 178 "data/maps/Route101/scripts.pory"
	walk_right
# 179 "data/maps/Route101/scripts.pory"
	walk_down
# 180 "data/maps/Route101/scripts.pory"
	walk_left
# 181 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/Route101/scripts.pory"
PlayerMoveInCircles:
# 185 "data/maps/Route101/scripts.pory"
	walk_up
# 185 "data/maps/Route101/scripts.pory"
	walk_up
# 186 "data/maps/Route101/scripts.pory"
	walk_right
# 187 "data/maps/Route101/scripts.pory"
	walk_down
# 188 "data/maps/Route101/scripts.pory"
	walk_left
# 189 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/Route101/scripts.pory"
TrainerMoveToPlayer:
# 193 "data/maps/Route101/scripts.pory"
	walk_up
# 193 "data/maps/Route101/scripts.pory"
	walk_up
# 194 "data/maps/Route101/scripts.pory"
	face_right
	step_end

Route101_EventScript_Trainer01::
# 199 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_MAGNUS, Route101_EventScript_Trainer01_Text_0, Route101_EventScript_Trainer01_Text_1
# 204 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 206 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer02::
# 211 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route101_EventScript_Trainer02_Text_0, Route101_EventScript_Trainer02_Text_1
# 216 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_Trainer03::
# 223 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route101_EventScript_Trainer03_Text_0, Route101_EventScript_Trainer03_Text_1
# 230 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route101/scripts.pory"
	waitmessage
	end


Route101_EventScript_ScaredTrainer::
# 237 "data/maps/Route101/scripts.pory"
	lock
# 238 "data/maps/Route101/scripts.pory"
	faceplayer
# 239 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_ScaredTrainer_Text_0
# 240 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_ScaredTrainer_Text_1
# 246 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_HouseDad::
# 253 "data/maps/Route101/scripts.pory"
	lock
# 254 "data/maps/Route101/scripts.pory"
	faceplayer
# 255 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_HouseDad_Text_0
# 256 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HouseDad_Text_1
# 262 "data/maps/Route101/scripts.pory"
	waitmessage
# 263 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_HouseMom::
# 268 "data/maps/Route101/scripts.pory"
	lock
# 269 "data/maps/Route101/scripts.pory"
	faceplayer
# 270 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_HouseMom_Text_0
# 271 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HouseMom_Text_1
# 273 "data/maps/Route101/scripts.pory"
	waitmessage
# 274 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_HouseKid::
# 279 "data/maps/Route101/scripts.pory"
	lock
# 280 "data/maps/Route101/scripts.pory"
	faceplayer
# 281 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_HouseKid_Text_0
# 282 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HouseKid_Text_1
# 285 "data/maps/Route101/scripts.pory"
	waitmessage
# 286 "data/maps/Route101/scripts.pory"
	release
	end


Route101_EventScript_HouseMunchlax::
# 291 "data/maps/Route101/scripts.pory"
	lock
# 292 "data/maps/Route101/scripts.pory"
	faceplayer
# 293 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_NORMAL
# 294 "data/maps/Route101/scripts.pory"
	setspeaker Route101_EventScript_HouseMunchlax_Text_0
# 295 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_HouseMunchlax_Text_1
# 296 "data/maps/Route101/scripts.pory"
	waitmoncry
# 297 "data/maps/Route101/scripts.pory"
	waitmessage
# 298 "data/maps/Route101/scripts.pory"
	release
	end


# 91 "data/maps/Route101/scripts.pory"
Route101_EventScript_TrainerTeachLesson_Movement_0:
# 91 "data/maps/Route101/scripts.pory"
	face_up
	step_end

# 99 "data/maps/Route101/scripts.pory"
Route101_EventScript_TrainerTeachLesson_Movement_1:
# 99 "data/maps/Route101/scripts.pory"
	face_left
	step_end

Route101_EventScript_TrainerTeachCatch02_Text_0:
# 24 "data/maps/Route101/scripts.pory"
	.string "Trainer$"

Route101_EventScript_TrainerTeachCatch02_Text_1:
# 25 "data/maps/Route101/scripts.pory"
	.string "You finally made it. Did you manage to\n"
	.string "catch anything with that Poke Ball I\l"
	.string "gave you?\p"
	.string "Checks bag...$"

Route101_EventScript_TrainerTeachCatch02_Text_2:
# 34 "data/maps/Route101/scripts.pory"
	.string "That's great, it looks like you did catch\n"
	.string "a Pokemon! Do you still want a lesson?\p"
	.string "It's always good to learn more.$"

Route101_EventScript_TrainerTeachCatch02_Text_3:
# 39 "data/maps/Route101/scripts.pory"
	.string "Great, here's another Poke Ball.$"

Route101_EventScript_TrainerTeachCatch02_Text_4:
# 44 "data/maps/Route101/scripts.pory"
	.string "A mistake. I'll be here when you change\n"
	.string "your mind$"

Route101_EventScript_TrainerTeachCatch02_Text_5:
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
# 102 "data/maps/Route101/scripts.pory"
	.string "Awesome, you caught it! Keep at it, and\n"
	.string "you'll be a master in no time.\p"
	.string "Here, have some more Poke Balls.$"

Route101_EventScript_TrainerTeachLesson_Text_3:
# 108 "data/maps/Route101/scripts.pory"
	.string "That's too bad, you almost had it. Don't\n"
	.string "give up!\p"
	.string "Here, have some more Poke Balls.$"

Route101_EventScript_TrainerTeachLesson_Text_4:
# 114 "data/maps/Route101/scripts.pory"
	.string "Maybe I'll see you another time. Bye!$"

Route101_EventScript_Trainer01_Text_0:
# 201 "data/maps/Route101/scripts.pory"
	.string "I like a good battle now and again!$"

Route101_EventScript_Trainer01_Text_1:
# 202 "data/maps/Route101/scripts.pory"
	.string "That's how they usually go, fun!$"

Route101_EventScript_Trainer01_Text_2:
# 204 "data/maps/Route101/scripts.pory"
	.string "It's healthy for the old bones to have a\n"
	.string "battle now and again.$"

Route101_EventScript_Trainer02_Text_0:
# 213 "data/maps/Route101/scripts.pory"
	.string "This place is so cool, I can't contain it!$"

Route101_EventScript_Trainer02_Text_1:
# 214 "data/maps/Route101/scripts.pory"
	.string "I have been contained.$"

Route101_EventScript_Trainer02_Text_2:
# 216 "data/maps/Route101/scripts.pory"
	.string "I wonder what I'll find under all of\n"
	.string "these ashes.$"

Route101_EventScript_Trainer03_Text_0:
# 225 "data/maps/Route101/scripts.pory"
	.string "Surpise! Did I get you?\p"
	.string "Check out this Pokemon I caught!$"

Route101_EventScript_Trainer03_Text_1:
# 228 "data/maps/Route101/scripts.pory"
	.string "It's still cool!$"

Route101_EventScript_Trainer03_Text_2:
# 230 "data/maps/Route101/scripts.pory"
	.string "Maybe you can find one too if you look\n"
	.string "hard enough.$"

Route101_EventScript_ScaredTrainer_Text_0:
# 239 "data/maps/Route101/scripts.pory"
	.string "Scared Trainer$"

Route101_EventScript_ScaredTrainer_Text_1:
# 240 "data/maps/Route101/scripts.pory"
	.string "The southern side of a Route is usually\n"
	.string "free of trainers, but you'll be forced\l"
	.string "to contend with wild Pokemon.\p"
	.string "That sure beats dealing with all those\n"
	.string "tough trainers!$"

Route101_EventScript_HouseDad_Text_0:
# 255 "data/maps/Route101/scripts.pory"
	.string "Man$"

Route101_EventScript_HouseDad_Text_1:
# 256 "data/maps/Route101/scripts.pory"
	.string "I wish my boy would become a Pokemon\n"
	.string "Trainer. He spends his days watching\l"
	.string "TV instead!\p"
	.string "There is much to love about a bond\n"
	.string "with a Pokemon!$"

Route101_EventScript_HouseMom_Text_0:
# 270 "data/maps/Route101/scripts.pory"
	.string "Woman$"

Route101_EventScript_HouseMom_Text_1:
# 271 "data/maps/Route101/scripts.pory"
	.string "It's amazing, our Munchlax has better\n"
	.string "table manners than the rest of us!$"

Route101_EventScript_HouseKid_Text_0:
# 281 "data/maps/Route101/scripts.pory"
	.string "Youngster$"

Route101_EventScript_HouseKid_Text_1:
# 282 "data/maps/Route101/scripts.pory"
	.string "I love to watch Pokemon Battles on TV!\n"
	.string "The {COLOR RED}Rep Trainers{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} are so cool, I want to\l"
	.string "be like them someday!$"

Route101_EventScript_HouseMunchlax_Text_0:
# 294 "data/maps/Route101/scripts.pory"
	.string "Munchlax$"

Route101_EventScript_HouseMunchlax_Text_1:
# 295 "data/maps/Route101/scripts.pory"
	.string "Ah-ooo-wa$"
