#include "global.h"
#include "test/test.h"
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

// ---------

//// Test EVO_LEVEL -> !EVO_LEVEL lines such as Geodude -> Graveler -> Golem
TEST("CreateNPCTrainerPartyForTrainer evolves (EVO_LEVEL -> ! EVO_LEVEL) type evolution to 3rd stage")
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

TEST("CreateNPCTrainerPartyForTrainer evolves (EVO_LEVEL -> ! EVO_LEVEL) type evolution lines to 2nd stage")
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

TEST("CreateNPCTrainerPartyForTrainer does not evolve (EVO_LEVEL -> ! EVO_LEVEL) type evolution if level not met for 2nd stage")
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
TEST("CreateNPCTrainerPartyForTrainer evolves (! EVO_LEVEL -> EVO_LEVEL) type evolution to 3rd stage")
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

TEST("CreateNPCTrainerPartyForTrainer selects 1st or 2nd stage in (! EVO_LEVEL -> EVO_LEVEL) type evolution if not reaching 3rd stage")
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
TEST("CreateNPCTrainerPartyForTrainer evolves (EVO_LEVEL -> EVO_LEVEL) type evolution to 3rd stage")
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

TEST("CreateNPCTrainerPartyForTrainer evolves (EVO_LEVEL -> EVO_LEVEL) type evolution to 2nd stage")
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

TEST("CreateNPCTrainerPartyForTrainer does not evolve (EVO_LEVEL -> EVO_LEVEL) type evolution if level not met for 2nd stage")
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
TEST("CreateNPCTrainerPartyForTrainer evolves 2 stage EVO_LEVEL type evolution to 2rd stage")
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

TEST("CreateNPCTrainerPartyForTrainer does not evolve 2 stage EVO_LEVEL type evolution if level not met for 2nd stage")
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
TEST("CreateNPCTrainerPartyForTrainer selects either stage in two stage ! EVO_LEVEL type evolution")
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
TEST("CreateNPCTrainerPartyForTrainer selects Eevee and evos when evolving")
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

TEST("CreateNPCTrainerPartyForTrainer selects Tyrogue and evos when evolving")
{
    struct Pokemon playerMon;
    CreateMon(&playerMon, SPECIES_AIPOM, 20, 0, OTID_STRUCT_PRESET(0));
    gPlayerParty[0] = playerMon;

    u32 currTrainer = 21;
    u32 loopCounter = 0;
    u32 choiceOneCounter = 0;
    u32 choiceTwoCounter = 0;
    u32 choiceThreeCounter = 0;
    u32 choiceFourCounter = 0;
    
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
                choiceFourCounter += 1;
                break;
            default:
                EXPECT(1 > 2); // We shouldn't be here
        }

        if ((choiceOneCounter > 0)   && (choiceTwoCounter > 0)
        &&  (choiceThreeCounter > 0) && (choiceFourCounter > 0))
        {break;}

        loopCounter += 1;
    }

    EXPECT(choiceOneCounter > 0);
    EXPECT(choiceTwoCounter > 0);
    EXPECT(choiceThreeCounter > 0);
    EXPECT(choiceFourCounter > 0);

    Free(testParty);
}

//// Test three stages evos that have a divergence in their !EVO_LEVEL final evo, like Oddish and Ralts lines
TEST("CreateNPCTrainerPartyForTrainer evolves to either ! EVO_LEVEL 3rd evo in 3 stage evo where 3rd evo is a divergent")
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

//// Test three stage evos where all are !EVO_LEVEL, such as Porygon -> Porygon2 -> Porygon-Z
TEST("CreateNPCTrainerPartyForTrainer selects either ! EVO_LEVEL stage or does not evolve when all stages of 3 stage evo are ! EVO_LEVEL")
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

//// This is a test for Nincada, evolves to either Nijask or Shedinja 50% of the time
TEST("CreateNPCTrainerPartyForTrainer evolves Shedinja or Ninjask from Nincada when player level ceiling >= 20")
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

TEST("CreateNPCTrainerPartyForTrainer does not evolve Shedinja or Ninjask from Nincada when player level ceiling <= 20")
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

TEST("CreateNPCTrainerPartyForTrainer will never scale trainer mon level to player ceiling if more than one mon is in trainer party")
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

TEST("CreatENPCTrainerPartyForTrainer will always scale trainer mon level to player ceiling if trainer only has one mon in party")
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
