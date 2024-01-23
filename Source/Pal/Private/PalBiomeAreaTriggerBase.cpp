#include "PalBiomeAreaTriggerBase.h"

void APalBiomeAreaTriggerBase::OnOverlap(AActor* OtherActor, EPalBiomeType BiomeType) {
}

void APalBiomeAreaTriggerBase::OnEndOverlap(AActor* OtherActor, EPalBiomeType BiomeType) {
}

EPalBiomeType APalBiomeAreaTriggerBase::GetBiomeType() const {
    return EPalBiomeType::Undefined;
}

APalBiomeAreaTriggerBase::APalBiomeAreaTriggerBase() {
    this->BindBiomeType = EPalBiomeType::Undefined;
}

