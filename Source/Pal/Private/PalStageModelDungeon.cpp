#include "PalStageModelDungeon.h"
#include "Net/UnrealNetwork.h"

UPalStageModelDungeon::UPalStageModelDungeon() {
    this->InstanceModel = NULL;
}

UPalDungeonInstanceModel* UPalStageModelDungeon::GetInstanceModel() const {
    return NULL;
}

void UPalStageModelDungeon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelDungeon, InstanceModel);
}


