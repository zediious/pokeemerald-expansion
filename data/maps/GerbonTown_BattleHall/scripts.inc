GerbonTown_BattleHall_MapScripts::
# 2 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GerbonTown_BattleHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GerbonTown_BattleHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
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

GerbonTown_BattleHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, GerbonBattleHall_CreateCrowdSprites
	.2byte 0


GerbonTownBattleHall_EventScript_FirstEnterWatchLeft::
# 16 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 17 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 19 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 20 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 24 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 25 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0
# 29 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 30 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchRight::
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 36 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 38 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 39 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 43 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 44 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0
# 50 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 51 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_CandaceAndJulia01::
# 57 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_0
# 61 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_1
# 66 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_1
# 69 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KLEAVOR, CRY_MODE_NORMAL
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_KLEAVOR, GerbonTownBattleHall_CandaceAndJulia01_Movement_2
# 75 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_3
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_KLEAVOR, GerbonTownBattleHall_CandaceAndJulia01_Movement_4
# 83 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 84 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_5
# 88 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_6
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_3
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 99 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 100 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_7
# 103 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 106 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 107 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_KILOWATTREL
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_4
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag GERBONBATTLEHALL_CANDACE_01_MANTINE
# 115 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONBATTLEHALL_CANDACE_01_MANTINE
# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_MANTINE, GerbonTownBattleHall_CandaceAndJulia01_Movement_8
# 117 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 20
# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 119 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 120 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_JORDANINHOME
# 125 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_BATTLEHALL_JORDAN_01
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_9
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_10
# 130 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 131 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 132 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 2
# 133 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_11
# 134 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_PIN
# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 137 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_6
# 151 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 152 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_12
# 153 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_13
# 154 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 155 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 156 "data/maps/GerbonTown_BattleHall/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 157 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 158 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBON_BATTLEHALL_JORDAN_01
# 159 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 160 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 161 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 162 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1, MAP_OLDALE_TOWN
# 163 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2, MAP_OLDALE_TOWN
# 164 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 165 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
	end


GerbonBattleHall_TournamentBattleTrigger::
# 173 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_2
# 180 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_3
# 187 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_4
# 194 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_5
# 202 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_6
GerbonBattleHall_TournamentBattleTrigger_1:
# 208 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentBattle
	return

GerbonBattleHall_TournamentBattleTrigger_2:
# 174 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_MARC
# 175 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER01
# 176 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER01
# 177 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER01
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_3:
# 181 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_CRISTIAN
# 182 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER02
# 183 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER02
# 184 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER02
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_4:
# 188 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRYAN
# 189 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER03
# 190 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER03
# 191 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER03
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_5:
# 196 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 197 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER04
# 198 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER04
# 199 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER04
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_6:
# 203 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_ROXANNE_1
# 204 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER05
# 205 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER05
# 206 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER05
	goto GerbonBattleHall_TournamentBattleTrigger_1


GerbonBattleHall_TournamentBattle::
# 213 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 214 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 215 "data/maps/GerbonTown_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_GERBON_TOURNAMENT_OPPONENT
# 216 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_0
# 221 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 224 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonBattleHall_TournamentBattle_Movement_0
# 229 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 232 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonBattleHall_TournamentBattle_Movement_1
# 235 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GerbonBattleHall_TournamentBattle_Movement_2
# 238 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 239 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 242 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_1
# 251 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_2
# 260 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattle_3
# 269 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattle_4
# 313 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattle_5
	return

GerbonBattleHall_TournamentBattle_1:
# 243 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MARC
# 244 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_MARC, GerbonBattleHall_TournamentBattle_Text_1, GerbonBattleHall_TournamentBattle_Text_2, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_2:
# 252 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_CRISTIAN
# 253 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, GerbonBattleHall_TournamentBattle_Text_3, GerbonBattleHall_TournamentBattle_Text_4, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_3:
# 261 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRYAN
# 262 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, GerbonBattleHall_TournamentBattle_Text_5, GerbonBattleHall_TournamentBattle_Text_6, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_4:
# 270 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 271 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_7
# 273 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 276 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonBattleHall_TournamentBattle_11
# 285 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonBattleHall_TournamentBattle_12
# 294 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_13
# 303 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_14
	return

GerbonBattleHall_TournamentBattle_5:
# 314 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_ROXANNE_1
# 315 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, GerbonBattleHall_TournamentBattle_Text_10, GerbonBattleHall_TournamentBattle_Text_11, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_11:
# 277 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 278 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_12:
# 286 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TREECKO
# 287 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_13:
# 295 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_103_TORCHIC
# 296 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return

GerbonBattleHall_TournamentBattle_14:
# 304 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TREECKO
# 305 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, event_script = GerbonBattleHall_TournamentBattleAfter
	return


GerbonBattleHall_Tournament_RemoveAllTrainers::
# 328 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER01
# 329 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER02
# 330 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER03
# 331 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER04
# 332 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER05
# 335 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER01
# 336 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER02
# 337 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER03
# 338 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER04
# 339 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER05
	return


GerbonBattleHall_TournamentBattleAfter::
# 343 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 344 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 347 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleAfter_2
GerbonBattleHall_TournamentBattleAfter_1:
# 351 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattleAfter_Text_0
# 357 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 358 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 359 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 360 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOURNEY_ORGANIZER, MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM
# 361 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 362 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 363 "data/maps/GerbonTown_BattleHall/scripts.pory"
	call GerbonBattleHall_Tournament_RemoveAllTrainers
# 364 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 365 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end

GerbonBattleHall_TournamentBattleAfter_2:
# 348 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentPlayerWon
	goto GerbonBattleHall_TournamentBattleAfter_1


GerbonBattleHall_TournamentPlayerWon::
# 370 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 371 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_0
# 377 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 378 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 379 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 7
# 380 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 381 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONTOURNEY_TRAINER05, GerbonBattleHall_TournamentPlayerWon_Movement_0
# 382 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 383 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_1
# 392 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 394 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 395 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 396 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_2, MSGBOX_SIGN
# 397 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 398 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 401 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 402 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_3, MSGBOX_SIGN
# 405 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 406 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 408 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 409 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 410 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_4
# 413 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 415 "data/maps/GerbonTown_BattleHall/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 416 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 418 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 419 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_5
# 424 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 425 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 9
# 426 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 427 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 428 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBONTOURNEY_ENABLED
# 429 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 430 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 431 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
# 432 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end


GerbonBattleHall_CreateCrowdSprites::
# 437 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_TEMP_5, 1
# 440 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 2, 12, 3, direction = DIR_NORTH
# 441 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 0, 3, 12, 3, direction = DIR_NORTH
# 442 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 0, 4, 12, 3, direction = DIR_NORTH
# 443 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 0, 2, 10, 3, direction = DIR_NORTH
# 444 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 0, 4, 10, 3, direction = DIR_NORTH
# 445 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 0, 3, 8, 3, direction = DIR_NORTH
# 446 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 0, 8, 8, 3, direction = DIR_NORTH
# 447 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BUG_CATCHER, 0, 7, 10, 3, direction = DIR_NORTH
# 448 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 0, 8, 10, 3, direction = DIR_NORTH
# 449 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 0, 6, 12, 3, direction = DIR_NORTH
# 450 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 0, 7, 12, 3, direction = DIR_NORTH
# 451 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 0, 8, 12, 3, direction = DIR_NORTH
# 454 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 0, 12, 12, 3, direction = DIR_NORTH
# 455 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 0, 11, 10, 3, direction = DIR_NORTH
# 456 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 0, 13, 10, 3, direction = DIR_NORTH
# 457 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 0, 11, 8, 3, direction = DIR_NORTH
# 458 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 15, 8, 3, direction = DIR_NORTH
# 459 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 0, 16, 8, 3, direction = DIR_NORTH
# 460 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 0, 16, 10, 3, direction = DIR_NORTH
# 461 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 0, 15, 12, 3, direction = DIR_NORTH
# 462 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 0, 16, 12, 3, direction = DIR_NORTH
	return


# 25 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0:
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0:
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 47 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_0:
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_1:
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_right
	step_end

# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_2:
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_right
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_3:
# 77 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_4:
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 84 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_5:
# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_left
	step_end

# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_6:
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
	step_end

# 100 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_7:
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_left
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_8:
# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_9:
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_10:
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_11:
# 133 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_down
# 133 "data/maps/GerbonTown_BattleHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 152 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_12:
# 152 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_up
	step_end

# 153 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_13:
# 153 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 153 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 225 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_0:
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 227 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_1:
# 233 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 233 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 233 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_2:
# 236 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 236 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 236 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 381 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentPlayerWon_Movement_0:
# 381 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 381 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0:
# 19 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Announcer$"

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1:
# 20 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "The match is about to begin!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_0:
# 66 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Julia$"

GerbonTownBattleHall_CandaceAndJulia01_Text_1:
# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Kleavor! Use your Rock Slide attack!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_2:
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Candace$"

GerbonTownBattleHall_CandaceAndJulia01_Text_3:
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "No good! Use your Volt Switch\n"
	.string "Kilowattrel!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_4:
# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Alright, now's your time! Go Mantine!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_5:
# 137 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_CandaceAndJulia01_Text_6:
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
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
# 216 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

GerbonBattleHall_TournamentBattle_Text_1:
# 246 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "We're gonna have a rockin time!$"

GerbonBattleHall_TournamentBattle_Text_2:
# 247 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I've been rocked!$"

GerbonBattleHall_TournamentBattle_Text_3:
# 255 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My Pokemon and I are unstoppable!$"

GerbonBattleHall_TournamentBattle_Text_4:
# 256 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Immovable object, you know how it goes.$"

GerbonBattleHall_TournamentBattle_Text_5:
# 264 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The fruits of my labor will show!$"

GerbonBattleHall_TournamentBattle_Text_6:
# 265 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My fruits!$"

GerbonBattleHall_TournamentBattle_Text_7:
# 271 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{PLAYER}! We both made it to the end!\n"
	.string "It all comes down to this!$"

GerbonBattleHall_TournamentBattle_Text_8:
# 280 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

GerbonBattleHall_TournamentBattle_Text_9:
# 281 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You just keep blowing me away!$"

GerbonBattleHall_TournamentBattle_Text_10:
# 317 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Congratulations on making it this far!\n"
	.string "Unfortunately, I'm going to have to end\l"
	.string "your train here!$"

GerbonBattleHall_TournamentBattle_Text_11:
# 320 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Shows what I know!$"

GerbonBattleHall_TournamentBattleAfter_Text_0:
# 351 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

GerbonBattleHall_TournamentPlayerWon_Text_0:
# 371 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Julia!\p"
	.string "They now take the crown! What an upset!$"

GerbonBattleHall_TournamentPlayerWon_Text_1:
# 383 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I had so much fun! That was an\n"
	.string "amazing battle! I'm sure most would be\l"
	.string "unhappy in my shoes, but I can't stop\l"
	.string "smiling!\p"
	.string "You're the new Rep Trainer for Gerbon\n"
	.string "Town! Congratulations! Here is the \l"
	.string "Palladium Ribbon, the mark of your\l"
	.string "status.$"

GerbonBattleHall_TournamentPlayerWon_Text_2:
# 396 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You got the Palladium Ribbon!$"

GerbonBattleHall_TournamentPlayerWon_Text_3:
# 402 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The level cap has been raised to 25!\p"
	.string "You can now use {COLOR RED}Cut!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

GerbonBattleHall_TournamentPlayerWon_Text_4:
# 410 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Also, here's a little something extra\n"
	.string "from me, I think you'll find some good\l"
	.string "use for it.$"

GerbonBattleHall_TournamentPlayerWon_Text_5:
# 419 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "That move hits nice and hard, and it\n"
	.string "slows down your opponent to boot!\p"
	.string "Anyways, keep on getting better! I know\n"
	.string "you'll make waves around here!$"
