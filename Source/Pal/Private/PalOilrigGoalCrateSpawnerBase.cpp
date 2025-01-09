#include "PalOilrigGoalCrateSpawnerBase.h"

APalOilrigGoalCrateSpawnerBase::APalOilrigGoalCrateSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrateClass = NULL;
    this->SpawnedCrate = NULL;
    this->OilrigType = EPalOilrigType::TypeC;
}

void APalOilrigGoalCrateSpawnerBase::OnDeadCombatHeli(FPalDeadInfo Info) {
}


