#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Photosynthesis always triggers when hit by a fire-type move that doesn't inflict burn")
{
    u32 passes, trials;
    PARAMETRIZE { passes = 18; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); }
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
        MESSAGE("Bonosage used the flames to perform Photosynthesis!");
        NONE_OF {
            MESSAGE("The opposing Bonosage was burned!");
        }
    }
}

SINGLE_BATTLE_TEST("Photosynthesis never triggers when hit by a fire-type move that inflicted a burn")
{
    u32 passes, trials;
    PARAMETRIZE { passes = 2; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); }
    } WHEN {
        TURN { MOVE(player, MOVE_EMBER); }
        TURN {}
    } SCENE {
        MESSAGE("The opposing Bonosage was burned!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
            MESSAGE("Bonosage used the flames to perform Photosynthesis!");
        }
    }
}

SINGLE_BATTLE_TEST("Photosynthesis never triggers when hit by a non fire-type move")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); }
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN {}
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
            MESSAGE("Bonosage used the flames to perform Photosynthesis!");
        }
    }
}

SINGLE_BATTLE_TEST("Photosynthesis heals the ability-user by (moveDamage / 1.5) after damage")
{
    u32 passes, trials;
    s16 damage[6];
    PARAMETRIZE { passes = 18; trials = 20; }
    PASSES_RANDOMLY(passes, trials, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_COMBUSKEN);
        MoveMakesContact(MOVE_FLARE_BLITZ);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); MaxHP(1000); HP(1000); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &damage[0]);
        ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
        MESSAGE("Bonosage used the flames to perform Photosynthesis!");
        EXPECT(((gBattleMons[1].maxHP - damage[0]) - (gBattleMons[1].maxHP - gBattleMons[1].hp) == (damage[0] / 1.5)));
    }
}

SINGLE_BATTLE_TEST("Photosynthesis does not attempt to heal if the ability-user fainted from the fire-type move hit")
{
    GIVEN {
        PLAYER(SPECIES_BLAZIKEN);
        MoveMakesContact(MOVE_FLARE_BLITZ);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); MaxHP(5); HP(5); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
            MESSAGE("Bonosage used the flames to perform Photosynthesis!");
            MESSAGE("The opposing Bonosage was burned!");
        }
    }
}

SINGLE_BATTLE_TEST("Photosynthesis never applies if the fire type move missed")
{
    GIVEN {
        PLAYER(SPECIES_COMBUSKEN);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); }
    } WHEN {
        TURN { MOVE(player, MOVE_FLARE_BLITZ, hit: FALSE); }
    } SCENE {
        EXPECT(gBattleMons[1].maxHP == gBattleMons[1].hp);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
            MESSAGE("Bonosage used the flames to perform Photosynthesis!");
            MESSAGE("The opposing Bonosage was burned!");
        }
    }
}

SINGLE_BATTLE_TEST("Photosynthesis never applies if ability-user has a substitute out on hit")
{   
    GIVEN {
        PLAYER(SPECIES_COMBUSKEN);
        OPPONENT(SPECIES_BONOSAGE) { Ability(ABILITY_PHOTOSYNTHESIS); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(player, MOVE_FLAME_CHARGE); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_PHOTOSYNTHESIS);
            MESSAGE("Bonosage used the flames to perform Photosynthesis!");
        }
    }
}
