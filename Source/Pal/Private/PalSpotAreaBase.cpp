#include "PalSpotAreaBase.h"

void APalSpotAreaBase::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}

void APalSpotAreaBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter) {
}

EPalAudioState APalSpotAreaBase::GetAudioState() const {
    return EPalAudioState::None;
}


APalSpotAreaBase::APalSpotAreaBase() {
    this->AudioState = EPalAudioState::None;
    this->bIsOverlappedLocalPlayer = false;
}

