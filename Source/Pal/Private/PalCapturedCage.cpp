#include "PalCapturedCage.h"
#include "Net/UnrealNetwork.h"

APalCapturedCage::APalCapturedCage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControllerClass = NULL;
    this->SpawnRange = 10000.00f;
    this->DespawnRange = 20000.00f;
    this->SpawnedPalLevel = 0;
    this->bIsDoorOpened = false;
    this->IsInSpawnedRange = false;
    this->bDisabledLottery = false;
    this->SpawnedPalHandle = NULL;
}

void APalCapturedCage::SpawnPal(FName InPalID, int32 InPalLevel) {
}

void APalCapturedCage::SetOverrideKeyName(FName Key) {
}

void APalCapturedCage::SetDoorOpened(bool bIsOpend) {
}


void APalCapturedCage::ResetCage_ToAll_Implementation() {
}

void APalCapturedCage::OpenDoor_ToAll_Implementation() {
}

void APalCapturedCage::OnCreateHandle(FPalInstanceID ID) {
}

void APalCapturedCage::LotteryAndSpawnPal() {
}

APalCharacter* APalCapturedCage::GetSpawnedPal() {
    return NULL;
}



void APalCapturedCage::CapturePal_ServerInternal(APalPlayerCharacter* Player) {
}

void APalCapturedCage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalCapturedCage, bIsDoorOpened);
}


