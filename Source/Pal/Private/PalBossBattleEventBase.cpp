#include "PalBossBattleEventBase.h"

UPalBossBattleEventBase::UPalBossBattleEventBase() {
    this->bIsCombatStarted = false;
}

void UPalBossBattleEventBase::Terminate() {
}



void UPalBossBattleEventBase::OnSpawnCharacter_Implementation(UPalIndividualCharacterHandle* SpawnHandle) {
}




void UPalBossBattleEventBase::Initialize() {
}

UPalBossBattleSequencer* UPalBossBattleEventBase::GetBossBattleSequencer() const {
    return NULL;
}

void UPalBossBattleEventBase::CombatStart() {
}

void UPalBossBattleEventBase::CombatEnd(EPalBossBattleCombatResult Result) {
}

void UPalBossBattleEventBase::ActivateCharacterList(const TArray<UPalIndividualCharacterHandle*>& IndividualHandleList, const TArray<FVector>& OffsetList) {
}



