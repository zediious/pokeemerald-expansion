GerbonTown_BattleHall_MapScripts::
# 2 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GerbonTown_BattleHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GerbonTown_BattleHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script_2 VAR_GERBON_TOURNAMENT_STATE, 2, GerbonBattleHall_TournamentBattleTrigger
# 4 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script_2 VAR_GERBON_TOURNAMENT_STATE, 3, GerbonBattleHall_TournamentBattleTrigger
# 5 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script_2 VAR_GERBON_TOURNAMENT_STATE, 4, GerbonBattleHall_TournamentBattleTrigger
# 6 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script_2 VAR_GERBON_TOURNAMENT_STATE, 5, GerbonBattleHall_TournamentBattleTrigger
# 7 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script_2 VAR_GERBON_TOURNAMENT_STATE, 6, GerbonBattleHall_TournamentBattleTrigger
	.2byte 0


GerbonTownBattleHall_EventScript_FirstEnterWatchLeft::
# 13 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 14 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 16 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 17 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 21 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 27 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchRight::
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 33 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 36 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 41 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0
# 47 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 48 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_CandaceAndJulia01::
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 55 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_0
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 61 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_1
# 63 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_1
# 66 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_GOLEM, CRY_MODE_NORMAL
# 69 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_GOLEM, GerbonTownBattleHall_CandaceAndJulia01_Movement_2
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_3
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 77 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_GOLEM, GerbonTownBattleHall_CandaceAndJulia01_Movement_4
# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_5
# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_6
# 91 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_3
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 96 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 97 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_7
# 100 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 103 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_KILOWATTREL
# 105 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 107 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_4
# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag GERBONBATTLEHALL_CANDACE_01_MANTINE
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONBATTLEHALL_CANDACE_01_MANTINE
# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_MANTINE, GerbonTownBattleHall_CandaceAndJulia01_Movement_8
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 20
# 115 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 117 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 120 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_JORDANINHOME
# 122 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_BATTLEHALL_JORDAN_01
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_9
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_10
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 128 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 2
# 130 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_11
# 131 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_PIN
# 132 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 134 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_6
# 148 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 149 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_12
# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_13
# 151 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 152 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 153 "data/maps/GerbonTown_BattleHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 154 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 155 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBON_BATTLEHALL_JORDAN_01
# 156 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 157 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 158 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 159 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1, MAP_OLDALE_TOWN
# 160 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2, MAP_OLDALE_TOWN
# 161 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 162 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
	end


GerbonBattleHall_TournamentBattleTrigger::
# 170 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_2
# 177 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_3
# 184 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_4
# 191 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_5
# 199 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_6
GerbonBattleHall_TournamentBattleTrigger_1:
# 205 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentBattle
	return

GerbonBattleHall_TournamentBattleTrigger_2:
# 171 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_MARC
# 172 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER01
# 173 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER01
# 174 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER01
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_3:
# 178 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_CRISTIAN
# 179 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER02
# 180 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER02
# 181 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER02
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_4:
# 185 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRYAN
# 186 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER03
# 187 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER03
# 188 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER03
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_5:
# 193 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 194 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER04
# 195 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER04
# 196 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER04
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_6:
# 200 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_ROXANNE_1
# 201 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER05
# 202 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER05
# 203 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER05
	goto GerbonBattleHall_TournamentBattleTrigger_1


GerbonBattleHall_TournamentBattle::
# 210 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 211 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 212 "data/maps/GerbonTown_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_GERBON_TOURNAMENT_OPPONENT
# 213 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_0
# 218 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 221 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 222 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonBattleHall_TournamentBattle_Movement_0
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 229 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonBattleHall_TournamentBattle_Movement_1
# 232 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GerbonBattleHall_TournamentBattle_Movement_2
# 235 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 236 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 239 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_1
# 248 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_2
# 257 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattle_3
# 266 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattle_4
# 310 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattle_5
	return

GerbonBattleHall_TournamentBattle_1:
# 240 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MARC
# 241 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MARC, GerbonBattleHall_TournamentBattle_Text_1, GerbonBattleHall_TournamentBattle_Text_2, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_2:
# 249 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_CRISTIAN
# 250 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, GerbonBattleHall_TournamentBattle_Text_3, GerbonBattleHall_TournamentBattle_Text_4, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_3:
# 258 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRYAN
# 259 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, GerbonBattleHall_TournamentBattle_Text_5, GerbonBattleHall_TournamentBattle_Text_6, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_4:
# 267 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 268 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_7
# 270 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 273 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonBattleHall_TournamentBattle_11
# 282 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonBattleHall_TournamentBattle_12
# 291 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_13
# 300 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_14
	return

GerbonBattleHall_TournamentBattle_5:
# 311 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_ROXANNE_1
# 312 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GerbonBattleHall_TournamentBattle_Text_10, GerbonBattleHall_TournamentBattle_Text_11, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_11:
# 274 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 275 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_12:
# 283 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TREECKO
# 284 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_13:
# 292 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_103_TORCHIC
# 293 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_14:
# 301 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TREECKO
# 302 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return


GerbonBattleHall_Tournament_RemoveAllTrainers::
# 325 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER01
# 326 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER02
# 327 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER03
# 328 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER04
# 329 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER05
# 332 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER01
# 333 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER02
# 334 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER03
# 335 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER04
# 336 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER05
	return


GerbonBattleHall_TournamentBattleAfter::
# 340 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 341 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 344 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleAfter_2
GerbonBattleHall_TournamentBattleAfter_1:
# 348 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattleAfter_Text_0
# 354 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 355 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 356 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 357 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOURNEY_ORGANIZER, MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM
# 358 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 359 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 360 "data/maps/GerbonTown_BattleHall/scripts.pory"
	call GerbonBattleHall_Tournament_RemoveAllTrainers
# 361 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 362 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end

GerbonBattleHall_TournamentBattleAfter_2:
# 345 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentPlayerWon
	goto GerbonBattleHall_TournamentBattleAfter_1


GerbonBattleHall_TournamentPlayerWon::
# 367 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 368 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_0
# 374 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 375 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 376 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 7
# 377 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 378 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONTOURNEY_TRAINER05, GerbonBattleHall_TournamentPlayerWon_Movement_0
# 379 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 380 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_1
# 389 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 391 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 392 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 393 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_2, MSGBOX_SIGN
# 394 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 395 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 398 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 399 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_3, MSGBOX_SIGN
# 402 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 403 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 405 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 406 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 407 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_4
# 410 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 412 "data/maps/GerbonTown_BattleHall/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 413 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 415 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 416 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_5
# 421 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 422 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 9
# 423 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 424 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 425 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBONTOURNEY_ENABLED
# 426 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 427 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 428 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
# 429 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end


# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0:
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 23 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0:
# 42 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 42 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 42 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 42 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 42 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 43 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 44 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 55 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_0:
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_1:
# 61 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_right
	step_end

# 69 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_2:
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_right
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_3:
# 74 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 77 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_4:
# 78 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 78 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 78 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_5:
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_left
	step_end

# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_6:
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
	step_end

# 97 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_7:
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_left
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_8:
# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_9:
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_10:
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_11:
# 130 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_down
# 130 "data/maps/GerbonTown_BattleHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 149 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_12:
# 149 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_up
	step_end

# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_13:
# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 222 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_0:
# 223 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 223 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 223 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 223 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 224 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_1:
# 230 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 230 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 230 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
	step_end

# 232 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_2:
# 233 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 233 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 233 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 378 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentPlayerWon_Movement_0:
# 378 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 378 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0:
# 16 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Announcer$"

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1:
# 17 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "The match is about to begin!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_0:
# 63 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Julia$"

GerbonTownBattleHall_CandaceAndJulia01_Text_1:
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Golem! Use your Stone Edge attack!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_2:
# 91 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Candace$"

GerbonTownBattleHall_CandaceAndJulia01_Text_3:
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "No good! Use your Volt Switch\n"
	.string "Kilowattrel!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_4:
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Alright, now's your time! Go Mantine!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_5:
# 134 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_CandaceAndJulia01_Text_6:
# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{PLAYER}! I didn't mean to surpise\n"
	.string "you!\p"
	.string "... ... ...\p"
	.string "Well, I did, but not in a bad way! I'm glad\n"
	.string "I got to you before the show ended! I\l"
	.string "decided I couldn't let you see your\l"
	.string "first {COLOR RED}Exhibition Match!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} alone! Are you\l"
	.string "enjoying it so far?\p"
	.string "Let's keep watching!$"

GerbonBattleHall_TournamentBattle_Text_0:
# 213 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

GerbonBattleHall_TournamentBattle_Text_1:
# 243 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "We're gonna have a rockin time!$"

GerbonBattleHall_TournamentBattle_Text_2:
# 244 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I've been rocked!$"

GerbonBattleHall_TournamentBattle_Text_3:
# 252 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My Pokemon and I are unstoppable!$"

GerbonBattleHall_TournamentBattle_Text_4:
# 253 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Immovable object, you know how it goes.$"

GerbonBattleHall_TournamentBattle_Text_5:
# 261 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The fruits of my labor will show!$"

GerbonBattleHall_TournamentBattle_Text_6:
# 262 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My fruits!$"

GerbonBattleHall_TournamentBattle_Text_7:
# 268 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{PLAYER}! We both made it to the end!\n"
	.string "It all comes down to this!$"

GerbonBattleHall_TournamentBattle_Text_8:
# 277 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

GerbonBattleHall_TournamentBattle_Text_9:
# 278 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You just keep blowing me away!$"

GerbonBattleHall_TournamentBattle_Text_10:
# 314 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Congratulations on making it this far!\n"
	.string "Unfortunately, I'm going to have to end\l"
	.string "your train here!$"

GerbonBattleHall_TournamentBattle_Text_11:
# 317 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Shows what I know!$"

GerbonBattleHall_TournamentBattleAfter_Text_0:
# 348 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

GerbonBattleHall_TournamentPlayerWon_Text_0:
# 368 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Julia!\p"
	.string "They now take the crown! What an upset!$"

GerbonBattleHall_TournamentPlayerWon_Text_1:
# 380 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I had so much fun! That was an\n"
	.string "amazing battle! I'm sure most would be\l"
	.string "unhappy in my shoes, but I can't stop\l"
	.string "smiling!\p"
	.string "You're the new Rep Trainer for Gerbon\n"
	.string "Town! Congratulations! Here is the \l"
	.string "Palladium Ribbon, the mark of your\l"
	.string "status.$"

GerbonBattleHall_TournamentPlayerWon_Text_2:
# 393 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You got the Palladium Ribbon!$"

GerbonBattleHall_TournamentPlayerWon_Text_3:
# 399 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The level cap has been raised to 25!\p"
	.string "You can now use {COLOR RED}Cut!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

GerbonBattleHall_TournamentPlayerWon_Text_4:
# 407 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Also, here's a little something extra\n"
	.string "from me, I think you'll find some good\l"
	.string "use for it.$"

GerbonBattleHall_TournamentPlayerWon_Text_5:
# 416 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "That move hits nice and hard, and it\n"
	.string "slows down your opponent to boot!\p"
	.string "Anyways, keep on getting better! I know\n"
	.string "you'll make waves around here!$"
