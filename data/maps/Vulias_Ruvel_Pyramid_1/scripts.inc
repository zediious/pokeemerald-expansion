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
# 76 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_DoCofagrigusBattle_2
# 81 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_01
# 82 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x04E, 0
# 83 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x030, 0
RuvelPyramid01_DoCofagrigusBattle_1:
# 85 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_NORMAL
# 88 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmoncry
# 89 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 93 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_NO_RUNNING
# 94 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_NO_CATCHING
# 95 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 96 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 97 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	createmon 1, 0, SPECIES_COFAGRIGUS, 30
# 98 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_5
# 101 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_6
# 104 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_7
# 107 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_8
	return

RuvelPyramid01_DoCofagrigusBattle_2:
# 77 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_02
# 78 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x04E, 0
# 79 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x030, 0
	goto RuvelPyramid01_DoCofagrigusBattle_1

RuvelPyramid01_DoCofagrigusBattle_5:
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Panpour
	return

RuvelPyramid01_DoCofagrigusBattle_6:
# 102 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansear
	return

RuvelPyramid01_DoCofagrigusBattle_7:
# 105 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansage
	return

RuvelPyramid01_DoCofagrigusBattle_8:
# 108 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Innape
	return


# 114 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 115 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansage::
# 116 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSAGE_04
# 117 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 118 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 119 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Panpour::
# 120 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANPOUR_04
# 121 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 122 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 123 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansear::
# 124 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSEAR_04
# 125 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 126 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 127 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Innape::
# 128 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_INNAPE_04
# 129 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 130 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 131 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_AfterMultiWildDirect::
# 132 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    switch VAR_RESULT
# 133 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	case 1, RuvelPyramid01_Cofagrigus_AfterBattle
# 134 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_Cofagrigus_Whiteout

RuvelPyramid01_Cofagrigus_Whiteout::
# 139 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special SetCB2WhiteOut
	return


RuvelPyramid01_Cofagrigus_AfterBattle::
# 145 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 146 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 147 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 148 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 149 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 150 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 151 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 155 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_Cofagrigus_AfterBattle_2
# 160 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_01
# 161 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x05B, 1
# 162 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x064, 1
RuvelPyramid01_Cofagrigus_AfterBattle_1:
# 164 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 165 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 168 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RUVELCOFAGRIGUS_FOUND, 2
	goto_if_eq RuvelPyramid01_Cofagrigus_AfterBattle_6
RuvelPyramid01_Cofagrigus_AfterBattle_5:
# 179 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_Cofagrigus_AfterBattle_2:
# 156 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_02
# 157 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x05B, 1
# 158 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x064, 1
	goto RuvelPyramid01_Cofagrigus_AfterBattle_1

RuvelPyramid01_Cofagrigus_AfterBattle_6:
# 169 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RemoveBlockage
# 171 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_M_ROCK_THROW
# 172 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 173 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 174 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_1
# 176 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
	goto RuvelPyramid01_Cofagrigus_AfterBattle_5


RuvelPyramid01_SpikeTrap::
# 187 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 188 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	random 3
# 189 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RuvelPyramid01_SpikeTrap_2
# 191 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RuvelPyramid01_SpikeTrap_3
# 193 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RuvelPyramid01_SpikeTrap_4
# 195 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RuvelPyramid01_SpikeTrap_5
RuvelPyramid01_SpikeTrap_1:
# 198 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 199 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 201 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_4
# 207 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 208 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	warp MAP_VULIAS_RUVEL_PYRAMID_1, 12, 14
# 209 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_SpikeTrap_2:
# 190 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_0
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_3:
# 192 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_1
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_4:
# 194 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_2
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_5:
# 196 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_3
	goto RuvelPyramid01_SpikeTrap_1


# 190 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_0:
# 190 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_right
	step_end

# 192 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_1:
# 192 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_down
	step_end

# 194 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_2:
# 194 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_left
	step_end

# 196 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_3:
# 196 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_up
	step_end

# 201 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_4:
# 202 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
# 203 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_right
# 204 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_up
# 205 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_left
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
# 151 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "The Cofagrigus seems to be fading away$"

RuvelPyramid01_Cofagrigus_AfterBattle_Text_1:
# 174 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You hear a shifting sound throughout\n"
	.string "the Pyramid...$"
