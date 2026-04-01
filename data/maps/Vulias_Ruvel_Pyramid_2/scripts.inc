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
	setspeaker RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0
# 15 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_1
# 17 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 18 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 19 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 22 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0
# 23 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_PIN
# 24 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 25 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_1
# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_2
# 28 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 29 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setspeaker RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0
# 30 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2
# 31 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 32 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 33 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 34 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_GOTHORITA, CRY_MODE_NORMAL
# 35 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setspeaker RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_3
# 36 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_4
# 37 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 38 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 41 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_NO_RUNNING
# 42 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_NO_CATCHING
# 43 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 44 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 45 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	createmon 1, 0, SPECIES_GOTHORITA, 32
# 46 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_1
# 49 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_2
# 52 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_3
# 55 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid02_GothoritaEncounterSaveKidTrigger_4
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_1:
# 47 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Panpour
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_2:
# 50 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Pansear
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_3:
# 53 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Pansage
	return

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_4:
# 56 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	call RuvelPyramid02_RawScript_StartMultiwild_Innape
	return


# 62 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 63 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Pansage::
# 64 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSAGE_04
# 65 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 66 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 67 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Panpour::
# 68 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANPOUR_04
# 69 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 70 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 71 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Pansear::
# 72 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSEAR_04
# 73 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 74 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 75 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_StartMultiwild_Innape::
# 76 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_INNAPE_04
# 77 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    goto(RuvelPyramid02_RawScript_AfterMultiWildDirect)
# 78 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"

# 79 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_RawScript_AfterMultiWildDirect::
# 80 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
    switch VAR_RESULT
# 81 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	case 1, RuvelPyramid02_Gothorita_AfterBattle
# 82 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	goto RuvelPyramid02_Gothorita_Whiteout

RuvelPyramid02_Gothorita_Whiteout::
# 87 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 88 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 89 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 90 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 91 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 92 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	special SetCB2WhiteOut
	return


RuvelPyramid02_Gothorita_AfterBattle::
# 97 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 98 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 99 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 100 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 101 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 105 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_GOTHORITA, CRY_MODE_NORMAL
# 106 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setspeaker RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_3
# 107 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_4
# 108 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 109 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 110 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 111 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 112 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_GOTHORITA_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_0
# 115 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 116 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_1
# 119 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement RUVEL_GOTHORITA_01
# 120 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_GOTHORITA_01
# 121 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement RUVEL_LOSTKID_01
# 122 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 125 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_0, MSGBOX_SIGN
# 127 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 128 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 129 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setspeaker RuvelPyramid02_Gothorita_AfterBattle_Text_1
# 131 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_2
# 132 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 133 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 134 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_2
# 141 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 142 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 143 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 144 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 5
# 145 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 146 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 147 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 5
# 148 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 149 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitse
# 150 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 5
# 151 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 152 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 153 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 154 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 155 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_3
# 156 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 157 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setspeaker RuvelPyramid02_Gothorita_AfterBattle_Text_1
# 158 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_3
# 159 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 160 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_4
# 161 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playse SE_BIKE_HOP
# 162 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 163 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setspeaker RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0
# 164 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_Gothorita_AfterBattle_Text_4
# 168 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 171 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKID
# 172 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM3
# 173 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_RUVELPYRAMIDEXT_JORDAN
# 174 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_RUVELPYRAMIDEXT_LOSTKIDMOM2
# 175 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_IGRIS_JORDAN_02
# 176 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 23
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_5
# 178 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 179 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_6
# 180 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 181 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid02_Gothorita_AfterBattle_Movement_7
# 182 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmovement
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement RUVEL_LOSTKID_01, RuvelPyramid02_Gothorita_AfterBattle_Movement_8
# 184 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid02_Gothorita_AfterBattle_Movement_9
# 186 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 20
# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, RuvelPyramid02_Gothorita_AfterBattle_Movement_10
# 188 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 189 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	destroyfollowernpc
# 190 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_LOSTKID_01
# 191 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	warp MAP_VULIAS_IGRIS_DESERT, 13, 16
	return


RuvelPyramid02_CatchableCofagrigusEncounter::
# 196 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	lock
# 197 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	msgbox RuvelPyramid02_CatchableCofagrigusEncounter_Text_0, MSGBOX_SIGN
# 198 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmessage
# 199 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	closemessage
# 200 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 60
# 201 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 202 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_NORMAL
# 203 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	waitmoncry
# 204 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	delay 30
# 206 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	createmon 1, 0, SPECIES_COFAGRIGUS, 30, ITEM_SPELL_TAG, hpIv = 31, atkIv = 0, defIv = 31, speedIv = 0, spAtkIv = 31, spDefIv = 0
# 209 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	dowildbattle
# 210 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	removeobject RUVEL_CATCHABLE_COFA
# 211 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 212 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	release
	end


# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_0:
# 8 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_1:
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 26 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Movement_2:
# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 27 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
	step_end

# 112 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_0:
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_2_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
# 113 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_left
	step_end

# 116 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_1:
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 117 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
	step_end

# 135 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_2:
# 136 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_right
# 136 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_down
# 136 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
# 136 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_right
# 136 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_right
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_down
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
# 137 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_right
# 138 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_right
# 138 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_down
# 138 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_left
# 139 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_up
# 139 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	emote_exclamation_mark
	step_end

# 155 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_3:
# 155 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_up
# 155 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_fast_up
	step_end

# 160 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_4:
# 160 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	jump_in_place_down
	step_end

# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_5:
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_right
# 177 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
	step_end

# 179 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_6:
# 179 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_right
# 179 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_left
	step_end

# 181 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_7:
# 181 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 181 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_down
# 181 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	face_up
	step_end

# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_8:
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 183 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_9:
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
# 185 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
RuvelPyramid02_Gothorita_AfterBattle_Movement_10:
# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
# 187 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	walk_left
	step_end

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_0:
# 14 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Jordan$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_1:
# 15 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "There's a kid! And it looks like there's a\n"
	.string "Pokemon with them!$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_2:
# 30 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "This doesn't look good...$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_3:
# 35 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Gothorita$"

RuvelPyramid02_GothoritaEncounterSaveKidTrigger_Text_4:
# 36 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Weeew-widi!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_0:
# 125 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "The childs face changes from sadness\n"
	.string "from the Gothorita leaving, to horror.$"

RuvelPyramid02_Gothorita_AfterBattle_Text_1:
# 130 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Missing Child$"

RuvelPyramid02_Gothorita_AfterBattle_Text_2:
# 131 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Wahhhhh!! Where am I! I want my mommy!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_3:
# 158 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Please bring me to my mommy!$"

RuvelPyramid02_Gothorita_AfterBattle_Text_4:
# 164 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "Don't worry kid! We'll get you out of\n"
	.string "here, and to your mom!\p"
	.string "Stay between us!$"

RuvelPyramid02_CatchableCofagrigusEncounter_Text_0:
# 197 "data/maps/Vulias_Ruvel_Pyramid_2/scripts.pory"
	.string "The Cofagrigus eyes you steadily...$"
