#include "PalBossBattleEventBase.h"
#include "Net/UnrealNetwork.h"

APalBossBattleEventBase::APalBossBattleEventBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->BossBattleSequencerInServer = NULL;
    this->bIsCombatStarted = false;
}

void APalBossBattleEventBase::Terminate() {
}

void APalBossBattleEventBase::SetBossBattleSequencer_ServerInternal(UPalBossBattleSequencer* BossBattleSequencer) {
}



void APalBossBattleEventBase::OnSpawnCharacter_Implementation(UPalIndividualCharacterHandle* SpawnHandle) {
}

void APalBossBattleEventBase::OnRep_SpawnCharacters(const TArray<TWeakObjectPtr<APalCharacter>>& OldSpawnCharacters) {
}




bool APalBossBattleEventBase::IsNearLocalPlayer() const {
    return false;
}

void APalBossBattleEventBase::Initialize() {
}

UPalBossBattleSequencer* APalBossBattleEventBase::GetBossBattleSequencer() const {
    return NULL;
}

void APalBossBattleEventBase::CombatStart() {
}

void APalBossBattleEventBase::CombatEnd(EPalBossBattleCombatResult Result) {
}

FVector APalBossBattleEventBase::CalcSpawnLocation(FVector Origin, FVector Dir, float Distance) const {
    return FVector{};
}

void APalBossBattleEventBase::ActivateCharacterList(const TArray<UPalIndividualCharacterHandle*>& IndividualHandleList, const TArray<FVector>& OffsetList) {
}


void APalBossBattleEventBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBossBattleEventBase, SpawnCharacters);
}


