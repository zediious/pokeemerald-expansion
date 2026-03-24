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
	delay 30
# 159 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 160 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 163 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_Cofagrigus_AfterBattle_2
# 168 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_01
# 169 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x05B, 1
# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x064, 1
RuvelPyramid01_Cofagrigus_AfterBattle_1:
# 172 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 173 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 176 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RUVELCOFAGRIGUS_FOUND, 2
	goto_if_eq RuvelPyramid01_Cofagrigus_AfterBattle_6
RuvelPyramid01_Cofagrigus_AfterBattle_5:
# 187 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_Cofagrigus_AfterBattle_2:
# 164 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_02
# 165 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x05B, 1
# 166 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x064, 1
	goto RuvelPyramid01_Cofagrigus_AfterBattle_1

RuvelPyramid01_Cofagrigus_AfterBattle_6:
# 177 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 178 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RemoveBlockage
# 179 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_M_ROCK_THROW
# 180 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 181 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 182 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_1
# 184 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
	goto RuvelPyramid01_Cofagrigus_AfterBattle_5


RuvelPyramid01_SpikeTrap::
# 195 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 196 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	random 3
# 197 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RuvelPyramid01_SpikeTrap_2
# 199 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RuvelPyramid01_SpikeTrap_3
# 201 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RuvelPyramid01_SpikeTrap_4
# 203 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RuvelPyramid01_SpikeTrap_5
RuvelPyramid01_SpikeTrap_1:
# 206 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 207 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 208 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 209 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_4
# 215 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 216 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	warp MAP_VULIAS_RUVEL_PYRAMID_1, 12, 14
# 217 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_SpikeTrap_2:
# 198 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_0
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_3:
# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_1
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_4:
# 202 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_2
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_5:
# 204 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_3
	goto RuvelPyramid01_SpikeTrap_1


RubelPyramid01_PoliceWarnTrigger::
# 223 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 224 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement RUVEL_COP_01, RubelPyramid01_PoliceWarnTrigger_Movement_0
# 225 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 226 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RubelPyramid01_PoliceWarnTrigger_Text_0
# 242 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 21
# 243 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement RUVEL_COP_01, RubelPyramid01_PoliceWarnTrigger_Movement_1
# 244 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


RubelPyramid01_PoliceTalk::
# 250 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 251 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	faceplayer
# 252 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RubelPyramid01_PoliceTalk_Text_0
# 256 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
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

# 198 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_0:
# 198 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_right
	step_end

# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_1:
# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_down
	step_end

# 202 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_2:
# 202 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_left
	step_end

# 204 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_3:
# 204 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_up
	step_end

# 209 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_4:
# 210 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
# 211 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_right
# 212 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_up
# 213 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_left
	step_end

# 224 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_0:
# 224 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_right
# 224 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	emote_exclamation_mark
	step_end

# 243 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_1:
# 243 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
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
# 159 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "The Cofagrigus seems to be fading away$"

RuvelPyramid01_Cofagrigus_AfterBattle_Text_1:
# 182 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You hear a shifting sound throughout\n"
	.string "the Pyramid...$"

RubelPyramid01_PoliceWarnTrigger_Text_0:
# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "{COLOR GREEN}Policeman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You! No one is allowed\n"
	.string "past this point!\p"
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
# 252 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "{COLOR GREEN}Policewoman: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Remember, watch out for\n"
	.string "the spikes! You'll need to come back\l"
	.string "here for medical assistance if you\l"
	.string "do end up getting stuck by one!$"
