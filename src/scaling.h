extern const u16 ExcludeScalingTrainers[];
extern const u16 ExcludeScalingEvoTrainers[];
u8 ExcludeScalingTrainersCount(void);
u8 ExcludeScalingEvoTrainersCount(void);
struct TrainerMon *ScaleTrainerMons(u32 partySize, struct TrainerMon *scaledParty, bool32 evolveExcluded, bool32 alwaysCeiling);
void ScaleTrainerMon(struct TrainerMon *scaledMon, bool32 evolveExcluded, bool32 alwaysCeiling, u8 levelCeil);
struct TrainerMon EvolveTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
struct TrainerMon EvolveBranchTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
struct TrainerMon EvolveParentTrainerMon(const struct Evolution *evolutions, const struct Evolution *parentEvolutions, struct TrainerMon trainerMon, u32 evoIndex, u8 levelCeil);
