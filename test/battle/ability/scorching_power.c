#include "global.h"
#include "test/battle.h"

//// Scorching power always raises ATK by two stages when hit by a water type move
/// Scorching power never raises ATK when hit by a non-water type move
//// Scorching power never raises ATK if the water type move did not damage
//// Scorching power does not attempt to raise ATK if the ability-user fainted

SINGLE_BATTLE_TEST("Scorching power always raises ATK sharply when hit by a water-type move")
{
    GIVEN {
        PLAYER(SPECIES_PANPOUR);
        OPPONENT(SPECIES_MANDRASEAR) { Ability(ABILITY_SCORCHING_POWER); }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_SCORCHING_POWER);
        MESSAGE("The opposing Mandrasear's Attack sharply rose!");
    }
}

SINGLE_BATTLE_TEST("Scorching power never raises ATK sharply when hit by a non water-type move")
{
    GIVEN {
        PLAYER(SPECIES_PANPOUR);
        OPPONENT(SPECIES_MANDRASEAR) { Ability(ABILITY_SCORCHING_POWER); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_SCORCHING_POWER);
            MESSAGE("The opposing Mandrasear's Attack sharply rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Scorching power never raises ATK sharply when a water-type move misses")
{
    GIVEN {
        PLAYER(SPECIES_PANPOUR);
        OPPONENT(SPECIES_MANDRASEAR) { Ability(ABILITY_SCORCHING_POWER); MaxHP(1000); HP(1000);  }
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_WATER_GUN, hit: FALSE); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_SCORCHING_POWER);
            MESSAGE("The opposing Mandrasear's Attack sharply rose!");
        }
    }
}

SINGLE_BATTLE_TEST("Scorching power does not attempt to raise Attack sharply if ability-user fainted from the water-type move hit")
{
    GIVEN {
        PLAYER(SPECIES_PONGAPOUR);
        OPPONENT(SPECIES_MANDRASEAR) { Ability(ABILITY_SCORCHING_POWER); MaxHP(5); HP(5); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPARKLING_ARIA); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_SCORCHING_POWER);
            MESSAGE("The opposing Mandrasear's Attack sharply rose!");
        }
    }
}
