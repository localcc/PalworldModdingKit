#include "PalActionWazaBase.h"

UPalActionWazaBase::UPalActionWazaBase() {
    this->WazaID = EPalWazaID::None;
    this->SoundPlayer = NULL;
    this->bApplyFullStomachCost = true;
}

void UPalActionWazaBase::StopAkSound() {
}

void UPalActionWazaBase::PlayAkSound(UAkAudioEvent* AudioEvent) {
}

EPalWazaID UPalActionWazaBase::GetWazaID() const {
    return EPalWazaID::None;
}

APalPlayerCharacter* UPalActionWazaBase::GetRiderPlayer() {
    return NULL;
}


