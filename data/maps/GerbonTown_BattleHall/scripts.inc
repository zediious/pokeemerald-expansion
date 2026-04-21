GerbonTown_BattleHall_MapScripts::
# 12 "data/maps/GerbonTown_BattleHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GerbonBattle_OnResume
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
	map_script_2 VAR_TEMP_6, 0, GerbonBattleHall_CreateCrowdSprites
	.2byte 0


GerbonBattle_OnResume::
# 16 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_ONRESUME_DRAWCROWD, 1
	goto_if_eq GerbonBattle_OnResume_1
	return

GerbonBattle_OnResume_1:
# 18 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 0
# 19 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_CreateCrowdSprites
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchLeft::
# 25 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 28 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 29 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 30 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 34 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 36 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 41 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchRight::
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 47 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 49 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 50 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 51 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 55 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 57 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0
# 63 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_CandaceAndJulia01::
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_0
# 74 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 77 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_1
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_1
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 84 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KLEAVOR, CRY_MODE_NORMAL
# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_KLEAVOR, GerbonTownBattleHall_CandaceAndJulia01_Movement_2
# 88 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_3
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 93 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_KLEAVOR, GerbonTownBattleHall_CandaceAndJulia01_Movement_4
# 96 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 97 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_5
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 102 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 105 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_6
# 107 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_3
# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_7
# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 117 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_KILOWATTREL
# 119 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_4
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag GERBONBATTLEHALL_CANDACE_01_MANTINE
# 128 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONBATTLEHALL_CANDACE_01_MANTINE
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_MANTINE, GerbonTownBattleHall_CandaceAndJulia01_Movement_8
# 130 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 20
# 131 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 132 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 133 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 137 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_JORDANINHOME
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_BATTLEHALL_JORDAN_01
# 139 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_9
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_10
# 143 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 144 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 145 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 2
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_11
# 147 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_PIN
# 148 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 151 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_6
# 164 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 165 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_12
# 166 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_13
# 167 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 168 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 169 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 170 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 171 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
# 172 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitstate
	end


GerbonBattleHall_TournamentBattleTrigger::
# 180 "data/maps/GerbonTown_BattleHall/scripts.pory"
	call GerbonBattleHall_Tournament_RemoveAllTrainers
# 181 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_2
# 188 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_3
# 195 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_4
# 202 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_5
# 210 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_6
GerbonBattleHall_TournamentBattleTrigger_1:
# 216 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentBattle
	return

GerbonBattleHall_TournamentBattleTrigger_2:
# 182 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_MARC
# 183 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER01
# 184 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER01
# 185 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER01
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_3:
# 189 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_CRISTIAN
# 190 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER02
# 191 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER02
# 192 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER02
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_4:
# 196 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRYAN
# 197 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER03
# 198 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER03
# 199 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER03
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_5:
# 204 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 205 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER04
# 206 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER04
# 207 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER04
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_6:
# 211 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_ROXANNE_1
# 212 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER05
# 213 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER05
# 214 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER05
	goto GerbonBattleHall_TournamentBattleTrigger_1


GerbonBattleHall_TournamentBattle::
# 221 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 222 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 223 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 1
# 224 "data/maps/GerbonTown_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_GERBON_TOURNAMENT_OPPONENT
# 225 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_0
# 231 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 232 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 235 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 236 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonBattleHall_TournamentBattle_Movement_0
# 240 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 243 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonBattleHall_TournamentBattle_Movement_1
# 246 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GerbonBattleHall_TournamentBattle_Movement_2
# 249 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 250 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 253 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_1
# 275 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_2
# 297 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattle_3
# 319 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattle_4
# 415 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattle_5
	return

GerbonBattleHall_TournamentBattle_1:
# 254 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MARC
# 255 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER01, TRAINER_MARC, GerbonBattleHall_TournamentBattle_Text_1, GerbonBattleHall_TournamentBattle_Text_2, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_2:
# 276 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_CRISTIAN
# 277 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER02, TRAINER_CRISTIAN, GerbonBattleHall_TournamentBattle_Text_3, GerbonBattleHall_TournamentBattle_Text_4, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_3:
# 298 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRYAN
# 299 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER03, TRAINER_BRYAN, GerbonBattleHall_TournamentBattle_Text_5, GerbonBattleHall_TournamentBattle_Text_6, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_4:
# 320 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 321 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_7
# 323 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 326 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonBattleHall_TournamentBattle_11
# 348 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonBattleHall_TournamentBattle_12
# 370 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_13
# 392 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_14
	return

GerbonBattleHall_TournamentBattle_5:
# 416 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_ROXANNE_1
# 417 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER05, TRAINER_ROXANNE_1, GerbonBattleHall_TournamentBattle_Text_10, GerbonBattleHall_TournamentBattle_Text_11, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_11:
# 327 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 328 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_110_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_12:
# 349 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TREECKO
# 350 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_119_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_13:
# 371 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_103_TORCHIC
# 372 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_103_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_14:
# 393 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TREECKO
# 394 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_110_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonBattleHall_Tournament_RemoveAllTrainers::
# 443 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER01
# 444 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER02
# 445 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER03
# 446 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER04
# 447 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER05
# 450 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER01
# 451 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER02
# 452 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER03
# 453 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER04
# 454 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER05
	return


GerbonBattleHall_TournamentBattleAfter::
# 458 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 459 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 462 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleAfter_2
GerbonBattleHall_TournamentBattleAfter_1:
# 466 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 467 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattleAfter_Text_0
# 473 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 474 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 475 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 476 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 477 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOURNEY_ORGANIZER, MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM
# 478 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 479 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 480 "data/maps/GerbonTown_BattleHall/scripts.pory"
	call GerbonBattleHall_Tournament_RemoveAllTrainers
# 481 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 482 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitstate
# 483 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end

GerbonBattleHall_TournamentBattleAfter_2:
# 463 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentPlayerWon
	goto GerbonBattleHall_TournamentBattleAfter_1


GerbonBattleHall_TournamentPlayerWon::
# 488 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playbgm MUS_CONTEST_WINNER, FALSE
# 489 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 490 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 491 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 492 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 493 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 494 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_DING_DONG
# 495 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 496 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_0
# 503 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 504 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 505 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 7
# 506 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 507 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONTOURNEY_TRAINER05, GerbonBattleHall_TournamentPlayerWon_Movement_0
# 508 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 509 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_1
# 521 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 523 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 524 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 525 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_2, MSGBOX_SIGN
# 526 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 527 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 530 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 531 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_3, MSGBOX_SIGN
# 534 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 535 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 537 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 538 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 539 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_4
# 542 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 544 "data/maps/GerbonTown_BattleHall/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 545 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 547 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 548 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_5
# 553 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 554 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 9
# 555 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 556 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_INTERVIEW01_INTERVIEWCREW
# 557 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 558 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBONTOURNEY_ENABLED
# 559 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBONTOURNEY_DISABLED
# 560 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 561 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 562 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
# 563 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitstate
# 564 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end


GerbonBattleHall_CreateCrowdSprites::
# 570 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 2, 12, 3, direction = DIR_NORTH
# 571 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 1, 3, 12, 3, direction = DIR_NORTH
# 572 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 2, 4, 12, 3, direction = DIR_NORTH
# 573 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 3, 2, 10, 3, direction = DIR_NORTH
# 574 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 4, 4, 10, 3, direction = DIR_NORTH
# 575 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 3, 8, 3, direction = DIR_NORTH
# 576 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 8, 8, 3, direction = DIR_NORTH
# 577 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BUG_CATCHER, 7, 7, 10, 3, direction = DIR_NORTH
# 578 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 8, 8, 10, 3, direction = DIR_NORTH
# 579 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 9, 6, 12, 3, direction = DIR_NORTH
# 580 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 10, 7, 12, 3, direction = DIR_NORTH
# 581 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 11, 8, 12, 3, direction = DIR_NORTH
# 584 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 12, 12, 12, 3, direction = DIR_NORTH
# 585 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 13, 11, 10, 3, direction = DIR_NORTH
# 586 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 14, 13, 10, 3, direction = DIR_NORTH
# 587 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 11, 8, 3, direction = DIR_NORTH
# 588 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 16, 15, 8, 3, direction = DIR_NORTH
# 589 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 17, 16, 8, 3, direction = DIR_NORTH
# 590 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 18, 16, 10, 3, direction = DIR_NORTH
# 591 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 19, 15, 12, 3, direction = DIR_NORTH
# 592 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 20, 16, 12, 3, direction = DIR_NORTH
	return


# 36 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0:
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 37 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 57 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0:
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 58 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_0:
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_1:
# 77 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_right
	step_end

# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_2:
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_right
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_3:
# 90 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 93 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_4:
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 97 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_5:
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_left
	step_end

# 105 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_6:
# 105 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
# 105 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
	step_end

# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_7:
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_left
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	enter_pokeball
	step_end

# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_8:
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	exit_pokeball
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_9:
# 140 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 140 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 140 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 140 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_10:
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_11:
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_down
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 165 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_12:
# 165 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_up
	step_end

# 166 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_13:
# 166 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 166 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 236 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_0:
# 237 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 237 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 237 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 237 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 238 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 243 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_1:
# 244 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 244 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 244 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
	step_end

# 246 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_2:
# 247 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 247 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 247 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 507 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentPlayerWon_Movement_0:
# 507 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 507 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0:
# 28 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Announcer$"

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1:
# 30 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "The match is about to begin!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_0:
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Julia$"

GerbonTownBattleHall_CandaceAndJulia01_Text_1:
# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Kleavor! Use your Rock Slide attack!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_2:
# 107 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Candace$"

GerbonTownBattleHall_CandaceAndJulia01_Text_3:
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "No good! Use your Volt Switch\n"
	.string "Kilowattrel!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_4:
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Alright, now's your time! Go Mantine!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_5:
# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_CandaceAndJulia01_Text_6:
# 151 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{PLAYER}! I didn't mean to surpise\n"
	.string "you!\p"
	.string "... ... ...\p"
	.string "Well, I did, but not in a bad way! I'm glad\n"
	.string "I got to you before the show ended! I\l"
	.string "decided I couldn't let you see your\l"
	.string "first {COLOR RED}Feature Match!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} alone! Are you\l"
	.string "enjoying it so far?\p"
	.string "Let's keep watching!$"

GerbonBattleHall_TournamentBattle_Text_0:
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

GerbonBattleHall_TournamentBattle_Text_1:
# 259 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "We're gonna have a rockin time!$"

GerbonBattleHall_TournamentBattle_Text_2:
# 260 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I've been rocked!$"

GerbonBattleHall_TournamentBattle_Text_3:
# 281 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My Pokemon and I are unstoppable!$"

GerbonBattleHall_TournamentBattle_Text_4:
# 282 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Immovable object, you know how it goes.$"

GerbonBattleHall_TournamentBattle_Text_5:
# 303 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The fruits of my labor will show!$"

GerbonBattleHall_TournamentBattle_Text_6:
# 304 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My fruits!$"

GerbonBattleHall_TournamentBattle_Text_7:
# 321 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{PLAYER}! We both made it to the end!\n"
	.string "It all comes down to this!$"

GerbonBattleHall_TournamentBattle_Text_8:
# 332 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

GerbonBattleHall_TournamentBattle_Text_9:
# 333 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You just keep blowing me away!$"

GerbonBattleHall_TournamentBattle_Text_10:
# 421 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Congratulations on making it this far!\n"
	.string "Unfortunately, I'm going to have to end\l"
	.string "your train here!$"

GerbonBattleHall_TournamentBattle_Text_11:
# 424 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Shows what I know!$"

GerbonBattleHall_TournamentBattleAfter_Text_0:
# 467 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

GerbonBattleHall_TournamentPlayerWon_Text_0:
# 496 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Battle Ace{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, Julia!\p"
	.string "What an unexpected turn of events! The\n"
	.string "crowd can't contain itself!$"

GerbonBattleHall_TournamentPlayerWon_Text_1:
# 509 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I had so much fun! That was an\n"
	.string "amazing battle! I'm sure most would be\l"
	.string "unhappy in my shoes, but I can't stop\l"
	.string "smiling!\p"
	.string "Only a handful of folks have ever\n"
	.string "beaten me before, you should be proud!\l"
	.string "It's clear your Pokemon trust you\l"
	.string "deeply.\p"
	.string "Here is the Palladium Ribbon, the mark\n"
	.string "of your achievement!.$"

GerbonBattleHall_TournamentPlayerWon_Text_2:
# 525 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You got the Palladium Ribbon!$"

GerbonBattleHall_TournamentPlayerWon_Text_3:
# 531 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The level cap has been raised to 25!\p"
	.string "You can now use {COLOR RED}Cut!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

GerbonBattleHall_TournamentPlayerWon_Text_4:
# 539 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Also, here's a little something extra\n"
	.string "from me, I think you'll find some good\l"
	.string "use for it.$"

GerbonBattleHall_TournamentPlayerWon_Text_5:
# 548 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "That move hits nice and hard, and it\n"
	.string "slows down your opponent to boot!\p"
	.string "Anyways, keep on getting better! I know\n"
	.string "you'll make waves around here!$"
