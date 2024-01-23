#include "PalStageModelBase.h"
#include "Net/UnrealNetwork.h"

void UPalStageModelBase::OnCompleteLoadStage_ServerInternal(UPalStageModelBase* TargetStageModel) {
}

void UPalStageModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelBase, InstanceId);
    DOREPLIFETIME(UPalStageModelBase, PlayerInfos);
}

UPalStageModelBase::UPalStageModelBase() {
}

