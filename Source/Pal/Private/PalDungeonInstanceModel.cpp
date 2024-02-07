#include "PalDungeonInstanceModel.h"
#include "Net/UnrealNetwork.h"

UPalDungeonInstanceModel::UPalDungeonInstanceModel() {
    this->BossState = EPalDungeonInstanceBossState::Spawned;
    this->Level = 0;
    this->ReservedDataLayerAssetIndex = -1;
    this->ReservedDataLayerAsset = NULL;
}

void UPalDungeonInstanceModel::OnUpdateBossState() {
}

void UPalDungeonInstanceModel::OnSpawnedCharacter_ServerInternal(UPalIndividualCharacterHandle* IndividualHandle) {
}

void UPalDungeonInstanceModel::OnRep_DisappearTimeAt() {
}

void UPalDungeonInstanceModel::OnRep_BossState() {
}

void UPalDungeonInstanceModel::OnDeadBoss_ServerInternal(FPalDeadInfo DeadInfo) {
}

void UPalDungeonInstanceModel::OnChangeInstanceStatus() {
}

void UPalDungeonInstanceModel::OnCapturedBoss_ServerInternal(APalCharacter* Character, APalCharacter* Attacker) {
}

int32 UPalDungeonInstanceModel::GetLevel() const {
    return 0;
}

FName UPalDungeonInstanceModel::GetDungeonSpawnAreaId() const {
    return NAME_None;
}

FText UPalDungeonInstanceModel::GetDungeonNameText() const {
    return FText::GetEmpty();
}

FGameDateTime UPalDungeonInstanceModel::GetDisappearTimeAt() const {
    return FGameDateTime{};
}

EPalDungeonInstanceBossState UPalDungeonInstanceModel::GetBossState() const {
    return EPalDungeonInstanceBossState::Spawned;
}

float UPalDungeonInstanceModel::CalcRemainSecondsBy(const UObject* WorldContextObject, const FGameDateTime& TimeAt) {
    return 0.0f;
}

float UPalDungeonInstanceModel::CalcDisappearRemainSeconds(const UObject* WorldContextObject, const FGameDateTime& InDisappearTimeAt) {
    return 0.0f;
}

void UPalDungeonInstanceModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDungeonInstanceModel, DungeonInstanceId);
    DOREPLIFETIME(UPalDungeonInstanceModel, DungeonSpawnAreaId);
    DOREPLIFETIME(UPalDungeonInstanceModel, OverrideDungeonNameTextId);
    DOREPLIFETIME(UPalDungeonInstanceModel, RepFieldWarpPointLocation);
    DOREPLIFETIME(UPalDungeonInstanceModel, BossState);
    DOREPLIFETIME(UPalDungeonInstanceModel, DisappearTimeAt);
    DOREPLIFETIME(UPalDungeonInstanceModel, Level);
}


