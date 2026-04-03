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


RuvelPyramid01_BlockageInvestigate::
# 31 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_unset FLAG_RUVELPYRAMID_COFAPUZZLE, RuvelPyramid01_BlockageInvestigate_2
RuvelPyramid01_BlockageInvestigate_1:
	end

RuvelPyramid01_BlockageInvestigate_2:
# 32 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 33 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_BlockageInvestigate_Text_0
# 40 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 41 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	goto RuvelPyramid01_BlockageInvestigate_1


RuvelPyramid01_NormalCoffinInvestigate::
# 48 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 49 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_NormalCoffinInvestigate_Text_0
# 52 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


RuvelPyramid01_CofagrigusBattle01::
# 58 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_unset FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND, RuvelPyramid01_CofagrigusBattle01_2
# 65 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_NormalCoffinInvestigate
RuvelPyramid01_CofagrigusBattle01_1:
	end

RuvelPyramid01_CofagrigusBattle01_2:
# 59 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 60 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_RUVELPYRAMID_WHICHCOFA
# 61 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS01_FOUND
# 62 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_DoCofagrigusBattle
# 63 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	goto RuvelPyramid01_CofagrigusBattle01_1


RuvelPyramid01_CofagrigusBattle02::
# 72 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_unset FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND, RuvelPyramid01_CofagrigusBattle02_2
# 79 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_NormalCoffinInvestigate
RuvelPyramid01_CofagrigusBattle02_1:
	end

RuvelPyramid01_CofagrigusBattle02_2:
# 73 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 74 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_WHICHCOFA
# 75 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAGRIGUS02_FOUND
# 76 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_DoCofagrigusBattle
# 77 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	goto RuvelPyramid01_CofagrigusBattle02_1


RuvelPyramid01_DoCofagrigusBattle::
# 86 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addvar VAR_RUVELCOFAGRIGUS_FOUND, 1
# 87 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_DoCofagrigusBattle_Text_0
# 90 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 94 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_DoCofagrigusBattle_2
# 101 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_01
# 102 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x04E, 0
# 103 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x030, 0
# 104 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement HIDDEN_COFAGRIGUS_01, RuvelPyramid01_DoCofagrigusBattle_Movement_0
RuvelPyramid01_DoCofagrigusBattle_1:
# 108 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_NORMAL
# 109 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmoncry
# 110 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 114 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_NO_RUNNING
# 115 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_NO_CATCHING
# 116 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_SMART_WILD_MON
# 117 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_ALWAYS_BATTLE_PARTNER
# 118 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	createmon 1, 0, SPECIES_COFAGRIGUS, 30
# 119 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_5
# 122 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_6
# 125 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_7
# 128 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq RuvelPyramid01_DoCofagrigusBattle_8
	return

RuvelPyramid01_DoCofagrigusBattle_2:
# 95 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	addobject HIDDEN_COFAGRIGUS_02
# 96 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x04E, 0
# 97 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x030, 0
# 98 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement HIDDEN_COFAGRIGUS_02, RuvelPyramid01_DoCofagrigusBattle_Movement_0
	goto RuvelPyramid01_DoCofagrigusBattle_1

RuvelPyramid01_DoCofagrigusBattle_5:
# 120 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Panpour
	return

RuvelPyramid01_DoCofagrigusBattle_6:
# 123 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansear
	return

RuvelPyramid01_DoCofagrigusBattle_7:
# 126 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Pansage
	return

RuvelPyramid01_DoCofagrigusBattle_8:
# 129 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RawScript_StartMultiwild_Innape
	return


# 135 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 136 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansage::
# 137 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSAGE_04
# 138 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 139 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 140 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Panpour::
# 141 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANPOUR_04
# 142 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 143 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 144 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Pansear::
# 145 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_PANSEAR_04
# 146 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 147 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 148 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_StartMultiwild_Innape::
# 149 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    multi_fixed_wild PARTNER_JORDAN_INNAPE_04
# 150 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    goto(RuvelPyramid01_RawScript_AfterMultiWildDirect)
# 151 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"

# 152 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_RawScript_AfterMultiWildDirect::
# 153 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
    switch VAR_RESULT
# 154 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	case 1, RuvelPyramid01_Cofagrigus_AfterBattle
# 155 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto RuvelPyramid01_Cofagrigus_Whiteout

RuvelPyramid01_Cofagrigus_Whiteout::
# 160 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 161 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 162 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 163 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 164 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 165 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special SetCB2WhiteOut
	return


RuvelPyramid01_Cofagrigus_AfterBattle::
# 170 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 171 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 172 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 173 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_SMART_WILD_MON
# 174 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	clearflag FLAG_ALWAYS_BATTLE_PARTNER
# 175 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special HealPlayerParty
# 176 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 177 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_0, MSGBOX_AUTOCLOSE
# 178 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 181 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	goto_if_set FLAG_RUVELPYRAMID_WHICHCOFA, RuvelPyramid01_Cofagrigus_AfterBattle_2
# 186 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_01
# 187 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 7, 0x05B, 1
# 188 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 1, 6, 0x064, 1
RuvelPyramid01_Cofagrigus_AfterBattle_1:
# 190 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	special DrawWholeMapView
# 191 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 194 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RUVELCOFAGRIGUS_FOUND, 2
	goto_if_eq RuvelPyramid01_Cofagrigus_AfterBattle_6
RuvelPyramid01_Cofagrigus_AfterBattle_5:
# 205 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_Cofagrigus_AfterBattle_2:
# 182 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	removeobject HIDDEN_COFAGRIGUS_02
# 183 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 11, 0x05B, 1
# 184 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setmetatile 18, 10, 0x064, 1
	goto RuvelPyramid01_Cofagrigus_AfterBattle_1

RuvelPyramid01_Cofagrigus_AfterBattle_6:
# 195 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setflag FLAG_RUVELPYRAMID_COFAPUZZLE
# 196 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	call RuvelPyramid01_RemoveBlockage
# 197 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_M_ROCK_THROW
# 198 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 199 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 60
# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RuvelPyramid01_Cofagrigus_AfterBattle_Text_1
# 202 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
	goto RuvelPyramid01_Cofagrigus_AfterBattle_5


RuvelPyramid01_SpikeTrap::
# 213 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 214 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	random 3
# 215 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RuvelPyramid01_SpikeTrap_2
# 217 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RuvelPyramid01_SpikeTrap_3
# 219 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RuvelPyramid01_SpikeTrap_4
# 221 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RuvelPyramid01_SpikeTrap_5
RuvelPyramid01_SpikeTrap_1:
# 224 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 225 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 226 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_4
# 233 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 234 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	warp MAP_VULIAS_RUVEL_PYRAMID_1, 12, 14
# 235 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end

RuvelPyramid01_SpikeTrap_2:
# 216 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_0
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_3:
# 218 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_1
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_4:
# 220 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_2
	goto RuvelPyramid01_SpikeTrap_1

RuvelPyramid01_SpikeTrap_5:
# 222 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RuvelPyramid01_SpikeTrap_Movement_3
	goto RuvelPyramid01_SpikeTrap_1


RubelPyramid01_PoliceWarnTrigger::
# 241 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 242 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement RUVEL_COP_01, RubelPyramid01_PoliceWarnTrigger_Movement_0
# 243 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	playse SE_PIN
# 244 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RubelPyramid01_PoliceWarnTrigger_Movement_1
# 245 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmovement
# 246 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitse
# 247 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	delay 30
# 248 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setspeaker RubelPyramid01_PoliceWarnTrigger_Text_0
# 249 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RubelPyramid01_PoliceWarnTrigger_Text_1
# 263 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	waitmessage
# 264 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 22
# 265 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	applymovement RUVEL_COP_01, RubelPyramid01_PoliceWarnTrigger_Movement_2
# 266 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


RubelPyramid01_PoliceTalk::
# 272 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	lock
# 273 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	faceplayer
# 274 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	setspeaker RubelPyramid01_PoliceWarnTrigger_Text_0
# 275 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	msgbox RubelPyramid01_PoliceTalk_Text_0
# 279 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	release
	end


# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_DoCofagrigusBattle_Movement_0:
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	walk_in_place_fast_down
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	walk_in_place_fast_down
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	walk_in_place_fast_down
# 99 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
	step_end

# 216 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_0:
# 216 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_right
	step_end

# 218 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_1:
# 218 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_down
	step_end

# 220 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_2:
# 220 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_left
	step_end

# 222 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_3:
# 222 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_up
	step_end

# 227 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RuvelPyramid01_SpikeTrap_Movement_4:
# 228 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_down
# 229 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_right
# 230 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_up
# 231 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	jump_in_place_left
	step_end

# 242 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_0:
# 242 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_right
# 242 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	emote_exclamation_mark
	step_end

# 244 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_1:
# 244 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_left
	step_end

# 265 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
RubelPyramid01_PoliceWarnTrigger_Movement_2:
# 265 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	face_down
	step_end

RuvelPyramid01_BlockageInvestigate_Text_0:
# 33 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "There is a large stone block in the way.\n"
	.string "There appears to be a chain attached\l"
	.string "to it from the ceiling, which leads\l"
	.string "to some ancient mechanism.\p"
	.string "What could be found around here that\n"
	.string "may operate that chain?$"

RuvelPyramid01_NormalCoffinInvestigate_Text_0:
# 49 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You investigate the coffin...\p"
	.string "It's securely shut.$"

RuvelPyramid01_DoCofagrigusBattle_Text_0:
# 87 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You investigate the coffin...\p"
	.string "It's moving!$"

RuvelPyramid01_Cofagrigus_AfterBattle_Text_0:
# 177 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "The Cofagrigus seems to be fading away$"

RuvelPyramid01_Cofagrigus_AfterBattle_Text_1:
# 200 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "You hear a shifting sound throughout\n"
	.string "the Pyramid...$"

RubelPyramid01_PoliceWarnTrigger_Text_0:
# 248 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "Policeman$"

RubelPyramid01_PoliceWarnTrigger_Text_1:
# 249 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
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
# 275 "data/maps/Vulias_Ruvel_Pyramid_1/scripts.pory"
	.string "Remember, watch out for the spikes!\n"
	.string "You'll need to come back here for\l"
	.string "medical assistance if you do end up\l"
	.string "getting stuck by one!$"
