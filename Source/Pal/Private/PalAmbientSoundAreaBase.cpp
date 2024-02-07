#include "PalAmbientSoundAreaBase.h"

APalAmbientSoundAreaBase::APalAmbientSoundAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientPriority = 0;
    this->bIsOverlappedLocalPlayer = false;
}

void APalAmbientSoundAreaBase::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}

void APalAmbientSoundAreaBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}


FPalAmbientSoundAreaData APalAmbientSoundAreaBase::GetAmbientSoundAreaData() const {
    return FPalAmbientSoundAreaData{};
}


