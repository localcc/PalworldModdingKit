#include "PalFishingCatchBattle.h"

UPalFishingCatchBattle::UPalFishingCatchBattle() {
    this->ActionCharacter = NULL;
}

void UPalFishingCatchBattle::Tick_Implementation(float DeltaTime) {
}

void UPalFishingCatchBattle::SetFishPosX(float PosX) {
}


bool UPalFishingCatchBattle::IsStarted() {
    return false;
}

float UPalFishingCatchBattle::GetCurrentFishPosX() const {
    return 0.0f;
}

float UPalFishingCatchBattle::GetCurrentCatchAmount() const {
    return 0.0f;
}

float UPalFishingCatchBattle::GetCurrentBarPosX() const {
    return 0.0f;
}

float UPalFishingCatchBattle::GetBarSize() {
    return 0.0f;
}


