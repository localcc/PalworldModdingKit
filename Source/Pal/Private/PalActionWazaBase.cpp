#include "PalActionWazaBase.h"

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

UPalActionWazaBase::UPalActionWazaBase() {
    this->WazaID = EPalWazaID::None;
    this->SoundPlayer = NULL;
    this->bApplyFullStomachCost = true;
}

