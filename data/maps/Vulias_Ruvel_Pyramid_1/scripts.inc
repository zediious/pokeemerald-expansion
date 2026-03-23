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
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 95 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	createmon 1, 0, SPECIES_COFAGRIGUS, 30
# 96 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_6
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_7
# 102 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_8
# 105 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_9
RuvelPyramid01_DoCofagrigusBattle_5:
# 109 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 110 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 111 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 112 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 113 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_DoCofagrigusBattle_Text_1, MSGBOX_AUTOCLOSE
# 114 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 117 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_DoCofagrigusBattle_15
# 122 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_01
# 123 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x05B, 1
# 124 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x064, 1
RuvelPyramid01_DoCofagrigusBattle_14:
# 126 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 127 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 130 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RUVELCOFAGRIGUS_FOUND, 2
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_19
RuvelPyramid01_DoCofagrigusBattle_18:
# 141 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_DoCofagrigusBattle_2:
# 77 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_02
# 78 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x04E, 0
# 79 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x030, 0
	goto RuvelPyramid01_DoCofagrigusBattle_1

RuvelPyramid01_DoCofagrigusBattle_6:
# 97 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Panpour
	goto RuvelPyramid01_DoCofagrigusBattle_5

RuvelPyramid01_DoCofagrigusBattle_7:
# 100 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansear
	goto RuvelPyramid01_DoCofagrigusBattle_5

RuvelPyramid01_DoCofagrigusBattle_8:
# 103 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansage
	goto RuvelPyramid01_DoCofagrigusBattle_5

RuvelPyramid01_DoCofagrigusBattle_9:
# 106 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Innape
	goto RuvelPyramid01_DoCofagrigusBattle_5

RuvelPyramid01_DoCofagrigusBattle_15:
# 118 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_02
# 119 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x05B, 1
# 120 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x064, 1
	goto RuvelPyramid01_DoCofagrigusBattle_14

RuvelPyramid01_DoCofagrigusBattle_19:
# 131 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 132 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RemoveBlockage
# 133 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_M_ROCK_THROW
# 134 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 135 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 136 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_DoCofagrigusBattle_Text_2
# 138 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
	goto RuvelPyramid01_DoCofagrigusBattle_18


# 147 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 148 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansage::
# 149 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_wild PARTNER_JORDAN_PANSAGE_04
# 150 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 151 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Panpour::
# 152 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_wild PARTNER_JORDAN_PANPOUR_04
# 153 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 154 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansear::
# 155 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_wild PARTNER_JORDAN_PANSEAR_04
# 156 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 157 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Innape::
# 158 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_wild PARTNER_JORDAN_INNAPE_04

RuvelPyramid01_SpikeTrap::
# 163 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 164 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	random 3
# 165 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RuvelPyramid01_SpikeTrap_2
# 167 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RuvelPyramid01_SpikeTrap_3
# 169 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RuvelPyramid01_SpikeTrap_4
# 171 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RuvelPyramid01_SpikeTrap_5
RuvelPyramid01_SpikeTrap_1:
# 174 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 175 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 176 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 177 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_4
# 183 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 184 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	warp MAP_VULIAS_RUVEL_PYRAMID_1, 12, 14
# 185 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_SpikeTrap_2:
# 166 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_0
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_3:
# 168 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_1
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_4:
# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_2
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_5:
# 172 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement 0xFF, RuvelPyramid01_SpikeTrap_Movement_3
	goto RuvelPyramid01_SpikeTrap_1


# 166 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_0:
# 166 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_right
	step_end

# 168 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_1:
# 168 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_down
	step_end

# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_2:
# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_left
	step_end

# 172 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_3:
# 172 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_up
	step_end

# 177 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_4:
# 178 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
# 179 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_right
# 180 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_up
# 181 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
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

RuvelPyramid01_DoCofagrigusBattle_Text_1:
# 113 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "The Cofagrigus seems to be fading away$"

RuvelPyramid01_DoCofagrigusBattle_Text_2:
# 136 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You hear a shifting sound throughout\n"
	.string "the Pyramid...$"
