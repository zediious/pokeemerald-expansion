#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Frozen Body triggers 1/2 of the time against moves that make contact")
{
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 10; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_FROZEN_BODY);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
        MESSAGE("Wobbuffet got frostbite!");
        STATUS_ICON(player, frostbite: TRUE);
    }
}

SINGLE_BATTLE_TEST("Frozen Body never triggers against moves that don't make contact")
{
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_BULLDOZE); }
        TURN {}
    } SCENE {  
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_FROZEN_BODY);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
            MESSAGE("Wobbuffet got frostbite!");
            STATUS_ICON(player, frostbite: TRUE);
        }  
    }
}

SINGLE_BATTLE_TEST("Frozen Body raises special attack sharply when hit by any grass-type move")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        PLAYER(SPECIES_TREECKO);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_LEAFAGE); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_FROZEN_BODY);
        MESSAGE("The opposing Pongapour's Sp. Atk sharply rose!");
    }
}

SINGLE_BATTLE_TEST("Frozen Body never raises special attack sharply when hit by a non grass-type move")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_PIDGEY);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        NONE_OF {
            MESSAGE("The opposing Pongapour's Sp. Atk sharply rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Frozen Body never causes frostbite if attacker is immune to frostbite")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        ASSUME(MoveMakesContact(MOVE_ICE_BALL));
        PLAYER(SPECIES_REGICE);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_ICE_BALL); }
        TURN {}
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_FROZEN_BODY);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
            MESSAGE("Regice got frostbite!");
            STATUS_ICON(player, frostbite: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Frozen Body never causes frostbite if attacker is immune to contact effects")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_CHIMCHAR) { Ability(ABILITY_LONG_REACH); }
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_FROZEN_BODY);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
            MESSAGE("Chimchar got frostbite!");
            STATUS_ICON(player, frostbite: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Frozen Body never raises special attack sharply if ability-user has a substitute out on hit")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(player, MOVE_LEAFAGE); }
    } SCENE {
        NONE_OF {
            MESSAGE("The opposing Pongapour's Sp. Atk sharply rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Frozen Body never causes frostbite if ability-user has a substitute out on hit")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 20; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_CHIMCHAR) { Ability(ABILITY_LONG_REACH); }
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_FROZEN_BODY);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
            MESSAGE("Chimchar got frostbite!");
            STATUS_ICON(player, frostbite: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Frozen Body can give attacker frostbite and raise ability-user SP ATK sharply at once")
{   
    u32 config, passes, trials;
    PARAMETRIZE { config = GEN_4; passes = 10; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_POISON_POINT);
    GIVEN {
        WITH_CONFIG(B_ABILITY_TRIGGER_CHANCE, config);
        ASSUME(MoveMakesContact(MOVE_BRANCH_POKE));
        PLAYER(SPECIES_TREECKO);
        OPPONENT(SPECIES_PONGAPOUR) { Ability(ABILITY_FROZEN_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_BRANCH_POKE); }
        TURN {}
    } SCENE {
        MESSAGE("The opposing Pongapour's Sp. Atk sharply rose!");
        MESSAGE("Treecko got frostbite!");
    }
}
