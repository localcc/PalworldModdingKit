#include "PalStageModelRaidBossArea.h"
#include "Net/UnrealNetwork.h"

UPalStageModelRaidBossArea::UPalStageModelRaidBossArea() {
    this->InstanceModel = NULL;
}

void UPalStageModelRaidBossArea::OnRep_InstanceModel() {
}

UPalRaidBossAreaInstanceModel* UPalStageModelRaidBossArea::GetInstanceModel() const {
    return NULL;
}

void UPalStageModelRaidBossArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelRaidBossArea, InstanceModel);
}


