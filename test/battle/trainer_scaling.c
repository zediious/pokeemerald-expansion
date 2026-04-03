#include "global.h"
#include "test/test.h"
#include "test/battle.h"
#include "battle.h"
#include "battle_main.h"
#include "data.h"
#include "malloc.h"
#include "random.h"
#include "string_util.h"
#include "trainer_pools.h"
#include "constants/item.h"
#include "constants/abilities.h"
#include "constants/trainers.h"
#include "constants/battle.h"
#include "constants/battle_ai.h"

// All tests here assume trainer scaling enabled

// All tests give the player an Aipom of varying levels ahead of trainer party
// generation, to simulate desired evolutions. Note that trainer mons scale within
// 4 levels fo the trainer mon level. i.e, The lowest level mon scaled from the player's mon
// being level 40 would be level 36.
//
// There are cases where there's a variable chance for different species to be evolved into. We'll iterate
// a large number of times and ensure that each was selected at least once, breaking when that is the case.
// This could in theory fail, but is VERY unlikely
//
// Note that every test here uses `CreateNPCTrainerPartyForTrainer `

// ---------

//// Test EVO_LEVEL -> !EVO_LEVEL lines such as Geodude -> Graveler -> Golem

// Geodude
TEST("Evolves (EVO_LEVEL -> ! EVO_LEVEL) type evolution to 3rd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 45, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 15;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_GOLEM);
    Free(testParty);
}

// Geodude
TEST("Evolves (EVO_LEVEL -> ! EVO_LEVEL) type evolution lines to 2nd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 39, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 15;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_GRAVELER);
    Free(testParty);
}

// Geodude
TEST("Does not evolve (EVO_LEVEL -> ! EVO_LEVEL) type evolution if level not met for 2nd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 24, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 15;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_GEODUDE);
    Free(testParty);
}

//// Test ! EVO_LEVEL -> EVO_LEVEL lines such as Happiny -> Chansey -> Blissey

// Happiny
TEST("Evolves (! EVO_LEVEL -> EVO_LEVEL) type evolution to 3rd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 25, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 17;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_BLISSEY);
    Free(testParty);
}

// Happiny
TEST("Selects 1st or 2nd stage in (! EVO_LEVEL -> EVO_LEVEL) type evolution if not reaching 3rd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 17, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 17;
    u32 loopCounter = 0;
    u32 stageOneCounter = 0;
    u32 stageTwoCounter = 0;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 100)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_HAPPINY:
                stageOneCounter += 1;
                break;
            case SPECIES_CHANSEY:
                stageTwoCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }
        if ((stageOneCounter > 0) && stageTwoCounter > 0) {break;}

        loopCounter += 1;
    }

    EXPECT(stageOneCounter > 0);
    EXPECT(stageTwoCounter > 0);

    Free(testParty);
}

//// Test EVO_LEVEL -> EVO_LEVEL lines such as Charmander -> Charmeleon -> Charizard

// Charmander
TEST("Evolves (EVO_LEVEL -> EVO_LEVEL) type evolution to 3rd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 40, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 16;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_CHARIZARD);
    Free(testParty);
}

// Charmander
TEST("Evolves (EVO_LEVEL -> EVO_LEVEL) type evolution to 2nd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 20, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 16;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_CHARMELEON);
    Free(testParty);
}

// Charmander
TEST("Does not evolve (EVO_LEVEL -> EVO_LEVEL) type evolution if level not met for 2nd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 15, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 16;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_CHARMANDER);
    Free(testParty);
}

//// Test 2 stage EVO_LEVEL lines such as Hippopotas -> Hippowdon

// Hippopotas
TEST("Evolves 2 stage EVO_LEVEL type evolution to 2rd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 38, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 19;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_HIPPOWDON);
    Free(testParty);
}

// Hippopotas
TEST("Does not evolve 2 stage EVO_LEVEL type evolution if level not met for 2nd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 33, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 19;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_HIPPOPOTAS);
    Free(testParty);
}

//// Test 2 stage ! EVO_LEVEL lines such as Capsakid -> Scovillain

// Capsakid
TEST("Selects either stage in two stage ! EVO_LEVEL type evolution")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 20, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 18;
    u32 loopCounter = 0;
    u32 stageOneCounter = 0;
    u32 stageTwoCounter = 0;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 100)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_CAPSAKID:
                stageOneCounter += 1;
                break;
            case SPECIES_SCOVILLAIN:
                stageTwoCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }
        if ((stageOneCounter > 0) && stageTwoCounter > 0) {break;}

        loopCounter += 1;
    }

    EXPECT(stageOneCounter > 0);
    EXPECT(stageTwoCounter > 0);

    Free(testParty);
}

////// Test different types of divergent/branching evolutions such as Eevee, Tyrogue, Kirlia, Gloom, Applin etc.

//// Test 2 stage evos that have multiple potential divergents, like Eevee and Tyrogue

// Eevee
TEST("Selects Eevee and evos when evolving")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 20, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 20;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    u32 choiceThreeCounter = 0;
    u32 choiceFourCounter = 0;
    u32 choiceFiveCounter = 0;
    u32 choiceSixCounter = 0;
    u32 choiceSevenCounter = 0;
    u32 choiceEightCounter = 0;
    u32 choiceNineCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_VAPOREON:
                choiceOneCounter += 1;
                break;
            case SPECIES_JOLTEON:
                choiceTwoCounter += 1;
                break;
            case SPECIES_FLAREON:
                choiceThreeCounter += 1;
                break;
            case SPECIES_ESPEON:
                choiceFourCounter += 1;
                break;
            case SPECIES_UMBREON:
                choiceFiveCounter += 1;
                break;
            case SPECIES_LEAFEON:
                choiceSixCounter += 1;
                break;
            case SPECIES_GLACEON:
                choiceSevenCounter += 1;
                break;
            case SPECIES_SYLVEON:
                choiceEightCounter += 1;
                break;
            case SPECIES_EEVEE:
                choiceNineCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        if ((choiceOneCounter > 0)   && (choiceTwoCounter > 0)
        &&  (choiceThreeCounter > 0) && (choiceFourCounter > 0)
        &&  (choiceFiveCounter > 0)  && (choiceSixCounter > 0)
        &&  (choiceSevenCounter > 0) && (choiceEightCounter > 0)
        &&  (choiceNineCounter > 0))
        {break;}

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);
    EXPECT(choiceThreeCounter > 0);
    EXPECT(choiceFourCounter > 0);
    EXPECT(choiceFiveCounter > 0);
    EXPECT(choiceSixCounter > 0);
    EXPECT(choiceSevenCounter > 0);
    EXPECT(choiceEightCounter > 0);

    Free(testParty);
}

// Tyrogue
TEST("Tyrogue does not evolve with levelCeil < 20")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 19, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 21;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_HITMONTOP:
                EXPECT(3 > 4); // Indicates a Hitmontop that is <= level 20
                break;
            case SPECIES_HITMONLEE:
                EXPECT(3 > 4); // Indicates a Hitmonlee that is <= level 20
                break;
            case SPECIES_HITMONCHAN:
                EXPECT(3 > 4); // Indicates a Hitmonchan that is <= level 20
                break;
            case SPECIES_TYROGUE:
                choiceOneCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);

    Free(testParty);
}

// Tyrogue
TEST("Selects only evos of Tyrogue when evolving at level >= 20")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 20, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 21;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    u32 choiceThreeCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_HITMONTOP:
                choiceOneCounter += 1;
                break;
            case SPECIES_HITMONLEE:
                choiceTwoCounter += 1;
                break;
            case SPECIES_HITMONCHAN:
                choiceThreeCounter += 1;
                break;
            case SPECIES_TYROGUE:
                EXPECT(3 > 4); // Indicates a Tyrogue that is >= level 20
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);
    EXPECT(choiceThreeCounter > 0);

    Free(testParty);
}

//// Test three stages evos that have a divergence in their !EVO_LEVEL final evo, like Oddish and Ralts lines

// Oddish
TEST("Evolves to either ! EVO_LEVEL 3rd evo in 3 stage evo where 3rd evo is a divergent")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 40, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 22;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_VILEPLUME:
                choiceOneCounter += 1;
                break;
            case SPECIES_BELLOSSOM:
                choiceTwoCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        if ((choiceOneCounter > 0)   && (choiceTwoCounter > 0))
        {break;}

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);

    Free(testParty);
}

// Ralts
TEST("Evolves to either ! EVO_LEVEL or EVO_LEVEL 3rd evo in 3 stage evo where 3rd evo is a divergent and 2nd stage can evolve")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 34, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 29;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_GARDEVOIR:
                choiceOneCounter += 1;
                break;
            case SPECIES_GALLADE:
                choiceTwoCounter += 1;
                break;
            case SPECIES_KIRLIA || SPECIES_RALTS:
                EXPECT(3 > 4); // Indicates a Ralts or Kirlia >= level 30
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);

    Free(testParty);
}

// Ralts
TEST("3 stage line with 3rd stage being divergent ! EVO_LEVEL and EVO_LEVEL only chooses ! EVO_LEVEL or 2nd stage if levelCeil >= 20 and <= 30")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 29, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 29;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_KIRLIA:
                choiceOneCounter += 1;
                break;
            case SPECIES_GALLADE:
                choiceTwoCounter += 1;
                break;
            case SPECIES_GARDEVOIR || SPECIES_RALTS:
                EXPECT(3 > 4); // Indicates a Ralts or Kirlia >= level 30
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);

    Free(testParty);
}

// Ralts
TEST("3 stage line with 3rd stage being divergent ! EVO_LEVEL and EVO_LEVEL only chooses 1st stage if 1st stage cannot evolve to EVO_LEVEL 2nd stage")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 19, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 29;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_RALTS:
                choiceOneCounter += 1;
                break;
            case SPECIES_GARDEVOIR || SPECIES_KIRLIA || SPECIES_GALLADE:
                EXPECT(3 > 4); // Indicates a Ralts or Kirlia >= level 30
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);

    Free(testParty);
}

//// Test three stage evos where all are !EVO_LEVEL, such as Porygon -> Porygon2 -> Porygon-Z

// Porygon
TEST("Selects either ! EVO_LEVEL stage or does not evolve when all stages of 3 stage evo are ! EVO_LEVEL")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 40, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 27;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    u32 choiceThreeCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_PORYGON:
                choiceOneCounter += 1;
                break;
            case SPECIES_PORYGON2:
                choiceTwoCounter += 1;
                break;
            case SPECIES_PORYGON_Z:
                choiceThreeCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        if ((choiceOneCounter > 0) && (choiceTwoCounter > 0) && (choiceThreeCounter > 0))
        {break;}

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);
    EXPECT(choiceThreeCounter > 0);

    Free(testParty);
}

//// These tests are for Nincada, evolves to either Nijask or Shedinja 50% of the time

// Nincada
TEST("Evolves Shedinja or Ninjask from Nincada when player level ceiling >= 20")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 24, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 23;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_SPECIES)) {
            case SPECIES_NINJASK:
                choiceOneCounter += 1;
                break;
            case SPECIES_SHEDINJA:
                choiceTwoCounter += 1;
                break;

            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        if ((choiceOneCounter > 0)   && (choiceTwoCounter > 0))
        {break;}

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);

    Free(testParty);
}

// Nincada
TEST("Does not evolve Shedinja or Ninjask from Nincada when player level ceiling <= 20")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 19, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 23;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_NINCADA);
    Free(testParty);
}

////// These tests are regarding the level scaling itself.

TEST("Will never scale trainer mon level to player ceiling if more than one mon is in trainer party")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 24, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 24;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    u32 choiceThreeCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        // Even though the party in this test is two mons, we only needed to do so to trigger
        // the level spacing. One mon sets to levelCeil always. So we only check one mon.
        switch (GetMonData(&testParty[0], MON_DATA_LEVEL)) {
            case 23:
                choiceOneCounter += 1;
                break;
            case 22:
                choiceTwoCounter += 1;
                break;
            case 21:
                choiceThreeCounter += 1;
                break;

            default:
                EXPECT(1 > 2); // Indicates the level was out of range
        }

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);
    EXPECT(choiceThreeCounter > 0);

    Free(testParty);
}

TEST("Will always scale trainer mon level to player ceiling if trainer only has one mon in party")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 67, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 23;
    u32 loopCounter = 0;
    u32 choiceCounter = 0;
    
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);

    while (loopCounter < 200)
    {   
        CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
        switch (GetMonData(&testParty[0], MON_DATA_LEVEL)) {
            case 67:
                choiceCounter += 1;
                break;

            default:
                EXPECT(1 > 2); // Indicates the level was out of range
        }

        loopCounter += 1;
    }

    EXPECT(choiceCounter > 0);

    Free(testParty);
}

TEST("Will never lower a trainer mon level, and will not evolve them if so")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 25, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 28;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) == 70);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_TORCHIC);
    Free(testParty);
}

TEST("Will not scale trainer mons if player level ceiling < 10")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 9, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 25;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) == 1);
    Free(testParty);
}

TEST("Will not evolve Pokemon holding an Everstone or Eviolite, but will scale them")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 50, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 26;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) > 45);
    EXPECT(GetMonData(&testParty[1], MON_DATA_LEVEL) > 45);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) < 50);
    EXPECT(GetMonData(&testParty[1], MON_DATA_LEVEL) < 50);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_SQUIRTLE);
    EXPECT(GetMonData(&testParty[1], MON_DATA_SPECIES) == SPECIES_SQUIRTLE);
    Free(testParty);
}

//// These tests verify that exclusion flags are properly handled

TEST("FLAG_SCALING_EXCLUDE_SCALE being set prevents Pokemon from scaling at all")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 90, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    FLAG_SET(FLAG_SCALING_EXCLUDE_SCALE);

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 16;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) == 5);
    Free(testParty);
}

TEST("FLAG_SCALING_EXCLUDE_EVO being set allows Pokemon to scale, but it cannot evolve")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 90, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    FLAG_SET(FLAG_SCALING_EXCLUDE_EVO);

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 16;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) == 90);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_CHARMANDER);
    Free(testParty);
}

//// Other tests

TEST("Pokemon with no evolution do not evolve into anything with levelCeil == 100")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 100, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 30;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) == 100);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_SMEARGLE);
    Free(testParty);
}

// For reasons I'm unsure of, the party for this test is not generated in the order it's defined
// in `trainer_control.partt`, but it does generate in the same order each time, which is below
// and is inferred in the test.

// 0 evolved species: Charmander
// 1 evolved species: Geodude
// 2 evolved species: Hippopotas
// 3 evolved species: Ralts
// 4 evolved species: Smeargle
// 5 evolved species: Oddish

TEST("Test that a full party of six that all evolve differently scale and evolve as expected")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 70, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    SetCurrentDifficultyLevel(DIFFICULTY_NORMAL);
    u32 currTrainer = 31;
    struct Pokemon *testParty = Alloc(6 * sizeof(struct Pokemon));
    CreateNPCTrainerPartyFromTrainer(testParty, GetTrainerStructFromId(currTrainer), TRUE, BATTLE_TYPE_TRAINER);

    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) < 70);
    EXPECT(GetMonData(&testParty[0], MON_DATA_LEVEL) > 65);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) != SPECIES_CHARMELEON);
    EXPECT(GetMonData(&testParty[0], MON_DATA_SPECIES) == SPECIES_CHARIZARD);

    EXPECT(GetMonData(&testParty[1], MON_DATA_LEVEL) < 70);
    EXPECT(GetMonData(&testParty[1], MON_DATA_LEVEL) > 65);
    EXPECT(GetMonData(&testParty[1], MON_DATA_SPECIES) == SPECIES_GOLEM);

    EXPECT(GetMonData(&testParty[2], MON_DATA_LEVEL) < 70);
    EXPECT(GetMonData(&testParty[2], MON_DATA_LEVEL) > 65);
    EXPECT(GetMonData(&testParty[2], MON_DATA_SPECIES) == SPECIES_HIPPOWDON);

    EXPECT(GetMonData(&testParty[3], MON_DATA_LEVEL) < 70);
    EXPECT(GetMonData(&testParty[3], MON_DATA_LEVEL) > 65);
    EXPECT(GetMonData(&testParty[3], MON_DATA_SPECIES) != SPECIES_RALTS);
    EXPECT(GetMonData(&testParty[3], MON_DATA_SPECIES) != SPECIES_KIRLIA);
    EXPECT((GetMonData(&testParty[3], MON_DATA_SPECIES) == SPECIES_GARDEVOIR) || (GetMonData(&testParty[3], MON_DATA_SPECIES) == SPECIES_GALLADE));

    EXPECT(GetMonData(&testParty[4], MON_DATA_LEVEL) < 70);
    EXPECT(GetMonData(&testParty[4], MON_DATA_LEVEL) > 65);
    EXPECT(GetMonData(&testParty[4], MON_DATA_SPECIES) == SPECIES_SMEARGLE);

    EXPECT(GetMonData(&testParty[5], MON_DATA_LEVEL) < 70);
    EXPECT(GetMonData(&testParty[5], MON_DATA_LEVEL) > 65);
    EXPECT(GetMonData(&testParty[5], MON_DATA_SPECIES) != SPECIES_ODDISH);
    EXPECT(GetMonData(&testParty[5], MON_DATA_SPECIES) != SPECIES_GLOOM);
    EXPECT((GetMonData(&testParty[5], MON_DATA_SPECIES) == SPECIES_VILEPLUME) || (GetMonData(&testParty[5], MON_DATA_SPECIES) == SPECIES_BELLOSSOM));

    Free(testParty);
}
