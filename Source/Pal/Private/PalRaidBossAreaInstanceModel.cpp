#include "PalRaidBossAreaInstanceModel.h"
#include "Net/UnrealNetwork.h"

UPalRaidBossAreaInstanceModel::UPalRaidBossAreaInstanceModel() {
    this->bRaidBossBattleStateFinishedStandby = false;
    this->bSurrenderRequested = false;
    this->ReservedDataLayerAsset = NULL;
    this->PhaseStateMachine = NULL;
}

void UPalRaidBossAreaInstanceModel::OnRep_StaticItemId() {
}

void UPalRaidBossAreaInstanceModel::OnRep_PhaseInfo() {
}

bool UPalRaidBossAreaInstanceModel::HasValidPhaseTime_ForClient() const {
    return false;
}

FGuid UPalRaidBossAreaInstanceModel::GetRaidBossAreaInstanceId() const {
    return FGuid{};
}

float UPalRaidBossAreaInstanceModel::GetCurrentPhaseRemainingTime() const {
    return 0.0f;
}

FPalRaidBossAreaPhaseInfo UPalRaidBossAreaInstanceModel::GetCurrentPhaseInfo() const {
    return FPalRaidBossAreaPhaseInfo{};
}

EPalRaidBossAreaPhase UPalRaidBossAreaInstanceModel::GetCurrentPhase() const {
    return EPalRaidBossAreaPhase::None;
}

void UPalRaidBossAreaInstanceModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalRaidBossAreaInstanceModel, RaidAreaBaseCampId);
    DOREPLIFETIME(UPalRaidBossAreaInstanceModel, StaticItemId);
    DOREPLIFETIME(UPalRaidBossAreaInstanceModel, PhaseInfo);
    DOREPLIFETIME(UPalRaidBossAreaInstanceModel, bRaidBossBattleStateFinishedStandby);
}


