#include "PalArenaSequenceBase.h"

UPalArenaSequenceBase::UPalArenaSequenceBase() {
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

bool UPalArenaSequenceBase::IsOutsiderSequencer() const {
    return false;
}

UPalArenaSequencer* UPalArenaSequenceBase::GetOuterSequencer() const {
    return NULL;
}

UPalArenaInstanceModel* UPalArenaSequenceBase::GetInstanceModel() const {
    return NULL;
}

void UPalArenaSequenceBase::EndSequence() {
}


