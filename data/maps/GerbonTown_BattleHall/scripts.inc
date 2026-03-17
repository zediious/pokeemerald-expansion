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
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 20 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 21 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0
# 25 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 26 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_EventScript_FirstEnterWatchRight::
# 31 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 32 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_BATTLEHALL_CANDACEJULIA01_TRIGGER, 1
# 34 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0
# 38 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 39 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0
# 45 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 46 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonTownBattleHall_CandaceAndJulia01
	return


GerbonTownBattleHall_CandaceAndJulia01::
# 52 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special SpawnCameraObject
# 53 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_0
# 56 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_1
# 61 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_0
# 64 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 66 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_GOLEM, CRY_MODE_NORMAL
# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_GOLEM, GerbonTownBattleHall_CandaceAndJulia01_Movement_2
# 70 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_3
# 74 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 75 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_JULIA_01_GOLEM, GerbonTownBattleHall_CandaceAndJulia01_Movement_4
# 78 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_5
# 83 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 84 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_6
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_1
# 92 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 93 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_KILOWATTREL, CRY_MODE_NORMAL
# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_KILOWATTREL, GerbonTownBattleHall_CandaceAndJulia01_Movement_7
# 97 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 98 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 100 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_CANDACE01_MON
# 101 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBONBATTLEHALL_CANDACE_01_KILOWATTREL
# 102 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_2
# 108 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag GERBONBATTLEHALL_CANDACE_01_MANTINE
# 109 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONBATTLEHALL_CANDACE_01_MANTINE
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONBATTLEHALL_CANDACE_01_MANTINE, GerbonTownBattleHall_CandaceAndJulia01_Movement_8
# 111 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 20
# 112 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 113 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmoncry
# 114 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 117 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 118 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_JORDANINHOME
# 119 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_BATTLEHALL_JORDAN_01
# 120 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement LOCALID_CAMERA, GerbonTownBattleHall_CandaceAndJulia01_Movement_9
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_10
# 124 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 125 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 126 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 2
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_CandaceAndJulia01_Movement_11
# 128 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playse SE_PIN
# 129 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 131 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonTownBattleHall_CandaceAndJulia01_Text_3
# 144 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 145 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement 0xFF, GerbonTownBattleHall_CandaceAndJulia01_Movement_12
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBON_BATTLEHALL_JORDAN_01, GerbonTownBattleHall_CandaceAndJulia01_Movement_13
# 147 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 148 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 149 "data/maps/GerbonTown_BattleHall/scripts.pory"
	fadescreen FADE_TO_BLACK
# 150 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_BATTLEHALL_JORDAN01
# 151 "data/maps/GerbonTown_BattleHall/scripts.pory"
	removeobject GERBON_BATTLEHALL_JORDAN_01
# 152 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 153 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_TOWN_JORDAN_FIRSTBATTLE, MAP_OLDALE_TOWN
# 154 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 155 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_1, MAP_OLDALE_TOWN
# 156 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBON_PALLADIUM_BLOCKER_2, MAP_OLDALE_TOWN
# 157 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 158 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 10
	end


GerbonBattleHall_TournamentBattleTrigger::
# 166 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 2
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_2
# 172 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 3
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_3
# 178 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 4
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_4
# 184 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 5
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_5
# 203 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_6
GerbonBattleHall_TournamentBattleTrigger_1:
# 208 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentBattle
	return

GerbonBattleHall_TournamentBattleTrigger_2:
# 167 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_MARC
# 168 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER01
# 169 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER01
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_3:
# 173 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_CRISTIAN
# 174 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER02
# 175 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER02
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_4:
# 179 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRYAN
# 180 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER03
# 181 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER03
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_5:
# 187 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_13
# 190 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_14
# 193 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_15
# 196 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq GerbonBattleHall_TournamentBattleTrigger_16
GerbonBattleHall_TournamentBattleTrigger_12:
# 199 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER04
# 200 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER04
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_6:
# 204 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_ROXANNE_1
# 205 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOURNEY_TRAINER05
# 206 "data/maps/GerbonTown_BattleHall/scripts.pory"
	addobject GERBONTOURNEY_TRAINER05
	goto GerbonBattleHall_TournamentBattleTrigger_1

GerbonBattleHall_TournamentBattleTrigger_13:
# 188 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_110_TORCHIC
	goto GerbonBattleHall_TournamentBattleTrigger_12

GerbonBattleHall_TournamentBattleTrigger_14:
# 191 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_119_TREECKO
	goto GerbonBattleHall_TournamentBattleTrigger_12

GerbonBattleHall_TournamentBattleTrigger_15:
# 194 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_103_TORCHIC
	goto GerbonBattleHall_TournamentBattleTrigger_12

GerbonBattleHall_TournamentBattleTrigger_16:
# 197 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_OPPONENT, TRAINER_BRENDAN_ROUTE_110_TREECKO
	goto GerbonBattleHall_TournamentBattleTrigger_12


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
	applymovement 0xFF, GerbonBattleHall_TournamentBattle_Movement_1
# 235 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONTOURNEY_TRAINER01, GerbonBattleHall_TournamentBattle_Movement_2
# 238 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmovement
# 239 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 242 "data/maps/GerbonTown_BattleHall/scripts.pory"
	trainerbattle_single VAR_GERBON_TOURNAMENT_OPPONENT, GerbonBattleHall_TournamentBattle_Text_1, GerbonBattleHall_TournamentBattle_Text_2, GerbonBattleHall_TournamentBattleAfter
	end


GerbonBattleHall_TournamentBattleAfter::
# 247 "data/maps/GerbonTown_BattleHall/scripts.pory"
	lock
# 248 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 60
# 250 "data/maps/GerbonTown_BattleHall/scripts.pory"
	compare VAR_GERBON_TOURNAMENT_STATE, 6
	goto_if_eq GerbonBattleHall_TournamentBattleAfter_2
GerbonBattleHall_TournamentBattleAfter_1:
# 254 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentBattleAfter_Text_0
# 260 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 261 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 262 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitse
# 263 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_GERBON_TOWN_BATTLE_HALL_PREP_ROOM, 4, 5
# 264 "data/maps/GerbonTown_BattleHall/scripts.pory"
	special RemoveCameraObject
# 265 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end

GerbonBattleHall_TournamentBattleAfter_2:
# 251 "data/maps/GerbonTown_BattleHall/scripts.pory"
	goto GerbonBattleHall_TournamentPlayerWon
	goto GerbonBattleHall_TournamentBattleAfter_1


GerbonBattleHall_TournamentPlayerWon::
# 270 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_0
# 276 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 277 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare SE_APPLAUSE
# 278 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_GERBON_TOURNAMENT_STATE, 7
# 279 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 280 "data/maps/GerbonTown_BattleHall/scripts.pory"
	applymovement GERBONTOURNEY_TRAINER05, GerbonBattleHall_TournamentPlayerWon_Movement_0
# 281 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_1
# 290 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 292 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_BADGE01_GET
# 293 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 294 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 296 "data/maps/GerbonTown_BattleHall/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 299 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitfanfare
# 300 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_2, MSGBOX_SIGN
# 302 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 303 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 304 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_3
# 307 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 309 "data/maps/GerbonTown_BattleHall/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB, 1
# 310 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 312 "data/maps/GerbonTown_BattleHall/scripts.pory"
	msgbox GerbonBattleHall_TournamentPlayerWon_Text_4
# 317 "data/maps/GerbonTown_BattleHall/scripts.pory"
	waitmessage
# 318 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setvar VAR_ZED_STORY_TRACKER, 9
# 319 "data/maps/GerbonTown_BattleHall/scripts.pory"
	delay 30
# 320 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_BLOCKERS
# 321 "data/maps/GerbonTown_BattleHall/scripts.pory"
	setflag FLAG_GERBON_JORDAN_TOURNEY_OUTSIDE
# 322 "data/maps/GerbonTown_BattleHall/scripts.pory"
	clearflag FLAG_GERBON_TOWN_JORDAN_FIRSTBATTLE
# 323 "data/maps/GerbonTown_BattleHall/scripts.pory"
	warp MAP_OLDALE_TOWN, 28, 10
# 324 "data/maps/GerbonTown_BattleHall/scripts.pory"
	release
	end


# 21 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Movement_0:
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 22 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_EventScript_FirstEnterWatchRight_Movement_0:
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 40 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 41 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 42 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_0:
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 54 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_1:
# 59 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_right
	step_end

# 67 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_2:
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_right
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_right
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 68 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 71 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_3:
# 72 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 75 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_4:
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 76 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_right
	step_end

# 79 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_5:
# 80 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_left
	step_end

# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_6:
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
# 87 "data/maps/GerbonTown_BattleHall/scripts.pory"
	jump_in_place_left
	step_end

# 94 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_7:
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_fast_left
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_in_place_fast_left
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
# 95 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_faster_right
	step_end

# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_8:
# 110 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

# 120 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_9:
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
# 121 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_down
	step_end

# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_10:
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
# 123 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_up
	step_end

# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_11:
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_down
# 127 "data/maps/GerbonTown_BattleHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 145 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_12:
# 145 "data/maps/GerbonTown_BattleHall/scripts.pory"
	face_up
	step_end

# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonTownBattleHall_CandaceAndJulia01_Movement_13:
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_right
# 146 "data/maps/GerbonTown_BattleHall/scripts.pory"
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

# 280 "data/maps/GerbonTown_BattleHall/scripts.pory"
GerbonBattleHall_TournamentPlayerWon_Movement_0:
# 280 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
# 280 "data/maps/GerbonTown_BattleHall/scripts.pory"
	walk_left
	step_end

GerbonTownBattleHall_EventScript_FirstEnterWatchLeft_Text_0:
# 16 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "The match is about to begin!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_0:
# 61 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Julia: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Golem! Use your\n"
	.string "Stone Edge attack!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_1:
# 89 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}No good! Use your\n"
	.string "U-Turn Kilowattrel!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_2:
# 104 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Candace: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Alright, now is your\n"
	.string "time! Go Mantine!$"

GerbonTownBattleHall_CandaceAndJulia01_Text_3:
# 131 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Jordan: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! I didn't mean to\n"
	.string "surprise you!\p"
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
# 242 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The battle begins!$"

GerbonBattleHall_TournamentBattle_Text_2:
# 242 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "And the winner is {PLAYER}!$"

GerbonBattleHall_TournamentBattleAfter_Text_0:
# 254 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING ...\p"
	.string "Congraguations {PLAYER}! What a\n"
	.string "battle that was!\p"
	.string "The next match will begin soon!$"

GerbonBattleHall_TournamentPlayerWon_Text_0:
# 270 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "DING DING DING DING DING DING\p"
	.string "{PLAYER} has defeated the standing\n"
	.string "{COLOR RED}Representative Trainer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Julia!\p"
	.string "They now take the crown! What an upset!$"

GerbonBattleHall_TournamentPlayerWon_Text_1:
# 281 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Julia: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I had so much fun! That was an\n"
	.string "amazing battle! I'm sure most would be\l"
	.string "unhappy in my shoes, but I can't stop\l"
	.string "smiling!\p"
	.string "You're the new Rep Trainer for Gerbon\n"
	.string "Town! Congratulations! Here is the \l"
	.string "Palladium Ribbon, the mark of your\l"
	.string "status.$"

GerbonBattleHall_TournamentPlayerWon_Text_2:
# 300 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "The level cap has been raised to 23!$"

GerbonBattleHall_TournamentPlayerWon_Text_3:
# 304 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Julia: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Also, here's a little\n"
	.string "something extra from me, I think you'll\l"
	.string "find some good use for it.$"

GerbonBattleHall_TournamentPlayerWon_Text_4:
# 312 "data/maps/GerbonTown_BattleHall/scripts.pory"
	.string "{COLOR GREEN}Julia: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}That move hits nice and hard, and\n"
	.string "it slows down your opponent to boot!\p"
	.string "Anyways, keep on getting better! I know\n"
	.string "you'll make waves around here!$"
