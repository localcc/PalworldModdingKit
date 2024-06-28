#include "PalStageModelArena.h"
#include "Net/UnrealNetwork.h"

UPalStageModelArena::UPalStageModelArena() {
    this->InstanceModel = NULL;
}

UPalArenaInstanceModel* UPalStageModelArena::GetInstanceModel() const {
    return NULL;
}

void UPalStageModelArena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelArena, InstanceModel);
}


