#include "PalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner.h"
#include "Net/UnrealNetwork.h"

APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefeatedCharacterNum = -1;
    this->TargetCharacterNum = -1;
    this->SpawnedCharacterState = EPalDungeonGimmickSpawnedCharacterState::Spawned;
}

void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::OnSpawnedEnemySpawner_ServerInternal(UPalDungeonInstanceModel* InstanceModel, APalNPCSpawnerBase* EnemySpawner) {
}

void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::OnRep_SpawnedCharacterState(const EPalDungeonGimmickSpawnedCharacterState OldValue) {
}

void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::OnEnterCharacterToSpawnerGroup_ServerInternal(UPalIndividualCharacterHandle* IndividualHandle) {
}

void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::OnDeadCharacter_ServerInternal(FPalDeadInfo DeadInfo) {
}

void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::OnCreatedEnemySpawnerGroup_ServerInternal(APalNPCSpawnerBase* EnemySpawner) {
}


void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::OnCapturedCharacter_ServerInternal(APalCharacter* Character, APalCharacter* Attacker) {
}

void APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner, SpawnedCharacterState);
}


