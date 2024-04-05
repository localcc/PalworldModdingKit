#include "PalArenaTestManager.h"

APalArenaTestManager::APalArenaTestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Player1 = NULL;
    this->Player2 = NULL;
}

void APalArenaTestManager::ToggleRandomPartyMode() {
}

void APalArenaTestManager::Start() {
}

void APalArenaTestManager::Setup() {
}

void APalArenaTestManager::SendClientStart() {
}

void APalArenaTestManager::SendClientSetup() {
}

void APalArenaTestManager::RidePlayer(APalPlayerState* PlayerState, int32 RideIndex) {
}

void APalArenaTestManager::PlayBGM(EPalAudioStateGroup StateGroup) {
}

void APalArenaTestManager::OtomoInitializeTimer_Server() {
}

void APalArenaTestManager::OtomoInitializeTimer_Client() {
}

void APalArenaTestManager::LoadWaza_Client() {
}

bool APalArenaTestManager::IsOtomoActorInitialized(const APlayerState* PlayerState) const {
    return false;
}


TArray<FTransform> APalArenaTestManager::GetPalSpawnTransform(EPalArenaPlayer ArenaPlayer) const {
    return TArray<FTransform>();
}

UPalOtomoHolderComponentBase* APalArenaTestManager::GetOtomoHolder(const APlayerState* TargetPlayerState) const {
    return NULL;
}

void APalArenaTestManager::GetOffAllPlayer() {
}


void APalArenaTestManager::DelayRidePlayer() {
}

TArray<FPalDebugOtomoPalInfo> APalArenaTestManager::CreateRandomParty() const {
    return TArray<FPalDebugOtomoPalInfo>();
}



