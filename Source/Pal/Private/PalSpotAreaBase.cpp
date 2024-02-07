#include "PalSpotAreaBase.h"

APalSpotAreaBase::APalSpotAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioState = EPalAudioState::None;
    this->bIsOverlappedLocalPlayer = false;
}

void APalSpotAreaBase::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}

void APalSpotAreaBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}

EPalAudioState APalSpotAreaBase::GetAudioState() const {
    return EPalAudioState::None;
}



