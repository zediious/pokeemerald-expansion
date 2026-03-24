Vulias_Route110_MapScripts::
	.byte 0


VuliasRoute110_EventScript_DirectionSign::
# 7 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 8 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_DirectionSign_Text_0
# 10 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 11 "data/maps/Vulias_Route110/scripts.pory"
	release
	return


VuliasRoute110_EventScript_GerbonSign::
# 16 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 17 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_GerbonSign_Text_0
# 18 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 19 "data/maps/Vulias_Route110/scripts.pory"
	release
	return


VuliasRoute110_EventScript_TrainerTips02::
# 24 "data/maps/Vulias_Route110/scripts.pory"
	lockall
# 25 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_TrainerTips02_Text_0
# 32 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 33 "data/maps/Vulias_Route110/scripts.pory"
	releaseall
	return


VuliasRoute110_EventScript_BrightPowderGive::
# 38 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 39 "data/maps/Vulias_Route110/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER, 1
# 40 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_ROUTE110_POKEBALLSOUTHDELTA
# 41 "data/maps/Vulias_Route110/scripts.pory"
	removeobject ROUTE110_BRIGHT_POWDER
# 42 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 43 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


VuliasRoute110_EventScript_RareCandyGive::
# 49 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 50 "data/maps/Vulias_Route110/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 51 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_ROUTE110_POKEBALLSOUTHDELTA
# 52 "data/maps/Vulias_Route110/scripts.pory"
	removeobject ROUTE110_RARECANDY
# 53 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 54 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


VuliasRoute110_EventScript_Trainer01::
# 60 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, VuliasRoute110_EventScript_Trainer01_Text_0, VuliasRoute110_EventScript_Trainer01_Text_1
# 65 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer01_Text_2, MSGBOX_AUTOCLOSE
# 67 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_Trainer02::
# 72 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, VuliasRoute110_EventScript_Trainer02_Text_0, VuliasRoute110_EventScript_Trainer02_Text_1
# 78 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer02_Text_2, MSGBOX_AUTOCLOSE
# 80 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_Trainer03::
# 85 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, VuliasRoute110_EventScript_Trainer03_Text_0, VuliasRoute110_EventScript_Trainer03_Text_1
# 90 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer03_Text_2, MSGBOX_AUTOCLOSE
# 91 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_Trainer04::
# 96 "data/maps/Vulias_Route110/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, VuliasRoute110_EventScript_Trainer04_Text_0, VuliasRoute110_EventScript_Trainer04_Text_1
# 101 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_Trainer04_Text_2, MSGBOX_AUTOCLOSE
# 102 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
	end


VuliasRoute110_EventScript_WonderingMan::
# 109 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 110 "data/maps/Vulias_Route110/scripts.pory"
	faceplayer
# 111 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_EventScript_WonderingMan_Text_0
# 115 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 116 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


VuliasRoute110_FirstArrivalWithJordanTrigger01::
# 123 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 124 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_0
# 125 "data/maps/Vulias_Route110/scripts.pory"
	delay 20
# 126 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_1
# 127 "data/maps/Vulias_Route110/scripts.pory"
	waitmovement
# 128 "data/maps/Vulias_Route110/scripts.pory"
	goto VuliasRoute110_FirstArrivalWithJordan
	return


VuliasRoute110_FirstArrivalWithJordanTrigger02::
# 132 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 133 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_0
# 134 "data/maps/Vulias_Route110/scripts.pory"
	delay 20
# 135 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VuliasRoute110_FirstArrivalWithJordanTrigger02_Movement_0
# 136 "data/maps/Vulias_Route110/scripts.pory"
	waitmovement
# 137 "data/maps/Vulias_Route110/scripts.pory"
	goto VuliasRoute110_FirstArrivalWithJordan
	return


VuliasRoute110_FirstArrivalWithJordan::
# 142 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_FirstArrivalWithJordan_Text_0
# 154 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 155 "data/maps/Vulias_Route110/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VuliasRoute110_FirstArrivalWithJordan_Movement_0
# 156 "data/maps/Vulias_Route110/scripts.pory"
	waitmovement
# 157 "data/maps/Vulias_Route110/scripts.pory"
	destroyfollowernpc
# 158 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_SAWGRASSFOREST_JORDANFOLLOWER
# 159 "data/maps/Vulias_Route110/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 5
# 162 "data/maps/Vulias_Route110/scripts.pory"
	questupdated 0
# 164 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


VuliasRoute110_PlayerArrivedToJordan::
# 170 "data/maps/Vulias_Route110/scripts.pory"
	lock
# 171 "data/maps/Vulias_Route110/scripts.pory"
	faceplayer
# 172 "data/maps/Vulias_Route110/scripts.pory"
	msgbox VuliasRoute110_PlayerArrivedToJordan_Text_0
# 182 "data/maps/Vulias_Route110/scripts.pory"
	waitmessage
# 183 "data/maps/Vulias_Route110/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 184 "data/maps/Vulias_Route110/scripts.pory"
	delay 30
# 185 "data/maps/Vulias_Route110/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 186 "data/maps/Vulias_Route110/scripts.pory"
	waitfanfare
# 187 "data/maps/Vulias_Route110/scripts.pory"
	delay 30
# 188 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_GERBONSOUTH_BLOCKERS
# 189 "data/maps/Vulias_Route110/scripts.pory"
	setflag FLAG_ROUTE110_JORDAN
# 190 "data/maps/Vulias_Route110/scripts.pory"
	removeobject ROUTE110_JORDAN
# 191 "data/maps/Vulias_Route110/scripts.pory"
	clearflag FLAG_JORDANINHOME
# 192 "data/maps/Vulias_Route110/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 6
# 195 "data/maps/Vulias_Route110/scripts.pory"
	warp MAP_ZED_LITTLEROOT_TOWN_TEST01_1F, 2, 4
# 196 "data/maps/Vulias_Route110/scripts.pory"
	release
	end


# 124 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_0:
# 124 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
	step_end

# 126 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordanTrigger01_Movement_1:
# 126 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 126 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 126 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 126 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 126 "data/maps/Vulias_Route110/scripts.pory"
	walk_left
# 126 "data/maps/Vulias_Route110/scripts.pory"
	face_up
	step_end

# 135 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordanTrigger02_Movement_0:
# 135 "data/maps/Vulias_Route110/scripts.pory"
	walk_left
# 135 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 135 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 135 "data/maps/Vulias_Route110/scripts.pory"
	walk_down
# 135 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 135 "data/maps/Vulias_Route110/scripts.pory"
	face_up
	step_end

# 155 "data/maps/Vulias_Route110/scripts.pory"
VuliasRoute110_FirstArrivalWithJordan_Movement_0:
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
# 155 "data/maps/Vulias_Route110/scripts.pory"
	walk_right
	step_end

VuliasRoute110_EventScript_DirectionSign_Text_0:
# 8 "data/maps/Vulias_Route110/scripts.pory"
	.string "{RIGHT_ARROW} To Gerbon Town\n"
	.string "{LEFT_ARROW} To Plume Hamlet$"

VuliasRoute110_EventScript_GerbonSign_Text_0:
# 17 "data/maps/Vulias_Route110/scripts.pory"
	.string "Gerbon Town$"

VuliasRoute110_EventScript_TrainerTips02_Text_0:
# 25 "data/maps/Vulias_Route110/scripts.pory"
	.string "Trainer Tips!\p"
	.string "Items can be found in Poke Balls around\n"
	.string "the world, but items can also be hidden!\p"
	.string "Press A in all the nooks and crannies\n"
	.string "and on various different things!$"

VuliasRoute110_EventScript_Trainer01_Text_0:
# 62 "data/maps/Vulias_Route110/scripts.pory"
	.string "You! You'll be perfect training!$"

VuliasRoute110_EventScript_Trainer01_Text_1:
# 63 "data/maps/Vulias_Route110/scripts.pory"
	.string "I guess I was the perfect training.$"

VuliasRoute110_EventScript_Trainer01_Text_2:
# 65 "data/maps/Vulias_Route110/scripts.pory"
	.string "You're not half bad, I thought you\n"
	.string "would be easy pickings.$"

VuliasRoute110_EventScript_Trainer02_Text_0:
# 74 "data/maps/Vulias_Route110/scripts.pory"
	.string "My birds fly so high, you're Pokemon\n"
	.string "could never reach them!$"

VuliasRoute110_EventScript_Trainer02_Text_1:
# 76 "data/maps/Vulias_Route110/scripts.pory"
	.string "I guess the sky isn't the limit.$"

VuliasRoute110_EventScript_Trainer02_Text_2:
# 78 "data/maps/Vulias_Route110/scripts.pory"
	.string "I love Bird Pokemon, they make\n"
	.string "me happy!$"

VuliasRoute110_EventScript_Trainer03_Text_0:
# 87 "data/maps/Vulias_Route110/scripts.pory"
	.string "Splash!$"

VuliasRoute110_EventScript_Trainer03_Text_1:
# 88 "data/maps/Vulias_Route110/scripts.pory"
	.string "I'm still splashing!$"

VuliasRoute110_EventScript_Trainer03_Text_2:
# 90 "data/maps/Vulias_Route110/scripts.pory"
	.string "Nobody can stop me from splashing!$"

VuliasRoute110_EventScript_Trainer04_Text_0:
# 98 "data/maps/Vulias_Route110/scripts.pory"
	.string "I'm making bigger splashes than her!$"

VuliasRoute110_EventScript_Trainer04_Text_1:
# 99 "data/maps/Vulias_Route110/scripts.pory"
	.string "Awh, that was a big splash!$"

VuliasRoute110_EventScript_Trainer04_Text_2:
# 101 "data/maps/Vulias_Route110/scripts.pory"
	.string "I'm the biggest splasher!$"

VuliasRoute110_EventScript_WonderingMan_Text_0:
# 111 "data/maps/Vulias_Route110/scripts.pory"
	.string "{COLOR GREEN}Wondering Man: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I wonder how I can get\n"
	.string "up that cliff...\p"
	.string "Confound it! I just can't {COLOR RED}Rock Climb!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

VuliasRoute110_FirstArrivalWithJordan_Text_0:
# 142 "data/maps/Vulias_Route110/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}We made it through! I don't\n"
	.string "know about you, but my Pokemon got\l"
	.string "much more powerful from that! I wonder\l"
	.string "if they got as scared as I did...\p"
	.string "Anyways, I want to do a little solo\n"
	.string "training, so I'll go on ahead.\p"
	.string "Just go east until the water, then head\n"
	.string "North. You'll reach Gerbon Town!\p"
	.string "I'll see you at the end of Route 110!$"

VuliasRoute110_PlayerArrivedToJordan_Text_0:
# 172 "data/maps/Vulias_Route110/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}There you are! How did your\n"
	.string "training go? Mine have gotten so much\l"
	.string "stronger, but they're tired! Speaking\l"
	.string "of which, I'm also tired!\p"
	.string "The tournament starts tomorrow, so we\n"
	.string "better make sure we're well rested.\l"
	.string "Let's head back to my place, I'll\l"
	.string "make us a proper supper!$"
