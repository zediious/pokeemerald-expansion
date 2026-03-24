Vulias_Ruvel_Pyramid_2_MapScripts::
	.byte 0


RuvelPyramid02_GothoritaEncounterSaveKidTrigger::
# 5 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	lock
# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement 0xFF, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0
# 9 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0
# 10 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_PIN
# 11 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 12 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 13 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 14 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0
# 16 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 19 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0
# 20 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_PIN
# 21 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 22 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_1
# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_2
# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_1
# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 28 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 29 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_GOTHORITA, CRY_MODE_NORMAL
# 30 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2
# 31 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 32 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 35 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 36 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 37 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 38 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 39 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	createmon 1, 0, SPECIES_GOTHORITA, 32
# 40 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_1
# 43 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_2
# 46 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_3
# 49 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_4
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_1:
# 41 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Panpour
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_2:
# 44 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Pansear
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_3:
# 47 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Pansage
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_4:
# 50 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Innape
	return


# 56 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 57 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Pansage::
# 58 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSAGE_04
# 59 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 60 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 61 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Panpour::
# 62 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANPOUR_04
# 63 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 64 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 65 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Pansear::
# 66 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSEAR_04
# 67 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 68 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 69 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Innape::
# 70 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_INNAPE_04
# 71 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 72 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 73 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_AfterMultiWildDirect::
# 74 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    switch VAR_RESULT
# 75 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	case 1, RuvelPyramid02_Gothorita_AfterBattle
# 76 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	goto RuvelPyramid02_Gothorita_Whiteout

RuvelPyramid02_Gothorita_Whiteout::
# 81 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 82 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 83 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 84 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 85 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 86 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	special SetCB2WhiteOut
	return


RuvelPyramid02_Gothorita_AfterBattle::
# 91 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 92 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 93 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 94 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 95 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 99 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_GOTHORITA, CRY_MODE_NORMAL
# 100 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2
# 101 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 102 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 103 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_0
# 106 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 107 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_1
# 110 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement RUVEL_GOTHORITA_01
# 111 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_GOTHORITA_01
# 112 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement RUVEL_LOSTKID_01
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 116 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_0, MSGBOX_SIGN
# 118 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 119 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_1
# 121 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_2
# 127 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 128 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 129 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_3
# 131 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_2
# 134 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_4
# 136 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_3
# 141 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 144 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUBELPYRAMIDEXT_LOSTKID
# 145 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 22
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_5
# 147 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 148 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_6
# 149 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement 0xFF, RuvelPyramid02_Gothorita_AfterBattle_Movement_7
# 151 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_8
# 153 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement 0xFF, RuvelPyramid02_Gothorita_AfterBattle_Movement_9
# 155 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_10
# 157 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 158 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 13, 16
	return


# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0:
# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_1:
# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_2:
# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
	step_end

# 103 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_0:
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_2_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
	step_end

# 107 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_1:
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
	step_end

# 121 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_2:
# 122 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_right
# 122 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_down
# 122 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
# 122 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_right
# 122 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_right
# 123 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_down
# 123 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
# 123 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
# 123 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_right
# 124 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_right
# 124 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_down
# 124 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 125 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_up
# 125 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_3:
# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_up
# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_up
	step_end

# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_4:
# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_down
	step_end

# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_5:
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_right
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
	step_end

# 148 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_6:
# 148 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_right
# 148 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
	step_end

# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_7:
# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
	step_end

# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_8:
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_9:
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_10:
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
	step_end

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0:
# 14 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}There's a kid! And it looks\n"
	.string "like there's a Pokemon with it!$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_1:
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}This doesn't look good...$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2:
# 30 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Weeew-widi!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_0:
# 116 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "The childs face changes from sadness\n"
	.string "from the Gothorita leaving, to horror.$"

RuvelPyramid02_Gothorita_AfterBattle_Text_1:
# 119 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Missing Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wahhhhh!! Where am I!\n"
	.string "I want my mommy!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_2:
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Missing Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please bring me to\n"
	.string "my mommy!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_3:
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Don't worry kid! We'll get you\n"
	.string "out of here, and to your mom!\p"
	.string "Stay between us!$"
