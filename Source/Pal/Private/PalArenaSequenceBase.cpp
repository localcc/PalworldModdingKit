#include "PalArenaSequenceBase.h"

UPalArenaSequenceBase::UPalArenaSequenceBase() {
    this->bNoSync = false;
    this->bNotWaitClient = false;
    this->bBreakEndSequence = false;
}

void UPalArenaSequenceBase::TickSequence_Implementation(float DeltaTime) {
}

void UPalArenaSequenceBase::OnEndSequence_Implementation() {
}

void UPalArenaSequenceBase::OnBreakSequence_Implementation() {
}

void UPalArenaSequenceBase::OnBeginSequence_Implementation() {
}

EPalArenaSequencerOwnerType UPalArenaSequenceBase::GetOwnerType() const {
    return EPalArenaSequencerOwnerType::None;
}

UPalArenaSequencer* UPalArenaSequenceBase::GetOuterSequencer() const {
    return NULL;
}

UPalArenaInstanceModel* UPalArenaSequenceBase::GetInstanceModel() const {
    return NULL;
}

void UPalArenaSequenceBase::EndSequence() {
}


