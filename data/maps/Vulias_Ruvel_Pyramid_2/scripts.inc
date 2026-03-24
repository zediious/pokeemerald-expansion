Vulias_Ruvel_Pyramid_2_MapScripts::
	.byte 0


RuvelPyramid02_GothoritaEncounterSaveKidTrigger::
# 5 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	lock
# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0
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
# 17 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 18 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 21 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0
# 22 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_PIN
# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_1
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_2
# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 28 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_1
# 29 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 30 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 31 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 32 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_GOTHORITA, CRY_MODE_NORMAL
# 33 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2
# 34 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 35 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 38 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 39 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 40 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 41 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 42 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	createmon 1, 0, SPECIES_GOTHORITA, 32
# 43 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_1
# 46 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_2
# 49 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_3
# 52 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_4
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_1:
# 44 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Panpour
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_2:
# 47 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Pansear
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_3:
# 50 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Pansage
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_4:
# 53 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Innape
	return


# 59 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 60 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Pansage::
# 61 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSAGE_04
# 62 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 63 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 64 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Panpour::
# 65 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANPOUR_04
# 66 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 67 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 68 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Pansear::
# 69 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSEAR_04
# 70 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 71 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 72 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Innape::
# 73 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_INNAPE_04
# 74 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 75 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 76 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_AfterMultiWildDirect::
# 77 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    switch VAR_RESULT
# 78 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	case 1, RuvelPyramid02_Gothorita_AfterBattle
# 79 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	goto RuvelPyramid02_Gothorita_Whiteout

RuvelPyramid02_Gothorita_Whiteout::
# 84 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 85 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 86 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 87 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 88 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 89 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	special SetCB2WhiteOut
	return


RuvelPyramid02_Gothorita_AfterBattle::
# 94 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 95 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 96 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 97 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 98 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 102 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_GOTHORITA, CRY_MODE_NORMAL
# 103 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2
# 104 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 105 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 106 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 107 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_0
# 111 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 112 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_1
# 115 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement RUVEL_GOTHORITA_01
# 116 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_GOTHORITA_01
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement RUVEL_LOSTKID_01
# 118 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 121 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_0, MSGBOX_SIGN
# 123 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 124 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 125 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 126 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_1
# 128 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 129 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 131 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_2
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 138 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 139 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 140 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 141 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 142 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 143 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 144 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 145 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 147 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 148 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 149 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_3
# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 151 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_2
# 153 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_4
# 155 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 157 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_3
# 161 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 164 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 165 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 166 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 167 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 168 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 169 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 23
# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_5
# 171 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 172 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_6
# 173 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 174 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid02_Gothorita_AfterBattle_Movement_7
# 175 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_8
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid02_Gothorita_AfterBattle_Movement_9
# 179 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_10
# 181 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 182 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	destroyfollowernpc
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_LOSTKID_01
# 184 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 13, 16
	return


RuvelPyramid02_CatchableCofagrigusEncounter::
# 189 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	lock
# 190 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_CatchableCofagrigusEncounter_Text_0, MSGBOX_SIGN
# 191 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 192 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 193 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 194 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 195 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_NORMAL
# 196 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 197 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 199 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	createmon 1, 0, SPECIES_COFAGRIGUS, 30, ITEM_SPELL_TAG, hpIv = 31, atkIv = 0, defIv = 31, speedIv = 0, spAtkIv = 31, spDefIv = 0
# 202 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	dowildbattle
# 203 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_CATCHABLE_COFA
# 204 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 205 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	release
	end


# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0:
# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_1:
# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_2:
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
	step_end

# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_0:
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_2_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
	step_end

# 112 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_1:
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
	step_end

# 131 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_2:
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_right
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_down
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_right
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_right
# 133 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_down
# 133 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
# 133 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
# 133 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_right
# 134 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_right
# 134 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_down
# 134 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_up
# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 149 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_3:
# 149 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_up
# 149 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_up
	step_end

# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_4:
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_down
	step_end

# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_5:
# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_right
# 170 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
	step_end

# 172 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_6:
# 172 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_right
# 172 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
	step_end

# 174 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_7:
# 174 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 174 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
	step_end

# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_8:
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_9:
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_10:
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
	step_end

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0:
# 14 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}There's a kid! And it looks\n"
	.string "like there's a Pokemon with it!$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_1:
# 28 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}This doesn't look good...$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2:
# 33 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Weeew-widi!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_0:
# 121 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "The childs face changes from sadness\n"
	.string "from the Gothorita leaving, to horror.$"

RuvelPyramid02_Gothorita_AfterBattle_Text_1:
# 126 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Missing Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Wahhhhh!! Where am I!\n"
	.string "I want my mommy!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_2:
# 151 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Missing Child: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Please bring me to\n"
	.string "my mommy!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_3:
# 157 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Don't worry kid! We'll get you\n"
	.string "out of here, and to your mom!\p"
	.string "Stay between us!$"

RuvelPyramid02_CatchableCofagrigusEncounter_Text_0:
# 190 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "The Cofagrigus eyes you steadily...$"
