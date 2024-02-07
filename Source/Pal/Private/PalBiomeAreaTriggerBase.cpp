#include "PalBiomeAreaTriggerBase.h"

APalBiomeAreaTriggerBase::APalBiomeAreaTriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BindBiomeType = EPalBiomeType::Undefined;
}

void APalBiomeAreaTriggerBase::OnOverlap(AActor* OtherActor, EPalBiomeType BiomeType) {
}

void APalBiomeAreaTriggerBase::OnEndOverlap(AActor* OtherActor, EPalBiomeType BiomeType) {
}

EPalBiomeType APalBiomeAreaTriggerBase::GetBiomeType() const {
    return EPalBiomeType::Undefined;
}


