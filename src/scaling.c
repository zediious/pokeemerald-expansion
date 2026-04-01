#include "global.h"
#include "data.h"
#include "debug.h"
#include "decompress.h"
#include "event_data.h"
#include "international_string_util.h"
#include "item.h"
#include "main.h"
#include "pokemon.h"
#include "random.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "trainer_pools.h"
#include "util.h"
#include "constants/items.h"
#include "constants/trainers.h"

static struct TrainerMon EvolveTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
static struct TrainerMon EvolveBranchTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
static struct TrainerMon EvolveParentTrainerMon(const struct Evolution *evolutions, const struct Evolution *parentEvolutions, struct TrainerMon trainerMon, u32 evoIndex, u8 levelCeil);

struct TrainerMon *ScaleTrainerMons(struct Trainer tempTrainer, struct TrainerMon *scaledParty, bool32 evolveExcluded)
{
     // Get player's highest level mon
    u8 levelCeil = 0;
    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        u8 monLevel = (u8) GetMonData(&gPlayerParty[i], MON_DATA_LEVEL);
        if (levelCeil < monLevel) {levelCeil = monLevel;}
    }

    // Don't scale if no player mon is at least level 10
    if (levelCeil >= 10)
    {
        for (u32 e = 0; e < tempTrainer.partySize; e++) 
        {   
            // Set level to (player mon max - [0-3])
            // Don't set if calced level is lower than set level
            u8 compareLevel = (levelCeil - (Random() % 4));
            if (scaledParty[e].lvl < compareLevel) {
                scaledParty[e].lvl = compareLevel;

                // Evolve pokemon if applicable

                // Don't evolve if evolveExcluded was passed TRUE
                if (evolveExcluded) {continue;}

                // Don't evolve if Pokemon has a held Everstone or Eviolite
                if (scaledParty[e].heldItem == ITEM_EVIOLITE || scaledParty[e].heldItem == ITEM_EVERSTONE) {continue;}

                const struct Evolution *evolutions = GetSpeciesEvolutions(scaledParty[e].species);
                u8 evolutionCount = GetSpeciesEvolutionCount(scaledParty[e].species);
                if (evolutions == NULL) {continue;}

                scaledParty[e] = EvolveTrainerMon(evolutions, scaledParty[e], levelCeil, evolutionCount);
            }
        }
    }

    return scaledParty;
}

struct TrainerMon EvolveTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount)
{
    // If mon has more than one evolution (i.e Wurmple), randomize as evenly as possible between each
    // i.e Wurmple, Tyrogue, Eevee, Snorunt, etc

    // Continue down the chain and return the most-evolved mon possible given criteria
    if (evolutionCount > 1) {
        trainerMon = EvolveBranchTrainerMon(evolutions, trainerMon, levelCeil, evolutionCount);
        return trainerMon;
    }
    
    // No divergent evolution
    for (u32 j = 0; evolutions[j].method != EVOLUTIONS_END; j++) {
        // Evolve to a third evolution if applicable
        const struct Evolution *parentEvolutions = GetSpeciesEvolutions(evolutions[j].targetSpecies);
        if (parentEvolutions != NULL) {
            trainerMon = EvolveParentTrainerMon(evolutions, parentEvolutions, trainerMon, j, levelCeil);
            return trainerMon;
        }

        // The below are reached if level criteria for third evolutions is not met
        // or there is no third evolution

        // Always evolve level-based evo if at or above level
        if ((evolutions[j].method == EVO_LEVEL) && (evolutions[j].param <= trainerMon.lvl)) {
            trainerMon.species = evolutions[j].targetSpecies;
            return trainerMon;
        }

        // If not a level-based evo, evolve the Pokemon on 50% chance if the
        // player's level ceiling is >= 20.
        if ((evolutions[j].method != EVO_NONE) && (evolutions[j].method != EVO_LEVEL)) {

            if (((Random() % 2) == 0) && (levelCeil >= 20)) {
                trainerMon.species = evolutions[j].targetSpecies;
                return trainerMon;
            } else {
                return trainerMon;
            }
        }
    }

    return trainerMon;
}

struct TrainerMon EvolveBranchTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount)
{
    // If mon has more than one evolution, randomize as evenly as possible between each
    // i.e Wurmple, Tyrogue, Eevee, Snorunt, Cosmoem, Applin etc

    // Then, continue down the chain

    // Handle Nincada -> [Ninjask,Shedinja]
    if (trainerMon.species == SPECIES_NINCADA) {
        if (trainerMon.lvl >= 20) {
            if ((Random() % 2) == 0) {
                trainerMon.species = SPECIES_NINJASK;
            } else {
                trainerMon.species = SPECIES_SHEDINJA;
            }
            
            return trainerMon;
        }
    }

    struct Evolution chosenEvo = evolutions[(Random() % (evolutionCount))];
    switch (chosenEvo.method) {
        default: // 50% chance to evolve, unless player's highest mon is >= lvl 30. Always evolve then.
                 // However, don't attempt to evolve if the player is <= lvl 20
                 // For instance, we don't want a lvl 12 Froslass, but that could make sense at lvl 20
            if ((levelCeil >= 30))
            {
                trainerMon.species = chosenEvo.targetSpecies;
                return trainerMon;
            }
            else
            {
                if (((Random() % 2) == 0) && (levelCeil >= 20)) {
                    trainerMon.species = chosenEvo.targetSpecies;
                    return trainerMon;
                } else {
                    return trainerMon;
                }
            }
        case EVO_LEVEL: // Evolve if at or beyond evo lvl param, to third evo if applicable
            const struct Evolution *evolutions = GetSpeciesEvolutions(chosenEvo.targetSpecies);
            if (evolutions != NULL) {
                // Recurse to evolve the newly-evolved mon
                trainerMon.species = chosenEvo.targetSpecies;
                evolutionCount = GetSpeciesEvolutionCount(chosenEvo.targetSpecies);
                trainerMon = EvolveTrainerMon(evolutions, trainerMon, levelCeil, evolutionCount);
                return trainerMon;
            } else {
                // There is no further evolution after the chosen divergent mon
                if ((chosenEvo.param <= trainerMon.lvl)) {
                    trainerMon.species = chosenEvo.targetSpecies;
                    return trainerMon;
                }
            }
            
        case EVO_NONE:
            return trainerMon;
            
    }
}

struct TrainerMon EvolveParentTrainerMon(const struct Evolution *evolutions, const struct Evolution *parentEvolutions, struct TrainerMon trainerMon, u32 evoIndex, u8 levelCeil)
{
    // If a mon has a highest evo that is by level,but in between has evos that are not level-based
    // always evolve to the highest evo that is by level. i.e, Azurill -> Marill -> Azumarill.
    // If an Azurill is defined, and player comes with mon level >= 18, it wil always be Azumarill.
    // Only if player comes before level 18 will they see 50% Marill/Azurill.
    // This assumes only three-stage evolutions, not four.
    for (u32 p = 0; parentEvolutions[p].method != EVOLUTIONS_END; p++) {
        // if original mon next evo is not lvl based but parent mon evo is
        // set the species to the final evolution if we meet or exceed lvl param
        // Meaning if the original mon has a lvl-based evo next up, we use that
        if ((evolutions[evoIndex].method != EVO_NONE)
        &&  (evolutions[evoIndex].method != EVO_LEVEL)
        &&  (parentEvolutions[p].method == EVO_LEVEL))
        {
            if ((parentEvolutions[p].param <= trainerMon.lvl)) {
                trainerMon.species = parentEvolutions[p].targetSpecies;
                return trainerMon;
            }
        }

        // If the original mon's next evo is lvl based, but the parent mon evo
        // is NOT level based, set the species to the middle evo is the player's
        // level ceiling is <= 40. Otherwise, use the final evo.
        // Example: Geodude -> Graveler -> Golem
        if ((parentEvolutions[p].method != EVO_NONE)
        &&  (parentEvolutions[p].method != EVO_LEVEL)
        &&  (evolutions[evoIndex].method == EVO_LEVEL))
        {
            if ((parentEvolutions[p].param <= trainerMon.lvl) && (levelCeil >= 40)) { // Use the 3rd non-level based evo
                trainerMon.species = parentEvolutions[p].targetSpecies;
                return trainerMon;
            }
            else if ((evolutions[evoIndex].param <= trainerMon.lvl)) { // Use the 2nd level-based evo
                trainerMon.species = evolutions[evoIndex].targetSpecies;
                return trainerMon;
            }
        }

        // If the Pokemon has a second and third evolution that is not level based, randomize between the
        // three potential Pokemon with a weight that has a logarithmic curve away from final evo
        else if ((evolutions[evoIndex].method != EVO_NONE)
        &&       (evolutions[evoIndex].method != EVO_LEVEL)
        &&       (parentEvolutions[p].method != EVO_NONE)
        &&       (parentEvolutions[p].method != EVO_LEVEL))
        {   
            static const u8 sThreeNonLvlEvoWeights[] = { 8, 7, 5 };
            u8 evoResult = RandomWeightedIndex((u8 *)sThreeNonLvlEvoWeights, ARRAY_COUNT(sThreeNonLvlEvoWeights));
            switch (evoResult) {
                case 5:
                    return trainerMon; // No evolution
                case 7: 
                    trainerMon.species = evolutions[evoIndex].targetSpecies; // Evo to next from original mon
                    return trainerMon;
                case 8:
                    trainerMon.species = parentEvolutions[p].targetSpecies; // Evo to third form
                    return trainerMon;
            }
        }
        // If all three Pokemon in evolution line are level based, jump to third evo if we meet lvl param criteria
        else if ((evolutions[evoIndex].method == EVO_LEVEL)
        &&       (parentEvolutions[p].method == EVO_LEVEL))
        {
            if ((parentEvolutions[p].param <= trainerMon.lvl)) // Evolve to the third form
            {
                trainerMon.species = parentEvolutions[p].targetSpecies;
                return trainerMon;
            }
            else if ((evolutions[evoIndex].param <= trainerMon.lvl)) // Evolve to the second form
            {
                trainerMon.species = evolutions[evoIndex].targetSpecies;
                return trainerMon;
            }
        }
    }

    // There were no evolutions
    return trainerMon;
}