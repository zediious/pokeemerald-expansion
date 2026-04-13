#include "global.h"
#include "event_data.h"
#include "item.h"
#include "random.h"
#include "script.h"
#include "constants/item.h"

struct PrizeBundle
{
    u16 prizeItem;
    u8 amount;
};

static const struct PrizeBundle TierOnePrizes[] = 
{
    {ITEM_TINY_MUSHROOM, 1},
    {ITEM_MUSCLE_FEATHER, 5},
    {ITEM_HEALTH_FEATHER, 5},
    {ITEM_RESIST_FEATHER, 5},
    {ITEM_GENIUS_FEATHER, 5},
    {ITEM_CLEVER_FEATHER, 5},
    {ITEM_SWIFT_FEATHER, 5},
    {ITEM_ETHER, 1},
    {ITEM_LIGHT_CLAY, 1}
};

static const struct PrizeBundle TierTwoPrizes[] = 
{
    {ITEM_NUGGET, 1},
    {ITEM_MUSCLE_FEATHER, 10},
    {ITEM_HEALTH_FEATHER, 10},
    {ITEM_RESIST_FEATHER, 10},
    {ITEM_GENIUS_FEATHER, 10},
    {ITEM_CLEVER_FEATHER, 10},
    {ITEM_SWIFT_FEATHER, 10},
    {ITEM_PP_UP, 1},
    {ITEM_MUSCLE_BAND, 1},
};

static const struct PrizeBundle TierThreePrizes[] = 
{
    {ITEM_BALM_MUSHROOM, 1},
    {ITEM_PROTEIN, 5},
    {ITEM_CALCIUM, 5},
    {ITEM_IRON, 5},
    {ITEM_HP_UP, 5},
    {ITEM_ZINC, 5},
    {ITEM_CARBOS, 5},
    {ITEM_PP_MAX, 1},
    {ITEM_ASSAULT_VEST, 1},
};

void GivePlayerRestaurantPrize()
{
    u8 restaurantState = VarGet(VAR_RESTARAUNT_STATE);
    u8 randomResult;
    switch (restaurantState)
    {
        case 23: // Tier 1 Prize
            randomResult = Random() % ARRAY_COUNT(TierOnePrizes);
            AddBagItem(TierOnePrizes[randomResult].prizeItem, TierOnePrizes[randomResult].amount);
            VarSet(VAR_TEMP_1, TierOnePrizes[randomResult].prizeItem);
            VarSet(VAR_TEMP_2, TierOnePrizes[randomResult].amount);
            break;
        case 33: // Tier 2 Prize
            randomResult = Random() % ARRAY_COUNT(TierTwoPrizes);
            AddBagItem(TierTwoPrizes[randomResult].prizeItem, TierTwoPrizes[randomResult].amount);
            VarSet(VAR_TEMP_1, TierTwoPrizes[randomResult].prizeItem);
            VarSet(VAR_TEMP_2, TierTwoPrizes[randomResult].amount);
            break;
        case 43: // Tier 3 Prize
            randomResult = Random() % ARRAY_COUNT(TierThreePrizes);
            AddBagItem(TierThreePrizes[randomResult].prizeItem, TierThreePrizes[randomResult].amount);
            VarSet(VAR_TEMP_1, TierThreePrizes[randomResult].prizeItem);
            VarSet(VAR_TEMP_2, TierThreePrizes[randomResult].amount);
            break;
    }
}
