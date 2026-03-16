Vulias_Route110_MapScripts::
	.byte 0


VuliasRoute110_EventScript_TriggerDisableGerbonBlockers::
# 5 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 6 "data/maps/Vulias_Route110/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 6
	return


VuliasRoute110_EventScript_DirectionSign::
# 13 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 14 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_DirectionSign_Text_0
# 16 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 17 "data/maps/Vulias_Route110/scripts.pory"
	release
	return


VuliasRoute110_EventScript_TrainerTips02::
# 22 "data/maps/Vulias_Route110/scripts.pory"
	lockall
# 23 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_TrainerTips02_Text_0
# 30 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 31 "data/maps/Vulias_Route110/scripts.pory"
	releaseall
	return


VuliasRoute110_EventScript_BrightPowderGive::
# 36 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 37 "data/maps/Vulias_Route110/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER, 1
# 38 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_ROUTE110_POKEBALLSOUTHDELTA
# 39 "data/maps/Vulias_Route110/scripts.pory"
	removeobject ROUTE110_BRIGHT_POWDER
# 40 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 41 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


VuliasRoute110_EventScript_Trainer01::
# 47 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, VuliasRoute110_EventScript_Trainer01_Text_0, VuliasRoute110_EventScript_Trainer01_Text_1
# 52 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 54 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_Trainer02::
# 59 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, VuliasRoute110_EventScript_Trainer02_Text_0, VuliasRoute110_EventScript_Trainer02_Text_1
# 65 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_Trainer03::
# 72 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, VuliasRoute110_EventScript_Trainer03_Text_0, VuliasRoute110_EventScript_Trainer03_Text_1
# 77 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 78 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_Trainer04::
# 83 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, VuliasRoute110_EventScript_Trainer04_Text_0, VuliasRoute110_EventScript_Trainer04_Text_1
# 88 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 89 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_WonderingMan::
# 96 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 97 "data/maps/Vulias_Route110/scripts.pory"
	faceplayer
# 98 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_WonderingMan_Text_0
# 102 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 103 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


VuliasRoute110_FirstArrivalWithJordanTrigger01::
# 110 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 111 "data/maps/Vulias_Route110/scripts.pory"
	applymovement 0xFF, VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_0
# 112 "data/maps/Vulias_Route110/scripts.pory"
	delay 20
# 113 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_1
# 114 "data/maps/Vulias_Route110/scripts.pory"
	waitmovement
# 115 "data/maps/Vulias_Route110/scripts.pory"
	goto VuliasRoute110_FirstArrivalWithJordan
	return


VuliasRoute110_FirstArrivalWithJordanTrigger02::
# 119 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 120 "data/maps/Vulias_Route110/scripts.pory"
	applymovement 0xFF, VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_0
# 121 "data/maps/Vulias_Route110/scripts.pory"
	delay 20
# 122 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VuliasRoute110_FirstArrivalWithJordanTrigger02_Movement_0
# 123 "data/maps/Vulias_Route110/scripts.pory"
	waitmovement
# 124 "data/maps/Vulias_Route110/scripts.pory"
	goto VuliasRoute110_FirstArrivalWithJordan
	return


VuliasRoute110_FirstArrivalWithJordan::
# 129 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_FirstArrivalWithJordan_Text_0
# 141 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 142 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VuliasRoute110_FirstArrivalWithJordan_Movement_0
# 143 "data/maps/Vulias_Route110/scripts.pory"
	waitmovement
# 144 "data/maps/Vulias_Route110/scripts.pory"
	destroyfollowernpc
# 145 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 146 "data/maps/Vulias_Route110/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 5
# 149 "data/maps/Vulias_Route110/scripts.pory"
	questupdated 0
# 151 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


# 111 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_0:
# 111 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
	step_end

# 113 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_1:
# 113 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 113 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 113 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 113 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 113 "data/maps/Vulias_Route110/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Route110/scripts.pory"
	face_up
	step_end

# 122 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordanTrigger02_Movement_0:
# 122 "data/maps/Vulias_Route110/scripts.pory"
	walk_left
# 122 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 122 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 122 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 122 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 122 "data/maps/Vulias_Route110/scripts.pory"
	face_up
	step_end

# 142 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordan_Movement_0:
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 142 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
	step_end

VuliasRoute110_EventScript_DirectionSign_Text_0:
# 14 "data/maps/Vulias_Route110/scripts.pory"
	.string "{RIGHT_ARROW} To Gerbon Town\n"
	.string "{LEFT_ARROW} To Plume Hamlet$"

VuliasRoute110_EventScript_TrainerTips02_Text_0:
# 23 "data/maps/Vulias_Route110/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Items can be found in Poke Balls around\n"
	.string "the world, but items can also be hidden!\p"
	.string "Press A in all the nooks and crannies\n"
	.string "and on various different things!$"

VuliasRoute110_EventScript_Trainer01_Text_0:
# 49 "data/maps/Vulias_Route110/scripts.pory"
	.string "You! You'll be perfect training!$"

VuliasRoute110_EventScript_Trainer01_Text_1:
# 50 "data/maps/Vulias_Route110/scripts.pory"
	.string "I guess I was the perfect training.$"

VuliasRoute110_EventScript_Trainer01_Text_2:
# 52 "data/maps/Vulias_Route110/scripts.pory"
	.string "You're not half bad, I thought you\n"
	.string "would be easy pickings.$"

VuliasRoute110_EventScript_Trainer02_Text_0:
# 61 "data/maps/Vulias_Route110/scripts.pory"
	.string "My birds fly so high, you're Pokemon\n"
	.string "could never reach them!$"

VuliasRoute110_EventScript_Trainer02_Text_1:
# 63 "data/maps/Vulias_Route110/scripts.pory"
	.string "I guess the sky isn't the limit.$"

VuliasRoute110_EventScript_Trainer02_Text_2:
# 65 "data/maps/Vulias_Route110/scripts.pory"
	.string "I love Bird Pokemon, they make\n"
	.string "me happy!$"

VuliasRoute110_EventScript_Trainer03_Text_0:
# 74 "data/maps/Vulias_Route110/scripts.pory"
	.string "Splash!$"

VuliasRoute110_EventScript_Trainer03_Text_1:
# 75 "data/maps/Vulias_Route110/scripts.pory"
	.string "I'm still splashing!$"

VuliasRoute110_EventScript_Trainer03_Text_2:
# 77 "data/maps/Vulias_Route110/scripts.pory"
	.string "Nobody can stop me from splashing!$"

VuliasRoute110_EventScript_Trainer04_Text_0:
# 85 "data/maps/Vulias_Route110/scripts.pory"
	.string "I'm making bigger splashes than her!$"

VuliasRoute110_EventScript_Trainer04_Text_1:
# 86 "data/maps/Vulias_Route110/scripts.pory"
	.string "Awh, that was a big splash!$"

VuliasRoute110_EventScript_Trainer04_Text_2:
# 88 "data/maps/Vulias_Route110/scripts.pory"
	.string "I'm the biggest splasher!$"

VuliasRoute110_EventScript_WonderingMan_Text_0:
# 98 "data/maps/Vulias_Route110/scripts.pory"
	.string "{COLOR GREEN}Wondering Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I wonder how I can get\n"
	.string "up that cliff...\p"
	.string "Confound it! I just can't {COLOR RED}Rock Climb!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

VuliasRoute110_FirstArrivalWithJordan_Text_0:
# 129 "data/maps/Vulias_Route110/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}We made it through! I don't\n"
	.string "know about you, but my Pokemon got\l"
	.string "much more powerful from that! I wonder\l"
	.string "if they got as scared as I did...\p"
	.string "Anyways, I want to do a little solo\n"
	.string "training, so I'll go on ahead.\p"
	.string "Just go east until the water, then head\n"
	.string "North. You'll reach Gerbon Town!\p"
	.string "I'll see you at the end of Route 110!$"
