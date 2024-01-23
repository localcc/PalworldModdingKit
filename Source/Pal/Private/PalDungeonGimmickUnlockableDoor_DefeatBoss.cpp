#include "PalDungeonGimmickUnlockableDoor_DefeatBoss.h"
#include "Net/UnrealNetwork.h"

void APalDungeonGimmickUnlockableDoor_DefeatBoss::OnRep_BossState() {
}


void APalDungeonGimmickUnlockableDoor_DefeatBoss::OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel) {
}

void APalDungeonGimmickUnlockableDoor_DefeatBoss::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDungeonGimmickUnlockableDoor_DefeatBoss, BossState);
}

APalDungeonGimmickUnlockableDoor_DefeatBoss::APalDungeonGimmickUnlockableDoor_DefeatBoss() {
    this->BossState = EPalDungeonInstanceBossState::Spawned;
}

