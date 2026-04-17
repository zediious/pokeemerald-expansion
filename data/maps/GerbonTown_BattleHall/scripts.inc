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
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 33 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 34 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0
# 38 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 39 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchRight::
# 44 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 47 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 48 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1
# 52 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 53 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 60 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_CandaceAndJulia01::
# 66 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_0
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_1
# 75 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_1
# 78 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KLEAVOR, CRY_MODE_NORMAL
# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_KLEAVOR, GerbonTownBattleHall_CandaceAndJulia01_Movement_2
# 84 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_3
# 88 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_KLEAVOR, GerbonTownBattleHall_CandaceAndJulia01_Movement_4
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 93 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_5
# 97 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_6
# 103 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_3
# 107 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 109 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_7
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 115 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 116 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_KILOWATTREL
# 117 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 119 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 120 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_4
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag GERBONBATTLEHALL_CANDACE_01_MANTINE
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONBATTLEHALL_CANDACE_01_MANTINE
# 125 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_MANTINE, GerbonTownBattleHall_CandaceAndJulia01_Movement_8
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 20
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 128 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 132 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 133 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_JORDANINHOME
# 134 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_BATTLEHALL_JORDAN_01
# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_9
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_10
# 139 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 140 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 141 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 2
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_11
# 143 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_PIN
# 144 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 147 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_6
# 160 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 161 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonTownBattleHall_CandaceAndJulia01_Movement_12
# 162 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_13
# 163 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 164 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 165 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 166 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 167 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
# 168 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitstate
	end


GerbonBattleHall_TournamentBattleTrigger::
# 176 "data/maps/GerbonTown_BattleHall/scripts.pory"
	call GerbonBattleHall_Tournament_RemoveAllTrainers
# 177 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_2
# 184 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_3
# 191 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_4
# 198 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_5
# 206 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_6
GerbonBattleHall_TournamentBattleTrigger_1:
# 212 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentBattle
	return

GerbonBattleHall_TournamentBattleTrigger_2:
# 178 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_MARC
# 179 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER01
# 180 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER01
# 181 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER01
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_3:
# 185 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_CRISTIAN
# 186 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER02
# 187 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER02
# 188 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER02
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_4:
# 192 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRYAN
# 193 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER03
# 194 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER03
# 195 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER03
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_5:
# 200 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 201 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER04
# 202 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER04
# 203 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER04
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_6:
# 207 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_ROXANNE_1
# 208 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GERBONTOURNEY_TRAINER05
# 209 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER05
# 210 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER05
	goto GerbonBattleHall_TournamentBattleTrigger_1


GerbonBattleHall_TournamentBattle::
# 217 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 218 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 219 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ONRESUME_DRAWCROWD, 1
# 220 "data/maps/GerbonTown_BattleHall/scripts.pory"
	buffertrainername STR_VAR_1, VAR_GERBON_TOURNAMENT_OPPONENT
# 221 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_0
# 226 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 229 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 230 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonBattleHall_TournamentBattle_Movement_0
# 234 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 237 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GerbonBattleHall_TournamentBattle_Movement_1
# 240 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement VAR_GERBON_TOURNAMENT_OPPONENT_LOCAL, GerbonBattleHall_TournamentBattle_Movement_2
# 243 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 244 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 247 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_1
# 269 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_2
# 291 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattle_3
# 313 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattle_4
# 409 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattle_5
	return

GerbonBattleHall_TournamentBattle_1:
# 248 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_MARC
# 249 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER01, TRAINER_MARC, GerbonBattleHall_TournamentBattle_Text_1, GerbonBattleHall_TournamentBattle_Text_2, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_2:
# 270 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_CRISTIAN
# 271 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER02, TRAINER_CRISTIAN, GerbonBattleHall_TournamentBattle_Text_3, GerbonBattleHall_TournamentBattle_Text_4, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_3:
# 292 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRYAN
# 293 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER03, TRAINER_BRYAN, GerbonBattleHall_TournamentBattle_Text_5, GerbonBattleHall_TournamentBattle_Text_6, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_4:
# 314 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 315 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattle_Text_7
# 317 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 320 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonBattleHall_TournamentBattle_11
# 342 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonBattleHall_TournamentBattle_12
# 364 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonBattleHall_TournamentBattle_13
# 386 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonBattleHall_TournamentBattle_14
	return

GerbonBattleHall_TournamentBattle_5:
# 410 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_ROXANNE_1
# 411 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER05, TRAINER_ROXANNE_1, GerbonBattleHall_TournamentBattle_Text_10, GerbonBattleHall_TournamentBattle_Text_11, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_11:
# 321 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TORCHIC
# 322 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_110_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_12:
# 343 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_119_TREECKO
# 344 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_119_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_13:
# 365 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_103_TORCHIC
# 366 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_103_TORCHIC, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return

GerbonBattleHall_TournamentBattle_14:
# 387 "data/maps/GerbonTown_BattleHall/scripts.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_110_TREECKO
# 388 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, GERBONTOURNEY_TRAINER04, TRAINER_BRENDAN_ROUTE_110_TREECKO, GerbonBattleHall_TournamentBattle_Text_8, GerbonBattleHall_TournamentBattle_Text_9, GerbonBattleHall_TournamentBattleAfter, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	return


GerbonBattleHall_Tournament_RemoveAllTrainers::
# 437 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER01
# 438 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER02
# 439 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER03
# 440 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER04
# 441 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONTOURNEY_TRAINER05
# 444 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER01
# 445 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER02
# 446 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER03
# 447 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER04
# 448 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_TOURNEY_TRAINER05
	return


GerbonBattleHall_TournamentBattleAfter::
# 452 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 453 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 456 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleAfter_2
GerbonBattleHall_TournamentBattleAfter_1:
# 460 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattleAfter_Text_0
# 466 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 467 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 468 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 469 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOURNEY_ORGANIZER, MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM
# 470 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 471 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 472 "data/maps/GerbonTown_BattleHall/scripts.pory"
	call GerbonBattleHall_Tournament_RemoveAllTrainers
# 473 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 474 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitstate
# 475 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end

GerbonBattleHall_TournamentBattleAfter_2:
# 457 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentPlayerWon
	goto GerbonBattleHall_TournamentBattleAfter_1


GerbonBattleHall_TournamentPlayerWon::
# 480 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 481 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_0
# 487 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 488 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 489 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 7
# 490 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 491 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONTOURNEY_TRAINER05, GerbonBattleHall_TournamentPlayerWon_Movement_0
# 492 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 493 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_1
# 502 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 504 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 505 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 506 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_2, MSGBOX_SIGN
# 507 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 508 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 511 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 512 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_3, MSGBOX_SIGN
# 515 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 516 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 518 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 519 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 520 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_4
# 523 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 525 "data/maps/GerbonTown_BattleHall/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 526 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 528 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setspeaker GerbonTownBattleHall_CandaceAndJulia01_Text_5
# 529 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_5
# 534 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 535 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 9
# 536 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 537 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 538 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBONTOURNEY_ENABLED
# 539 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 540 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 541 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 14
# 542 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitstate
# 543 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end


GerbonBattleHall_CreateCrowdSprites::
# 549 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_MAN, 0, 2, 12, 3, direction = DIR_NORTH
# 550 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_OLD_WOMAN, 1, 3, 12, 3, direction = DIR_NORTH
# 551 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_COOK, 2, 4, 12, 3, direction = DIR_NORTH
# 552 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RICH_BOY, 3, 2, 10, 3, direction = DIR_NORTH
# 553 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_TWIN, 4, 4, 10, 3, direction = DIR_NORTH
# 554 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_M, 5, 3, 8, 3, direction = DIR_NORTH
# 555 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_PSYCHIC_M, 6, 8, 8, 3, direction = DIR_NORTH
# 556 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BUG_CATCHER, 7, 7, 10, 3, direction = DIR_NORTH
# 557 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 8, 8, 10, 3, direction = DIR_NORTH
# 558 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 9, 6, 12, 3, direction = DIR_NORTH
# 559 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 10, 7, 12, 3, direction = DIR_NORTH
# 560 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 11, 8, 12, 3, direction = DIR_NORTH
# 563 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 12, 12, 12, 3, direction = DIR_NORTH
# 564 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 13, 11, 10, 3, direction = DIR_NORTH
# 565 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 14, 13, 10, 3, direction = DIR_NORTH
# 566 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 11, 8, 3, direction = DIR_NORTH
# 567 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 16, 15, 8, 3, direction = DIR_NORTH
# 568 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 17, 16, 8, 3, direction = DIR_NORTH
# 569 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 18, 16, 10, 3, direction = DIR_NORTH
# 570 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 19, 15, 12, 3, direction = DIR_NORTH
# 571 "data/maps/GerbonTown_BattleHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_F, 20, 16, 12, 3, direction = DIR_NORTH
	return


# 34 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0:
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 35 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0:
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 55 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_0:
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_1:
# 73 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_right
	step_end

# 81 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_2:
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_right
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 82 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 85 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_3:
# 86 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_4:
# 90 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 90 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 90 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 93 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_5:
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_left
	step_end

# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_6:
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
	step_end

# 109 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_7:
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_left
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 125 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_8:
# 125 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 135 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_9:
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 136 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_10:
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 138 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_11:
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_down
# 142 "data/maps/GerbonTown_BattleHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 161 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_12:
# 161 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_up
	step_end

# 162 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_13:
# 162 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 162 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 230 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_0:
# 231 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 231 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 231 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 231 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 232 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_1:
# 238 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 238 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 238 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
	step_end

# 240 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentBattle_Movement_2:
# 241 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 241 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 241 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 491 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentPlayerWon_Movement_0:
# 491 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 491 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0:
# 28 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Announcer$"

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_1:
# 29 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "The match is about to begin!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_0:
# 75 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Julia$"

GerbonTownBattleHall_CandaceAndJulia01_Text_1:
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Kleavor! Use your Rock Slide attack!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_2:
# 103 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Candace$"

GerbonTownBattleHall_CandaceAndJulia01_Text_3:
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "No good! Use your Volt Switch\n"
	.string "Kilowattrel!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_4:
# 120 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Alright, now's your time! Go Mantine!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_5:
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Jordan$"

GerbonTownBattleHall_CandaceAndJulia01_Text_6:
# 147 "data/maps/GerbonTown_BattleHall/scripts.pory"
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
# 221 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Avid battlers, step up!\p"
	.string "{PLAYER} VS {STR_VAR_1}!$"

GerbonBattleHall_TournamentBattle_Text_1:
# 253 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "We're gonna have a rockin time!$"

GerbonBattleHall_TournamentBattle_Text_2:
# 254 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I've been rocked!$"

GerbonBattleHall_TournamentBattle_Text_3:
# 275 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My Pokemon and I are unstoppable!$"

GerbonBattleHall_TournamentBattle_Text_4:
# 276 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Immovable object, you know how it goes.$"

GerbonBattleHall_TournamentBattle_Text_5:
# 297 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The fruits of my labor will show!$"

GerbonBattleHall_TournamentBattle_Text_6:
# 298 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "My fruits!$"

GerbonBattleHall_TournamentBattle_Text_7:
# 315 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{PLAYER}! We both made it to the end!\n"
	.string "It all comes down to this!$"

GerbonBattleHall_TournamentBattle_Text_8:
# 326 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Don't hold back, because I wont!$"

GerbonBattleHall_TournamentBattle_Text_9:
# 327 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You just keep blowing me away!$"

GerbonBattleHall_TournamentBattle_Text_10:
# 415 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Congratulations on making it this far!\n"
	.string "Unfortunately, I'm going to have to end\l"
	.string "your train here!$"

GerbonBattleHall_TournamentBattle_Text_11:
# 418 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Shows what I know!$"

GerbonBattleHall_TournamentBattleAfter_Text_0:
# 460 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congratulations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

GerbonBattleHall_TournamentPlayerWon_Text_0:
# 481 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Julia!\p"
	.string "They now take the crown! What an upset!$"

GerbonBattleHall_TournamentPlayerWon_Text_1:
# 493 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "I had so much fun! That was an\n"
	.string "amazing battle! I'm sure most would be\l"
	.string "unhappy in my shoes, but I can't stop\l"
	.string "smiling!\p"
	.string "You're the new Rep Trainer for Gerbon\n"
	.string "Town! Congratulations! Here is the \l"
	.string "Palladium Ribbon, the mark of your\l"
	.string "status.$"

GerbonBattleHall_TournamentPlayerWon_Text_2:
# 506 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "You got the Palladium Ribbon!$"

GerbonBattleHall_TournamentPlayerWon_Text_3:
# 512 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The level cap has been raised to 25!\p"
	.string "You can now use {COLOR RED}Cut!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

GerbonBattleHall_TournamentPlayerWon_Text_4:
# 520 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "Also, here's a little something extra\n"
	.string "from me, I think you'll find some good\l"
	.string "use for it.$"

GerbonBattleHall_TournamentPlayerWon_Text_5:
# 529 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "That move hits nice and hard, and it\n"
	.string "slows down your opponent to boot!\p"
	.string "Anyways, keep on getting better! I know\n"
	.string "you'll make waves around here!$"
