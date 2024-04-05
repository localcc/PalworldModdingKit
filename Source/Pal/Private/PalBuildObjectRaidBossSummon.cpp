#include "PalBuildObjectRaidBossSummon.h"
#include "PalMapObjectRaidBossSummon.h"

APalBuildObjectRaidBossSummon::APalBuildObjectRaidBossSummon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConcreteModelClass = UPalMapObjectRaidBossSummon::StaticClass();
}

void APalBuildObjectRaidBossSummon::StartPerform() {
}

void APalBuildObjectRaidBossSummon::OnPerformComplete() {
}



