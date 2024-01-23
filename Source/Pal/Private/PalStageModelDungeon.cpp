#include "PalStageModelDungeon.h"
#include "Net/UnrealNetwork.h"

UPalDungeonInstanceModel* UPalStageModelDungeon::GetInstanceModel() const {
    return NULL;
}

void UPalStageModelDungeon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelDungeon, InstanceModel);
}

UPalStageModelDungeon::UPalStageModelDungeon() {
    this->InstanceModel = NULL;
}

