#include "PalCapturedCage.h"

APalCapturedCage::APalCapturedCage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerClass = NULL;
    this->SpawnRange = 10000.00f;
    this->DespawnRange = 20000.00f;
    this->SpawnedPalLevel = 0;
    this->IsRequestedInteract = false;
    this->IsDisableInteractive = false;
    this->IsInSpawnedRange = false;
    this->SpawnedPalHandle = NULL;
}

void APalCapturedCage::SpawnPal(FName InPalID, int32 InPalLevel) {
}

void APalCapturedCage::SetOverrideKeyName(FName Key) {
}

void APalCapturedCage::SetDisableInteractive() {
}

void APalCapturedCage::RequestInteract(APalPlayerCharacter* Attacker) {
}

void APalCapturedCage::OnCreateHandle(FPalInstanceID ID) {
}

void APalCapturedCage::LotteryAndSpawnPal() {
}

APalCharacter* APalCapturedCage::GetSpawnedPal() {
    return NULL;
}




