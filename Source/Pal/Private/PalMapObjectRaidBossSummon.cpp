#include "PalMapObjectRaidBossSummon.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectRaidBossSummon::UPalMapObjectRaidBossSummon() {
    this->bStartedSummonPerformanceInClient = false;
    this->SelectItemMenuUIClass = NULL;
    this->SelectBattleTypeMenuUIClass = NULL;
}

void UPalMapObjectRaidBossSummon::RequestSummonRaidBoss_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectRaidBossSummon::RequestEnterNewRaidArea_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectRaidBossSummon::RequestEnterExistingRaidArea_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectRaidBossSummon::OnStoneSelectionFromUI(UPalUIMapObjectRaidBossSummonSelectionModel* UIModel) {
}

void UPalMapObjectRaidBossSummon::OnSelectedBattleTypeResult(UPalUIMapObjectRaidBossSummonSelectionModel* UIModel) {
}

void UPalMapObjectRaidBossSummon::OnRep_TargetStageInstanceId() {
}

void UPalMapObjectRaidBossSummon::OnReceiveEnterRaidBossAreaResult(const bool bResult) {
}

void UPalMapObjectRaidBossSummon::OnReceiveConfirmStartRaidBossBattleResult(const bool bResult, UPalDialogParameterBase* Parameter) {
}

void UPalMapObjectRaidBossSummon::OnReceiveConfirmStartRaidBossAreaBattleResult(const bool bResult, UPalDialogParameterBase* Parameter) {
}

void UPalMapObjectRaidBossSummon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectRaidBossSummon, TargetStageInstanceId);
}


