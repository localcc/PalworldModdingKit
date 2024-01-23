#include "PalAmbientSoundAreaBase.h"

void APalAmbientSoundAreaBase::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}

void APalAmbientSoundAreaBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}


FPalAmbientSoundAreaData APalAmbientSoundAreaBase::GetAmbientSoundAreaData() const {
    return FPalAmbientSoundAreaData{};
}

APalAmbientSoundAreaBase::APalAmbientSoundAreaBase() {
    this->AmbientPriority = 0;
    this->bIsOverlappedLocalPlayer = false;
}

