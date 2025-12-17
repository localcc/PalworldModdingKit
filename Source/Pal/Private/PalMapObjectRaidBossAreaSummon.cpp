#include "PalMapObjectRaidBossAreaSummon.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectRaidBossAreaSummon::UPalMapObjectRaidBossAreaSummon() {
}

void UPalMapObjectRaidBossAreaSummon::RequestStartRaidBoss_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectRaidBossAreaSummon::OnRep_TargetStageInstanceId() {
}

void UPalMapObjectRaidBossAreaSummon::OnReceiveSummonConfirmationResult(const bool bResult) {
}

void UPalMapObjectRaidBossAreaSummon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectRaidBossAreaSummon, TargetStageInstanceId);
}


