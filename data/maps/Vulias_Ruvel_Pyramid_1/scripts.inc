Vulias_Ruvel_Pyramid_1_MapScripts::
# 2 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RuvelPyramid01_SetFloorState
	.byte 0


RuvelPyramid01_SetFloorState::
# 8 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_COFAPUZZLE, RuvelPyramid01_SetFloorState_2
RuvelPyramid01_SetFloorState_1:
# 13 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01
# 14 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02
	return

RuvelPyramid01_SetFloorState_2:
# 9 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_RemoveBlockage
	goto RuvelPyramid01_SetFloorState_1


RuvelPyramid01_RemoveBlockage::
# 20 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 3, 6, 0x04E, 0
# 21 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 3, 5, 0x04E, 0
# 22 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 7, 0x04E, 0
# 23 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 6, 0x04E, 0
# 24 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 21, 8, 0x04E, 0
# 25 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 21, 7, 0x04E, 0
# 26 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
	return


RuvelPyramid01_NormalCoffinInvestigate::
# 31 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 32 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_NormalCoffinInvestigate_Text_0
# 35 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


RuvelPyramid01_CofagrigusBattle01::
# 41 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_unset FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND, RuvelPyramid01_CofagrigusBattle01_2
# 48 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_NormalCoffinInvestigate
RuvelPyramid01_CofagrigusBattle01_1:
	end

RuvelPyramid01_CofagrigusBattle01_2:
# 42 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 43 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_RUVELPYRAMID_WHICHCOFA
# 44 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 45 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_DoCofagrigusBattle
# 46 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	goto RuvelPyramid01_CofagrigusBattle01_1


RuvelPyramid01_CofagrigusBattle02::
# 55 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_unset FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND, RuvelPyramid01_CofagrigusBattle02_2
# 62 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_NormalCoffinInvestigate
RuvelPyramid01_CofagrigusBattle02_1:
	end

RuvelPyramid01_CofagrigusBattle02_2:
# 56 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 57 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_WHICHCOFA
# 58 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 59 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_DoCofagrigusBattle
# 60 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	goto RuvelPyramid01_CofagrigusBattle02_1


RuvelPyramid01_DoCofagrigusBattle::
# 69 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addvar VAR_RUVELCOFAGRIGUS_FOUND, 1
# 70 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_DoCofagrigusBattle_Text_0
# 73 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 77 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_DoCofagrigusBattle_2
# 84 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_01
# 85 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x04E, 0
# 86 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x030, 0
# 87 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 88 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement HIDDEN_COFAGRIGUS_01, RuvelPyramid01_DoCofagrigusBattle_Movement_0
RuvelPyramid01_DoCofagrigusBattle_1:
# 91 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_NORMAL
# 92 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmoncry
# 93 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 97 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_NO_RUNNING
# 98 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_NO_CATCHING
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 100 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 101 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	createmon 1, 0, SPECIES_COFAGRIGUS, 30
# 102 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_5
# 105 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_6
# 108 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_7
# 111 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_8
	return

RuvelPyramid01_DoCofagrigusBattle_2:
# 78 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_02
# 79 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x04E, 0
# 80 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x030, 0
# 81 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement HIDDEN_COFAGRIGUS_02, RuvelPyramid01_DoCofagrigusBattle_Movement_0
	goto RuvelPyramid01_DoCofagrigusBattle_1

RuvelPyramid01_DoCofagrigusBattle_5:
# 103 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Panpour
	return

RuvelPyramid01_DoCofagrigusBattle_6:
# 106 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansear
	return

RuvelPyramid01_DoCofagrigusBattle_7:
# 109 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansage
	return

RuvelPyramid01_DoCofagrigusBattle_8:
# 112 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Innape
	return


# 118 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 119 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansage::
# 120 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSAGE_04
# 121 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 122 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 123 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Panpour::
# 124 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANPOUR_04
# 125 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 126 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 127 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansear::
# 128 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSEAR_04
# 129 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 130 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 131 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Innape::
# 132 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_INNAPE_04
# 133 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 134 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 135 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_AfterMultiWildDirect::
# 136 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    switch VAR_RESULT
# 137 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	case 1, RuvelPyramid01_Cofagrigus_AfterBattle
# 138 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_Cofagrigus_Whiteout

RuvelPyramid01_Cofagrigus_Whiteout::
# 143 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 144 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 145 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 146 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 147 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 148 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special SetCB2WhiteOut
	return


RuvelPyramid01_Cofagrigus_AfterBattle::
# 153 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 154 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 155 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 156 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 157 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 158 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special HealPlayerParty
# 159 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 160 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 161 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 164 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_Cofagrigus_AfterBattle_2
# 169 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_01
# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x05B, 1
# 171 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x064, 1
RuvelPyramid01_Cofagrigus_AfterBattle_1:
# 173 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 174 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 177 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RUVELCOFAGRIGUS_FOUND, 2
	goto_if_eq RuvelPyramid01_Cofagrigus_AfterBattle_6
RuvelPyramid01_Cofagrigus_AfterBattle_5:
# 188 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_Cofagrigus_AfterBattle_2:
# 165 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_02
# 166 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x05B, 1
# 167 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x064, 1
	goto RuvelPyramid01_Cofagrigus_AfterBattle_1

RuvelPyramid01_Cofagrigus_AfterBattle_6:
# 178 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 179 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RemoveBlockage
# 180 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_M_ROCK_THROW
# 181 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 182 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 183 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_1
# 185 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
	goto RuvelPyramid01_Cofagrigus_AfterBattle_5


RuvelPyramid01_SpikeTrap::
# 196 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 197 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	random 3
# 198 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RuvelPyramid01_SpikeTrap_2
# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RuvelPyramid01_SpikeTrap_3
# 202 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RuvelPyramid01_SpikeTrap_4
# 204 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RuvelPyramid01_SpikeTrap_5
RuvelPyramid01_SpikeTrap_1:
# 207 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 208 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 209 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 210 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_4
# 216 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 217 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	warp MAP_VULIAS_RUVEL_PYRAMID_1, 12, 14
# 218 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_SpikeTrap_2:
# 199 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_0
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_3:
# 201 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_1
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_4:
# 203 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_2
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_5:
# 205 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_3
	goto RuvelPyramid01_SpikeTrap_1


RubelPyramid01_PoliceWarnTrigger::
# 224 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 225 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement RUVEL_COP_01, RubelPyramid01_PoliceWarnTrigger_Movement_0
# 226 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RubelPyramid01_PoliceWarnTrigger_Movement_1
# 228 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 229 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 230 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 231 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setspeaker RubelPyramid01_PoliceWarnTrigger_Text_0
# 232 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RubelPyramid01_PoliceWarnTrigger_Text_1
# 246 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 247 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 22
# 248 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement RUVEL_COP_01, RubelPyramid01_PoliceWarnTrigger_Movement_2
# 249 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


RubelPyramid01_PoliceTalk::
# 255 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 256 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	faceplayer
# 257 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setspeaker RubelPyramid01_PoliceWarnTrigger_Text_0
# 258 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RubelPyramid01_PoliceTalk_Text_0
# 262 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_DoCofagrigusBattle_Movement_0:
# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	walk_in_place_fast_down
# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	walk_in_place_fast_down
# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	walk_in_place_fast_down
# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
	step_end

# 199 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_0:
# 199 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_right
	step_end

# 201 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_1:
# 201 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_down
	step_end

# 203 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_2:
# 203 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_left
	step_end

# 205 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_3:
# 205 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_up
	step_end

# 210 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_4:
# 211 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
# 212 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_right
# 213 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_up
# 214 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_left
	step_end

# 225 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_0:
# 225 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_right
# 225 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	emote_exclamation_mark
	step_end

# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_1:
# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_left
	step_end

# 248 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_2:
# 248 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_down
	step_end

RuvelPyramid01_NormalCoffinInvestigate_Text_0:
# 32 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You investigate the coffin...\p"
	.string "It's securely shut.$"

RuvelPyramid01_DoCofagrigusBattle_Text_0:
# 70 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You investigate the coffin...\p"
	.string "It's moving!$"

RuvelPyramid01_Cofagrigus_AfterBattle_Text_0:
# 160 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "The Cofagrigus seems to be fading away$"

RuvelPyramid01_Cofagrigus_AfterBattle_Text_1:
# 183 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You hear a shifting sound throughout\n"
	.string "the Pyramid...$"

RubelPyramid01_PoliceWarnTrigger_Text_0:
# 231 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "Policeman$"

RubelPyramid01_PoliceWarnTrigger_Text_1:
# 232 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You! No one is allowed past this point!\p"
	.string "...\p"
	.string "Ah, you're helping to find the child?\n"
	.string "I've been standing watch to see if we\l"
	.string "see the {COLOR RED}Pokemon{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that ran off with the\l"
	.string "kid, but no one actually saw what it\l"
	.string "looks like. I've radioed in for more\l"
	.string "support already.\p"
	.string "Be careful, watch out for the spikes!\n"
	.string "Most of the traps deeper in the\l"
	.string "Pyramid are still active!$"

RubelPyramid01_PoliceTalk_Text_0:
# 258 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "Remember, watch out for the spikes!\n"
	.string "You'll need to come back here for\l"
	.string "medical assistance if you do end up\l"
	.string "getting stuck by one!$"
