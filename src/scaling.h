
struct TrainerMon *ScaleTrainerMons(u32 partySize, struct TrainerMon *scaledParty, bool32 evolveExcluded);
struct TrainerMon EvolveTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
struct TrainerMon EvolveBranchTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
struct TrainerMon EvolveParentTrainerMon(const struct Evolution *evolutions, const struct Evolution *parentEvolutions, struct TrainerMon trainerMon, u32 evoIndex, u8 levelCeil);
