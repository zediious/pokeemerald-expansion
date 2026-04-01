
struct TrainerMon *ScaleTrainerMons(struct Trainer tempTrainer, struct TrainerMon *scaledParty);
struct TrainerMon EvolveTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
struct TrainerMon EvolveBranchTrainerMon(const struct Evolution *evolutions, struct TrainerMon trainerMon, u8 levelCeil, u8 evolutionCount);
struct TrainerMon EvolveParentTrainerMon(const struct Evolution *evolutions, const struct Evolution *parentEvolutions, struct TrainerMon trainerMon, u32 evoIndex);
