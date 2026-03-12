#include "constants/abilities.h"
#include "constants/teaching_types.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },
    [SPECIES_ORANGURU_MEGA] =
    {
        .baseHP        = 110,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 145,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = 255,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MINDBENDING, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Oranguru"),
        .cryId = CRY_MEGA_ORANGURU,
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sOranguruLevelUpLearnset,
        .teachableLearnset = sOranguruTeachableLearnset,
        .eggMoveLearnset = sOranguruEggMoveLearnset,
        .frontPic = gMonFrontPic_MegaOranguru,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MegaOranguru,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_MegaOranguru,
        .iconSprite = gMonIcon_MegaOranguru,
        .shinyPalette = gMonShinyPalette_Oranguru,
        .formChangeTable = sOranguruFormChangeTable,
        .formSpeciesIdTable = sOranguruFormSpeciesIdTable,
        FOOTPRINT(Oranguru)
    },
    [SPECIES_PASSIMIAN_MEGA] =
    {
        .baseHP        = 110,
        .baseAttack    = 145,
        .baseDefense   = 100,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 255,
        .evYield_Attack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUSHDOWN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Passimian"),
        .cryId = CRY_MEGA_PASSIMIAN,
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPassimianLevelUpLearnset,
        .teachableLearnset = sPassimianTeachableLearnset,
        .eggMoveLearnset = sPassimianEggMoveLearnset,
        .frontPic = gMonFrontPic_MegaPassimian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MegaPassimian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_MegaPassimian,
        .iconSprite = gMonIcon_MegaPassimian,
        .shinyPalette = gMonShinyPalette_Passimian,
        .formChangeTable = sPassimianFormChangeTable,
        .formSpeciesIdTable = sPassimianFormSpeciesIdTable,
        FOOTPRINT(Passimian)
    },
    [SPECIES_SIMISEAR_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 90,
        .baseSpeed     = 140,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = 255,
        .evYield_Attack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SCORCHING_POWER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Simisear"),
        .cryId = CRY_MEGA_SIMISEAR,
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSimisearLevelUpLearnset,
        .teachableLearnset = sSimisearTeachableLearnset,
        .frontPic = gMonFrontPic_MegaSimisear,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MegaSimisear,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_MegaSimisear,
        .iconSprite = gMonIcon_MegaSimisear,
        .shinyPalette = gMonShinyPalette_Simisear,
        .formChangeTable = sSimisearFormChangeTable,
        .formSpeciesIdTable = sSimisearFormSpeciesIdTable,
        FOOTPRINT(Simisear)
    },
    [SPECIES_SIMISAGE_MEGA] =
    {
        .baseHP        = 85,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 105,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DARK),
        .catchRate = 75,
        .expYield = 255,
        .evYield_Attack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PHOTOSYNTHESIS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Simisage"),
        .cryId = CRY_MEGA_SIMISAGE,
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSimisageLevelUpLearnset,
        .teachableLearnset = sSimisageTeachableLearnset,
        .frontPic = gMonFrontPic_MegaSimisage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MegaSimisage,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_MegaSimisage,
        .iconSprite = gMonIcon_MegaSimisage,
        .shinyPalette = gMonShinyPalette_Simisage,
        .formChangeTable = sSimisageFormChangeTable,
        .formSpeciesIdTable = sSimisageFormSpeciesIdTable,
        FOOTPRINT(Simisage)
    },
    [SPECIES_SIMIPOUR_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 115,
        .baseSpAttack  = 135,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = 255,
        .evYield_Speed  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FROZEN_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Simipour"),
        .cryId = CRY_MEGA_SIMIPOUR,
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSimipourLevelUpLearnset,
        .teachableLearnset = sSimipourTeachableLearnset,
        .frontPic = gMonFrontPic_MegaSimipour,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MegaSimipour,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_MegaSimipour,
        .iconSprite = gMonIcon_MegaSimipour,
        .shinyPalette = gMonShinyPalette_Simipour,
        .formChangeTable = sSimipourFormChangeTable,
        .formSpeciesIdTable = sSimipourFormSpeciesIdTable,
        FOOTPRINT(Simipour)
    },
    [SPECIES_INNAPE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 42,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIBERO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Innape"),
        .cryId = CRY_INNAPE,
        .natDexNum = NATIONAL_DEX_INNAPE,
        .categoryName = _("Scuffle"),
        .height = 8,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Rarely seen, this Pokemon is the precursor\n"
            "to both Oranguru and Passimian. While\n"
            "growing, they are highly protected, and kept\n"
            "secret from others."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Innape,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_SLOW,
        .backPic = gMonBackPic_Innape,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Innape,
        .shinyPalette = gMonShinyPalette_Innape,
        .iconSprite = gMonIcon_Innape,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Innape)
        OVERWORLD(
            sPicTable_Tyrogue,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrogue,
            gShinyOverworldPalette_Tyrogue
        )
        .levelUpLearnset = sInnapeLevelUpLearnset,
        .teachableLearnset = sInnapeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_PASSIMIAN, CONDITIONS({IF_ATK_GT_SPATK})},
                                {EVO_LEVEL, 22, SPECIES_ORANGURU, CONDITIONS({IF_SPATK_GT_ATK})}),
    },
};

const struct EggData gEggDatas[EGG_ID_COUNT] =
{
#include "egg_data.h"
};
