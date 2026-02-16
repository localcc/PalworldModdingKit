#include "PalUIMapObjectRaidBossAreaStatusModel.h"

UPalUIMapObjectRaidBossAreaStatusModel::UPalUIMapObjectRaidBossAreaStatusModel() {
}

void UPalUIMapObjectRaidBossAreaStatusModel::SetupOnReadyInstanceModel(UPalRaidBossAreaInstanceModel* InstanceModel) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::Setup(const FPalStageInstanceId& StageInstanceId) {
}

void UPalUIMapObjectRaidBossAreaStatusModel::OnInstanceModelPhaseChanged(UPalRaidBossAreaInstanceModel* InstanceModel) {
}

bool UPalUIMapObjectRaidBossAreaStatusModel::IsRaidAreaActive() const {
    return false;
}

bool UPalUIMapObjectRaidBossAreaStatusModel::IsExistBoundInstanceModel() const {
    return false;
}

bool UPalUIMapObjectRaidBossAreaStatusModel::HasValidPhaseTime() const {
    return false;
}

FName UPalUIMapObjectRaidBossAreaStatusModel::GetRaidBossStaticItemId() const {
    return NAME_None;
}

float UPalUIMapObjectRaidBossAreaStatusModel::GetPhaseRemainingTime() const {
    return 0.0f;
}

EPalRaidBossAreaPhase UPalUIMapObjectRaidBossAreaStatusModel::GetCurrentPhase() const {
    return EPalRaidBossAreaPhase::None;
}

void UPalUIMapObjectRaidBossAreaStatusModel::Dispose() {
}

bool UPalUIMapObjectRaidBossAreaStatusModel::CanJoinRaidArea() const {
    return false;
}


